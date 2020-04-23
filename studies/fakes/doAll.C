{

    gROOT->ProcessLine(".L ./NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ./utils/fakes.C+");
    gROOT->ProcessLine(".L ScanChain.C+");
    TChain *ch = new TChain("Events");

    ch->Add("root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_ext_102X_mc2017_realistic_v7-v1/250000/5328123C-B5B1-7240-982C-91C22BFBFF59.root");

    ScanChain(ch);

}
