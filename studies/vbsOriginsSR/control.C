// C++
#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
// ROOT
#include "TBenchmark.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TROOT.h"
#include "TTreeCache.h"
#include "TString.h"
// NanoCORE
#include "./NanoCORE/Config.h"
#include "./NanoCORE/SSSelections.h"
#include "./NanoCORE/MCTools.h"
// Header
#include "control.h"
#include "scalefactors/all.h"


using namespace std;
using namespace tas;

ControlTree::ControlTree(TFile* new_tfile) {
    // TTree and TFile
    ttree = new TTree("tree", "tree");
    tfile = new_tfile;
    // Event
    b_event = ttree->Branch("event", &event, "event/I");
    b_num_pvs = ttree->Branch("num_pvs", &num_pvs, "num_pvs/I");
    b_met = ttree->Branch("met", &met, "met/F");
    b_ht = ttree->Branch("ht", &ht, "ht/F");
    // Leptons
    b_leading_lep_id = ttree->Branch(
        "leading_lep_id", 
        &leading_lep_id, 
        "leading_lep_id/I"
    );
    b_leading_lep_pt = ttree->Branch(
        "leading_lep_pt", 
        &leading_lep_pt, 
        "leading_lep_pt/F"
    );
    b_leading_lep_eta = ttree->Branch(
        "leading_lep_eta", 
        &leading_lep_eta, 
        "leading_lep_eta/F"
    );
    b_leading_lep_phi = ttree->Branch(
        "leading_lep_phi", 
        &leading_lep_phi, 
        "leading_lep_phi/F"
    );
    TBranch* b_leading_lep_gen_mother_id = ttree->Branch(
        "leading_lep_gen_mother_id", 
        &leading_lep_gen_mother_id, 
        "leading_lep_gen_mother_id/I"
    );
    b_trailing_lep_id = ttree->Branch(
        "trailing_lep_id", 
        &trailing_lep_id, 
        "trailing_lep_id/I"
    );
    b_trailing_lep_pt = ttree->Branch(
        "trailing_lep_pt", 
        &trailing_lep_pt, 
        "trailing_lep_pt/F"
    );
    b_trailing_lep_eta = ttree->Branch(
        "trailing_lep_eta", 
        &trailing_lep_eta, 
        "trailing_lep_eta/F"
    );
    b_trailing_lep_phi = ttree->Branch(
        "trailing_lep_phi", 
        &trailing_lep_phi, 
        "trailing_lep_phi/F"
    );
    TBranch* b_trailing_lep_gen_mother_id = ttree->Branch(
        "trailing_lep_gen_mother_id", 
        &trailing_lep_gen_mother_id, 
        "trailing_lep_gen_mother_id/I"
    );
    b_dilep_type = ttree->Branch("dilep_type", &dilep_type, "dilep_type/I");
    b_dilep_mass = ttree->Branch("dilep_mass", &dilep_mass, "dilep_mass/F");
    // Jets
    TBranch* b_leading_vbs_jet_gen_origin = ttree->Branch(
        "leading_vbs_jet_gen_origin", 
        &leading_vbs_jet_gen_origin, 
        "leading_vbs_jet_gen_origin/I"
    );
    TBranch* b_leading_vbs_jet_gen_type = ttree->Branch(
        "leading_vbs_jet_gen_type", 
        &leading_vbs_jet_gen_type, 
        "leading_vbs_jet_gen_type/I"
    );
    TBranch* b_leading_vbs_jet_P = ttree->Branch(
        "leading_vbs_jet_P", 
        &leading_vbs_jet_P, 
        "leading_vbs_jet_P/F"
    );
    TBranch* b_leading_vbs_jet_pt = ttree->Branch(
        "leading_vbs_jet_pt", 
        &leading_vbs_jet_pt, 
        "leading_vbs_jet_pt/F"
    );
    TBranch* b_leading_vbs_jet_eta = ttree->Branch(
        "leading_vbs_jet_eta", 
        &leading_vbs_jet_eta, 
        "leading_vbs_jet_eta/F"
    );
    TBranch* b_leading_vbs_jet_phi = ttree->Branch(
        "leading_vbs_jet_phi", 
        &leading_vbs_jet_phi, 
        "leading_vbs_jet_phi/F"
    );
    TBranch* b_trailing_vbs_jet_gen_origin = ttree->Branch(
        "trailing_vbs_jet_gen_origin", 
        &trailing_vbs_jet_gen_origin, 
        "trailing_vbs_jet_gen_origin/I"
    );
    TBranch* b_trailing_vbs_jet_gen_type = ttree->Branch(
        "trailing_vbs_jet_gen_type", 
        &trailing_vbs_jet_gen_type, 
        "trailing_vbs_jet_gen_type/I"
    );
    TBranch* b_trailing_vbs_jet_P = ttree->Branch(
        "trailing_vbs_jet_P", 
        &trailing_vbs_jet_P, 
        "trailing_vbs_jet_P/F"
    );
    TBranch* b_trailing_vbs_jet_pt = ttree->Branch(
        "trailing_vbs_jet_pt", 
        &trailing_vbs_jet_pt, 
        "trailing_vbs_jet_pt/F"
    );
    TBranch* b_trailing_vbs_jet_eta = ttree->Branch(
        "trailing_vbs_jet_eta", 
        &trailing_vbs_jet_eta, 
        "trailing_vbs_jet_eta/F"
    );
    TBranch* b_trailing_vbs_jet_phi = ttree->Branch(
        "trailing_vbs_jet_phi", 
        &trailing_vbs_jet_phi, 
        "trailing_vbs_jet_phi/F"
    );
    b_vbs_dijet_mass = ttree->Branch(
        "vbs_dijet_mass", 
        &vbs_dijet_mass, 
        "vbs_dijet_mass/F"
    );
    b_num_jets = ttree->Branch("num_jets", &num_jets, "num_jets/I");
    b_num_btags_tight = ttree->Branch(
        "num_btags_tight", 
        &num_btags_tight, 
        "num_btags_tight/I"
    );
}

