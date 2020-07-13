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

	public:
		
		TTree* ttree;
        TFile* tfile;

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
		//Constructor
		ControlTree(TFile* new_tfile);
		
		//Methods
		void resetBranches();
		int fillBranches(int nEvents,float xsec, bool isData);

		void fillTTree();
		void writeTFile();
};

#endif
