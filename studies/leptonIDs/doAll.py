#! /usr/bin/env python
from argparse import ArgumentParser, RawTextHelpFormatter
import ROOT
ROOT.SetMemoryPolicy(ROOT.kMemoryStrict)
import glob

def doAll(input_file, sample_name, is_data, cms4=False, nano=False):
    if nano and cms4:
        print("You can't have both! Choose CMS4 OR Nano.")
        return
    if nano:
        # Load .so files
        ROOT.gROOT.ProcessLine(".L ./NanoCORE/NANO_CORE.so");
        ROOT.gROOT.ProcessLine(".L ScanChainNano.C+");
        # Make TChain
        tchain = ROOT.TChain("Events")
        tchain.Add(input_file)
        # Run ScanChain
        ROOT.ScanChainNano(tchain, sample_name, is_data)
    elif cms4:
        # Load .so files
        ROOT.gROOT.ProcessLine(".L ./CORE/CORE.so");
        ROOT.gROOT.ProcessLine(".L ScanChainCMS4.C+");
        # Make TChain
        tchain = ROOT.TChain("Events")
        tchain.Add(input_file)
        # Run ScanChain
        ROOT.ScanChainCMS4(tchain, sample_name, is_data)
    else:
        print("No looper specified")

    return

if __name__ == "__main__":
    # CLI
    argparser = ArgumentParser(
        description='Run looper',
        formatter_class=RawTextHelpFormatter
    )
    # Input file path
    argparser.add_argument(
        "--input_file", 
        type=str, 
        default="",
        help="Input file path"
    )
    # Sample name
    argparser.add_argument(
        "--sample_name", 
        type=str, 
        default="",
        help="Sample name"
    )
    # Dilepton
    argparser.add_argument(
        "--is_data", 
        action="store_true",
        default=False,
        help="Input is not simulation"
    )
    # CMS4
    argparser.add_argument(
        "--nano", 
        action="store_true",
        default=False,
        help="Run NanoAOD looper"
    )
    # Nano
    argparser.add_argument(
        "--cms4", 
        action="store_true",
        default=False,
        help="Run CMS4 looper"
    )
    # Get args
    args = argparser.parse_args()

    doAll(
        args.input_file, 
        args.sample_name, 
        args.is_data, 
        args.cms4, 
        args.nano
    )
