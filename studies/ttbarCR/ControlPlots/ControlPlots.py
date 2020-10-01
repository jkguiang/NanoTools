# importing packages
import matplotlib.pyplot as plt
from matplotlib.ticker import AutoMinorLocator
import numpy as np
import pandas as pd
import uproot
from yahist import Hist1D
from yahist.utils import plot_stack
import os
from os import listdir
from os.path import isfile, join
from tqdm import tqdm
import json

# matplotlob params
params = {'legend.fontsize': 'x-large',
          'figure.figsize': (15, 5),
          'axes.labelsize': 'x-large',
          'axes.titlesize':'x-large',
          'xtick.labelsize':'x-large',
          'ytick.labelsize':'x-large'}
plt.rcParams.update(params)

class ControlPlot:
    def __init__(self, name, baby_ver):
        self.path_to_name = f"/hadoop/cms/store/user/jguiang/ttbarCR/babies/{name}/"
        df_list = []
        dirs = [f.path for f in os.scandir(self.path_to_name) if f.is_dir() and baby_ver in f.path]
        for i in tqdm(range(len(dirs)),desc='Appending..'):
            try:
                n_events = uproot.open(dirs[i] + '/baby.root').get("n_events").allvalues[1]
                df = uproot.open(dirs[i] + '/baby.root').get("tree").pandas.df(flatten=False)
                with open("cross-sections.json") as f:
                    xsec_dict = json.load(f)
                f.close()
                for event, xsec in xsec_dict.items():
                    if (event in dirs[i]):
                        df.insert(1,'xsec',xsec)
                        df.insert(2,'n_events',n_events)  
                if name is not 'MuonEG':    
                    if ('Summer16' in dirs[i]):
                        df.insert(3,'int_lumi',35920)
                        df.insert(4,'year',2016)
                    elif ('Fall17' in dirs[i]): 
                        df.insert(3,'int_lumi',41530)
                        df.insert(4,'year',2017)
                    elif ('Autumn18' in dirs[i]):
                        df.insert(3,'int_lumi',59740)
                        df.insert(4,'year',2018)
                elif name is 'MuonEG':
                    if ('2016' in dirs[i]):
                        df.insert(1,'year',2016)
                    elif ('2017' in dirs[i]):
                        df.insert(1,'year',2017)
                    elif ('2018' in dirs[i]):
                        df.insert(1,'year',2018)
                df_list.append(df)
            except:
                continue
        self.df = pd.concat(df_list)
        
# building funcs
def make_df_dict(year, baby_ver, *args):
    df_dict = dict()
    for name in args:
        df_dict[name] =  ControlPlot(name, baby_ver).df
    for df in df_dict:
        df_dict[df] = df_dict[df][df_dict[df]['year'] == year]
    return df_dict

def primary_weights(df):
    return np.array(df.gen_weight * df.xsec * df.int_lumi * df.mc_tight_btag_weight * df.mc_weight / df.n_events)

