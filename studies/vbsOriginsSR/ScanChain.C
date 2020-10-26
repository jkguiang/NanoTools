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
#include "./NanoCORE/MCTools.h"
#include "./NanoCORE/SSSelections.cc"
#include "./NanoCORE/tqdm.h"
#include "./control.h"
#include "./HLTs.C"

#include <iostream>
#include <iomanip>

using namespace std;
using namespace tas;

enum genpartType {
    none = -1,
    gluon = 0,
    lightQuark = 1,
    topQuark = 2,
    Wboson = 3,
    Zboson = 4,
    other = 5,
};

int ScanChain(TChain *ch, TString out_name, TString sample_name) {
    // Initialize looper variables
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile *currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar; // progress bar
    // File loop
    cout << "Starting file loop..." << endl;
    while ( (currentFile = (TFile*)fileIter.Next()) ) {
        // Open file
        cout << "Initializing file-reading objects..." << endl;
        TFile *file = TFile::Open(currentFile->GetTitle());
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());
        cout << "Loaded file: " << filename << endl;
        // Imported TTree configuration
        tree->SetCacheSize(128*1024*1024);
        tree->SetCacheLearnEntries(100);
        auto psRead = new TTreePerfStats("readPerf", tree);
        cout << "Initializing NanoCORE branch fetchers..." << endl;
        nt.Init(tree);
        // Output
        TFile* control_tfile = new TFile(out_name, "RECREATE");
        // Custom TTree
        cout << "Setting up baby TTree..." << endl;
        ControlTree* control_tree = new ControlTree(control_tfile);
        // Initialize hists
        TH1F *init_genparts = new TH1F("init_genparts", "init_genparts", 6, 0, 6);
        TH1F *init_genparts_SR = new TH1F("init_genparts_SR", "init_genparts_SR", 6, 0, 6);
        TH1F *init_genquark_pt = new TH1F("init_genquark_pt", "init_genquark_pt", 180, 0, 500);
        TH1F *init_gengluon_pt = new TH1F("init_gengluon_pt", "init_gengluon_pt", 180, 0, 500);
        TH1F *init_genquark_eta = new TH1F("init_genquark_eta", "init_genquark_eta", 180, -5, 5);
        TH1F *init_gengluon_eta = new TH1F("init_gengluon_eta", "init_gengluon_eta", 180, -5, 5);
        TH1F *init_genquark_phi = new TH1F("init_genquark_phi", "init_genquark_phi", 180, 2*M_PI, 2*M_PI);
        TH1F *init_gengluon_phi = new TH1F("init_gengluon_phi", "init_gengluon_phi", 180, 2*M_PI, 2*M_PI);
        TH1F *init_genquark_P = new TH1F("init_genquark_P", "init_genquark_P", 180, 0, 2000);
        TH1F *init_gengluon_P = new TH1F("init_gengluon_P", "init_gengluon_P", 180, 0, 2000);
        // Track hists
        control_tree->trackTH1F(init_genparts);
        control_tree->trackTH1F(init_genparts_SR);
        control_tree->trackTH1F(init_genquark_pt);
        control_tree->trackTH1F(init_gengluon_pt);
        control_tree->trackTH1F(init_genquark_eta);
        control_tree->trackTH1F(init_gengluon_eta);
        control_tree->trackTH1F(init_genquark_phi);
        control_tree->trackTH1F(init_gengluon_phi);
        control_tree->trackTH1F(init_genquark_P);
        control_tree->trackTH1F(init_gengluon_P);
        // Event loop
        cout << "Starting event loop..." << endl;
        for (unsigned int event = 0; event < tree->GetEntriesFast(); ++event) {
            // Reset tree
            control_tree->resetBranches();
            // Load event
            nt.GetEntry(event);
            tree->LoadTree(event);
            // Update progress
            nEventsTotal++;
            bar.progress(nEventsTotal, nEventsChain);
            /* Analysis code */
            for (unsigned int i = 0; i < nGenPart(); i++) {
                genpartType type = none;
                GenParticle genpart = GenParticle(i);
                if (genpart.mother_idx() == 0) {
                    int abs_pdg_id = abs(genpart.id());
                    if (abs_pdg_id < 6) { 
                        type = lightQuark; 
                        init_genquark_pt->Fill(genpart.pt());
                        init_genquark_eta->Fill(genpart.eta());
                        init_genquark_phi->Fill(genpart.phi());
                        init_genquark_P->Fill(genpart.p4().P());
                    }
                    else if (abs_pdg_id == 6) { type = topQuark; }
                    else if (abs_pdg_id == 21) { 
                        type = gluon; 
                        init_gengluon_pt->Fill(genpart.pt());
                        init_gengluon_eta->Fill(genpart.eta());
                        init_gengluon_phi->Fill(genpart.phi());
                        init_gengluon_P->Fill(genpart.p4().P());
                    }
                    else if (abs_pdg_id == 24) { type = Wboson; }
                    else if (abs_pdg_id == 23) { type = Zboson; }
                    else { type = other; }
                }
                if (type >= 0) { init_genparts->Fill(int(type)); }
            }
            // HLTS
            bool passes_HLTs = checkHLTs(MuonElec_HLTs);
            if (passes_HLTs) {  
                bool filled_branches = control_tree->fillBranches();
                if (filled_branches) {
                    for (unsigned int i = 0; i < nGenPart(); i++) {
                        genpartType type = none;
                        GenParticle genpart = GenParticle(i);
                        if (genpart.mother_idx() == 0) {
                            int abs_pdg_id = abs(genpart.id());
                            if (abs_pdg_id < 6) { type = lightQuark; }
                            else if (abs_pdg_id == 6) { type = topQuark; }
                            else if (abs_pdg_id == 21) { type = gluon; }
                            else if (abs_pdg_id == 24) { type = Wboson; }
                            else if (abs_pdg_id == 23) { type = Zboson; }
                            else { type = other; }
                        }
                        if (type >= 0) { init_genparts_SR->Fill(int(type)); }
                    }
                }
            }
        } // END event loop

        // Clean up
        delete file;
        control_tree->writeTFile();

    } // END file loop

    // Wrap up
    bar.finish();
    return 0;
}
