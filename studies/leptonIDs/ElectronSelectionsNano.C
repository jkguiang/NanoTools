#include <vector>

#include "TString.h"
#include "./NanoCORE/Nano.h"
#include "./NanoCORE/ElectronSelections.h"

using namespace std;
using namespace tas;

struct Counters {
    vector<int> counts;
    vector<TString> names;
};

// 2016
Counters isGoodElectron(unsigned int idx) {
    Counters c;
    // CMS4: if (els_p4().at(idx).pt() < 10.) return false;
    c.names.push_back("pt < 10");
    if (Electron_pt().at(idx) < 10.) {
        c.counts.push_back(0);
    }
    else {
        c.counts.push_back(1);
    }
    // CMS4: if (!isTriggerSafenoIso_v1(elIdx)) return false;
    c.names.push_back("isTriggerSafe_noIso_v3");
    if (!isTriggerSafe_noIso_v3(idx)) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (els_exp_innerlayers().at(elIdx) > 1) return false;
    c.names.push_back("lostHits > 1");
    if (int(Electron_lostHits().at(idx) > 1)) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_veto_noiso_v5) == 0) return false;
    c.names.push_back("MVA(2016_veto_noIso_v5)");
    if (!passesElectronMVA(idx, "2016_veto_noIso_v5")) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (fabs(els_dxyPV().at(elIdx)) >= 0.05) return false;
    c.names.push_back("dxy > 0.05");
    if (fabs(Electron_dxy().at(idx)) > 0.05) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_fo_noiso_v5) == 0) return false; Checked in SS_medium_noiso_v5
    c.names.push_back("MVA(2016_fo_noIso_v5)");
    if (!passesElectronMVA(idx, "2016_fo_noIso_v5")) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (fabs(els_etaSC().at(elIdx)) > 2.5) return false;
    c.names.push_back("etaSC > 2.5");
    if (fabs(Electron_eta().at(idx) + Electron_deltaEtaSC().at(idx)) > 2.5) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (els_conv_vtx_flag().at(elIdx)) return false;
    c.names.push_back("convVeto == false");
    if (!Electron_convVeto().at(idx)) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (threeChargeAgree(elIdx)==0) return false;
    c.names.push_back("tightCharge == 0 || tightCharge == 1");
    if (Electron_tightCharge().at(idx) == 0 || Electron_tightCharge().at(idx) == 1) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false;
    c.names.push_back("dz >= 0.01");
    if (Electron_dz().at(idx) >= 0.1) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (fabs(els_ip3d().at(elIdx))/els_ip3derr().at(elIdx) >= 4) return false;
    c.names.push_back("|sip3d| >= 4");
    if (fabs(Electron_sip3d().at(idx)) >= 4) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_medium_noiso_v5) == 0) return false;
    c.names.push_back("MVA(2016_medium_noIso_v5)");
    if (!passesElectronMVA(idx, "2016_medium_noIso_v5")) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }
    // CMS4: return passMultiIso(11, elIdx, gconf.multiiso_el_minireliso, gconf.multiiso_el_ptratio, gconf.multiiso_el_ptrel, gconf.ea_version, 2);
    c.names.push_back("passes iso");
    if (!passElectronIso(0.12, 0.80, 7.2, idx)) {
        c.counts.push_back(0);
    }
    else {
        if (c.counts.back() == 1) {
            c.counts.push_back(1);
        }
        else {
            c.counts.push_back(0);
        }
    }

    return c;
}

bool isFakableElectron(unsigned int idx) {
    return true;
}

bool isVetoElectron(unsigned int idx) {
    return true;
}
