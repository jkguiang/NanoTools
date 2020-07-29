#! /usr/bin/env python
from argparse import ArgumentParser, RawTextHelpFormatter
import ROOT
ROOT.SetMemoryPolicy(ROOT.kMemoryStrict)
import glob
import json

def doAll(input_file, output_file, sample_name, is_data):
    # Load .so files
    ROOT.gROOT.ProcessLine(".L ./NanoCORE/NANO_CORE.so");
    ROOT.gROOT.ProcessLine(".L ./control.C+");
    ROOT.gROOT.ProcessLine(".L ScanChain.C+");
    # Get sample information (only used for MC)
    xsec = 0
    n_events_total = 0
    with open("sample_info.json", "r") as f_in:
        sample_info = json.load(f_in)
        if sample_name in sample_info.keys():
            xsec = sample_info[sample_name]["xsec"]
            n_events_total = sample_info[sample_name]["n_events_total"]
    # Make TChain
    tchain = ROOT.TChain("Events")
    tchain.Add(input_file)
    # Run ScanChain
    ROOT.ScanChain(
        tchain, 
        output_file, 
        sample_name, 
        is_data, 
        xsec, 
        n_events_total
    )

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
    # Output file path
    argparser.add_argument(
        "--output_file", 
        type=str, 
        default="",
        help="Output file path"
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
    # Get args
    args = argparser.parse_args()

    doAll(args.input_file, args.output_file, args.sample_name, args.is_data)
