#! /usr/bin/env python

from argparse import ArgumentParser, RawTextHelpFormatter
import ROOT
ROOT.SetMemoryPolicy(ROOT.kMemoryStrict)

slim_samples = ["./samples/nanotree.root"]

samples = [
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/5328123C-B5B1-7240-982C-91C22BFBFF59.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/8633326F-CA38-4446-9629-10B1347ED382.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/4AA64837-7A3A-2C4A-A7FE-CCD5FEFB6775.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/F08E36CF-94D2-0946-BFBE-BBC75FE0AE71.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/BEFED70C-D7E6-994A-8BEA-B526C3B359AD.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/557A957A-E9E5-E246-8229-D0A0AE495B30.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/E80005ED-3698-C446-B3A1-E0FBE7080560.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/B9C94331-05BF-1A45-90E8-06A8A009B159.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/1B6191AA-449D-3A45-9CDF-C0D4202AAF81.root",
    "root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/0B711A4B-9FC6-C84A-A01E-87DAAAF69CCB.root"]


def doAll(slimmed=False, debug=False, sample=None):
    if slimmed:
        if not sample:
            sample = 0
        # Make TChain
        mc = ROOT.TChain("Events")
        mc.Add(slim_samples[0])
        # Run ScanChain
        print("Running ScanChain over the following file:")
        print(slim_samples[0])
        ROOT.ScanChain(mc, "output/ttjets_fakes_slim.root")
    else:
        # Load .so files
        ROOT.gROOT.ProcessLine(".L ./NanoCORE/NANO_CORE.so");
        ROOT.gROOT.ProcessLine(".L ./monolep.C+");
        ROOT.gROOT.ProcessLine(".L MonolepChain.C+");
        if not sample:
            for i, sample in enumerate(samples):
                # Make TChain
                mc = ROOT.TChain("Events")
                mc.Add(sample)
                # Run ScanChain
                print("Running ScanChain over the following file:")
                print(sample)
                ROOT.MonolepChain(mc, "output/ttbar-monolep_btags_{}.root".format(i))
                if debug:
                    break
        else:
            # Make TChain
            mc = ROOT.TChain("Events")
            mc.Add(samples[sample])
            # Run ScanChain
            print("Running ScanChain over the following file:")
            print(samples[sample])
            ROOT.MonolepChain(mc, "output/ttbar-monolep_btags_{}.root".format(sample))

    return

if __name__ == "__main__":
    # CLI
    argparser = ArgumentParser(description='Run looper',
                               formatter_class=RawTextHelpFormatter)
    # Sample index
    argparser.add_argument('--sample', type=int, default=None,
                           help='Which (index) hardcoded sample to run over')
    # Toggle debug
    argparser.add_argument('--debug', dest='debug', action='store_true',
                           help='Run in debug mode')
    # Toggle slimmed files
    argparser.add_argument('--slimmed', dest='slimmed', action='store_true',
                           help='Run over slimmed files')
    args = argparser.parse_args()

    doAll(slimmed=args.slimmed, debug=args.debug, sample=args.sample)