void ControlTree::resetBranches() {
    // Event
    event = -999;
    num_pvs = -999;
    met = -999;
    ht = -999;
    // Leptons
    leading_lep_id = -999;
    leading_lep_pt = -999;
    leading_lep_eta = -999;
    leading_lep_phi = -999;
    leading_lep_gen_mother_id = -999;
    trailing_lep_id = -999;
    trailing_lep_pt = -999;
    trailing_lep_eta = -999;
    trailing_lep_phi = -999;
    trailing_lep_gen_mother_id = -999;
    dilep_type = -999;
    dilep_mass = -999;
    // Jets
    leading_vbs_jet_gen_origin = -999;
    leading_vbs_jet_gen_type = -999;
    leading_vbs_jet_P = -999;
    leading_vbs_jet_pt = -999;
    leading_vbs_jet_eta = -999;
    leading_vbs_jet_phi = -999;
    trailing_vbs_jet_gen_origin = -999;
    trailing_vbs_jet_gen_type = -999;
    trailing_vbs_jet_P = -999;
    trailing_vbs_jet_pt = -999;
    trailing_vbs_jet_eta = -999;
    trailing_vbs_jet_phi = -999;
    vbs_dijet_mass = -999;
    num_jets = 0;
    num_btags_tight = 0;
}

float ControlTree::dR(float phi1, float phi2, float eta1, float eta2) {
    float dphi = acos(cos(phi2 - phi1));
    float deta = eta2 - eta1;
    return sqrt(dphi*dphi + deta*deta);
}

