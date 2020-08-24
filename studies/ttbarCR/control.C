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
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.h"
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.cc"
// Header
#include "control.h"
#include "scalefactors.C"


using namespace std;
using namespace tas;

ControlTree::ControlTree(TFile* new_tfile) {
	// TTree and TFile
    ttree = new TTree("tree", "tree");
    tfile = new_tfile;
    // Branches
	b_met = ttree->Branch("met", &met, "met/F");
	b_leading_lep_id = ttree->Branch("leading_lep_id", &leading_lep_id, "leading_lep_id/I");
	b_leading_lep_pt = ttree->Branch("leading_lep_pt", &leading_lep_pt, "leading_lep_pt/F");
	b_leading_lep_eta = ttree->Branch("leading_lep_eta", &leading_lep_eta, "leading_lep_eta/F");
	b_leading_lep_phi = ttree->Branch("leading_lep_phi", &leading_lep_phi, "leading_lep_phi/F");
	b_trailing_lep_id = ttree->Branch("trailing_lep_id", &trailing_lep_id, "trailing_lep_id/I");
	b_trailing_lep_pt = ttree->Branch("trailing_lep_pt", &trailing_lep_pt, "trailing_lep_pt/F");
	b_trailing_lep_eta = ttree->Branch("trailing_lep_eta", &trailing_lep_eta, "trailing_lep_eta/F");
	b_trailing_lep_phi = ttree->Branch("trailing_lep_phi", &trailing_lep_phi, "trailing_lep_phi/F");
	b_dilep_mass = ttree->Branch("dilep_mass", &dilep_mass, "dilep_mass/F");
	b_leading_jet_mc_origin = ttree->Branch("leading_jet_mc_origin", 
                                            &leading_jet_mc_origin, 
                                            "leading_jet_mc_origin/I");
	b_leading_jet_pt = ttree->Branch("leading_jet_pt", &leading_jet_pt, "leading_jet_pt/F");
	b_leading_jet_eta = ttree->Branch("leading_jet_eta", &leading_jet_eta, "leading_jet_eta/F");
	b_leading_jet_phi = ttree->Branch("leading_jet_phi", &leading_jet_phi, "leading_jet_phi/F");
	b_trailing_jet_mc_origin = ttree->Branch("trailing_jet_mc_origin", 
                                             &trailing_jet_mc_origin, 
                                             "trailing_jet_mc_origin/I");
	b_trailing_jet_pt = ttree->Branch("trailing_jet_pt", &trailing_jet_pt, "trailing_jet_pt/F");
	b_trailing_jet_eta = ttree->Branch("trailing_jet_eta", &trailing_jet_eta, "trailing_jet_eta/F");
	b_trailing_jet_phi = ttree->Branch("trailing_jet_phi", &trailing_jet_phi, "trailing_jet_phi/F");
	b_dijet_mass = ttree->Branch("dijet_mass", &dijet_mass, "dijet_mass/F");
	b_num_jets = ttree->Branch("num_jets", &num_jets, "num_jets/F");
	b_num_btags_tight = ttree->Branch("num_btags_tight", &num_btags_tight, "num_btags_tight/F");
    b_num_btags_medium = ttree->Branch("num_btags_medium", &num_btags_medium, "num_btags_medium/F");
    b_num_btags_loose = ttree->Branch("num_btags_loose", &num_btags_loose, "num_btags_loose/F");
	b_mc_weight = ttree->Branch("mc_weight", &mc_weight, "mc_weight/F");
	b_mc_loose_btag_weight = ttree->Branch("mc_loose_btag_weight", 
                                           &mc_loose_btag_weight, 
                                           "mc_loose_btag_weight/F");
	b_mc_medium_btag_weight = ttree->Branch("mc_medium_btag_weight", 
                                            &mc_medium_btag_weight, 
                                            "mc_medium_btag_weight/F");
	b_mc_tight_btag_weight = ttree->Branch("mc_tight_btag_weight", 
                                           &mc_tight_btag_weight, 
                                           "mc_tight_btag_weight/F");
    if (!isData()) {
        // Calibration objects for b-tagging scale factors
        string csv_path;
        if (year() == 2016) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_2016LegacySF_V1.csv";
        }
        else if (year() == 2017) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_94XSF_V4_B_F.csv";
        }
        else if (year() == 2018) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_102XSF_V3.csv";
        }
        else {
            throw std::runtime_error("ControlTree::INIT: Error - invalid year");
        }
        // CSV object
        deepjet_csv = BTagCalibration("csvv1", csv_path);
        // Loose reader
        deepjet_loose_reader = BTagCalibrationReader(BTagEntry::OP_LOOSE, "central");
        deepjet_loose_reader.load(deepjet_csv, BTagEntry::FLAV_B, "comb");
        // Medium reader
        deepjet_medium_reader = BTagCalibrationReader(BTagEntry::OP_MEDIUM, "central");
        deepjet_medium_reader.load(deepjet_csv, BTagEntry::FLAV_B, "comb");
        // Tight reader
        deepjet_tight_reader = BTagCalibrationReader(BTagEntry::OP_TIGHT, "central");
        deepjet_tight_reader.load(deepjet_csv, BTagEntry::FLAV_B, "comb");
    }
}

