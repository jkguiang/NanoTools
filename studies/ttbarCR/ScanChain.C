#pragma GCC diagnostic ignored "-Wsign-compare"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TString.h"
#include "TChain.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreePerfStats.h"
#include "TCanvas.h"

#include "./NanoCORE/Nano.h"
#include "./NanoCORE/Config.h"
#include "./NanoCORE/SSSelections.cc"
#include "./NanoCORE/tqdm.h"
#include "./control.h"
#include "./HLTs.C"

#include <iostream>
#include <iomanip>

using namespace std;
using namespace tas;

int ScanChain(TChain *ch, TString out_name, TString sample_name, bool is_data, 
              float xsec, int n_events_total) {
    // Output
    TFile* control_tfile = new TFile(out_name, "RECREATE");
    // Custom TTree
    ControlTree* control_tree = new ControlTree(control_tfile, is_data);
    // Set configuration parameters
    float int_lumi; // integrated lumi for ENTIRE dataset
    if (sample_name.Contains("2016")) {
        gconf.year = 2016;
        int_lumi = 16357.0; // TODO: this is just 2016G+H, change this
    }
    else if (sample_name.Contains("2017")) {
        gconf.year = 2017;
        int_lumi = 0.; // TODO: add this
    }
    else if (sample_name.Contains("2018")) {
        gconf.year = 2018;
        int_lumi = 0.; // TODO: add this
    }
    else {
        cout << "ERROR: no year in sample name" << endl;
        return 0;
    }
    // Initialize looper variables
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile *currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar; // progress bar
    // File loop
    while ( (currentFile = (TFile*)fileIter.Next()) ) {
        // Open file
        TFile *file = TFile::Open(currentFile->GetTitle());
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());
        // Imported TTree configuration
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
            bar.progress(nEventsTotal, nEventsChain);
            /* Analysis code */
			// HLTS
            bool passes_HLTs = checkHLTs(MuonElec_HLTs);
            // TODO: add 2017, 2018 HLTs
			if (passes_HLTs) {	
				control_tree->fillBranches(n_events_total, xsec, int_lumi, is_data);
			}
        } // END event loop

        // Clean up
        delete file;

    } // END file loop

    // Wrap up
    bar.finish();
    control_tree->writeTFile();
    return 0;
}
