{
  gROOT->ProcessLine(".L ../NanoCORE/NANO_CORE.so");
  gROOT->ProcessLine(".L control.C+");
  gROOT->ProcessLine(".L ScanChain.C+");

  TChain *tchain1 = new TChain("Events"); 
  tchain1->Add("/hadoop/cms/store/user/jguiang/ttbarCR/data/muonEG/MuonEG2016G_NANOAODv7_0.root");
  ScanChain(tchain1, "./output/MuonEG2016G_NANOAODv7_0_baby.root",true);

  TChain *tchain2 = new TChain("Events"); 
  tchain2->Add("/hadoop/cms/store/user/jguiang/ttbarCR/MC/ttbar/TTJets2016_inclusive_NANOAODSIMv7_0.root");
  ScanChain(tchain2, "./output/TTJets2016_inclusive_NANOAODSIMv7_0_baby.root", false);

}
