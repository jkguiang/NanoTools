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
#include "./NanoCORE/Nano.h"
#include "./NanoCORE/Config.h"
#include "./NanoCORE/SSSelections.h"
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.h"
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.cc"
// Header
#include "control.h"
#include "scalefactors.C"


using namespace std;
using namespace tas;

ControlTree::ControlTree(TFile* new_tfile, bool is_data) {
	// TTree and TFile
    ttree = new TTree("tree", "tree");
    tfile = new_tfile;
    // Branches
	b_met = ttree->Branch("met", &met, "met/F");
	b_elec_pt = ttree->Branch("elec_pt", &elec_pt, "elec_pt/F");
	b_elec_eta = ttree->Branch("elec_eta", &elec_eta, "elec_eta/F");
	b_elec_phi = ttree->Branch("elec_phi", &elec_phi, "elec_phi/F");
	b_mu_pt = ttree->Branch("mu_pt", &mu_pt, "mu_pt/F");
	b_mu_eta = ttree->Branch("mu_eta", &mu_eta, "mu_eta/F");
	b_mu_phi = ttree->Branch("mu_phi", &mu_phi, "mu_phi/F");
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
    if (!is_data) {
        // Calibration objects for b-tagging scale factors
        string csv_path;
        if (gconf.year == 2016) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_2016LegacySF_V1.csv";
        }
        else if (gconf.year == 2017) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_94XSF_V4_B_F.csv";
        }
        else if (gconf.year == 2018) {
            csv_path = "./NanoCORE/Tools/btagsf/csv/DeepJet_102XSF_V3.csv";
        }
        else {
            throw std::runtime_error("ControlTree::Branches: Error - invalid year");
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
	elec_id = -999;
	elec_pt = -999;
	elec_eta = -999;
	elec_phi = -999;
	mu_id = -999;
	mu_pt = -999;
	mu_eta = -999;
	mu_phi = -999;
	num_jets = -999;
	num_btags_tight = -999;
	num_btags_medium = -999;
	num_btags_loose = -999;
	mc_weight = 1.;
	mc_loose_btag_weight = 1.;
	mc_medium_btag_weight = 1.;
	mc_tight_btag_weight = 1.;
}

int ControlTree::fillBranches(bool is_data) {
	// Get Leptons
	Leptons leptons = getLeptons();
	// Iter Over Leptons 
	int numElec = 0;
	int numMu = 0;
	Lepton elec;
	Lepton mu;
	for (unsigned int i = 0; i < leptons.size(); i++) {		
        Lepton lep = leptons[i];
        if (lep.pt() < 25) {
            continue;
        }
        if(lep.is_el() && lep.idlevel() == IDtight) {
            elec = lep;
            numElec++; 
        }
        else if(lep.is_mu() && lep.idlevel() >= IDfakable) {
            mu = lep;
            numMu++;
        }
	}
	if (numElec != 1 || numMu != 1){
		return 0;
	} 
		
	if(elec.charge() == mu.charge()) {
		return 0;
	}
	
    // DeepJet working points
    float loose_working_point;	
    float medium_working_point;
    float tight_working_point;
    // 2016 legacy wps
    if (gconf.year == 2016) {
        loose_working_point = 0.0614;	
        medium_working_point = 0.3093;	
        tight_working_point = 0.7221;	
    }
    else if (gconf.year == 2017) {
        loose_working_point = 0.0521;
        medium_working_point = 0.3033;
        tight_working_point = 0.7489;
    }
    else if (gconf.year == 2018) {
        loose_working_point = 0.0494;
        medium_working_point = 0.2770;
        tight_working_point = 0.7264;
    }
    else {
        throw std::runtime_error("ControlTree::Branches: Error - invalid year");
        return 0;
    }
	int num_tagged_b_loose = 0;	
	int num_tagged_b_medium = 0;	
	int num_tagged_b_tight = 0;	
	// Iter Over Jets
    double sf = 1.0; // placeholder for btag sf (MC only)
	for (unsigned int i = 0; i < nJet(); i++) {
        // Check if jet is in b-tag acceptance region
		if (fabs(Jet_eta().at(i)) > 2.5) continue;
		if (Jet_pt().at(i) < 30) continue;
        // Lepton overlap removal
        bool elec_overlap = (i == Electron_jetIdx().at(elec.idx()));
        bool muon_overlap = (i == Muon_jetIdx().at(mu.idx()));
		if (elec_overlap || muon_overlap) continue;
        // Get jet pt for sfs (MC only)
        float jet_pt = (Jet_pt().at(i) < 1000.) ? Jet_pt().at(i) : 999.;
        // Check DeepJet working points
        float deepjet_disc = Jet_btagDeepFlavB().at(i);
		if (deepjet_disc >= loose_working_point) {
			num_tagged_b_loose++;
            if (!is_data) {
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
            if (!is_data) {
                sf = deepjet_medium_reader.eval(BTagEntry::FLAV_B,
                                                Jet_eta().at(i),
                                                jet_pt,
                                                deepjet_disc);
                assert (sf > 0.);
                mc_medium_btag_weight *= sf;
            }
		}
		if (deepjet_disc >= tight_working_point) {
			num_tagged_b_tight++;
            if (!is_data) {
                sf = deepjet_tight_reader.eval(BTagEntry::FLAV_B,
                                               Jet_eta().at(i),
                                               jet_pt,
                                               deepjet_disc);
                assert (sf > 0.);
                mc_tight_btag_weight *= sf;
            }
		}
	}

	// Assign Branch Values:
	met = MET_pt();
	elec_id = elec.id();
	elec_pt = elec.pt();
	elec_eta = elec.eta();
	elec_phi = elec.phi();
	mu_id = mu.id();
	mu_pt = mu.pt();
	mu_eta = mu.eta();
	mu_phi = mu.phi();
	num_jets = nJet();
	num_btags_tight = num_tagged_b_tight;
	num_btags_medium = num_tagged_b_medium;
	num_btags_loose = num_tagged_b_loose;
	
	// calc MC weight
	if (!is_data) {
        float elecID_w = elecIDScaleFactors(elec_pt, elec_eta);
        float elecReco_w = elecRecoScaleFactors(elec_pt, elec_eta);
        float muID_w = muonMediumIDScaleFactors(mu_pt, mu_eta);
        float muIso_w = muonLooseIsoMediumIDScaleFactors(mu_pt, mu_eta);
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
