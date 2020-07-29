#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.h"

#ifndef CONTROL_H
#define CONTROL_H

class ControlTree{

	// Initialize Branches

	TBranch* b_met;
	TBranch* b_elec_id;
	TBranch* b_elec_pt;
	TBranch* b_elec_eta;
	TBranch* b_elec_phi;
	TBranch* b_mu_id;
	TBranch* b_mu_pt;
	TBranch* b_mu_eta;
	TBranch* b_mu_phi;
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
		float elec_id;
		float elec_pt;
		float elec_eta;
		float elec_phi;
		float mu_id;
		float mu_pt;
		float mu_eta;
		float mu_phi;
		float num_jets;
		float num_btags_tight;
		float num_btags_medium;
		float num_btags_loose;
		float mc_weight;		
		float mc_loose_btag_weight;		
		float mc_medium_btag_weight;		
		float mc_tight_btag_weight;		
		//Constructor
		ControlTree(TFile* new_tfile, bool is_data);
		
		//Methods
		void resetBranches();
		int fillBranches(int n_events,float xsec, float int_lumi, bool is_data);

		void fillTTree();
		void writeTFile();
};

#endif
