#include "SSSelections.h"
#include "Config.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"

using namespace tas;

Leptons getLeptons()
{
    Leptons leptons;
    auto mupts = Muon_pt();
    for (unsigned int imu = 0; imu < mupts.size(); imu++)
    {
        if (mupts[imu] < 5)
        {
            continue;
        }
        leptons.push_back(Lepton(Muon_pdgId()[imu], imu));
    }
    auto epts = Electron_pt();
    for (unsigned int iel = 0; iel < epts.size(); iel++)
    {
        if (epts[iel] < 7)
        {
            continue;
        }
        leptons.push_back(Lepton(Electron_pdgId()[iel], iel));
    }
    return leptons;
}

std::tuple<int, int, float> getJetInfo(Leptons& leps, int variation)
{
    int njets = 0;
    float ht = 0;
    int nbtags = 0;
    auto jetpts = Jet_pt();
    vector<float> discs = Jet_btagDeepB();
    for (unsigned int ijet = 0; ijet < jetpts.size(); ijet += 1)
    {
        float pt = jetpts[ijet];
        if (!(Jet_jetId()[ijet] & (1 << 1)))
        {
            continue;
        }
        // Clean against up to 2 fakable electrons
        if (Jet_electronIdx1()[ijet] >= 0)
        {
            bool skip = false;
            for (auto& lep : leps)
            {
                if (lep.is_el() && (Jet_electronIdx1()[ijet] == (int)(lep.idx())) && lep.idlevel() >= IDfakable)
                {
                    skip = true;
                    break;
                }
                if (skip)
                {
                    break;
                }
                if (Jet_electronIdx2()[ijet] >= 0)
                {
                    if (lep.is_el() && (Jet_electronIdx2()[ijet] == (int)(lep.idx())) && lep.idlevel() >= IDfakable)
                    {
                        skip = true;
                        break;
                    }
                    if (skip)
                    {
                        break;
                    }
                }
            }
            if (skip)
            {
                continue;
            }
        }
        // Clean against up to 2 fakable muons
        if (Jet_muonIdx1()[ijet] >= 0)
        {
            bool skip = false;
            for (auto& lep : leps)
            {
                if (lep.is_mu() && (Jet_muonIdx1()[ijet] == (int)(lep.idx())) && lep.idlevel() >= IDfakable)
                {
                    skip = true;
                    break;
                }
                if (skip)
                {
                    break;
                }
                if (Jet_muonIdx2()[ijet] >= 0)
                {
                    if (lep.is_mu() && (Jet_muonIdx2()[ijet] == (int)(lep.idx())) && lep.idlevel() >= IDfakable)
                    {
                        skip = true;
                        break;
                    }
                    if (skip)
                    {
                        break;
                    }
                }
            }
            if (skip)
            {
                continue;
            }
        }
        if (fabs(Jet_eta()[ijet]) > 2.4)
        {
            continue;
        }
        if (pt > 25. && discs[ijet] > 0.4941)
        {
            nbtags += 1;
        }
        if (pt < 40)
        {
            continue;
        }
        ht += pt;
        njets++;
    }
    return std::make_tuple(njets, nbtags, ht);
}

