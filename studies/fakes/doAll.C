{

    gROOT->ProcessLine(".L ./NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ScanChain.C+");
    TChain *ch = new TChain("Events");

    ch->Add("./samples/nanotree.root");

    ScanChain(ch);

}
