import uproot
import glob
import numpy as np
import pandas as pd
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from matplotlib.ticker import AutoMinorLocator
from tqdm import tqdm

def lineage_hist(df, n_btags, algo, wp,
                 fig=None, axes=None, fmt="bo", label="",
                 b_text=True):
    if not fig or not axes:
        fig = plt.figure(figsize=(6.4*1.5,4.8*1.5))
        axes = plt.subplot(111)
    # Bin sizes
    bin_edges = np.arange(5)[1:]
    bin_widths = bin_edges[1:]-bin_edges[:-1]
    bin_centers = bin_edges[:-1]+0.5*bin_widths
    # Bin values
    bin_vals = np.zeros(4)
    deepalgo_btags = df["{0}_btags_{1}".format(algo, wp)]
    bin_vals[0] = np.sum(df[deepalgo_btags >= n_btags].fake_from_c)
    bin_vals[1] = np.sum(df[deepalgo_btags >= n_btags].fake_from_b)
    bin_vals[2] = np.sum(df[deepalgo_btags >= n_btags].fake_from_light)
    bin_vals[3] = np.sum(df[deepalgo_btags >= n_btags].fake_unmatched)
    # Plot
    axes.errorbar(bin_edges, bin_vals, xerr=0.5, fmt=fmt, label=label);
    # Marker labels
    if b_text:
        count = int(bin_vals[1]) # bin count for 'from b' bin
        plt.text(2, count+1, # x=2 <--> from b, y=count+1 gives small padding
                 "{0:#d} ({1:0.1f})%".format(count, 100.0*count/np.sum(bin_vals)),
                 horizontalalignment='center')
    # Plot formatting
    plt.xticks(bin_edges, ["c", "b", "light/other", "unmatched"]);
    plt.ylabel("Events");
    plt.grid()
    
def composition_plot(df, algo, wp, fake_particle):
    plt.rc('font', size=18)
    fig = plt.figure(figsize=(6.4*1.5,4.8*1.5))
    axes = plt.subplot(111)
    
    # Check particle name
    title = ""
    if fake_particle == "electron":
        title = r"Composition of Fakes ($t\rightarrow \mu+e_{fake}$)"
    elif fake_particle == "muon":
        title = r"Composition of Fakes ($t\rightarrow e+\mu_{fake}$)"
    else:
        return
    # Get DeepAlgo name
    DeepAlgo = ""
    if algo == "deepCSV":
        DeepAlgo = "DeepCSV"
    elif algo == "deepJet":
        DeepAlgo = "DeepJet"
    else:
        return
    # Hists
    lineage_hist(df, n_btags=0, algo=algo, wp=wp,
                 fig=fig, axes=axes, fmt="bs", label=r"$N_{btags}\geq 0$")
    lineage_hist(df, n_btags=1, algo=algo, wp=wp,
                 fig=fig, axes=axes, fmt="ro", label=r"$N_{btags}\geq 1$")
    lineage_hist(df, n_btags=2, algo=algo, wp=wp,
                 fig=fig, axes=axes, fmt="m^", label=r"$N_{btags}\geq 2$")
    # Plot formatting
    plt.title(title);
    plt.legend(title="{0} ({1})".format(DeepAlgo, wp));
    # Save figure
    plt.savefig("plots/fake_{0}_composition-{1}_{2}.png".format(fake_particle, DeepAlgo, wp))
    plt.close(fig)
    
def fake_pt_corr_plot(df, algo, wp, fake_particle):
    plt.rc('font', size=18)
    fig = plt.figure(figsize=(6.4*1.5,4.8*1.5))
    axes = plt.subplot(111)
    # Check particle name
    if fake_particle != "electron" and fake_particle != "muon":
        return
    # Get DeepAlgo name
    DeepAlgo = ""
    if algo == "deepCSV":
        DeepAlgo = "DeepCSV"
    elif algo == "deepJet":
        DeepAlgo = "DeepJet"
    else:
        return
    # Hist w/ no cut on nbtags
    plt.hist(df.fake_pt_corr, bins=np.linspace(0,300,31),
             alpha=0.25, histtype="step", fill=True, color="b", linewidth=2,
             label=r"$N_{btags}\geq 0$");
    # Get deepalgo btags
    deepalgo_btags = df["{0}_btags_{1}".format(algo, wp)]
    # Hists w/ cut on nbtags
    plt.hist(df[deepalgo_btags >= 1].fake_pt_corr, bins=np.linspace(0,300,31),
             alpha=0.50, histtype="step", fill=True, color="r", linewidth=2,
             label=r"$N_{btags}\geq 1$");
    plt.hist(df[deepalgo_btags >= 2].fake_pt_corr, bins=np.linspace(0,300,31),
             alpha=0.75, histtype="step", fill=True, color="m", linewidth=2,
             label=r"$N_{btags}\geq 2$");
    # Plot formatting
    plt.title("Fake {}".format(fake_particle+"s"))
    plt.xlabel(r"$p_{T}^{corr}$")
    plt.ylabel("Events")
    plt.legend(title="{0} ({1})".format(DeepAlgo, wp));
    axes.margins(x=0) # Remove x-axis margins
    axes.xaxis.set_minor_locator(AutoMinorLocator())
    axes.yaxis.set_minor_locator(AutoMinorLocator())
    # Save figure
    plt.savefig("plots/fake_{0}_pt_corr-{1}_{2}.png".format(fake_particle, DeepAlgo, wp))
    plt.close(fig)
    