std::pair<int, int> makesResonance(Leptons& leps, Lepton lep1, Lepton lep2, float mass, float window)
{
    // return {which lepton (1,2), and index of resonance partner}
    for (auto& lep : leps)
    {
        if (lep.is_el())
        {
            if (!(lep1.is_el() || lep2.is_el()))
            {
                continue;
            }
            if ((lep.idx() == lep1.idx() && lep1.is_el()) || (lep.idx() == lep2.idx() && lep2.is_el()))
            {
                continue;
            }
            if (fabs(lep.eta()) > 2.4)
            {
                continue;
            }
            if (lep.pt() < 7)
            {
                continue;
            }
            if (lep.idlevel() < IDveto)
            {
                continue;
            }
            if (lep1.is_el() && (lep1.id() * lep.id() < 0) && (fabs((lep1.p4() + lep.p4()).M() - mass) < window))
            {
                return {1, lep.idx()};
            }
            if (lep2.is_el() && (lep2.id() * lep.id() < 0) && (fabs((lep2.p4() + lep.p4()).M() - mass) < window))
            {
                return {2, lep.idx()};
            }
        }
        else
        {
            if (!(lep1.is_mu() || lep2.is_mu()))
            {
                continue;
            }
            if ((lep.idx() == lep1.idx() && lep1.is_mu()) || (lep.idx() == lep2.idx() && lep2.is_mu()))
            {
                continue;
            }
            if (fabs(lep.eta()) > 2.4)
            {
                continue;
            }
            if (lep.pt() < 5)
            {
                continue;
            }
            if (lep.idlevel() < IDveto)
            {
                continue;
            }
            if (lep1.is_mu() && (lep1.id() * lep.id() < 0) && (fabs((lep1.p4() + lep.p4()).M() - mass) < window))
            {
                return {1, lep.idx()};
            }
            if (lep2.is_mu() && (lep2.id() * lep.id() < 0) && (fabs((lep2.p4() + lep.p4()).M() - mass) < window))
            {
                return {2, lep.idx()};
            }
        }
    }
    for (unsigned int iel = 0; iel < Electron_pt().size(); iel++) {
        if ((iel == lep1.idx() && lep1.is_el()) || (iel == lep2.idx() && lep2.is_el())) continue;
        if (fabs(Electron_eta()[iel]) > 2.4) continue;
        if (fabs(Electron_pt()[iel]) < 7) continue;
        if (!electronID(iel, IDveto, gconf.year)) continue;
        if (lep1.is_el() && (lep1.id() * Electron_pdgId()[iel] < 0) && (fabs((lep1.p4() + Electron_p4()[iel]).M()-mass) < window)) {
            return {1,iel};
        }
        if (lep2.is_el() && (lep2.id() * Electron_pdgId()[iel] < 0) && (fabs((lep2.p4() + Electron_p4()[iel]).M()-mass) < window)) {
            return {2,iel};
        }
    }
    for (unsigned int imu = 0; imu < Muon_pt().size(); imu++) {
        if ((imu == lep1.idx() && lep1.is_mu()) || (imu == lep2.idx() && lep2.is_mu())) continue;
        if (fabs(Muon_eta()[imu]) > 2.4) continue;
        if (fabs(Muon_pt()[imu]) < 5) continue;
        if (!muonID(imu, IDveto, gconf.year)) continue;
        if (lep1.is_mu() && (lep1.id() * Muon_pdgId()[imu] < 0) && (fabs((lep1.p4() + Muon_p4()[imu]).M()-mass) < window)) {
            return {1,imu};
        }
        if (lep2.is_mu() && (lep2.id() * Muon_pdgId()[imu] < 0) && (fabs((lep2.p4() + Muon_p4()[imu]).M()-mass) < window)) {
            return {2,imu};
        }
    }
    return {-1, -1};
}


