#pragma GCC diagnostic ignored "-Wsign-compare"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TChain.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreePerfStats.h"

#include "./NanoCORE/Nano.h"
#include "./NanoCORE/SSSelections.cc"
#include "./NanoCORE/MetSelections.cc"
#include "./NanoCORE/tqdm.h"
#include "./utilities/util2017/fakes2017.h"

#include <iostream>
#include <iomanip>

#define SUM(vec) std::accumulate((vec).begin(), (vec).end(), 0);
#define SUM_GT(vec,num) std::accumulate((vec).begin(), (vec).end(), 0, [](float x,float y){return ((y > (num)) ? x+y : x); });
#define COUNT_GT(vec,num) std::count_if((vec).begin(), (vec).end(), [](float x) { return x > (num); });
#define COUNT_LT(vec,num) std::count_if((vec).begin(), (vec).end(), [](float x) { return x < (num); });

#define H1(name,nbins,low,high) TH1F *h_##name = new TH1F(#name,#name,nbins,low,high);

// #define DEBUG

struct debugger { template<typename T> debugger& operator , (const T& v) { cerr<<v<<" "; return *this; } } dbg;
#ifdef DEBUG
    #define debug(args...) do {cerr << #args << ": "; dbg,args; cerr << endl;} while(0)
#else
    #define debug(args...)
#endif

using namespace std;
using namespace tas;

int ScanChain(TChain *ch) {
    // Initialize looper variables
    TFile* f1 = new TFile("output.root", "RECREATE");
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile *currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar;
    // Set configuration parameters
    gconf.year = 2017;
    // File loop
    while ( (currentFile = (TFile*)fileIter.Next()) ) {
        // Open file
        TFile *file = TFile::Open( currentFile->GetTitle() );
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());
        // TTree configuration
        tree->SetCacheSize(128*1024*1024);
        tree->SetCacheLearnEntries(100);
        auto psRead = new TTreePerfStats("readPerf", tree);
        nt.Init(tree);
        // Event loop
        for( unsigned int event = 0; event < tree->GetEntriesFast(); ++event) {
            // Load event
            nt.GetEntry(event);
            tree->LoadTree(event);
            // Update progress
            nEventsTotal++;
            bar.progress(nEventsTotal, nEventsChain);

            /* --> START analysis code <-- */

            // Get dilepton hypothesis
            auto leps = getLeptons(gconf.year);
            auto result = getBestHyp(leps);
            int hyp_class = result.first;
            // Veto event if no dilepton hypothesis
            if (hyp_class < 0) continue;
            // Retrieve dilepton hypothesis
            auto best_hyp = result.second;
            Lepton loose_lep = (best_hyp.first.idlevel == IDloose) ? best_hyp.first : best_hyp.second;
            Lepton tight_lep = (best_hyp.first.idlevel == IDtight) ? best_hyp.first : best_hyp.second;

            int njets, nbtags;
            float ht;
            std::tie(njets,nbtags,ht) = getJetInfo(leps);

            float mll = (lep1.p4()+lep2.p4()).M();
            int type = lep1.is_el() + lep2.is_el(); // mm, em, ee
            float met = MET_pt();
            bool passfilter = passesMETfilters(false);

            // Require one gen-level muon
            int muon_counter = 0;
            for (int i = 0; i < nGenPart(); i++) {
                int this_pdgID = GenPart_pdgId().at(i);
                if (abs(this_pdgID) == 11) {
                    muon_counter++;
                }
            }
            if (muon_counter == 0) continue;

            // Application region corresponding to signal region
            float loose_fr;
            float tight_fr;
            float loose_pred;
            float tight_pred;
            Lepton fakable_lep;
            if (hyp_class == tight_loosenottight) {
                loose_fr = fakeRate(loose_lep.id(), loose_lep.pt(), loose_lep.eta(), ht, true);
                tight_fr = fakeRate(tight_lep.id(), tight_lep.pt(), tight_lep.eta(), ht, false);
                loose_pred = loose_fr/(1-loose_fr);
                tight_pred = tight_fr/(1-tight_fr);
            }

            /* --> END analysis code <-- */

        } // END event loop

        // Clean up
        delete file;

    } // END file loop
    
    // Wrap up
    bar.finish();
    f1->Write();
    f1->Close();

    return 0;
}
