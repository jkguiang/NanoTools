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
    def __init__(self, mc_list, data_name, year, baby_ver):
        self.year = year
        self.df_dict = {}
        for name in mc_list:
            path_to_name = f"/hadoop/cms/store/user/jguiang/ttbarCR/babies/{name}/"
            df_list = []
            dirs = [f.path for f in os.scandir(path_to_name) if f.is_dir() and baby_ver in f.path]
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
                    if name is not data_name:    
                        if ('Summer16' in dirs[i]):
                            df.insert(3,'int_lumi',35920)
                            df.insert(4,'year',2016)
                        elif ('Fall17' in dirs[i]): 
                            df.insert(3,'int_lumi',41530)
                            df.insert(4,'year',2017)
                        elif ('Autumn18' in dirs[i]):
                            df.insert(3,'int_lumi',59740)
                            df.insert(4,'year',2018)
                    elif name is data_name:
                        if ('2016' in dirs[i]):
                            df.insert(1,'year',2016)
                        elif ('2017' in dirs[i]):
                            df.insert(1,'year',2017)
                        elif ('2018' in dirs[i]):
                            df.insert(1,'year',2018)
                    df_list.append(df)
                except:
                    continue
            tmp_df = pd.concat(df_list)
            tmp_df_year = tmp_df[tmp_df['year'] == year] if type(year) is int else tmp_df
            if name is not data_name:
                self.df_dict[name] = tmp_df_year
            elif name is data_name:
                self.data_df = tmp_df_year
                
        weight_dict = dict()
        normalization_weight = 1.0
        for name in self.df_dict:
            weight_dict[name] = np.array(self.df_dict[name].gen_weight * 
                                          self.df_dict[name].xsec * 
                                          self.df_dict[name].int_lumi * 
                                          self.df_dict[name].mc_tight_btag_weight * 
                                          self.df_dict[name].mc_weight / self.df_dict[name].n_events)
        normalization_weight = len(self.data_df) / sum([sum(weight_dict[v]) for v in weight_dict])
        for name in self.df_dict:
            weight_dict[name] *= normalization_weight        
        self.weights_dict = weight_dict
        self.normalization_weight = normalization_weight

    # plot formatting funcs
    def format_hist_axes(self, ax1):
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
        ax1.legend(sorted_handles, sorted_labels, title=r'$\bf{}$'.format(self.year),title_fontsize=15)
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
        if type(year) is int:
            ax1.text(
                0.99, 
                1.01,
                "%0.1f fb${}^\mathregular{-1}$ (13 TeV)" % (self.df_dict['TTJets'].int_lumi.iloc[0] / 1000), 
                horizontalalignment='right', 
                verticalalignment='bottom', 
                transform = ax1.transAxes, 
                size="x-large"
            )
        else:
            ax1.text(
                0.99, 
                1.01,
                "%0.1f fb${}^\mathregular{-1}$ (13 TeV)" % 137.2, 
                horizontalalignment='right', 
                verticalalignment='bottom', 
                transform = ax1.transAxes, 
                size="x-large"
            )
        ax1.set_ylabel("Events")
        ax1.set_ylim(bottom=0.)
        ax1.xaxis.set_minor_locator(AutoMinorLocator())
        ax1.yaxis.set_minor_locator(AutoMinorLocator())

    def format_ratio_axes(self, ax2, xlabel, ylabel=r"$\frac{Data}{MC}$"):
        """Format ratio plot"""
        ax2.axhline(y=1, color="k", linestyle="--", alpha=0.75, linewidth=0.75)
        ax2.set_xlabel(xlabel)
        ax2.set_ylabel(ylabel,fontsize=18)
        ax2.set_ylim(0.3,1.7)
        ax2.yaxis.set_minor_locator(AutoMinorLocator())
        ax2.xaxis.set_minor_locator(AutoMinorLocator())

    def comparison_plot(self, branch_name, bins, hist_axes, ratio_axes):
        color_list = ['gold', 'steelblue', 'red', 'green', 'purple']
        count = 0
        plot_list = list()
        for name, df in self.df_dict.items():
            plot_list.append(
            Hist1D(
                df[branch_name],
                weights = self.weights_dict[name],bins=bins,
                label=name + ' ['+str(round(sum(self.weights_dict[name]))) + ']',
                color=color_list[count])
            )
            count += 1
        # Data plot
        data_p = Hist1D(
            self.data_df[branch_name],
            bins=bins,
            label='Data ['+str(len(self.data_df))+']',
            color='black'
        )
        # Stacked hist
        plot_stack(plot_list, ax=hist_axes, histtype='bar')
        # Data plot
        data_p.plot(ax=hist_axes, show_errors=True)
        # Ratio plot
        (data_p/(sum(plot_list))).plot(ax=ratio_axes, show_errors=True, label='')

    def difference_plot(self, branch_name_1, branch_name_2, bins, hist_axes, ratio_axes):
        color_list = ['gold', 'steelblue', 'red', 'green', 'purple']
        count = 0
        plot_list = list()
        for name, df in self.df_dict.items():
            if 'phi' in branch_name_1:
                plot_list.append(
                    Hist1D(
                    np.arccos(np.cos(df[branch_name_1] - df[branch_name_2])),
                    weights = self.weights_dict[name],bins=bins,
                    label=name + ' ['+str(round(sum(self.weights_dict[name]))) + ']',
                    color=color_list[count])
            )
            else:     
                plot_list.append(
                Hist1D(
                    np.abs(df[branch_name_1] - df[branch_name_2]),
                    weights = self.weights_dict[name],bins=bins,
                    label=name + ' ['+str(round(sum(self.weights_dict[name]))) + ']',
                    color=color_list[count])
                )
            count += 1
        # Data plot
        if 'phi' in branch_name_1:
            data_p = Hist1D(
                np.arccos(np.cos(self.data_df[branch_name_1] - self.data_df[branch_name_2])),
                bins=bins,
                label='Data ['+str(len(self.data_df))+']',
                color='black'
            )
        else:
            data_p = Hist1D(
                np.abs(self.data_df[branch_name_1] - self.data_df[branch_name_2]),
                bins=bins,
                label='Data ['+str(len(self.data_df))+']',
                color='black'
            )
        # Stacked hist
        plot_stack(plot_list, ax=hist_axes, histtype='bar')
        # Data plot
        data_p.plot(ax=hist_axes, show_errors=True)
        # Ratio plot
        (data_p/(sum(plot_list))).plot(ax=ratio_axes, show_errors=True, label='')