std::pair<int, Hyp> getBestHyp(Leptons& leptons, bool verbose)
{
    int hyp_class = -1;
    Hyp best_hyp;
    if (leptons.size() < 2)
        return {hyp_class, best_hyp};
    vector<Hyp> hyp1s;
    vector<Hyp> hyp2s;
    vector<Hyp> hyp3s;
    vector<Hyp> hyp4s;
    vector<Hyp> hyp6s;
    for (unsigned int i = 0; i < leptons.size(); i++)
    {
        for (unsigned int j = i + 1; j < leptons.size(); j++)
        {
            // DEBUG
            auto& lep1 = leptons[i];
            auto& lep2 = leptons[j];
            if (verbose) {
                cout << "I can read the gconf year. It's " << gconf.year << " ok?? Get off my back." << endl;
                bool DEBUG_isss = lep1.charge() == lep2.charge();
                auto DEBUG_z_result = makesResonance(leptons, lep1, lep2, 91., 15.);
                auto DEBUG_gammastar_result = makesResonance(leptons, lep1, lep2, 0., 12.);
                bool DEBUG_extraZ = DEBUG_z_result.first >= 0;
                bool DEBUG_extraGammaStar = DEBUG_gammastar_result.first >= 0;
                cout << "hyp " << i << " leptons: " << lep2.id() << " " << lep2.pt() << " (idx: " << lep2.idx() << ") " << lep1.id() << " " << lep1.pt() << " (idx: " << lep1.idx() << ")" << endl;
                cout << "   isss: " << DEBUG_isss << endl;
                cout << "   extraZ: " << DEBUG_extraZ << endl;
                cout << "   extraG: " << DEBUG_extraGammaStar << endl;
                cout << "   invt mass: " << (lep2.p4()+lep1.p4()).M() << endl;
                cout << "   passes eta: " << ((lep2.is_el() ? fabs(lep2.eta()) < 2.5 : fabs(lep2.eta()) < 2.4) && (lep1.is_el() ? fabs(lep1.eta()) < 2.5 : fabs(lep1.eta()) < 2.4)) << " etas are " << lep2.eta() << " and " << lep1.eta() << endl;
                cout << "   passes hypsFromFirstGoodVertex: " << "missing?" << endl;
                cout << "   lepton with pT " << lep2.pt() << " passes numer,denom id: " << (lep2.idlevel() == IDtight) << "," << (lep2.idlevel() >= IDfakable) << endl;
                cout << "   lepton with pT " << lep1.pt() << " passes numer,denom id: " << (lep1.idlevel() == IDtight) << "," << (lep1.idlevel() >= IDfakable) << endl;
                cout << "   lowMassVeto: " << ((lep2.p4() + lep1.p4()).M() < 8) << endl;
            }
            if (lep1.idlevel() < IDfakable || lep2.idlevel() < IDfakable)
            {
                continue;
            }
            bool isss = lep1.charge() == lep2.charge();
            int ntight = (lep1.idlevel() == IDtight) + (lep2.idlevel() == IDtight);
            int nloose = (lep1.idlevel() == IDfakable) + (lep2.idlevel() == IDfakable);
            if (lep1.is_el())
            {
                if (lep1.pt() < 15. || fabs(lep1.eta()) > 2.5)
                {
                    continue;
                }
            }
            else
            {
                if (lep1.pt() < 10. || fabs(lep1.eta()) > 2.4)
                {
                    continue;
                }
            }
            if (lep2.is_el())
            {
                if (lep2.pt() < 15. || fabs(lep2.eta()) > 2.5)
                {
                    continue;
                }
            }
            else
            {
                if (lep2.pt() < 10. || fabs(lep2.eta()) > 2.4)
                {
                    continue;
                }
            }
            // Veto SS ee or any OSSF, with mll < 12
            if ((isss && lep1.is_el() && lep2.is_el()) || (lep1.id() == -lep2.id()))
            {
                if ((lep1.p4() + lep2.p4()).M() < 12.)
                {
                    continue;
                }
            }
            auto z_result = makesResonance(leptons, lep1, lep2, 91., 15.);
            auto gammastar_result = makesResonance(leptons, lep1, lep2, 0., 12.);
            bool extraZ = z_result.first >= 0;
            bool extraGammaStar = gammastar_result.first >= 0;
            int DEBUG_hyp_class = -1;
            if ((extraZ || extraGammaStar) && isss)
            {
                DEBUG_hyp_class = 6;
                if (lep1.pt() > lep2.pt())
                    hyp6s.push_back({lep1, lep2});
                else
                    hyp6s.push_back({lep2, lep1});
            }
            else if (ntight == 2 && isss)
            {
                DEBUG_hyp_class = 3;
                if (lep1.pt() > lep2.pt())
                    hyp3s.push_back({lep1, lep2});
                else
                    hyp3s.push_back({lep2, lep1});
            }
            else if (nloose == 2 && isss)
            {
                DEBUG_hyp_class = 1;
                if (lep1.pt() > lep2.pt())
                    hyp1s.push_back({lep1, lep2});
                else
                    hyp1s.push_back({lep2, lep1});
            }
            else if (ntight == 1 && nloose == 1 && isss)
            {
                DEBUG_hyp_class = 2;
                if (lep1.pt() > lep2.pt())
                    hyp2s.push_back({lep1, lep2});
                else
                    hyp2s.push_back({lep2, lep1});
            }
            else if (ntight == 2 && !isss)
            {
                DEBUG_hyp_class = 4;
                if (lep1.pt() > lep2.pt())
                    hyp4s.push_back({lep1, lep2});
                else
                    hyp4s.push_back({lep2, lep1});
            }
            if (verbose) cout << "hyp #" << i << " hyp_class: " << DEBUG_hyp_class << endl;
        }
    }
    vector<Hyp> hyps;
    // Priority order - 3,6,2,1,4
    if (hyp3s.size() > 0)
    {
        hyps = hyp3s;
        hyp_class = 3;
    }
    else if (hyp6s.size() > 0)
    {
        hyps = hyp6s;
        hyp_class = 6;
    }
    else if (hyp2s.size() > 0)
    {
        hyps = hyp2s;
        hyp_class = 2;
    }
    else if (hyp1s.size() > 0)
    {
        hyps = hyp1s;
        hyp_class = 1;
    }
    else if (hyp4s.size() > 0)
    {
        hyps = hyp4s;
        hyp_class = 4;
    }
    if ((hyp_class <= 0) || (hyps.size() < 1))
        return {hyp_class, best_hyp};
    if (hyps.size() == 1)
    {
        best_hyp = hyps[0];
    }
    else if (hyps.size() > 1)
    {
        best_hyp = hyps[0];
        for (unsigned int i = 1; i < hyps.size(); i++)
        {
            Hyp hyp = hyps[i];
            if (hyp.first.is_mu() + hyp.second.is_mu() > best_hyp.first.is_mu() + best_hyp.second.is_mu())
            {
                best_hyp = hyp;
            }
            else if (hyp.first.is_mu() + hyp.second.is_mu() == best_hyp.first.is_mu() + best_hyp.second.is_mu())
            {
                if (hyp.first.pt() + hyp.second.pt() > best_hyp.first.pt() + best_hyp.second.pt())
                {
                    best_hyp = hyp;
                }
            }
        }
    }
    return {hyp_class, best_hyp};
}



