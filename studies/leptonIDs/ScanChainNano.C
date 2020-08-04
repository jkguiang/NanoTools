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
#include "./NanoCORE/SSSelections.cc"

#include "./ElectronSelectionsNano.C"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
using namespace tas;

int ScanChainNano(TChain *ch, TString sample_name, bool isData) {
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
        // Initialize counters
        int num_gen1el = 0;
        int num_gen1mu = 0;
        vector<int> gen1el_reco_geq1el_counts;
        vector<int> gen1el_reco_geq1mu_counts;
        vector<int> el_counts;
        vector<int> mu_counts;
        vector<TString> el_cutflow_names;
        vector<TString> mu_cutflow_names;
        // Event loop
        for(unsigned int event = 0; event < tree->GetEntriesFast(); ++event) {
            // Load event
            nt.GetEntry(event);
            tree->LoadTree(event);
            // Update progress
            nEventsTotal++;
            /* Analysis code */
            // Generator
            int num_gen_els = 0;
            int num_gen_mus = 0;
            for (unsigned int i = 0; i < nGenPart(); i++) {
                int this_id = GenPart_pdgId().at(i);
                int mother_idx = GenPart_genPartIdxMother().at(i);
                if (mother_idx < 0) {
                    continue;
                }
                int mother_id = GenPart_pdgId().at(mother_idx);
                if (abs(mother_id) == 24) {
                    if (abs(this_id) == 11) {
                        num_gen_els++;
                    }
                    if (abs(this_id) == 13) {
                        num_gen_mus++;
                    }
                }
            }
            if (num_gen_els == 1) {
                num_gen1el++;
            }
            if (num_gen_mus == 1) {
                num_gen1mu++;
            }
            // Electrons
            vector<int> event_el_counts;
            for (unsigned int i = 0; i < nElectron(); i++) {
                Counters results = isGoodElectron(i);
                vector<int> counts = results.counts;
                el_cutflow_names = results.names;
                if (event == 0) {
                    el_counts = counts;
                    gen1el_reco_geq1el_counts = vector<int>(counts.size(), 0);
                }
                if (i == 0) {
                    event_el_counts = counts;
                }
                else {
                    if (el_counts.size() != counts.size()) {
                        cout << "Something went horribly wrong..." << endl;
                        return 0;
                    }
                    for (unsigned int j = 0; j < counts.size(); j++) {
                        el_counts[j] += counts.at(j);
                        event_el_counts[j] += counts.at(j);
                    }
                }
            }
            if (num_gen_els == 1) {
                for (unsigned int i = 0; i < event_el_counts.size(); i++) {
                    if (event_el_counts.at(i) >= 1) {
                        gen1el_reco_geq1el_counts[i]++;
                    }
                }
            }
            // Muons
            // for (unsigned int i = 0; i < nMuon(); i++) {
            // }
        } // END event loop

        // Print out
        for (unsigned int i = 0; i < el_counts.size(); i++) {
            int num_tight_el = el_counts[i];
            int num_gen1el_reco_geq1el = gen1el_reco_geq1el_counts[i];
            cout << el_cutflow_names[i] << ": " << num_tight_el << endl;
            cout << "--> eff: " << float(num_gen1el_reco_geq1el)/float(num_gen1el) << endl;
        }

        // Clean up
        delete file;

    } // END file loop

    // Wrap up
    return 0;
}
