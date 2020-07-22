#! /usr/bin/env python
from argparse import ArgumentParser, RawTextHelpFormatter
import ROOT
ROOT.SetMemoryPolicy(ROOT.kMemoryStrict)
import glob

def doAll(input_file, output_file, is_data):
    # Load .so files
    ROOT.gROOT.ProcessLine(".L ../NanoCORE/NANO_CORE.so");
    ROOT.gROOT.ProcessLine(".L ../control.C+");
    ROOT.gROOT.ProcessLine(".L ScanChain.C+");
    # Parse samples
    # Make TChain
    tchain = ROOT.TChain("Events")
    tchain.Add(input_file)
    # Run ScanChain
    ROOT.ScanChain(tchain, output_file, is_data)

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
    # Dilepton
    argparser.add_argument(
        "--is_data", 
        action="store_true",
        default=False,
        help="Input is not simulation"
    )
    # Get args
    args = argparser.parse_args()

    doAll(args.input_file, args.output_file, args.is_data)