bool ControlTree::fillBranches() {
    event = nt.event();
    // Get Leptons
    Leptons leptons = getLeptons();
    // Iter Over Leptons 
    Lepton leading_lep;
    Lepton trailing_lep;
    int num_tight_leptons = 0;
    int num_fakable_leptons = 0;
    for (unsigned int i = 0; i < leptons.size(); i++) {     
        Lepton lep = leptons.at(i);
        if (lep.pt() < 10.) {
            continue;
        }
        if (lep.idlevel() == SS::IDtight) {
            // Tight cut on electron rel iso
            if (lep.is_el() && Electron_miniPFRelIso_all().at(lep.idx()) > 0.05) {
                continue;
            }
            // Count and sort tight leptons
            num_tight_leptons++;
            if (lep.pt() > leading_lep.pt()) {
                trailing_lep = leading_lep;
                leading_lep = lep;
            }
            else if (lep.pt() > trailing_lep.pt()) {
                trailing_lep = lep;
            }
        }
        // Count loose&!tight leptons
        if (lep.idlevel() == SS::IDfakable) {
            num_fakable_leptons++;
        }
    }
    // Require dilepton events
    if (num_tight_leptons != 2) { return false; }
    // Same sign
    if (leading_lep.charge() != trailing_lep.charge()) { return false; }
    // Veto surviving events with any loose&!tight leptons
    if (num_fakable_leptons > 0) { return false; }
    // Make pt cuts on leading/trailing leptons
    if (leading_lep.pt() < 25.) { return false; }
    if (trailing_lep.is_el() && trailing_lep.pt() < 25.) { return false; }
    else if (trailing_lep.is_mu() && trailing_lep.pt() < 20.) { return false; }

    // Run b-tagging procedure and find VBS jet candidates
    float loose_working_point;  
    float medium_working_point;
    float tight_working_point;
    if (year() == 2016) {
        loose_working_point = 0.0614;   
        medium_working_point = 0.3093;  
        tight_working_point = 0.7221;   
    }
    else if (year() == 2017) {
        loose_working_point = 0.0521;
        medium_working_point = 0.3033;
        tight_working_point = 0.7489;
    }
    else if (year() == 2018) {
        loose_working_point = 0.0494;
        medium_working_point = 0.2770;
        tight_working_point = 0.7264;
    }
    else {
        throw std::runtime_error("ControlTree::fillBranches: Error - invalid year");
        return false;
    }

    // Iter Over Jets
    int num_tagged_b_tight = 0; 
    Jets good_jets;
    Jets vbs_jet_cands;
    Jet best_bjet;
    Jet next_bjet;
    auto jetLeptonOverlap = [](Jet jet, Lepton lep) {
        unsigned int lep_jet_idx = 999;
        if (lep.is_el()) { lep_jet_idx = Electron_jetIdx().at(lep.idx()); }
        else if (lep.is_mu()) { lep_jet_idx = Muon_jetIdx().at(lep.idx()); }
        else { return false; }
        return (lep_jet_idx == jet.idx());
    };
    for (unsigned int i = 0; i < nJet(); i++) {
        // Require tight jet ID
        if (!(Jet_jetId().at(i) & (1 << 2))) { continue; }
        // Check other jet properties
        Jet jet = Jet(i);
        // bool vbs_jet_candidate = true;
        bool taggable = true;
        bool countable = true;
        // Check jets in forward region
        if (fabs(jet.eta()) > 2.5) { 
            taggable = false; 
            // Fix for 2017 jets with |eta| \in (2.5, 3.2)
            if (year() == 2017 && fabs(jet.eta()) < 3.2 && Jet_puId().at(i) != 7) {
                // vbs_jet_candidate = false;
                countable = false;
            }
        }
        // Check jet pt
        if (jet.pt() <= 30) {
            taggable = false;
            // vbs_jet_candidate = false;
            countable = false;
        }
        // Lepton overlap removal
        if (jetLeptonOverlap(jet, leading_lep) || jetLeptonOverlap(jet, trailing_lep)) {
            taggable = false;
            // vbs_jet_candidate = false;
            countable = false;
        }
        // START: b-tagging procedure
        if (taggable) {
            // Check DeepJet working points
            if (jet.deepjet_disc() >= tight_working_point) {
                // vbs_jet_candidate = false;
                jet.set_is_btagged(true);
                num_tagged_b_tight++;
                if (jet.deepjet_disc() > best_bjet.deepjet_disc()) {
                    next_bjet = best_bjet;
                    best_bjet = jet;
                }
                else if (jet.deepjet_disc() > next_bjet.deepjet_disc()) {
                    next_bjet = jet;
                }
            }
        }
        // END: b-tagging procedure
        if (countable) { 
            // if (vbs_jet_candidate) { vbs_jet_cands.push_back(jet); }
            good_jets.push_back(jet); 
        }
    }

    // Veto events with < 2 btags
    if (num_tagged_b_tight < 2) {
        return false;
    }

    for (unsigned int i = 0; i < good_jets.size(); i++) {
        Jet jet = good_jets.at(i);
        if (jet.idx() != best_bjet.idx() && jet.idx() != next_bjet.idx()) {
            vbs_jet_cands.push_back(jet);
        }
    }

    // VBS candidate search procedure
    Jet leading_vbs_jet;
    Jet trailing_vbs_jet;
    if (vbs_jet_cands.size() == 0) {
        // Veto these events
        return false;
    }
    else if (vbs_jet_cands.size() == 1) {
        // Veto these events
        return false;
    }
    else if (vbs_jet_cands.size() == 2) {
        Jet jet1 = vbs_jet_cands.at(0);
        Jet jet2 = vbs_jet_cands.at(1);
        // Sort into leading and trailing jets
        if (jet1.pt() > jet2.pt()) {
            leading_vbs_jet = jet1;
            trailing_vbs_jet = jet2;
        }
        else {
            leading_vbs_jet = jet2;
            trailing_vbs_jet = jet1;
        }
    }
    else {
        // Determine if all jets have positive or negative eta
        bool all_eta_gt0 = true;
        bool all_eta_lt0 = true;
        for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
            Jet jet = vbs_jet_cands.at(i);
            if (jet.eta() > 0) {
                all_eta_lt0 = false;
            }
            else if (jet.eta() < 0) {
                all_eta_gt0 = false;
            }
            else {
                all_eta_gt0 = false;
                all_eta_lt0 = false;
            }
        }
        if (all_eta_gt0 || all_eta_lt0) {
            Jet largest_P_jet;
            Jet next_largest_P_jet;
            // Find two jets with largest P
            for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
                Jet jet = vbs_jet_cands.at(i);
                if (jet.p4().P() > largest_P_jet.p4().P()) {
                    next_largest_P_jet = largest_P_jet;
                    largest_P_jet = jet;
                }
                else if (jet.p4().P() > next_largest_P_jet.p4().P()) {
                    next_largest_P_jet = jet;
                }
            }
            // Sort into leading and trailing jets
            if (largest_P_jet.pt() > next_largest_P_jet.pt()) {
                leading_vbs_jet = largest_P_jet;
                trailing_vbs_jet = next_largest_P_jet;
            }
            else {
                leading_vbs_jet = next_largest_P_jet;
                trailing_vbs_jet = largest_P_jet;
            }
        }
        else {
            Jet largest_P_neg_eta_jet;
            Jet largest_P_pos_eta_jet;
            // Find jet with largest P in each eta region (positive, negative)
            for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
                Jet jet = vbs_jet_cands.at(i);
                if (jet.eta() < 0) {
                    if (jet.p4().P() > largest_P_neg_eta_jet.p4().P()) {
                        largest_P_neg_eta_jet = jet;
                    }
                }
                if (jet.eta() > 0) {
                    if (jet.p4().P() > largest_P_pos_eta_jet.p4().P()) {
                        largest_P_pos_eta_jet = jet;
                    }
                }
            }
            // Sort into leading and trailing jets
            if (largest_P_pos_eta_jet.pt() > largest_P_neg_eta_jet.pt()) {
                leading_vbs_jet = largest_P_pos_eta_jet;
                trailing_vbs_jet = largest_P_neg_eta_jet;
            }
            else {
                leading_vbs_jet = largest_P_neg_eta_jet;
                trailing_vbs_jet = largest_P_pos_eta_jet;
            }
        }
    }

    // Veto events where VBS jets have no gen jet match
    if (Jet_genJetIdx().at(leading_vbs_jet.idx()) < 0) { return false; }
    if (Jet_genJetIdx().at(trailing_vbs_jet.idx()) < 0) { return false; }

    // Event
    num_pvs = PV_npvsGood();
    met = MET_pt();
    ht = 0.; // Set in loop over good jets below

    // Leptons
    auto getGenLepMotherID = [](Lepton lep) {
        // Get gen particle index
        int gen_idx = -999;
        if (isData()) { return -999; }
        else if (lep.is_el()) { gen_idx = Electron_genPartIdx().at(lep.idx()); }
        else if (lep.is_mu()) { gen_idx = Muon_genPartIdx().at(lep.idx()); }
        // Check quality
        if (gen_idx < 0) { return 0; }
        // Get gen mother PDG ID
        int gen_mother_idx = gen_idx;
        for (unsigned int i = 0; i < 5; i++) {
            gen_mother_idx = GenPart_genPartIdxMother().at(gen_mother_idx);
            if (gen_mother_idx < 0) { return 0; }
            gen_mother_id = GenPart_pdgId().at(gen_mother_idx);
            if (gen_mother_id != lep.id()) { return gen_mother_id; }
        }
        return 0;
    };
    leading_lep_id = leading_lep.id();
    leading_lep_pt = leading_lep.pt();
    leading_lep_eta = leading_lep.eta();
    leading_lep_phi = leading_lep.phi();
    leading_lep_gen_mother_id = getGenLepMotherID(leading_lep);
    trailing_lep_id = trailing_lep.id();
    trailing_lep_pt = trailing_lep.pt();
    trailing_lep_eta = trailing_lep.eta();
    trailing_lep_phi = trailing_lep.phi();
    trailing_lep_gen_mother_id = getGenLepMotherID(trailing_lep);
    dilep_type = leading_lep.id()*trailing_lep.id();
    dilep_mass = (leading_lep.p4() + trailing_lep.p4()).M();

    // Loop over gen particles
    GenParticles interesting_quarks;
    for (unsigned int i = 0; i < nGenPart(); i++) {
        GenParticle genpart = GenParticle(i);
        if (genpart.id() < 7 && genpart.status() == 23) {
            interesting_quarks.push_back(genpart);
        }
    }

    // Jets
    auto getGenJetType = [this](Jet jet, GenParticles interesting_quarks) {
        for (unsigned int i = 0; i < interesting_quarks.size(); i++) {
            GenParticle genquark = interesting_quarks.at(i);
            // dR match to gen particle
            float genquark_jet_dR = dR(
                genquark.phi(), 
                jet.phi(),
                genquark.eta(), 
                jet.eta()
            );
            if (genquark_jet_dR < 0.4) {
                int genmother_id = GenPart_pdgId().at(genquark.mother_idx());
                if (abs(genquark.id()) == 5 && abs(genmother_id) == 6) {
                    return 1; // b from t
                }
                if (abs(genmother_id) == 24) {
                    return 2; // q from W
                }
            }
        }
        return 0; // other
    };
    leading_vbs_jet_gen_origin = leading_vbs_jet.parton_flavor();
    leading_vbs_jet_gen_type = getGenJetType(leading_vbs_jet, interesting_quarks);
    leading_vbs_jet_P = leading_vbs_jet.p4().P();
    leading_vbs_jet_pt = leading_vbs_jet.pt();
    leading_vbs_jet_eta = leading_vbs_jet.eta();
    leading_vbs_jet_phi = leading_vbs_jet.phi();
    trailing_vbs_jet_gen_origin = trailing_vbs_jet.parton_flavor();
    trailing_vbs_jet_gen_type = getGenJetType(trailing_vbs_jet, interesting_quarks);
    trailing_vbs_jet_P = trailing_vbs_jet.p4().P();
    trailing_vbs_jet_pt = trailing_vbs_jet.pt();
    trailing_vbs_jet_eta = trailing_vbs_jet.eta();
    trailing_vbs_jet_phi = trailing_vbs_jet.phi();
    vbs_dijet_mass = (leading_vbs_jet.p4() + trailing_vbs_jet.p4()).M();
    for (unsigned int i = 0; i < good_jets.size(); i++) {
        ht += good_jets[i].pt();
    }
    num_jets = good_jets.size();
    num_btags_tight = num_tagged_b_tight;

    fillTTree();    
    return true;
}

void ControlTree::trackTH1F(TH1F* new_hist) {
    th1fs.push_back(new_hist);
    return;
}

void ControlTree::fillTTree() {
    ttree->Fill();
    return;
}

void ControlTree::writeTFile() {
    tfile->cd();
    ttree->Write();
    for (unsigned int i = 0; i < th1fs.size(); i++) {
        th1fs.at(i)->Write();
    }
    tfile->Close();
    return;
}
