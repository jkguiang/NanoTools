#pragma GCC diagnostic ignored "-Wsign-compare"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TChain.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreePerfStats.h"
#include "TCanvas.h"

#include "../NanoCORE/Nano.h"
#include "../NanoCORE/SSSelections.cc"
#include "./control.h"

#include <iostream>
#include <iomanip>

using namespace std;
using namespace tas;

int ScanChain(TChain *ch, TString out_name, bool isData) {
    // Output
    TFile* control_tfile = new TFile(out_name, "RECREATE");
    // Custom TTree
    ControlTree* control_tree = new ControlTree(control_tfile);
    // Set configuration parameters
    gconf.year = 2016;
    // Initialize looper variables
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile *currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
	float xsec = 831.76;
    // File loop
    while ( (currentFile = (TFile*)fileIter.Next()) ) {
        // Open file
        TFile *file = TFile::Open(currentFile->GetTitle());
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());
        // TTree configuration
        tree->SetCacheSize(128*1024*1024);
        tree->SetCacheLearnEntries(100);
        auto psRead = new TTreePerfStats("readPerf", tree);
        nt.Init(tree);
        // Event loop
        for(unsigned int event = 0; event < tree->GetEntriesFast(); ++event) {
            // Reset tree
            control_tree->resetBranches();
            // Load event
            nt.GetEntry(event);
            tree->LoadTree(event);
            // Update progress
            nEventsTotal++;
            /* Analysis code */
			//HLTS
			if(HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL() || HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() || HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() || HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ()) {	
				control_tree->fillBranches(1,xsec,isData);
			}
        } // END event loop

        // Clean up
        delete file;

    } // END file loop
    // Wrap up
    control_tree->writeTFile();
    return 0;
}