void ControlTree::resetBranches() {
	// Reset Branches
	met = -999;
	leading_lep_id = -999;
	leading_lep_pt = -999;
	leading_lep_eta = -999;
	leading_lep_phi = -999;
	trailing_lep_id = -999;
	trailing_lep_pt = -999;
	trailing_lep_eta = -999;
	trailing_lep_phi = -999;
    dilep_mass = -999;
	leading_jet_mc_origin = -999;
	leading_jet_pt = -999;
	leading_jet_eta = -999;
	leading_jet_phi = -999;
	trailing_jet_mc_origin = -999;
	trailing_jet_pt = -999;
	trailing_jet_eta = -999;
	trailing_jet_phi = -999;
	dijet_mass = -999;
	num_jets = -999;
	num_btags_tight = -999;
	num_btags_medium = -999;
	num_btags_loose = -999;
	mc_weight = 1.;
	mc_loose_btag_weight = 1.;
	mc_medium_btag_weight = 1.;
	mc_tight_btag_weight = 1.;
}

int ControlTree::fillBranches() {
	// Get Leptons
	Leptons leptons = getLeptons();
	// Iter Over Leptons 
	int numElec = 0;
	int numMu = 0;
	Lepton elec;
	Lepton mu;
	for (unsigned int i = 0; i < leptons.size(); i++) {		
        Lepton lep = leptons.at(i);
        if (lep.pt() < 10.) {
            continue;
        }
        if(lep.is_el() && lep.idlevel() == SS::IDtight) {
            elec = lep;
            numElec++; 
        }
        else if(lep.is_mu() && lep.idlevel() >= SS::IDfakable) {
            mu = lep;
            numMu++;
        }
	}
    // Require SS, same flavor dilepton event
	if (numElec != 1 || numMu != 1) {
		return 0;
	} 
	if(elec.charge() == mu.charge()) {
		return 0;
	}
    // Sort into leading and trailing leptons
    Lepton leading_lep;
    Lepton trailing_lep;
    if (elec.pt() > mu.pt()) {
        leading_lep = elec;
        trailing_lep = mu;
    }
    else {
        leading_lep = mu;
        trailing_lep = elec;
    }
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
        return 0;
    }
    int num_good_jets = 0;
	int num_tagged_b_loose = 0;	
	int num_tagged_b_medium = 0;
	int num_tagged_b_tight = 0;	
	// Iter Over Jets
    double sf = 1.0; // placeholder for btag sf (MC only)
    vector<VBSJetCand> vbs_jet_cands;
	for (unsigned int i = 0; i < nJet(); i++) {
        bool vbs_jet_candidate = true;
        bool taggable = true;
        bool countable = true;
        // Check if jet is in b-tag acceptance region
		if (fabs(Jet_eta().at(i)) > 2.5) { taggable = false; }
		if (Jet_pt().at(i) < 30) {
            taggable = false;
            vbs_jet_candidate = false;
            countable = false;
        }
        // Lepton overlap removal
        bool elec_overlap = (i == Electron_jetIdx().at(elec.idx()));
        bool muon_overlap = (i == Muon_jetIdx().at(mu.idx()));
		if (elec_overlap || muon_overlap) {
            taggable = false;
            vbs_jet_candidate = false;
            countable = false;
        }
        // START: b-tagging procedure
        if (taggable) {
            // Get jet pt for sfs (MC only)
            float jet_pt = (Jet_pt().at(i) < 1000.) ? Jet_pt().at(i) : 999.;
            // Check DeepJet working points
            float deepjet_disc = Jet_btagDeepFlavB().at(i);
            if (deepjet_disc >= loose_working_point) {
                num_tagged_b_loose++;
                if (!isData()) {
                    sf = deepjet_loose_reader.eval(BTagEntry::FLAV_B,
                                                   Jet_eta().at(i),
                                                   jet_pt,
                                                   deepjet_disc);
                    assert (sf > 0.);
                    mc_loose_btag_weight *= sf;
                }
            }
            if (deepjet_disc >= medium_working_point) {
                num_tagged_b_medium++;
                if (!isData()) {
                    sf = deepjet_medium_reader.eval(BTagEntry::FLAV_B,
                                                    Jet_eta().at(i),
                                                    jet_pt,
                                                    deepjet_disc);
                    assert (sf > 0.);
                    mc_medium_btag_weight *= sf;
                }
            }
            if (deepjet_disc >= tight_working_point) {
                vbs_jet_candidate = false;
                num_tagged_b_tight++;
                if (!isData()) {
                    sf = deepjet_tight_reader.eval(BTagEntry::FLAV_B,
                                                   Jet_eta().at(i),
                                                   jet_pt,
                                                   deepjet_disc);
                    assert (sf > 0.);
                    mc_tight_btag_weight *= sf;
                }
            }
        }
        // END: b-tagging procedure
        if (vbs_jet_candidate) { vbs_jet_cands.push_back(VBSJetCand(i)); }
        if (countable) { num_good_jets++; }
	}

    VBSJetCand leading_jet;
    VBSJetCand trailing_jet;
    if (vbs_jet_cands.size() == 0) {
        // Veto these events
        return 0;
    }
    else if (vbs_jet_cands.size() == 1) {
        // Veto these events
        return 0;
    }
    else if (vbs_jet_cands.size() == 2) {
        VBSJetCand jet1 = vbs_jet_cands.at(0);
        VBSJetCand jet2 = vbs_jet_cands.at(1);
        // Sort into leading and trailing jets
        if (jet1.pt() > jet2.pt()) {
            leading_jet = jet1;
            trailing_jet = jet2;
        }
        else {
            leading_jet = jet2;
            trailing_jet = jet1;
        }
    }
    else {
        // Determine if all jets have positive or negative eta
        bool all_eta_gt0 = true;
        bool all_eta_lt0 = true;
        for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
            VBSJetCand jet = vbs_jet_cands.at(i);
            if (jet.eta() > 0) {
                all_eta_lt0 = false;
            }
            else if (jet.eta() < 0) {
                all_eta_gt0 = false;
            }
        }
        if (all_eta_gt0 || all_eta_lt0) {
            VBSJetCand largest_P_jet;
            VBSJetCand next_largest_P_jet;
            // Find two jets with largest P
            for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
                VBSJetCand jet = vbs_jet_cands.at(i);
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
                leading_jet = largest_P_jet;
                trailing_jet = next_largest_P_jet;
            }
            else {
                leading_jet = next_largest_P_jet;
                trailing_jet = largest_P_jet;
            }
        }
        else {
            VBSJetCand largest_P_neg_eta_jet;
            VBSJetCand largest_P_pos_eta_jet;
            // Find jet with largest P in each eta region (positive, negative)
            for (unsigned int i = 0; i < vbs_jet_cands.size(); i++) {
                VBSJetCand jet = vbs_jet_cands.at(i);
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
                leading_jet = largest_P_pos_eta_jet;
                trailing_jet = largest_P_neg_eta_jet;
            }
            else {
                leading_jet = largest_P_neg_eta_jet;
                trailing_jet = largest_P_pos_eta_jet;
            }
        }
    }

	// Assign branch values
	met = MET_pt();
	leading_lep_id = leading_lep.id();
	leading_lep_pt = leading_lep.pt();
	leading_lep_eta = leading_lep.eta();
	leading_lep_phi = leading_lep.phi();
	trailing_lep_id = trailing_lep.id();
	trailing_lep_pt = trailing_lep.pt();
	trailing_lep_eta = trailing_lep.eta();
	trailing_lep_phi = trailing_lep.phi();
    dilep_mass = (elec.p4()+mu.p4()).M();
	leading_jet_mc_origin = leading_jet.mc_origin();
	leading_jet_pt = leading_jet.pt();
	leading_jet_eta = leading_jet.eta();
	leading_jet_phi = leading_jet.phi();
	trailing_jet_mc_origin = trailing_jet.mc_origin();
	trailing_jet_pt = trailing_jet.pt();
	trailing_jet_eta = trailing_jet.eta();
	trailing_jet_phi = trailing_jet.phi();
    dijet_mass = (leading_jet.p4()+trailing_jet.p4()).M();
	num_jets = num_good_jets;
	num_btags_tight = num_tagged_b_tight;
	num_btags_medium = num_tagged_b_medium;
	num_btags_loose = num_tagged_b_loose;
	
	// Calculate MC weight
	if (!isData()) {
        float elecID_w = elecIDScaleFactors(elec.pt(), elec.eta());
        float elecReco_w = elecRecoScaleFactors(elec.pt(), elec.eta());
        float muID_w = muonMediumIDScaleFactors(mu.pt(), mu.eta());
        float muIso_w = muonLooseIsoMediumIDScaleFactors(mu.pt(), mu.eta());
		mc_weight = elecID_w * elecReco_w * muID_w * muIso_w;
	}
	fillTTree();	
	return 0;
}

void ControlTree::fillTTree() {
    ttree->Fill();
	return;
}

void ControlTree::writeTFile() {
    tfile->cd();
    ttree->Write();
    tfile->Close();
	return;
}