def build_weights_dict(df_dict, data_c, use_norm_weight, use_jet_weights, use_trailing_P_weight):
    weights_dict = dict()
    normalization_weight = 1.0
    for name in df_dict:
        weights_dict[name] = primary_weights(df_dict[name])
    if use_norm_weight:
        normalization_weight = len(data_c) / sum([sum(weights_dict[v]) for v in weights_dict])
        for name in df_dict:
            weights_dict[name] *= normalization_weight
    if use_jet_weights:
        jet_weights = np.nan_to_num(np.divide(np.histogram(data_c.num_jets,bins=np.linspace(0,50,51))[0], 
                                              sum([np.histogram(df_dict[name].num_jets,bins=np.linspace(0,50,51),
                                                           weights=weights_dict[name])[0] for name in df_dict])),nan=1)
        for name in df_dict:
            df_dict[name]['jet_weights'] = df_dict[name].num_jets.apply(lambda x : jet_weights[x])
        for name in df_dict:
            weights_dict[name] *= df_dict[name].jet_weights
    if use_trailing_P_weight:
        trailing_vbs_jet_P_weights = np.nan_to_num(np.divide(np.histogram(data_c.trailing_vbs_jet_P,bins=np.linspace(0,10000,101))[0], 
                                              sum([np.histogram(df_dict[name].trailing_vbs_jet_P,bins=np.linspace(0,10000,101),
                                                           weights=weights_dict[name])[0] for name in df_dict])),nan=1)
        for name in df_dict:
            df_dict[name]['trailing_vbs_jet_P_weights'] = df_dict[name].trailing_vbs_jet_P.apply(lambda x : trailing_vbs_jet_P_weights[int(x // 100)])
        for name in df_dict:
            weights_dict[name] *= df_dict[name].trailing_vbs_jet_P_weights
        
    return weights_dict, normalization_weight

# plot formatting funcs
def format_hist_axes(df_dict, ax1):
    """Format main 1D hist"""
    # Sort legend
    handles, labels = ax1.get_legend_handles_labels()
    # Sort alphabetically
    abc_labels, abc_handles = zip(*sorted(zip(labels, handles), key=lambda t: t[0]))
    abc_labels, abc_handles = list(abc_labels), list(abc_handles)
    # Additional, manual sorting
    sorted_handles = abc_handles
    sorted_labels = abc_labels
    for i, label in enumerate(abc_labels):
        # Guarantee data is on top
        if "Data" in label:
            sorted_labels.insert(0, sorted_labels.pop(i))
            sorted_handles.insert(0, sorted_handles.pop(i))
        # Guarantee TTJets is below data
        elif "TTJets" in label:
            if "Data" in sorted_labels[0]:
                sorted_labels.insert(1, sorted_labels.pop(i))
                sorted_handles.insert(1, sorted_handles.pop(i))
            else:
                sorted_labels.insert(0, sorted_labels.pop(i))
                sorted_handles.insert(0, sorted_handles.pop(i))
        # Guarantee text is on the bottom
        elif "scaled\\hspace{0.25}" in label:
            sorted_labels.append(sorted_labels.pop(i))
            sorted_handles.append(sorted_handles.pop(i))
    # Plot new labels/handles
    sorted_labels = tuple(sorted_labels)
    sorted_handles = tuple(sorted_handles)
    ax1.legend(sorted_handles, sorted_labels, title=r'$\bf{}$'.format(df_dict['TTJets'].year.iloc[0]),title_fontsize=15)
    ax1.text(
        0.0, 
        1.01,
        "CMS", 
        horizontalalignment="left", 
        verticalalignment="bottom", 
        transform=ax1.transAxes, 
        weight="bold", 
        size=18
    )
    ax1.text(
        0.09, 
        1.01, 
        "Preliminary", 
        horizontalalignment="left", 
        verticalalignment="bottom", 
        transform=ax1.transAxes, 
        style="italic", 
        size=18
    )
    ax1.text(
        0.99, 
        1.01,
        "%0.1f fb${}^\mathregular{-1}$ (13 TeV)" % (df_dict['TTJets'].int_lumi.iloc[0] / 1000), 
        horizontalalignment='right', 
        verticalalignment='bottom', 
        transform = ax1.transAxes, 
        size="x-large"
    )
    ax1.set_ylabel("Events")
    ax1.set_ylim(bottom=0.)
    ax1.xaxis.set_minor_locator(AutoMinorLocator())
    ax1.yaxis.set_minor_locator(AutoMinorLocator())

def format_ratio_axes(ax2, xlabel, ylabel=r"$\frac{Data}{MC}$"):
    """Format ratio plot"""
    ax2.axhline(y=1, color="k", linestyle="--", alpha=0.75, linewidth=0.75)
    ax2.set_xlabel(xlabel)
    ax2.set_ylabel(ylabel,fontsize=18)
    ax2.set_ylim(0.3,1.7)
    ax2.yaxis.set_minor_locator(AutoMinorLocator())
    ax2.xaxis.set_minor_locator(AutoMinorLocator())

# plot making funcs
def typical_hist(df_dict, weights_dict, data_c, branch_name, bins, hist_axes, ratio_axes):
    color_list = ['gold', 'steelblue', 'red', 'green', 'purple']
    count = 0
    plot_list = list()
    for name, df in df_dict.items():
        plot_list.append(
        Hist1D(
            df[branch_name],
            weights = weights_dict[name],bins=bins,
            label=name + ' ['+str(round(sum(weights_dict[name]))) + ']',
            color=color_list[count])
        )
        count += 1
    # Data plot
    data_p = Hist1D(
        data_c[branch_name],
        bins=bins,
        label='Data ['+str(len(data_c))+']',
        color='black'
    )
    # Stacked hist
    plot_stack(plot_list, ax=hist_axes, histtype='bar')
    # Data plot
    data_p.plot(ax=hist_axes, show_errors=True)
    # Ratio plot
    (data_p/(sum(plot_list))).plot(ax=ratio_axes, show_errors=True, label='')

def not_a_typical_hist(df_dict, weights_dict, data_c, branch_name_1, branch_name_2, bins, hist_axes, ratio_axes):
    color_list = ['gold', 'steelblue', 'red', 'green', 'purple']
    count = 0
    plot_list = list()
    for name, df in df_dict.items():
        plot_list.append(
        Hist1D(
            np.abs(df[branch_name_1] - df[branch_name_2]),
            weights = weights_dict[name],bins=bins,
            label=name + ' ['+str(round(sum(weights_dict[name]))) + ']',
            color=color_list[count])
        )
        count += 1
    # Data plot
    data_p = Hist1D(
        np.abs(data_c[branch_name_1] - data_c[branch_name_2]) ,
        bins=bins,
        label='Data ['+str(len(data_c))+']',
        color='black'
    )
    # Stacked hist
    plot_stack(plot_list, ax=hist_axes, histtype='bar')
    # Data plot
    data_p.plot(ax=hist_axes, show_errors=True)
    # Ratio plot
    (data_p/(sum(plot_list))).plot(ax=ratio_axes, show_errors=True, label='')
    