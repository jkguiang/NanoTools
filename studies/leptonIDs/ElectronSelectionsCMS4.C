#include "./CORE/CMS4.h"
#include "./CORE/ElectronSelections.h"

using namespace std;
using namespace tas;

// 2016
bool isGoodElectron(unsigned int elidx) {
    // Preselection
    if (els_p4().at(elidx).pt() < 10.) return false;

    /* Calls electronID(elidx, SS_medium_v5), which has _many_ nested IDs
     * which have been flattened below
     */

    // Args
    int elIdx = elidx;
    id_level_t id_level = SS_medium_v6;

    /* --> SS_veto_noiso_v5 (checked by SS_fo_noiso_v5) <-- 
     *
     */
    if (!isTriggerSafenoIso_v1(elIdx)) return false;
    // if (fabs(els_etaSC().at(elIdx)) > 2.5) return false; Checked in SS_medium_noiso_v5
    // if (els_conv_vtx_flag().at(elIdx)) return false; Checked in SS_medium_noiso_v5
    if (els_exp_innerlayers().at(elIdx) > 1) return false;
    // if (fabs(els_dxyPV().at(elIdx)) >= 0.05) return false; Overruled by SS_fo_noiso_v5
    // if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; Checked in SS_medium_noiso_v5
    if (globalEleMVAreader==0) {
        cout << "readMVA=0, please create and init it (e.g with createAndInitMVA function)" << endl;
        return false;
    }
    if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_veto_noiso_v5) == 0) return false;

    /* --> SS_fo_noiso_v5 (checked by SS_medium_noiso_v5) <-- 
     *
     */
    // if (globalEleMVAreader==0) {
    //     cout << "readMVA=0, please create and init it (e.g with createAndInitMVA function)" << endl;
    //     return false;
    // } Already checked in SS_veto_noiso_v5
    // if (fabs(els_etaSC().at(elIdx)) > 2.5) return false; Checked in SS_medium_noiso_v5
    // if (els_conv_vtx_flag().at(elIdx)) return false; Checked in SS_medium_noiso_v5
    // if (els_exp_innerlayers().at(elIdx) > 0) return false; Checked in SS_medium_noiso_v5
    // if (threeChargeAgree(elIdx)==0) return false; Checked in SS_medium_noiso_v5
    if (fabs(els_dxyPV().at(elIdx)) > 0.05) return false;
    // if (fabs(els_ip3d().at(elIdx))/els_ip3derr().at(elIdx) >= 4) return false; Checked in SS_medium_noiso_v5
    // if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; Checked in SS_medium_noiso_v5
    if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_fo_noiso_v5) == 0) return false; Checked in SS_medium_noiso_v5

    /* --> SS_medium_noiso_v5 (checked by SS_medium_v5) <-- 
     * 
     */
    // if (globalEleMVAreader==0) {
    //     cout << "readMVA=0, please create and init it (e.g with createAndInitMVA function)" << endl;
    //     return false;
    // } Already checked in SS_veto_noiso_v5
    if (fabs(els_etaSC().at(elIdx)) > 2.5) return false;
    if (els_conv_vtx_flag().at(elIdx)) return false;
    // if (els_exp_innerlayers().at(elIdx) > 0) return false; More tightly checked in SS_veto_noiso_v5
    if (threeChargeAgree(elIdx)==0) return false;
    if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false;
    if (fabs(els_ip3d().at(elIdx))/els_ip3derr().at(elIdx) >= 4) return false;
    if (globalEleMVAreader->passesElectronMVAid(elIdx, SS_medium_noiso_v5) == 0) return false;
    
    /* --> SS_medium_v5 <-- 
     *
     */
    return passMultiIso(11, elIdx, gconf.multiiso_el_minireliso, gconf.multiiso_el_ptratio, gconf.multiiso_el_ptrel, gconf.ea_version, 2);
}