def fake_eta_plot(df, algo, wp, fake_particle, folded=False):
    fig = plt.figure(figsize=(6.4*1.5,4.8*1.5))
    axes = plt.subplot(111)
    # Check particle name
    if fake_particle != "electron" and fake_particle != "muon":
        return
    # Get DeepAlgo name
    DeepAlgo = ""
    if algo == "deepCSV":
        DeepAlgo = "DeepCSV"
    elif algo == "deepJet":
        DeepAlgo = "DeepJet"
    else:
        return
    # Check folded assuming not folded
    bins = np.linspace(-2.5,2.5,21)
    ticks = np.linspace(-2.5,2.5,11)
    if folded:
        bins = np.linspace(0,2.5,11)
        ticks = np.linspace(0,2.5,11)
    # Hist w/ no cut on nbtags
    eta_vals0 = df.fake_eta
    if folded: eta_vals0 = np.abs(eta_vals0)
    plt.hist(eta_vals0, bins=bins,
             alpha=0.25, histtype="step", fill=True, color="b", linewidth=2,
             label=r"$N_{btags}\geq 0$");
    # Get deepalgo btags
    deepalgo_btags = df["{0}_btags_{1}".format(algo, wp)]
    # Hists w/ cut on nbtags
    eta_vals1 = df[deepalgo_btags >= 1].fake_eta
    if folded: eta_vals1 = np.abs(eta_vals1)
    plt.hist(eta_vals1, bins=bins,
             alpha=0.50, histtype="step", fill=True, color="r", linewidth=2,
             label=r"$N_{btags}\geq 1$");
    eta_vals2 = df[deepalgo_btags >= 2].fake_eta
    if folded: eta_vals2 = np.abs(eta_vals2)
    plt.hist(eta_vals2, bins=bins,
             alpha=0.75, histtype="step", fill=True, color="m", linewidth=2,
             label=r"$N_{btags}\geq 2$");
    # Plot formatting
    plt.title("Fake {}".format(fake_particle+"s"))
    plt.xticks(ticks);
    if folded:
        plt.xlabel(r"$|\eta|$")
    else:
        plt.xlabel(r"$\eta$")
    plt.ylabel("Events")
    plt.legend(title="{0} ({1})".format(DeepAlgo, wp));
    axes.margins(x=0) # Remove x-axis margins
    # Save figure
    if folded:
        plt.savefig("plots/fake_{0}_folded_eta-{1}_{2}.png".format(fake_particle, DeepAlgo, wp))
    else:
        plt.savefig("plots/fake_{0}_eta-{1}_{2}.png".format(fake_particle, DeepAlgo, wp))
    plt.close(fig)

def plot():
    # Fill dataframes
    nano_df = []
    for nano_baby in glob.glob("output/ttbar-monolep*"):
        nano_df.append(((uproot.open(nano_baby)).get("tree")).pandas.df())
    nano_df = pd.concat(nano_df)
    fake_els_df = nano_df[nano_df.fake_id.abs() == 11] # Tight single-muon events w/ tight fake electron
    fake_mus_df = nano_df[nano_df.fake_id.abs() == 13] # Tight single-muon events w/ tight fake electron

    algos = ["deepCSV", "deepJet"]
    wps = ["loose", "medium", "tight"]

    for algo in algos:
        print("Plotting {} wps".format(algo))
        for wp in tqdm(wps):
            # Fake electron plots
            composition_plot(fake_els_df, algo, wp, "electron")
            fake_pt_corr_plot(fake_els_df, algo, wp, "electron")
            fake_eta_plot(fake_els_df, algo, wp, "electron")
            # Fake muon plots
            composition_plot(fake_mus_df, algo, wp, "muon")
            fake_pt_corr_plot(fake_mus_df, algo, wp, "muon")
            fake_eta_plot(fake_mus_df, algo, wp, "muon")
        # Folded eta plots
        fake_eta_plot(fake_els_df, algo, "tight", "electron", folded=True)
        fake_eta_plot(fake_mus_df, algo, "tight", "muon", folded=True)

if __name__ == "__main__":
    plot()
