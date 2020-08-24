#include "./NanoCORE/Nano.h"
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.h"

#ifndef CONTROL_H
#define CONTROL_H

struct VBSJetCand {
    // Constructor
    VBSJetCand(unsigned int idx = 0) : idx_(idx) {
        pt_ = nt.Jet_pt().at(idx);
        eta_ = nt.Jet_eta().at(idx);
        phi_ = nt.Jet_phi().at(idx);
        mass_ = nt.Jet_mass().at(idx);
        p4_ = nt.Jet_p4().at(idx);
        mc_origin_ = -999;
        if (!nt.isData()) {
            mc_origin_ = nt.Jet_partonFlavour().at(idx);
        }
    }
    // Accessors
    LorentzVector p4() { return p4_; }
    float pt() { return pt_; }
    float eta() { return eta_; }
    float phi() { return phi_; }
    float mass() { return mass_; }
    unsigned int idx() { return idx_; }
    int mc_origin() { return mc_origin_; }
    private:
        // Attributes
        LorentzVector p4_;
        float pt_;
        float eta_;
        float phi_;
        float mass_;
        unsigned int idx_;
        int mc_origin_ = -999;
};

class ControlTree {

	// Initialize Branches
	TBranch* b_met;
	TBranch* b_leading_lep_id;
	TBranch* b_leading_lep_pt;
	TBranch* b_leading_lep_eta;
	TBranch* b_leading_lep_phi;
	TBranch* b_trailing_lep_id;
	TBranch* b_trailing_lep_pt;
	TBranch* b_trailing_lep_eta;
	TBranch* b_trailing_lep_phi;
	TBranch* b_dilep_mass;
	TBranch* b_leading_jet_mc_origin;
	TBranch* b_leading_jet_pt;
	TBranch* b_leading_jet_eta;
	TBranch* b_leading_jet_phi;
	TBranch* b_trailing_jet_mc_origin;
	TBranch* b_trailing_jet_pt;
	TBranch* b_trailing_jet_eta;
	TBranch* b_trailing_jet_phi;
	TBranch* b_dijet_mass;
	TBranch* b_num_jets;
	TBranch* b_num_btags_tight;
	TBranch* b_num_btags_medium;
	TBranch* b_num_btags_loose;
	TBranch* b_mc_weight;
	TBranch* b_mc_loose_btag_weight;
	TBranch* b_mc_medium_btag_weight;
	TBranch* b_mc_tight_btag_weight;

	public:
		
		TTree* ttree;
        TFile* tfile;

        BTagCalibration deepjet_csv;
        BTagCalibrationReader deepjet_loose_reader;
        BTagCalibrationReader deepjet_medium_reader;
        BTagCalibrationReader deepjet_tight_reader;

		float met;
		int leading_lep_id;
		float leading_lep_pt;
		float leading_lep_eta;
		float leading_lep_phi;
		int trailing_lep_id;
		float trailing_lep_pt;
		float trailing_lep_eta;
		float trailing_lep_phi;
		float dilep_mass;
		int leading_jet_mc_origin;
		float leading_jet_pt;
		float leading_jet_eta;
		float leading_jet_phi;
		int trailing_jet_mc_origin;
		float trailing_jet_pt;
		float trailing_jet_eta;
		float trailing_jet_phi;
		float dijet_mass;
		float num_jets;
		float num_btags_tight;
		float num_btags_medium;
		float num_btags_loose;
		float mc_weight;		
		float mc_loose_btag_weight;		
		float mc_medium_btag_weight;		
		float mc_tight_btag_weight;		
		//Constructor
		ControlTree(TFile* new_tfile);
		
		//Methods
		void resetBranches();
		int fillBranches();
		void fillTTree();
		void writeTFile();
};

#endif
