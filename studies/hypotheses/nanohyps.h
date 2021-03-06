#ifndef NANOHYPS_H
#define NANOHYPS_H

class NanoHypsTree {

    /**
     * TTree automatically generated by mktree
     */
    
    /* Initialize branches */
    TBranch* b_leader_eta;
    TBranch* b_lagger_isTriggerSafe;
    TBranch* b_leader_isTriggerSafe;
    TBranch* b_lagger_id;
    TBranch* b_leader_id;
    TBranch* b_lagger_eta;
    TBranch* b_hyp_class;
    TBranch* b_leader_pt;
    TBranch* b_lagger_pt;
    TBranch* b_is_dilepton_event;
    TBranch* b_event;
    TBranch* b_leader_is_loose;
    TBranch* b_lagger_is_loose;
    TBranch* b_leader_is_tight;
    TBranch* b_lagger_is_tight;

    public:

        // TTree
        TTree *t;

        /* Initialize branch values */
        float leader_eta;
        bool lagger_isTriggerSafe;
        bool leader_isTriggerSafe;
        int lagger_id;
        int leader_id;
        bool leader_is_loose;
        bool lagger_is_loose;
        bool leader_is_tight;
        bool lagger_is_tight;
        float lagger_eta;
        int hyp_class;
        float leader_pt;
        float lagger_pt;
        bool is_dilepton_event;
        int event;

        /* Methods */
        // Constructor
        NanoHypsTree();
        // Reset variables
        void reset();
        // Fillers
        int fillBranches();
        // Other
};

#endif
    
