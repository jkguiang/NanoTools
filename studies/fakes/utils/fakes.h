#ifndef FAKES_H
#define FAKES_H

enum MonolepID {
    no_lepton = -1,
    single_el = 0,
    single_mu = 1
};

class FakesTree {

    /**
     * Object-level (lepton-by-lepton) TTree for storing -fake_ lepton
     * information
     */
    
    /* Initialize branches */
    // Event level
    TBranch* b_event;
    TBranch* b_ht;
    TBranch* b_met;
    // Object level
    TBranch* b_lepton_id;
    TBranch* b_lepton_pt;
    TBranch* b_lepton_eta;
    TBranch* b_lepton_phi;
    TBranch* b_lepton_mass;
    TBranch* b_is_tight;
    TBranch* b_is_loose;

    public:

        // TTree
        TTree *t;
        // Target file
        TFile* f;

        /* Initialize branch values */
        // Event level
        int event;
        float ht;
        float met;
        // Object level
        int lepton_id;
        float lepton_pt;
        float lepton_eta;
        float lepton_phi;
        float lepton_mass;
        int is_tight;
        int is_loose;
        // Other
        int year;

        /* Methods */
        // Constructor
        FakesTree(int year);
        // Reset variables
        void reset(bool obj_level_only);
        // Fillers
        int fillBranches();
        // Other
        void saveLepton(int lepton_id, int lepton_index);
        MonolepID whichGenMonolep();

};

#endif
