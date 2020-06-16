#include "ElectronSelections.h"
#include "IsolationTools.h"

using namespace tas;

bool verboseElectronID(int iel, IDLevel idlevel, int year)
{
    cout << "Starting verbose electronID printout, brace yourself..." << endl;
    switch (idlevel)
    {
        case (IDveto):
            return true;
            break;
        case (IDfakable):
            cout << "START: Is fakable?" << endl;
            cout << "   (Electron_pt()[iel] <= 10) ? " << (Electron_pt()[iel] <= 10) << endl;
            if (Electron_pt()[iel] <= 10)
            {
                return false;
            }
            cout << "   (!isTriggerSafe_noIso_v3(iel)) ? " << (!isTriggerSafe_noIso_v3(iel)) << endl;
            if (!isTriggerSafe_noIso_v3(iel))
            {
                return false;
            }
            cout << "   (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5) ? " <<  (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5) << endl;
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
            {
                return false;
            }
            cout << "   (!Electron_convVeto()[iel]) ? " << (!Electron_convVeto()[iel]) << endl;
            if (!Electron_convVeto()[iel])
            {
                return false;
            }
            cout << "   ((int)(Electron_lostHits()[iel]) > 1) ? " << ((int)(Electron_lostHits()[iel]) > 1) << endl;
            if ((int)(Electron_lostHits()[iel]) > 1)
            {
                return false;
            }
            cout << "   (fabs(Electron_dxy()[iel]) > 0.05) ? " << (fabs(Electron_dxy()[iel]) > 0.05) << endl;
            if (fabs(Electron_dxy()[iel]) > 0.05)
            {
                return false;
            }
            cout << "   (fabs(Electron_dz()[iel]) >= 0.1) ? " << (fabs(Electron_dz()[iel]) >= 0.1) << endl;
            if (fabs(Electron_dz()[iel]) >= 0.1)
            {
                return false;
            }
            cout << "   (!passesElectronMVA(iel, \"2017_veto_noiso\")) ? " << (!passesElectronMVA(iel, "2017_veto_noiso")) << endl;
            if (!passesElectronMVA(iel, "2017_veto_noiso"))
            {
                return false;
            }
            cout << "   ((int)(Electron_lostHits()[iel]) > 0) ? " << ((int)(Electron_lostHits()[iel]) > 0) << endl;
            if ((int)(Electron_lostHits()[iel]) > 0)
            {
                return false;    //SS_innerlayers
            }
            cout << "   (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1) ? " << (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1) << endl;
            if (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1)
            {
                return false;
            }
            cout << "   (fabs(Electron_sip3d()[iel]) >= 4) ? " << (fabs(Electron_sip3d()[iel]) >= 4) << endl;
            if (fabs(Electron_sip3d()[iel]) >= 4)
            {
                return false;
            }
            cout << "   (!passesElectronMVA(iel, \"2017SS_fo_looseMVA_noiso_v6\")) ? " << (!passesElectronMVA(iel, "2017SS_fo_looseMVA_noiso_v6")) << endl;
            if (!passesElectronMVA(iel, "2017SS_fo_looseMVA_noiso_v6"))
            {
                return false;
            }
            cout << "   (Electron_miniPFRelIso_all()[iel] >= 0.4) ? " << (Electron_miniPFRelIso_all()[iel] >= 0.4) << endl;
            if (Electron_miniPFRelIso_all()[iel] >= 0.4)
            {
                return false;
            }
            return true;
            break;
        case (IDtight):
            cout << "START: Is tight?" << endl;
            cout << "   (Electron_pt()[iel] <= 10) ? " << (Electron_pt()[iel] <= 10) << endl;
            if (Electron_pt()[iel] <= 10)
            {
                return false;
            }
            cout << "   !isTriggerSafe_noIso_v3(iel) ? " << (!isTriggerSafe_noIso_v3(iel)) << endl;
            if (!isTriggerSafe_noIso_v3(iel))
            {
                return false;
            }
            cout << "   (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5) ? " << (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5) << endl;
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
            {
                return false;
            }
            cout << "   (!Electron_convVeto()[iel]) ? " << (!Electron_convVeto()[iel]) << endl;
            if (!Electron_convVeto()[iel])
            {
                return false;
            }
            cout << "   ((int)(Electron_lostHits()[iel]) > 1) ? " << ((int)(Electron_lostHits()[iel]) > 1) << endl;
            if ((int)(Electron_lostHits()[iel]) > 1)
            {
                return false;
            }
            cout << "   (fabs(Electron_dxy()[iel]) > 0.05) ? " << (fabs(Electron_dxy()[iel]) > 0.05) << endl;
            if (fabs(Electron_dxy()[iel]) > 0.05)
            {
                return false;
            }
            cout << "   (fabs(Electron_dz()[iel]) >= 0.1) ? " << (fabs(Electron_dz()[iel]) >= 0.1) << endl;
            if (fabs(Electron_dz()[iel]) >= 0.1)
            {
                return false;
            }
            cout << "   !passesElectronMVA(iel, \"2017_veto_noiso\") ? " << (!passesElectronMVA(iel, "2017_veto_noiso")) << endl;
            if (!passesElectronMVA(iel, "2017_veto_noiso"))
            {
                return false;
            }
            cout << "   ((int)(Electron_lostHits()[iel]) > 0) ? " << ((int)(Electron_lostHits()[iel]) > 0) << endl;
            if ((int)(Electron_lostHits()[iel]) > 0)
            {
                return false;    //SS_innerlayers
            }
            cout << "   (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1) ? " << (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1) << endl;
            if (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1)
            {
                return false;
            }
            cout << "   (fabs(Electron_sip3d()[iel]) > 4) ? " << (fabs(Electron_sip3d()[iel]) > 4) << endl;
            if (fabs(Electron_sip3d()[iel]) > 4)
            {
                return false;
            }
            cout << "   (!passesElectronMVA(iel, \"2017_medium\")) ? " << (!passesElectronMVA(iel, "2017_medium")) << endl;
            if (!passesElectronMVA(iel, "2017_medium"))
            {
                return false;
            }
            if (!passElectronIso(0.07, 0.78, 8.0, iel))
            {
                return false;
            }
            return true;
            break;
        default:
            cout << "ElectronSelections.cc: Invalid ID" << endl;
            return false;
            break;
    }
    return false;
}