// bool isTriggerSafenoIso_v1(int iel)
// {
//     float etaSC = Electron_eta()[iel] + Electron_deltaEtaSC()[iel];
//     if (fabs(etaSC) <= 1.479)
//     {
//         if (Electron_sieie()[iel] >= 0.011)
//         {
//             return false;
//         }
//         if (Electron_hoe()[iel] >= 0.08)
//         {
//             return false;
//         }
//         // if (fabs(els_dEtaIn().at(iel)) >= 0.01) return false; // NOTE missing
//         // if (fabs(els_dPhiIn().at(iel)) >= 0.04) return false; // NOTE missing
//         if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01)
//         {
//             return false;
//         }
//     }
//     else if ((fabs(etaSC) > 1.479) && (fabs(etaSC) < 2.5))
//     {
//         if (Electron_sieie()[iel] >= 0.031)
//         {
//             return false;
//         }
//         if (Electron_hoe()[iel] >= 0.08)
//         {
//             return false;
//         }
//         // if (fabs(els_dEtaIn().at(iel)) >= 0.01) return false;
//         // if (fabs(els_dPhiIn().at(iel)) >= 0.08) return false;
//         if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool isTriggerSafeIso_v1(int iel)
// {
//     if (!isTriggerSafenoIso_v1(iel))
//     {
//         return false;
//     }
//     if (Electron_dr03EcalRecHitSumEt()[iel] / Electron_pt()[iel] >= 0.45)
//     {
//         return false;
//     }
//     if (Electron_dr03HcalDepth1TowerSumEt()[iel] / Electron_pt()[iel] >= 0.25)
//     {
//         return false;
//     }
//     if (Electron_dr03TkSumPt()[iel] / Electron_pt()[iel] >= 0.2)
//     {
//         return false;
//     }
//     return true;
// }

