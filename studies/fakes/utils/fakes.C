// -*- C++ -*-

// C++
#include <iostream>
#include <vector>

// ROOT
#include "TBenchmark.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TROOT.h"
#include "TTreeCache.h"
#include "TString.h"

// NanoCORE
#include "../NanoCORE/Nano.h"
#include "../NanoCORE/ElectronSelections.h"
#include "../NanoCORE/MuonSelections.h"

// Custom
#include "fakes.h"

// Namespaces
using namespace std;
using namespace tas;

FakesTree::FakesTree(int year) {
    // TTree
    t = new TTree("tree", "tree");
    // Event level
    b_event = t->Branch("event", &event, "event/I");
    b_ht = t->Branch("ht", &ht, "ht/F");
    b_met = t->Branch("met", &met, "met/F");
    // Object level
    b_lepton_id = t->Branch("lepton_id", &lepton_id, "lepton_id/I");
    b_lepton_pt = t->Branch("lepton_pt", &lepton_pt, "lepton_pt/F");
    b_lepton_eta = t->Branch("lepton_eta", &lepton_eta, "lepton_eta/F");
    b_lepton_phi = t->Branch("lepton_phi", &lepton_phi, "lepton_phi/F");
    b_lepton_mass = t->Branch("lepton_mass", &lepton_mass, "lepton_mass/F");
    b_is_tight = t->Branch("is_tight", &is_tight, "is_tight/I");
    b_is_loose = t->Branch("is_loose", &is_loose, "is_loose/I");
    // Other
    year = year;
}

void FakesTree::reset(bool obj_level_only) {

    if (!obj_level_only) {
        // Event level
        event = -999;
        ht = -999;
        met = -999;
    }
    // Object level
    lepton_id = -999;
    lepton_pt = -999;
    lepton_eta = -999;
    lepton_phi = -999;
    lepton_mass = -999;
    is_tight = -999;
    is_loose = -999;

    return;
}

int FakesTree::fillBranches() {

    MonolepID monolep_id = whichGenMonolep();
    if (monolep_id == no_lepton) {
        // Uninteresting event
        return 0;
    }
    else if (monolep_id == single_mu) {
        // Truth-matched to single muon event -> electrons == fakes
        for (unsigned int i = 0; i < nElectron(); i++) {
            saveLepton(Electron_pdgId().at(i), i);
        }
    }
    else if (monolep_id == single_el) {
        // Truth-matched to single electron event -> muons == fakes
        for (unsigned int i = 0; i < nMuon(); i++) {
            saveLepton(Muon_pdgId().at(i), i);
        }
    }

    return 0;
}

void FakesTree::saveLepton(int lepton_id, int lepton_index) {

    switch (abs(lepton_id)) {
        case(11):
            lepton_id = lepton_id;
            lepton_pt = Electron_pt().at(lepton_index);
            lepton_eta = Electron_eta().at(lepton_index);
            lepton_phi = Electron_phi().at(lepton_index);
            lepton_mass = Electron_mass().at(lepton_mass);
            is_tight = electronID(lepton_index, IDtight, year);
            is_loose = electronID(lepton_index, IDfakable, year);
        case(13):
            lepton_id = lepton_id;
            lepton_pt = Muon_pt().at(lepton_index);
            lepton_eta = Muon_eta().at(lepton_index);
            lepton_phi = Muon_phi().at(lepton_index);
            lepton_mass = Muon_mass().at(lepton_mass);
            is_tight = muonID(lepton_index, IDtight, year);
            is_loose = muonID(lepton_index, IDfakable, year);
    }

    t->Fill();
    reset(true);

    return;
}

/**
 * Since we're using the tt-jets, single-lepton sample, we can find 
 * out exactly which lepton was produced for each such event, that
 * way we know exactly which leptons are imposters
 *
 * Returns monolepton ID code
 */
MonolepID FakesTree::whichGenMonolep() {

    // Check electrons
    int truth_matched_els = 0;
    for (unsigned int i = 0; i < nElectron(); i++) {
        // Only count prompt leptons from W boson
        bool is_prompt = (int(Electron_genPartFlav().at(i)) == 1);
        int gen_index = Electron_genPartIdx().at(i);
        int gen_mother_index = GenPart_genPartIdxMother().at(gen_index);
        bool from_genW = (abs(GenPart_pdgId().at(gen_mother_index)) == 24);
        if (is_prompt && from_genW) {
            truth_matched_els++;
        }
    }

    // Check muons
    int truth_matched_mus = 0;
    for (unsigned int i = 0; i < nMuon(); i++) {
        // Only count prompt leptons from W boson
        bool is_prompt = (int(Muon_genPartFlav().at(i)) == 1);
        int gen_index = Muon_genPartIdx().at(i);
        int gen_mother_index = GenPart_genPartIdxMother().at(gen_index);
        bool from_genW = (abs(GenPart_pdgId().at(gen_mother_index)) == 24);
        if (is_prompt && from_genW) {
            truth_matched_mus++;
        }
    }

    if (truth_matched_els == 1 && truth_matched_mus == 0) {
        return single_el;
    }
    else if (truth_matched_els == 0 && truth_matched_mus == 1) {
        return single_mu;
    }
    else {
        return no_lepton;
    }
}