bool electronID(int iel, IDLevel idlevel, int year)
{
    switch (idlevel)
    {
        case (IDveto):
            // if (Electron_pt()[iel] < 7)
            // {
            //     return false;
            // }
            // if (Electron_miniPFRelIso_all()[iel] > 0.4)
            // {
            //     return false;
            // }
            // if (Electron_convVeto()[iel] == 0)
            // {
            //     return false;
            // }
            // if (Electron_lostHits()[iel] > 1)
            // {
            //     return false;
            // }
            // if (fabs(Electron_dxy()[iel]) > 0.05)
            // {
            //     return false;
            // }
            // if (fabs(Electron_dz()[iel]) >= 0.1)
            // {
            //     return false;
            // }
            // if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
            // {
            //     return false;
            // }
            // if (!passesElectronMVA(iel, "2017_veto_noiso"))
            // {
            //     return false;
            // }
            // if (!isTriggerSafe_noIso_v3(iel))
            // {
            //     return false;
            // }
            return true;
            break;
        case (IDfakable):
            if (Electron_pt()[iel] <= 10)
            {
                return false;
            }
            if (!isTriggerSafe_noIso_v3(iel))
            {
                return false;
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
            {
                return false;
            }
            if (!Electron_convVeto()[iel])
            {
                return false;
            }
            if ((int)(Electron_lostHits()[iel]) > 1)
            {
                return false;
            }
            if (fabs(Electron_dxy()[iel]) > 0.05)
            {
                return false;
            }
            if (fabs(Electron_dz()[iel]) >= 0.1)
            {
                return false;
            }
            if (!passesElectronMVA(iel, "2017_veto_noiso"))
            {
                return false;
            }
            if ((int)(Electron_lostHits()[iel]) > 0)
            {
                return false;    //SS_innerlayers
            }
            if (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1)
            {
                return false;
            }
            if (fabs(Electron_sip3d()[iel]) >= 4)
            {
                return false;
            }
            if (!passesElectronMVA(iel, "2017SS_fo_looseMVA_noiso_v6"))
            {
                return false;
            }
            if (Electron_miniPFRelIso_all()[iel] >= 0.4)
            {
                return false;
            }
            return true;
            break;
        case (IDtight):
            if (Electron_pt()[iel] <= 10)
            {
                return false;
            }
            if (!isTriggerSafe_noIso_v3(iel))
            {
                return false;
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
            {
                return false;
            }
            if (!Electron_convVeto()[iel])
            {
                return false;
            }
            if ((int)(Electron_lostHits()[iel]) > 1)
            {
                return false;
            }
            if (fabs(Electron_dxy()[iel]) > 0.05)
            {
                return false;
            }
            if (fabs(Electron_dz()[iel]) >= 0.1)
            {
                return false;
            }
            if (!passesElectronMVA(iel, "2017_veto_noiso"))
            {
                return false;
            }
            if ((int)(Electron_lostHits()[iel]) > 0)
            {
                return false;    //SS_innerlayers
            }
            if (Electron_tightCharge()[iel] == 0 || Electron_tightCharge()[iel] == 1)
            {
                return false;
            }
            if (fabs(Electron_sip3d()[iel]) > 4)
            {
                return false;
            }
            if (!passesElectronMVA(iel, "2017_medium"))
            {
                return false;
            }
            if (!passElectronIso(0.07, 0.78, 8.0, iel))
            {
                return false;
            }
            return true;
            break;
        default:
            cout << "ElectronSelections.cc: Invalid ID" << endl;
            return false;
            break;
    }
    return false;
}

float electronMVACut(float A, float B, float C, float pt)
{
    if (pt < 10)
    {
        return C;
    }
    if (pt > 25)
    {
        return B;
    }
    else
    {
        return (A + (B - A) / 15 * (pt - 10));
    }
}

bool passesElectronMVA(int iel, string id_name)
{
    int id_level;
    if (id_name == "2017_medium")
    {
        id_level = 1;
    }
    else if (id_name == "2017_veto_noiso")
    {
        id_level = 2;
    }
    else if (id_name == "2017SS_fo_looseMVA_noiso_v6")
    {
        id_level = 3;
    }
    else
    {
        cout << "wrong input id name from ElectronSelection.C!!!!!" << endl;
        return 0;
    }
    switch (id_level)
    {
        case (1):
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) < 0.8)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(0.2, 0.68, 0.2, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) >= 0.8 && fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) <= 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(0.1, 0.475, 0.1, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.1, 0.32, -0.1, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            return true;
            break;
        case (2):
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) < 0.8)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.788, -0.64, 0.488, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) >= 0.8 && fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) <= 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.85, -0.775, -0.045, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.81, -0.733, 0.176, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            return true;
            break;
        case (3):
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) < 0.8)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.93, -0.887, -0.135, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) >= 0.8 && fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) <= 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.93, -0.89, -0.417, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 1.479)
            {
                if (Electron_mvaFall17V1noIso()[iel] <= electronMVACut(-0.942, -0.91, -0.470, Electron_pt()[iel]))
                {
                    return false;
                }
            }
            return true;
            break;
    }
    cout << "wrong !!!!!!!should not see this message!!!! from ElectronSelection.C" << endl;
    return 0;
}
bool isTriggerSafe_noIso_v3(int iel)
{
    if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) <= 1.479)
    {
        if (Electron_sieie()[iel] >= 0.011)
        {
            return false;
        }
        if (Electron_hoe()[iel] >= 0.08)
        {
            return false;
        }
        if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01 )
        {
            return false;
        }
    }
    else if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 1.479 &&
             fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) < 2.5)
    {
        if (Electron_sieie()[iel] >= 0.031)
        {
            return false;
        }
        if (Electron_hoe()[iel] >= 0.08)
        {
            return false;
        }
        if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01 )
        {
            return false;
        }
    }
    return true;
}
bool passElectronIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int iel)
{
    double val_miniiso = Electron_miniPFRelIso_all()[iel];
    double val_ptratio = 1 / (Electron_jetRelIso()[iel] + 1);
    double val_ptrel = Electron_jetPtRelv2()[iel];
    return (val_miniiso < cut_miniiso && ((val_ptratio > cut_ptratio) || (val_ptrel > cut_ptrel)));
}