// bool passesElectronMVA(int idlevel, int iel)
// {
//     // C if pT<10, A if pT=10, B if pt>=25, lerp between A,B for pT in [10,25]
//     auto mvacut = [](float A, float B, float C, float pt_)
//     {
//         if (pt_ < 10)
//         {
//             return C;
//         }
//         else if (pt_ > 25)
//         {
//             return B;
//         }
//         else
//         {
//             return A + (B - A) / 15.0f * (pt_ - 10.0f);
//         }
//     };
//     float mva = Electron_mvaFall17V1noIso()[iel];
//     float pt = Electron_pt()[iel];
//     float aeta = fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]);
//     if (idlevel == IDtight)
//     {
//         if (aeta < 0.8)
//         {
//             return mva > mvacut(0.2, 0.68, 0.2, pt);
//         }
//         if ((aeta >= 0.8 && aeta <= 1.479))
//         {
//             return mva > mvacut(0.1, 0.475, 0.1, pt);
//         }
//         if (aeta > 1.479)
//         {
//             return mva > mvacut(-0.1, 0.32, -0.1, pt);
//         }
//     }
//     else if (idlevel == IDfakable)
//     {
//         if (aeta < 0.8)
//         {
//             return mva > mvacut(-0.788, -0.64, 0.488, pt);
//         }
//         if ((aeta >= 0.8 && aeta <= 1.479))
//         {
//             return mva > mvacut(-0.85, -0.775, -0.045, pt);
//         }
//         if (aeta > 1.479)
//         {
//             return mva > mvacut(-0.81, -0.733, 0.176, pt);
//         }
//     }
//     else if (idlevel == IDveto)
//     {
//         if (aeta < 0.8)
//         {
//             return mva > mvacut(-0.788, -0.64, 0.488, pt);
//         }
//         if ((aeta >= 0.8 && aeta <= 1.479))
//         {
//             return mva > mvacut(-0.85, -0.775, -0.045, pt);
//         }
//         if (aeta > 1.479)
//         {
//             return mva > mvacut(-0.81, -0.733, 0.176, pt);
//         }
//     }
//     return false;
// }

// bool isVetoElectron(int iel)
// {
//     if (Electron_pt()[iel] < 7)
//     {
//         return false;
//     }
//     if (Electron_miniPFRelIso_all()[iel] > 0.4)
//     {
//         return false;
//     }
//     if (Electron_convVeto()[iel] == 0)
//     {
//         return false;
//     }
//     if (Electron_lostHits()[iel] > 1)
//     {
//         return false;
//     }
//     if (fabs(Electron_dxy()[iel]) > 0.05)
//     {
//         return false;
//     }
//     if (fabs(Electron_dz()[iel]) >= 0.1)
//     {
//         return false;
//     }
//     if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5)
//     {
//         return false;
//     }
//     if (!passesElectronMVA(IDveto, iel))
//     {
//         return false;
//     }
//     if (!isTriggerSafenoIso_v1(iel))
//     {
//         return false;
//     }
//     return true;
// }

// bool isFakableElectron(int iel)
// {
//     if (!isVetoElectron(iel))
//     {
//         return false;
//     }
//     if (Electron_pt()[iel] < 10)
//     {
//         return false;
//     }
//     if (fabs(Electron_sip3d()[iel]) >= 4)
//     {
//         return false;
//     }
//     if (Electron_tightCharge()[iel] < 2)
//     {
//         return false;
//     }
//     if (!passesElectronMVA(IDfakable, iel))
//     {
//         return false;
//     }
//     return true;
// }

// bool isGoodElectron(int iel)
// {
//     if (!isFakableElectron(iel))
//     {
//         return false;
//     }
//     if (!passesElectronMVA(IDtight, iel))
//     {
//         return false;
//     }
//     if (!passMultiIso(11, iel, 0.09, 0.85, 9.2))
//     {
//         return false;
//     }
//     return true;
// }

