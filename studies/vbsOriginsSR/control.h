#include <vector>
#include "./NanoCORE/Nano.h"
#include "./NanoCORE/SSSelections.h"
#include "./NanoCORE/Tools/btagsf/BTagCalibrationStandalone.h"

#ifndef CONTROL_H
#define CONTROL_H

struct Jet {
    // Constructor
    Jet(unsigned int idx = 999) : idx_(idx) {
        if (idx != 999) {
            pt_ = nt.Jet_pt().at(idx);
            eta_ = nt.Jet_eta().at(idx);
            phi_ = nt.Jet_phi().at(idx);
            mass_ = nt.Jet_mass().at(idx);
            p4_ = nt.Jet_p4().at(idx);
            parton_flavor_ = -999;
            if (!nt.isData()) {
                parton_flavor_ = nt.Jet_partonFlavour().at(idx);
            }
            deepjet_disc_ = nt.Jet_btagDeepFlavB().at(idx);
        }
    }
    // Accessors
    LorentzVector p4() { return p4_; }
    float pt() { return pt_; }
    float eta() { return eta_; }
    float phi() { return phi_; }
    float mass() { return mass_; }
    unsigned int idx() { return idx_; }
    int parton_flavor() { return parton_flavor_; }
    float deepjet_disc() { return deepjet_disc_; }
    void set_is_btagged(bool is_btagged) { is_btagged_ = is_btagged; }
    bool is_btagged() { return is_btagged_; }
    private:
        // Attributes
        LorentzVector p4_;
        float pt_ = -999;
        float eta_ = -999;
        float phi_ = -999;
        float mass_ = -999;
        unsigned int idx_ = 999;
        int parton_flavor_ = -999;
        float deepjet_disc_ = -999;
        bool is_btagged_ = false;
};

typedef vector<Jet> Jets;

class ControlTree {

    // Event
    TBranch* b_event;
    TBranch* b_num_pvs;
    TBranch* b_met;
    TBranch* b_ht;
    // Leptons
    TBranch* b_leading_lep_id;
    TBranch* b_leading_lep_pt;
    TBranch* b_leading_lep_eta;
    TBranch* b_leading_lep_phi;
    TBranch* b_leading_lep_gen_mother_id;
    TBranch* b_trailing_lep_id;
    TBranch* b_trailing_lep_pt;
    TBranch* b_trailing_lep_eta;
    TBranch* b_trailing_lep_phi;
    TBranch* b_trailing_lep_gen_mother_id;
    TBranch* b_dilep_type;
    TBranch* b_dilep_mass;
    // Jets
    TBranch* b_leading_vbs_jet_gen_origin;
    TBranch* b_leading_vbs_jet_gen_type;
    TBranch* b_leading_vbs_jet_pt;
    TBranch* b_leading_vbs_jet_eta;
    TBranch* b_leading_vbs_jet_phi;
    TBranch* b_trailing_vbs_jet_gen_origin;
    TBranch* b_trailing_vbs_jet_gen_type;
    TBranch* b_trailing_vbs_jet_pt;
    TBranch* b_trailing_vbs_jet_eta;
    TBranch* b_trailing_vbs_jet_phi;
    TBranch* b_vbs_dijet_mass;
    TBranch* b_num_jets;
    TBranch* b_num_btags_tight;

    public:
        // ROOT I/O 
        TTree* ttree;
        TFile* tfile;
        vector<TH1F*> th1fs;
        // Event
        int event;
        int num_pvs;
        float met;
        float ht;
        // Leptons
        int leading_lep_id;
        float leading_lep_pt;
        float leading_lep_eta;
        float leading_lep_phi;
        int leading_lep_gen_mother_id;
        int trailing_lep_id;
        float trailing_lep_pt;
        float trailing_lep_eta;
        float trailing_lep_phi;
        int trailing_lep_gen_mother_id;
        int dilep_type;
        float dilep_mass;
        // Jets
        int leading_vbs_jet_gen_origin;
        int leading_vbs_jet_gen_type;
        float leading_vbs_jet_P;
        float leading_vbs_jet_pt;
        float leading_vbs_jet_eta;
        float leading_vbs_jet_phi;
        int trailing_vbs_jet_gen_origin;
        int trailing_vbs_jet_gen_type;
        float trailing_vbs_jet_P;
        float trailing_vbs_jet_pt;
        float trailing_vbs_jet_eta;
        float trailing_vbs_jet_phi;
        float vbs_dijet_mass;
        int num_jets;
        int num_btags_tight;

        //Constructor
        ControlTree(TFile* new_tfile);
        //Methods
        void resetBranches();
        float dR(float phi1, float phi2, float eta1, float eta2);
        bool fillBranches();
        void trackTH1F(TH1F* new_hist);
        void fillTTree();
        void writeTFile();
};

#endif