// bool isVetoMuon(int imu)
// {
//     if (Muon_pt()[imu] < 5)
//     {
//         return false;
//     }
//     if (Muon_miniPFRelIso_all()[imu] > 0.4)
//     {
//         return false;
//     }
//     if (fabs(Muon_dxy()[imu]) > 0.05)
//     {
//         return false;
//     }
//     if (fabs(Muon_dz()[imu]) > 0.1)
//     {
//         return false;
//     }
//     if (fabs(Muon_eta()[imu]) > 2.4)
//     {
//         return false;
//     }
//     // LooseMuonPOG -- only LoosePOG muons can even get stored in nanoaod
//     return true;
// }


// bool isFakableMuon(int imu)
// {
//     if (!isVetoMuon(imu))
//     {
//         return false;
//     }
//     if (Muon_pt()[imu] < 10)
//     {
//         return false;
//     }
//     if (fabs(Muon_sip3d()[imu]) >= 4)
//     {
//         return false;
//     }
//     if (!Muon_tightCharge()[imu])
//     {
//         return false;    // pterr/pt<0.2
//     }
//     if (!Muon_mediumId()[imu])
//     {
//         return false;
//     }
//     return true;
// }

// bool isGoodMuon(int imu)
// {
//     if (!isFakableMuon(imu))
//     {
//         return false;
//     }
//     if (!passMultiIso(13, imu, 0.12, 0.80, 7.5))
//     {
//         return false;
//     }
//     return true;
// }


void dumpLeptonProperties(Lepton lep)
{
    std::cout << lep << std::endl;
    int i = lep.idx();
    if (lep.is_el())
    {
        std::cout << "  -- etaSC: " << Electron_eta()[i] + Electron_deltaEtaSC()[i] << std::endl;
        std::cout << "  -- mva: " << Electron_mvaFall17V1noIso()[i] << std::endl;
        std::cout << "  -- lostHits: " << Electron_lostHits()[i] << std::endl;
        std::cout << "  -- miniRelIso: " << Electron_miniPFRelIso_all()[i] << std::endl;
        std::cout << "  -- ptRatio: " << getPtRatio(11, i) << std::endl;
        std::cout << "  -- ptRel: " << getPtRel(11, i) << std::endl;
    }
    else
    {
        std::cout << "  -- miniRelIso: " << Muon_miniPFRelIso_all()[i] << std::endl;
        std::cout << "  -- ptRatio: " << getPtRatio(13, i) << std::endl;
        std::cout << "  -- ptRel: " << getPtRel(13, i) << std::endl;
    }
}

bool isLeptonLevel(IDLevel idlevel, int id, int idx)
{
    if (abs(id) == 11)
    {
        return electronID(idx, idlevel, gconf.year);
    }
    else if (abs(id) == 13)
    {
        return muonID(idx, idlevel, gconf.year);
    }
    else 
    {
        return false;
    }
}

IDLevel whichLeptonLevel(int id, int idx)
{
    if (isLeptonLevel(IDveto, id, idx))
    {
        if (isLeptonLevel(IDfakable, id, idx))
        {
            if (isLeptonLevel(IDtight, id, idx))
            {
                return IDtight;
            }
            else
            {
                return IDfakable;
            }
        }
        else
        {
            return IDveto;
        }
    }
    else
    {
        return IDdefault;
    }
}

float coneCorrPt(int id, int idx, float multiiso_minireliso, float multiiso_ptratio, float multiiso_ptrel)
{
    // Isolation variables
    float miniiso = abs(id) == 11 ? Electron_miniPFRelIso_all().at(idx) : Muon_miniPFRelIso_all().at(idx);
    float ptratio = abs(id) == 11 ? 1 / (Electron_jetRelIso().at(idx) + 1) : 1 / (Muon_jetRelIso().at(idx) + 1);
    float ptrel = abs(id) == 11 ? Electron_jetPtRelv2().at(idx) : Muon_jetPtRelv2().at(idx);
    // Lepton & jet pt
    float lep_pt = abs(id) == 11 ? Electron_pt().at(idx) : Muon_pt().at(idx);
    float jet_pt = lep_pt / ptratio;
    if (ptrel > multiiso_ptrel)
    {
        return lep_pt * (1 + std::max(float(0), miniiso - multiiso_minireliso));
    }
    else
    {
        return std::max(lep_pt, jet_pt * multiiso_ptratio);
    }
}
