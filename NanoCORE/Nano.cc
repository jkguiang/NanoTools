#include "Nano.h"
Nano nt;

void Nano::Init(TTree *tree) {
    b_CaloMET_phi_ = tree->GetBranch("CaloMET_phi");
    if (b_CaloMET_phi_) { b_CaloMET_phi_->SetAddress(&CaloMET_phi_); }
    b_CaloMET_pt_ = tree->GetBranch("CaloMET_pt");
    if (b_CaloMET_pt_) { b_CaloMET_pt_->SetAddress(&CaloMET_pt_); }
    b_CaloMET_sumEt_ = tree->GetBranch("CaloMET_sumEt");
    if (b_CaloMET_sumEt_) { b_CaloMET_sumEt_->SetAddress(&CaloMET_sumEt_); }
    b_Electron_charge_ = tree->GetBranch("Electron_charge");
    if (b_Electron_charge_) { b_Electron_charge_->SetAddress(&Electron_charge_); }
    b_Electron_cleanmask_ = tree->GetBranch("Electron_cleanmask");
    if (b_Electron_cleanmask_) { b_Electron_cleanmask_->SetAddress(&Electron_cleanmask_); }
    b_Electron_convVeto_ = tree->GetBranch("Electron_convVeto");
    if (b_Electron_convVeto_) { b_Electron_convVeto_->SetAddress(&Electron_convVeto_); }
    b_Electron_cutBased_ = tree->GetBranch("Electron_cutBased");
    if (b_Electron_cutBased_) { b_Electron_cutBased_->SetAddress(&Electron_cutBased_); }
    b_Electron_cutBased_HEEP_ = tree->GetBranch("Electron_cutBased_HEEP");
    if (b_Electron_cutBased_HEEP_) { b_Electron_cutBased_HEEP_->SetAddress(&Electron_cutBased_HEEP_); }
    b_Electron_deltaEtaSC_ = tree->GetBranch("Electron_deltaEtaSC");
    if (b_Electron_deltaEtaSC_) { b_Electron_deltaEtaSC_->SetAddress(&Electron_deltaEtaSC_); }
    b_Electron_dr03EcalRecHitSumEt_ = tree->GetBranch("Electron_dr03EcalRecHitSumEt");
    if (b_Electron_dr03EcalRecHitSumEt_) { b_Electron_dr03EcalRecHitSumEt_->SetAddress(&Electron_dr03EcalRecHitSumEt_); }
    b_Electron_dr03HcalDepth1TowerSumEt_ = tree->GetBranch("Electron_dr03HcalDepth1TowerSumEt");
    if (b_Electron_dr03HcalDepth1TowerSumEt_) { b_Electron_dr03HcalDepth1TowerSumEt_->SetAddress(&Electron_dr03HcalDepth1TowerSumEt_); }
    b_Electron_dr03TkSumPt_ = tree->GetBranch("Electron_dr03TkSumPt");
    if (b_Electron_dr03TkSumPt_) { b_Electron_dr03TkSumPt_->SetAddress(&Electron_dr03TkSumPt_); }
    b_Electron_dxy_ = tree->GetBranch("Electron_dxy");
    if (b_Electron_dxy_) { b_Electron_dxy_->SetAddress(&Electron_dxy_); }
    b_Electron_dxyErr_ = tree->GetBranch("Electron_dxyErr");
    if (b_Electron_dxyErr_) { b_Electron_dxyErr_->SetAddress(&Electron_dxyErr_); }
    b_Electron_dz_ = tree->GetBranch("Electron_dz");
    if (b_Electron_dz_) { b_Electron_dz_->SetAddress(&Electron_dz_); }
    b_Electron_dzErr_ = tree->GetBranch("Electron_dzErr");
    if (b_Electron_dzErr_) { b_Electron_dzErr_->SetAddress(&Electron_dzErr_); }
    b_Electron_eCorr_ = tree->GetBranch("Electron_eCorr");
    if (b_Electron_eCorr_) { b_Electron_eCorr_->SetAddress(&Electron_eCorr_); }
    b_Electron_eInvMinusPInv_ = tree->GetBranch("Electron_eInvMinusPInv");
    if (b_Electron_eInvMinusPInv_) { b_Electron_eInvMinusPInv_->SetAddress(&Electron_eInvMinusPInv_); }
    b_Electron_energyErr_ = tree->GetBranch("Electron_energyErr");
    if (b_Electron_energyErr_) { b_Electron_energyErr_->SetAddress(&Electron_energyErr_); }
    b_Electron_eta_ = tree->GetBranch("Electron_eta");
    if (b_Electron_eta_) { b_Electron_eta_->SetAddress(&Electron_eta_); }
    b_Electron_genPartFlav_ = tree->GetBranch("Electron_genPartFlav");
    if (b_Electron_genPartFlav_) { b_Electron_genPartFlav_->SetAddress(&Electron_genPartFlav_); }
    b_Electron_genPartIdx_ = tree->GetBranch("Electron_genPartIdx");
    if (b_Electron_genPartIdx_) { b_Electron_genPartIdx_->SetAddress(&Electron_genPartIdx_); }
    b_Electron_hoe_ = tree->GetBranch("Electron_hoe");
    if (b_Electron_hoe_) { b_Electron_hoe_->SetAddress(&Electron_hoe_); }
    b_Electron_ip3d_ = tree->GetBranch("Electron_ip3d");
    if (b_Electron_ip3d_) { b_Electron_ip3d_->SetAddress(&Electron_ip3d_); }
    b_Electron_isPFcand_ = tree->GetBranch("Electron_isPFcand");
    if (b_Electron_isPFcand_) { b_Electron_isPFcand_->SetAddress(&Electron_isPFcand_); }
    b_Electron_jetIdx_ = tree->GetBranch("Electron_jetIdx");
    if (b_Electron_jetIdx_) { b_Electron_jetIdx_->SetAddress(&Electron_jetIdx_); }
    b_Electron_lostHits_ = tree->GetBranch("Electron_lostHits");
    if (b_Electron_lostHits_) { b_Electron_lostHits_->SetAddress(&Electron_lostHits_); }
    b_Electron_mass_ = tree->GetBranch("Electron_mass");
    if (b_Electron_mass_) { b_Electron_mass_->SetAddress(&Electron_mass_); }
    b_Electron_miniPFRelIso_all_ = tree->GetBranch("Electron_miniPFRelIso_all");
    if (b_Electron_miniPFRelIso_all_) { b_Electron_miniPFRelIso_all_->SetAddress(&Electron_miniPFRelIso_all_); }
    b_Electron_miniPFRelIso_chg_ = tree->GetBranch("Electron_miniPFRelIso_chg");
    if (b_Electron_miniPFRelIso_chg_) { b_Electron_miniPFRelIso_chg_->SetAddress(&Electron_miniPFRelIso_chg_); }
    b_Electron_mvaFall17Iso_ = tree->GetBranch("Electron_mvaFall17Iso");
    if (b_Electron_mvaFall17Iso_) { b_Electron_mvaFall17Iso_->SetAddress(&Electron_mvaFall17Iso_); }
    b_Electron_mvaFall17Iso_WP80_ = tree->GetBranch("Electron_mvaFall17Iso_WP80");
    if (b_Electron_mvaFall17Iso_WP80_) { b_Electron_mvaFall17Iso_WP80_->SetAddress(&Electron_mvaFall17Iso_WP80_); }
    b_Electron_mvaFall17Iso_WP90_ = tree->GetBranch("Electron_mvaFall17Iso_WP90");
    if (b_Electron_mvaFall17Iso_WP90_) { b_Electron_mvaFall17Iso_WP90_->SetAddress(&Electron_mvaFall17Iso_WP90_); }
    b_Electron_mvaFall17Iso_WPL_ = tree->GetBranch("Electron_mvaFall17Iso_WPL");
    if (b_Electron_mvaFall17Iso_WPL_) { b_Electron_mvaFall17Iso_WPL_->SetAddress(&Electron_mvaFall17Iso_WPL_); }
    b_Electron_mvaFall17noIso_ = tree->GetBranch("Electron_mvaFall17noIso");
    if (b_Electron_mvaFall17noIso_) { b_Electron_mvaFall17noIso_->SetAddress(&Electron_mvaFall17noIso_); }
    b_Electron_mvaFall17noIso_WP80_ = tree->GetBranch("Electron_mvaFall17noIso_WP80");
    if (b_Electron_mvaFall17noIso_WP80_) { b_Electron_mvaFall17noIso_WP80_->SetAddress(&Electron_mvaFall17noIso_WP80_); }
    b_Electron_mvaFall17noIso_WP90_ = tree->GetBranch("Electron_mvaFall17noIso_WP90");
    if (b_Electron_mvaFall17noIso_WP90_) { b_Electron_mvaFall17noIso_WP90_->SetAddress(&Electron_mvaFall17noIso_WP90_); }
    b_Electron_mvaFall17noIso_WPL_ = tree->GetBranch("Electron_mvaFall17noIso_WPL");
    if (b_Electron_mvaFall17noIso_WPL_) { b_Electron_mvaFall17noIso_WPL_->SetAddress(&Electron_mvaFall17noIso_WPL_); }
    b_Electron_mvaTTH_ = tree->GetBranch("Electron_mvaTTH");
    if (b_Electron_mvaTTH_) { b_Electron_mvaTTH_->SetAddress(&Electron_mvaTTH_); }
    b_Electron_pdgId_ = tree->GetBranch("Electron_pdgId");
    if (b_Electron_pdgId_) { b_Electron_pdgId_->SetAddress(&Electron_pdgId_); }
    b_Electron_pfRelIso03_all_ = tree->GetBranch("Electron_pfRelIso03_all");
    if (b_Electron_pfRelIso03_all_) { b_Electron_pfRelIso03_all_->SetAddress(&Electron_pfRelIso03_all_); }
    b_Electron_pfRelIso03_chg_ = tree->GetBranch("Electron_pfRelIso03_chg");
    if (b_Electron_pfRelIso03_chg_) { b_Electron_pfRelIso03_chg_->SetAddress(&Electron_pfRelIso03_chg_); }
    b_Electron_phi_ = tree->GetBranch("Electron_phi");
    if (b_Electron_phi_) { b_Electron_phi_->SetAddress(&Electron_phi_); }
    b_Electron_photonIdx_ = tree->GetBranch("Electron_photonIdx");
    if (b_Electron_photonIdx_) { b_Electron_photonIdx_->SetAddress(&Electron_photonIdx_); }
    b_Electron_pt_ = tree->GetBranch("Electron_pt");
    if (b_Electron_pt_) { b_Electron_pt_->SetAddress(&Electron_pt_); }
    b_Electron_r9_ = tree->GetBranch("Electron_r9");
    if (b_Electron_r9_) { b_Electron_r9_->SetAddress(&Electron_r9_); }
    b_Electron_sieie_ = tree->GetBranch("Electron_sieie");
    if (b_Electron_sieie_) { b_Electron_sieie_->SetAddress(&Electron_sieie_); }
    b_Electron_sip3d_ = tree->GetBranch("Electron_sip3d");
    if (b_Electron_sip3d_) { b_Electron_sip3d_->SetAddress(&Electron_sip3d_); }
    b_Electron_tightCharge_ = tree->GetBranch("Electron_tightCharge");
    if (b_Electron_tightCharge_) { b_Electron_tightCharge_->SetAddress(&Electron_tightCharge_); }
    b_Electron_vidNestedWPBitmap_ = tree->GetBranch("Electron_vidNestedWPBitmap");
    if (b_Electron_vidNestedWPBitmap_) { b_Electron_vidNestedWPBitmap_->SetAddress(&Electron_vidNestedWPBitmap_); }
    b_FatJet_area_ = tree->GetBranch("FatJet_area");
    if (b_FatJet_area_) { b_FatJet_area_->SetAddress(&FatJet_area_); }
    b_FatJet_btagCMVA_ = tree->GetBranch("FatJet_btagCMVA");
    if (b_FatJet_btagCMVA_) { b_FatJet_btagCMVA_->SetAddress(&FatJet_btagCMVA_); }
    b_FatJet_btagCSVV2_ = tree->GetBranch("FatJet_btagCSVV2");
    if (b_FatJet_btagCSVV2_) { b_FatJet_btagCSVV2_->SetAddress(&FatJet_btagCSVV2_); }
    b_FatJet_btagDeepB_ = tree->GetBranch("FatJet_btagDeepB");
    if (b_FatJet_btagDeepB_) { b_FatJet_btagDeepB_->SetAddress(&FatJet_btagDeepB_); }
    b_FatJet_btagHbb_ = tree->GetBranch("FatJet_btagHbb");
    if (b_FatJet_btagHbb_) { b_FatJet_btagHbb_->SetAddress(&FatJet_btagHbb_); }
    b_FatJet_eta_ = tree->GetBranch("FatJet_eta");
    if (b_FatJet_eta_) { b_FatJet_eta_->SetAddress(&FatJet_eta_); }
    b_FatJet_jetId_ = tree->GetBranch("FatJet_jetId");
    if (b_FatJet_jetId_) { b_FatJet_jetId_->SetAddress(&FatJet_jetId_); }
    b_FatJet_mass_ = tree->GetBranch("FatJet_mass");
    if (b_FatJet_mass_) { b_FatJet_mass_->SetAddress(&FatJet_mass_); }
    b_FatJet_msoftdrop_ = tree->GetBranch("FatJet_msoftdrop");
    if (b_FatJet_msoftdrop_) { b_FatJet_msoftdrop_->SetAddress(&FatJet_msoftdrop_); }
    b_FatJet_n2b1_ = tree->GetBranch("FatJet_n2b1");
    if (b_FatJet_n2b1_) { b_FatJet_n2b1_->SetAddress(&FatJet_n2b1_); }
    b_FatJet_n3b1_ = tree->GetBranch("FatJet_n3b1");
    if (b_FatJet_n3b1_) { b_FatJet_n3b1_->SetAddress(&FatJet_n3b1_); }
    b_FatJet_phi_ = tree->GetBranch("FatJet_phi");
    if (b_FatJet_phi_) { b_FatJet_phi_->SetAddress(&FatJet_phi_); }
    b_FatJet_pt_ = tree->GetBranch("FatJet_pt");
    if (b_FatJet_pt_) { b_FatJet_pt_->SetAddress(&FatJet_pt_); }
    b_FatJet_subJetIdx1_ = tree->GetBranch("FatJet_subJetIdx1");
    if (b_FatJet_subJetIdx1_) { b_FatJet_subJetIdx1_->SetAddress(&FatJet_subJetIdx1_); }
    b_FatJet_subJetIdx2_ = tree->GetBranch("FatJet_subJetIdx2");
    if (b_FatJet_subJetIdx2_) { b_FatJet_subJetIdx2_->SetAddress(&FatJet_subJetIdx2_); }
    b_FatJet_tau1_ = tree->GetBranch("FatJet_tau1");
    if (b_FatJet_tau1_) { b_FatJet_tau1_->SetAddress(&FatJet_tau1_); }
    b_FatJet_tau2_ = tree->GetBranch("FatJet_tau2");
    if (b_FatJet_tau2_) { b_FatJet_tau2_->SetAddress(&FatJet_tau2_); }
    b_FatJet_tau3_ = tree->GetBranch("FatJet_tau3");
    if (b_FatJet_tau3_) { b_FatJet_tau3_->SetAddress(&FatJet_tau3_); }
    b_FatJet_tau4_ = tree->GetBranch("FatJet_tau4");
    if (b_FatJet_tau4_) { b_FatJet_tau4_->SetAddress(&FatJet_tau4_); }
    b_Flag_BadChargedCandidateFilter_ = tree->GetBranch("Flag_BadChargedCandidateFilter");
    if (b_Flag_BadChargedCandidateFilter_) { b_Flag_BadChargedCandidateFilter_->SetAddress(&Flag_BadChargedCandidateFilter_); }
    b_Flag_BadChargedCandidateSummer16Filter_ = tree->GetBranch("Flag_BadChargedCandidateSummer16Filter");
    if (b_Flag_BadChargedCandidateSummer16Filter_) { b_Flag_BadChargedCandidateSummer16Filter_->SetAddress(&Flag_BadChargedCandidateSummer16Filter_); }
    b_Flag_BadPFMuonFilter_ = tree->GetBranch("Flag_BadPFMuonFilter");
    if (b_Flag_BadPFMuonFilter_) { b_Flag_BadPFMuonFilter_->SetAddress(&Flag_BadPFMuonFilter_); }
    b_Flag_BadPFMuonSummer16Filter_ = tree->GetBranch("Flag_BadPFMuonSummer16Filter");
    if (b_Flag_BadPFMuonSummer16Filter_) { b_Flag_BadPFMuonSummer16Filter_->SetAddress(&Flag_BadPFMuonSummer16Filter_); }
    b_Flag_CSCTightHalo2015Filter_ = tree->GetBranch("Flag_CSCTightHalo2015Filter");
    if (b_Flag_CSCTightHalo2015Filter_) { b_Flag_CSCTightHalo2015Filter_->SetAddress(&Flag_CSCTightHalo2015Filter_); }
    b_Flag_CSCTightHaloFilter_ = tree->GetBranch("Flag_CSCTightHaloFilter");
    if (b_Flag_CSCTightHaloFilter_) { b_Flag_CSCTightHaloFilter_->SetAddress(&Flag_CSCTightHaloFilter_); }
    b_Flag_CSCTightHaloTrkMuUnvetoFilter_ = tree->GetBranch("Flag_CSCTightHaloTrkMuUnvetoFilter");
    if (b_Flag_CSCTightHaloTrkMuUnvetoFilter_) { b_Flag_CSCTightHaloTrkMuUnvetoFilter_->SetAddress(&Flag_CSCTightHaloTrkMuUnvetoFilter_); }
    b_Flag_EcalDeadCellBoundaryEnergyFilter_ = tree->GetBranch("Flag_EcalDeadCellBoundaryEnergyFilter");
    if (b_Flag_EcalDeadCellBoundaryEnergyFilter_) { b_Flag_EcalDeadCellBoundaryEnergyFilter_->SetAddress(&Flag_EcalDeadCellBoundaryEnergyFilter_); }
    b_Flag_EcalDeadCellTriggerPrimitiveFilter_ = tree->GetBranch("Flag_EcalDeadCellTriggerPrimitiveFilter");
    if (b_Flag_EcalDeadCellTriggerPrimitiveFilter_) { b_Flag_EcalDeadCellTriggerPrimitiveFilter_->SetAddress(&Flag_EcalDeadCellTriggerPrimitiveFilter_); }
    b_Flag_HBHENoiseFilter_ = tree->GetBranch("Flag_HBHENoiseFilter");
    if (b_Flag_HBHENoiseFilter_) { b_Flag_HBHENoiseFilter_->SetAddress(&Flag_HBHENoiseFilter_); }
    b_Flag_HBHENoiseIsoFilter_ = tree->GetBranch("Flag_HBHENoiseIsoFilter");
    if (b_Flag_HBHENoiseIsoFilter_) { b_Flag_HBHENoiseIsoFilter_->SetAddress(&Flag_HBHENoiseIsoFilter_); }
    b_Flag_HcalStripHaloFilter_ = tree->GetBranch("Flag_HcalStripHaloFilter");
    if (b_Flag_HcalStripHaloFilter_) { b_Flag_HcalStripHaloFilter_->SetAddress(&Flag_HcalStripHaloFilter_); }
    b_Flag_METFilters_ = tree->GetBranch("Flag_METFilters");
    if (b_Flag_METFilters_) { b_Flag_METFilters_->SetAddress(&Flag_METFilters_); }
    b_Flag_chargedHadronTrackResolutionFilter_ = tree->GetBranch("Flag_chargedHadronTrackResolutionFilter");
    if (b_Flag_chargedHadronTrackResolutionFilter_) { b_Flag_chargedHadronTrackResolutionFilter_->SetAddress(&Flag_chargedHadronTrackResolutionFilter_); }
    b_Flag_ecalBadCalibFilter_ = tree->GetBranch("Flag_ecalBadCalibFilter");
    if (b_Flag_ecalBadCalibFilter_) { b_Flag_ecalBadCalibFilter_->SetAddress(&Flag_ecalBadCalibFilter_); }
    b_Flag_ecalLaserCorrFilter_ = tree->GetBranch("Flag_ecalLaserCorrFilter");
    if (b_Flag_ecalLaserCorrFilter_) { b_Flag_ecalLaserCorrFilter_->SetAddress(&Flag_ecalLaserCorrFilter_); }
    b_Flag_eeBadScFilter_ = tree->GetBranch("Flag_eeBadScFilter");
    if (b_Flag_eeBadScFilter_) { b_Flag_eeBadScFilter_->SetAddress(&Flag_eeBadScFilter_); }
    b_Flag_globalSuperTightHalo2016Filter_ = tree->GetBranch("Flag_globalSuperTightHalo2016Filter");
    if (b_Flag_globalSuperTightHalo2016Filter_) { b_Flag_globalSuperTightHalo2016Filter_->SetAddress(&Flag_globalSuperTightHalo2016Filter_); }
    b_Flag_globalTightHalo2016Filter_ = tree->GetBranch("Flag_globalTightHalo2016Filter");
    if (b_Flag_globalTightHalo2016Filter_) { b_Flag_globalTightHalo2016Filter_->SetAddress(&Flag_globalTightHalo2016Filter_); }
    b_Flag_goodVertices_ = tree->GetBranch("Flag_goodVertices");
    if (b_Flag_goodVertices_) { b_Flag_goodVertices_->SetAddress(&Flag_goodVertices_); }
    b_Flag_hcalLaserEventFilter_ = tree->GetBranch("Flag_hcalLaserEventFilter");
    if (b_Flag_hcalLaserEventFilter_) { b_Flag_hcalLaserEventFilter_->SetAddress(&Flag_hcalLaserEventFilter_); }
    b_Flag_muonBadTrackFilter_ = tree->GetBranch("Flag_muonBadTrackFilter");
    if (b_Flag_muonBadTrackFilter_) { b_Flag_muonBadTrackFilter_->SetAddress(&Flag_muonBadTrackFilter_); }
    b_Flag_trkPOGFilters_ = tree->GetBranch("Flag_trkPOGFilters");
    if (b_Flag_trkPOGFilters_) { b_Flag_trkPOGFilters_->SetAddress(&Flag_trkPOGFilters_); }
    b_Flag_trkPOG_logErrorTooManyClusters_ = tree->GetBranch("Flag_trkPOG_logErrorTooManyClusters");
    if (b_Flag_trkPOG_logErrorTooManyClusters_) { b_Flag_trkPOG_logErrorTooManyClusters_->SetAddress(&Flag_trkPOG_logErrorTooManyClusters_); }
    b_Flag_trkPOG_manystripclus53X_ = tree->GetBranch("Flag_trkPOG_manystripclus53X");
    if (b_Flag_trkPOG_manystripclus53X_) { b_Flag_trkPOG_manystripclus53X_->SetAddress(&Flag_trkPOG_manystripclus53X_); }
    b_Flag_trkPOG_toomanystripclus53X_ = tree->GetBranch("Flag_trkPOG_toomanystripclus53X");
    if (b_Flag_trkPOG_toomanystripclus53X_) { b_Flag_trkPOG_toomanystripclus53X_->SetAddress(&Flag_trkPOG_toomanystripclus53X_); }
    b_GenDressedLepton_eta_ = tree->GetBranch("GenDressedLepton_eta");
    if (b_GenDressedLepton_eta_) { b_GenDressedLepton_eta_->SetAddress(&GenDressedLepton_eta_); }
    b_GenDressedLepton_mass_ = tree->GetBranch("GenDressedLepton_mass");
    if (b_GenDressedLepton_mass_) { b_GenDressedLepton_mass_->SetAddress(&GenDressedLepton_mass_); }
    b_GenDressedLepton_pdgId_ = tree->GetBranch("GenDressedLepton_pdgId");
    if (b_GenDressedLepton_pdgId_) { b_GenDressedLepton_pdgId_->SetAddress(&GenDressedLepton_pdgId_); }
    b_GenDressedLepton_phi_ = tree->GetBranch("GenDressedLepton_phi");
    if (b_GenDressedLepton_phi_) { b_GenDressedLepton_phi_->SetAddress(&GenDressedLepton_phi_); }
    b_GenDressedLepton_pt_ = tree->GetBranch("GenDressedLepton_pt");
    if (b_GenDressedLepton_pt_) { b_GenDressedLepton_pt_->SetAddress(&GenDressedLepton_pt_); }
    b_GenJetAK8_eta_ = tree->GetBranch("GenJetAK8_eta");
    if (b_GenJetAK8_eta_) { b_GenJetAK8_eta_->SetAddress(&GenJetAK8_eta_); }
    b_GenJetAK8_hadronFlavour_ = tree->GetBranch("GenJetAK8_hadronFlavour");
    if (b_GenJetAK8_hadronFlavour_) { b_GenJetAK8_hadronFlavour_->SetAddress(&GenJetAK8_hadronFlavour_); }
    b_GenJetAK8_mass_ = tree->GetBranch("GenJetAK8_mass");
    if (b_GenJetAK8_mass_) { b_GenJetAK8_mass_->SetAddress(&GenJetAK8_mass_); }
    b_GenJetAK8_partonFlavour_ = tree->GetBranch("GenJetAK8_partonFlavour");
    if (b_GenJetAK8_partonFlavour_) { b_GenJetAK8_partonFlavour_->SetAddress(&GenJetAK8_partonFlavour_); }
    b_GenJetAK8_phi_ = tree->GetBranch("GenJetAK8_phi");
    if (b_GenJetAK8_phi_) { b_GenJetAK8_phi_->SetAddress(&GenJetAK8_phi_); }
    b_GenJetAK8_pt_ = tree->GetBranch("GenJetAK8_pt");
    if (b_GenJetAK8_pt_) { b_GenJetAK8_pt_->SetAddress(&GenJetAK8_pt_); }
    b_GenJet_eta_ = tree->GetBranch("GenJet_eta");
    if (b_GenJet_eta_) { b_GenJet_eta_->SetAddress(&GenJet_eta_); }
    b_GenJet_hadronFlavour_ = tree->GetBranch("GenJet_hadronFlavour");
    if (b_GenJet_hadronFlavour_) { b_GenJet_hadronFlavour_->SetAddress(&GenJet_hadronFlavour_); }
    b_GenJet_mass_ = tree->GetBranch("GenJet_mass");
    if (b_GenJet_mass_) { b_GenJet_mass_->SetAddress(&GenJet_mass_); }
    b_GenJet_partonFlavour_ = tree->GetBranch("GenJet_partonFlavour");
    if (b_GenJet_partonFlavour_) { b_GenJet_partonFlavour_->SetAddress(&GenJet_partonFlavour_); }
    b_GenJet_phi_ = tree->GetBranch("GenJet_phi");
    if (b_GenJet_phi_) { b_GenJet_phi_->SetAddress(&GenJet_phi_); }
    b_GenJet_pt_ = tree->GetBranch("GenJet_pt");
    if (b_GenJet_pt_) { b_GenJet_pt_->SetAddress(&GenJet_pt_); }
    b_GenMET_phi_ = tree->GetBranch("GenMET_phi");
    if (b_GenMET_phi_) { b_GenMET_phi_->SetAddress(&GenMET_phi_); }
    b_GenMET_pt_ = tree->GetBranch("GenMET_pt");
    if (b_GenMET_pt_) { b_GenMET_pt_->SetAddress(&GenMET_pt_); }
    b_GenPart_eta_ = tree->GetBranch("GenPart_eta");
    if (b_GenPart_eta_) { b_GenPart_eta_->SetAddress(&GenPart_eta_); }
    b_GenPart_genPartIdxMother_ = tree->GetBranch("GenPart_genPartIdxMother");
    if (b_GenPart_genPartIdxMother_) { b_GenPart_genPartIdxMother_->SetAddress(&GenPart_genPartIdxMother_); }
    b_GenPart_mass_ = tree->GetBranch("GenPart_mass");
    if (b_GenPart_mass_) { b_GenPart_mass_->SetAddress(&GenPart_mass_); }
    b_GenPart_pdgId_ = tree->GetBranch("GenPart_pdgId");
    if (b_GenPart_pdgId_) { b_GenPart_pdgId_->SetAddress(&GenPart_pdgId_); }
    b_GenPart_phi_ = tree->GetBranch("GenPart_phi");
    if (b_GenPart_phi_) { b_GenPart_phi_->SetAddress(&GenPart_phi_); }
    b_GenPart_pt_ = tree->GetBranch("GenPart_pt");
    if (b_GenPart_pt_) { b_GenPart_pt_->SetAddress(&GenPart_pt_); }
    b_GenPart_status_ = tree->GetBranch("GenPart_status");
    if (b_GenPart_status_) { b_GenPart_status_->SetAddress(&GenPart_status_); }
    b_GenPart_statusFlags_ = tree->GetBranch("GenPart_statusFlags");
    if (b_GenPart_statusFlags_) { b_GenPart_statusFlags_->SetAddress(&GenPart_statusFlags_); }
    b_GenVisTau_charge_ = tree->GetBranch("GenVisTau_charge");
    if (b_GenVisTau_charge_) { b_GenVisTau_charge_->SetAddress(&GenVisTau_charge_); }
    b_GenVisTau_eta_ = tree->GetBranch("GenVisTau_eta");
    if (b_GenVisTau_eta_) { b_GenVisTau_eta_->SetAddress(&GenVisTau_eta_); }
    b_GenVisTau_genPartIdxMother_ = tree->GetBranch("GenVisTau_genPartIdxMother");
    if (b_GenVisTau_genPartIdxMother_) { b_GenVisTau_genPartIdxMother_->SetAddress(&GenVisTau_genPartIdxMother_); }
    b_GenVisTau_mass_ = tree->GetBranch("GenVisTau_mass");
    if (b_GenVisTau_mass_) { b_GenVisTau_mass_->SetAddress(&GenVisTau_mass_); }
    b_GenVisTau_phi_ = tree->GetBranch("GenVisTau_phi");
    if (b_GenVisTau_phi_) { b_GenVisTau_phi_->SetAddress(&GenVisTau_phi_); }
    b_GenVisTau_pt_ = tree->GetBranch("GenVisTau_pt");
    if (b_GenVisTau_pt_) { b_GenVisTau_pt_->SetAddress(&GenVisTau_pt_); }
    b_GenVisTau_status_ = tree->GetBranch("GenVisTau_status");
    if (b_GenVisTau_status_) { b_GenVisTau_status_->SetAddress(&GenVisTau_status_); }
    b_Generator_binvar_ = tree->GetBranch("Generator_binvar");
    if (b_Generator_binvar_) { b_Generator_binvar_->SetAddress(&Generator_binvar_); }
    b_Generator_id1_ = tree->GetBranch("Generator_id1");
    if (b_Generator_id1_) { b_Generator_id1_->SetAddress(&Generator_id1_); }
    b_Generator_id2_ = tree->GetBranch("Generator_id2");
    if (b_Generator_id2_) { b_Generator_id2_->SetAddress(&Generator_id2_); }
    b_Generator_scalePDF_ = tree->GetBranch("Generator_scalePDF");
    if (b_Generator_scalePDF_) { b_Generator_scalePDF_->SetAddress(&Generator_scalePDF_); }
    b_Generator_weight_ = tree->GetBranch("Generator_weight");
    if (b_Generator_weight_) { b_Generator_weight_->SetAddress(&Generator_weight_); }
    b_Generator_x1_ = tree->GetBranch("Generator_x1");
    if (b_Generator_x1_) { b_Generator_x1_->SetAddress(&Generator_x1_); }
    b_Generator_x2_ = tree->GetBranch("Generator_x2");
    if (b_Generator_x2_) { b_Generator_x2_->SetAddress(&Generator_x2_); }
    b_Generator_xpdf1_ = tree->GetBranch("Generator_xpdf1");
    if (b_Generator_xpdf1_) { b_Generator_xpdf1_->SetAddress(&Generator_xpdf1_); }
    b_Generator_xpdf2_ = tree->GetBranch("Generator_xpdf2");
    if (b_Generator_xpdf2_) { b_Generator_xpdf2_->SetAddress(&Generator_xpdf2_); }
    b_HLT_AK4CaloJet100_ = tree->GetBranch("HLT_AK4CaloJet100");
    if (b_HLT_AK4CaloJet100_) { b_HLT_AK4CaloJet100_->SetAddress(&HLT_AK4CaloJet100_); }
    b_HLT_AK4CaloJet120_ = tree->GetBranch("HLT_AK4CaloJet120");
    if (b_HLT_AK4CaloJet120_) { b_HLT_AK4CaloJet120_->SetAddress(&HLT_AK4CaloJet120_); }
    b_HLT_AK4CaloJet30_ = tree->GetBranch("HLT_AK4CaloJet30");
    if (b_HLT_AK4CaloJet30_) { b_HLT_AK4CaloJet30_->SetAddress(&HLT_AK4CaloJet30_); }
    b_HLT_AK4CaloJet40_ = tree->GetBranch("HLT_AK4CaloJet40");
    if (b_HLT_AK4CaloJet40_) { b_HLT_AK4CaloJet40_->SetAddress(&HLT_AK4CaloJet40_); }
    b_HLT_AK4CaloJet50_ = tree->GetBranch("HLT_AK4CaloJet50");
    if (b_HLT_AK4CaloJet50_) { b_HLT_AK4CaloJet50_->SetAddress(&HLT_AK4CaloJet50_); }
    b_HLT_AK4CaloJet80_ = tree->GetBranch("HLT_AK4CaloJet80");
    if (b_HLT_AK4CaloJet80_) { b_HLT_AK4CaloJet80_->SetAddress(&HLT_AK4CaloJet80_); }
    b_HLT_AK4PFJet100_ = tree->GetBranch("HLT_AK4PFJet100");
    if (b_HLT_AK4PFJet100_) { b_HLT_AK4PFJet100_->SetAddress(&HLT_AK4PFJet100_); }
    b_HLT_AK4PFJet120_ = tree->GetBranch("HLT_AK4PFJet120");
    if (b_HLT_AK4PFJet120_) { b_HLT_AK4PFJet120_->SetAddress(&HLT_AK4PFJet120_); }
    b_HLT_AK4PFJet30_ = tree->GetBranch("HLT_AK4PFJet30");
    if (b_HLT_AK4PFJet30_) { b_HLT_AK4PFJet30_->SetAddress(&HLT_AK4PFJet30_); }
    b_HLT_AK4PFJet50_ = tree->GetBranch("HLT_AK4PFJet50");
    if (b_HLT_AK4PFJet50_) { b_HLT_AK4PFJet50_->SetAddress(&HLT_AK4PFJet50_); }
    b_HLT_AK4PFJet80_ = tree->GetBranch("HLT_AK4PFJet80");
    if (b_HLT_AK4PFJet80_) { b_HLT_AK4PFJet80_->SetAddress(&HLT_AK4PFJet80_); }
    b_HLT_AK8PFHT750_TrimMass50_ = tree->GetBranch("HLT_AK8PFHT750_TrimMass50");
    if (b_HLT_AK8PFHT750_TrimMass50_) { b_HLT_AK8PFHT750_TrimMass50_->SetAddress(&HLT_AK8PFHT750_TrimMass50_); }
    b_HLT_AK8PFHT800_TrimMass50_ = tree->GetBranch("HLT_AK8PFHT800_TrimMass50");
    if (b_HLT_AK8PFHT800_TrimMass50_) { b_HLT_AK8PFHT800_TrimMass50_->SetAddress(&HLT_AK8PFHT800_TrimMass50_); }
    b_HLT_AK8PFHT850_TrimMass50_ = tree->GetBranch("HLT_AK8PFHT850_TrimMass50");
    if (b_HLT_AK8PFHT850_TrimMass50_) { b_HLT_AK8PFHT850_TrimMass50_->SetAddress(&HLT_AK8PFHT850_TrimMass50_); }
    b_HLT_AK8PFHT900_TrimMass50_ = tree->GetBranch("HLT_AK8PFHT900_TrimMass50");
    if (b_HLT_AK8PFHT900_TrimMass50_) { b_HLT_AK8PFHT900_TrimMass50_->SetAddress(&HLT_AK8PFHT900_TrimMass50_); }
    b_HLT_AK8PFJet140_ = tree->GetBranch("HLT_AK8PFJet140");
    if (b_HLT_AK8PFJet140_) { b_HLT_AK8PFJet140_->SetAddress(&HLT_AK8PFJet140_); }
    b_HLT_AK8PFJet200_ = tree->GetBranch("HLT_AK8PFJet200");
    if (b_HLT_AK8PFJet200_) { b_HLT_AK8PFJet200_->SetAddress(&HLT_AK8PFJet200_); }
    b_HLT_AK8PFJet260_ = tree->GetBranch("HLT_AK8PFJet260");
    if (b_HLT_AK8PFJet260_) { b_HLT_AK8PFJet260_->SetAddress(&HLT_AK8PFJet260_); }
    b_HLT_AK8PFJet320_ = tree->GetBranch("HLT_AK8PFJet320");
    if (b_HLT_AK8PFJet320_) { b_HLT_AK8PFJet320_->SetAddress(&HLT_AK8PFJet320_); }
    b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_ = tree->GetBranch("HLT_AK8PFJet330_PFAK8BTagCSV_p1");
    if (b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_) { b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_->SetAddress(&HLT_AK8PFJet330_PFAK8BTagCSV_p1_); }
    b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_ = tree->GetBranch("HLT_AK8PFJet330_PFAK8BTagCSV_p17");
    if (b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_) { b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_->SetAddress(&HLT_AK8PFJet330_PFAK8BTagCSV_p17_); }
    b_HLT_AK8PFJet360_TrimMass30_ = tree->GetBranch("HLT_AK8PFJet360_TrimMass30");
    if (b_HLT_AK8PFJet360_TrimMass30_) { b_HLT_AK8PFJet360_TrimMass30_->SetAddress(&HLT_AK8PFJet360_TrimMass30_); }
    b_HLT_AK8PFJet380_TrimMass30_ = tree->GetBranch("HLT_AK8PFJet380_TrimMass30");
    if (b_HLT_AK8PFJet380_TrimMass30_) { b_HLT_AK8PFJet380_TrimMass30_->SetAddress(&HLT_AK8PFJet380_TrimMass30_); }
    b_HLT_AK8PFJet40_ = tree->GetBranch("HLT_AK8PFJet40");
    if (b_HLT_AK8PFJet40_) { b_HLT_AK8PFJet40_->SetAddress(&HLT_AK8PFJet40_); }
    b_HLT_AK8PFJet400_ = tree->GetBranch("HLT_AK8PFJet400");
    if (b_HLT_AK8PFJet400_) { b_HLT_AK8PFJet400_->SetAddress(&HLT_AK8PFJet400_); }
    b_HLT_AK8PFJet400_TrimMass30_ = tree->GetBranch("HLT_AK8PFJet400_TrimMass30");
    if (b_HLT_AK8PFJet400_TrimMass30_) { b_HLT_AK8PFJet400_TrimMass30_->SetAddress(&HLT_AK8PFJet400_TrimMass30_); }
    b_HLT_AK8PFJet420_TrimMass30_ = tree->GetBranch("HLT_AK8PFJet420_TrimMass30");
    if (b_HLT_AK8PFJet420_TrimMass30_) { b_HLT_AK8PFJet420_TrimMass30_->SetAddress(&HLT_AK8PFJet420_TrimMass30_); }
    b_HLT_AK8PFJet450_ = tree->GetBranch("HLT_AK8PFJet450");
    if (b_HLT_AK8PFJet450_) { b_HLT_AK8PFJet450_->SetAddress(&HLT_AK8PFJet450_); }
    b_HLT_AK8PFJet500_ = tree->GetBranch("HLT_AK8PFJet500");
    if (b_HLT_AK8PFJet500_) { b_HLT_AK8PFJet500_->SetAddress(&HLT_AK8PFJet500_); }
    b_HLT_AK8PFJet550_ = tree->GetBranch("HLT_AK8PFJet550");
    if (b_HLT_AK8PFJet550_) { b_HLT_AK8PFJet550_->SetAddress(&HLT_AK8PFJet550_); }
    b_HLT_AK8PFJet60_ = tree->GetBranch("HLT_AK8PFJet60");
    if (b_HLT_AK8PFJet60_) { b_HLT_AK8PFJet60_->SetAddress(&HLT_AK8PFJet60_); }
    b_HLT_AK8PFJet80_ = tree->GetBranch("HLT_AK8PFJet80");
    if (b_HLT_AK8PFJet80_) { b_HLT_AK8PFJet80_->SetAddress(&HLT_AK8PFJet80_); }
    b_HLT_AK8PFJetFwd140_ = tree->GetBranch("HLT_AK8PFJetFwd140");
    if (b_HLT_AK8PFJetFwd140_) { b_HLT_AK8PFJetFwd140_->SetAddress(&HLT_AK8PFJetFwd140_); }
    b_HLT_AK8PFJetFwd200_ = tree->GetBranch("HLT_AK8PFJetFwd200");
    if (b_HLT_AK8PFJetFwd200_) { b_HLT_AK8PFJetFwd200_->SetAddress(&HLT_AK8PFJetFwd200_); }
    b_HLT_AK8PFJetFwd260_ = tree->GetBranch("HLT_AK8PFJetFwd260");
    if (b_HLT_AK8PFJetFwd260_) { b_HLT_AK8PFJetFwd260_->SetAddress(&HLT_AK8PFJetFwd260_); }
    b_HLT_AK8PFJetFwd320_ = tree->GetBranch("HLT_AK8PFJetFwd320");
    if (b_HLT_AK8PFJetFwd320_) { b_HLT_AK8PFJetFwd320_->SetAddress(&HLT_AK8PFJetFwd320_); }
    b_HLT_AK8PFJetFwd40_ = tree->GetBranch("HLT_AK8PFJetFwd40");
    if (b_HLT_AK8PFJetFwd40_) { b_HLT_AK8PFJetFwd40_->SetAddress(&HLT_AK8PFJetFwd40_); }
    b_HLT_AK8PFJetFwd400_ = tree->GetBranch("HLT_AK8PFJetFwd400");
    if (b_HLT_AK8PFJetFwd400_) { b_HLT_AK8PFJetFwd400_->SetAddress(&HLT_AK8PFJetFwd400_); }
    b_HLT_AK8PFJetFwd450_ = tree->GetBranch("HLT_AK8PFJetFwd450");
    if (b_HLT_AK8PFJetFwd450_) { b_HLT_AK8PFJetFwd450_->SetAddress(&HLT_AK8PFJetFwd450_); }
    b_HLT_AK8PFJetFwd500_ = tree->GetBranch("HLT_AK8PFJetFwd500");
    if (b_HLT_AK8PFJetFwd500_) { b_HLT_AK8PFJetFwd500_->SetAddress(&HLT_AK8PFJetFwd500_); }
    b_HLT_AK8PFJetFwd60_ = tree->GetBranch("HLT_AK8PFJetFwd60");
    if (b_HLT_AK8PFJetFwd60_) { b_HLT_AK8PFJetFwd60_->SetAddress(&HLT_AK8PFJetFwd60_); }
    b_HLT_AK8PFJetFwd80_ = tree->GetBranch("HLT_AK8PFJetFwd80");
    if (b_HLT_AK8PFJetFwd80_) { b_HLT_AK8PFJetFwd80_->SetAddress(&HLT_AK8PFJetFwd80_); }
    b_HLT_BTagMu_AK4DiJet110_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4DiJet110_Mu5");
    if (b_HLT_BTagMu_AK4DiJet110_Mu5_) { b_HLT_BTagMu_AK4DiJet110_Mu5_->SetAddress(&HLT_BTagMu_AK4DiJet110_Mu5_); }
    b_HLT_BTagMu_AK4DiJet170_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4DiJet170_Mu5");
    if (b_HLT_BTagMu_AK4DiJet170_Mu5_) { b_HLT_BTagMu_AK4DiJet170_Mu5_->SetAddress(&HLT_BTagMu_AK4DiJet170_Mu5_); }
    b_HLT_BTagMu_AK4DiJet20_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4DiJet20_Mu5");
    if (b_HLT_BTagMu_AK4DiJet20_Mu5_) { b_HLT_BTagMu_AK4DiJet20_Mu5_->SetAddress(&HLT_BTagMu_AK4DiJet20_Mu5_); }
    b_HLT_BTagMu_AK4DiJet40_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4DiJet40_Mu5");
    if (b_HLT_BTagMu_AK4DiJet40_Mu5_) { b_HLT_BTagMu_AK4DiJet40_Mu5_->SetAddress(&HLT_BTagMu_AK4DiJet40_Mu5_); }
    b_HLT_BTagMu_AK4DiJet70_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4DiJet70_Mu5");
    if (b_HLT_BTagMu_AK4DiJet70_Mu5_) { b_HLT_BTagMu_AK4DiJet70_Mu5_->SetAddress(&HLT_BTagMu_AK4DiJet70_Mu5_); }
    b_HLT_BTagMu_AK4Jet300_Mu5_ = tree->GetBranch("HLT_BTagMu_AK4Jet300_Mu5");
    if (b_HLT_BTagMu_AK4Jet300_Mu5_) { b_HLT_BTagMu_AK4Jet300_Mu5_->SetAddress(&HLT_BTagMu_AK4Jet300_Mu5_); }
    b_HLT_BTagMu_AK8DiJet170_Mu5_ = tree->GetBranch("HLT_BTagMu_AK8DiJet170_Mu5");
    if (b_HLT_BTagMu_AK8DiJet170_Mu5_) { b_HLT_BTagMu_AK8DiJet170_Mu5_->SetAddress(&HLT_BTagMu_AK8DiJet170_Mu5_); }
    b_HLT_BTagMu_AK8Jet300_Mu5_ = tree->GetBranch("HLT_BTagMu_AK8Jet300_Mu5");
    if (b_HLT_BTagMu_AK8Jet300_Mu5_) { b_HLT_BTagMu_AK8Jet300_Mu5_->SetAddress(&HLT_BTagMu_AK8Jet300_Mu5_); }
    b_HLT_CaloJet500_NoJetID_ = tree->GetBranch("HLT_CaloJet500_NoJetID");
    if (b_HLT_CaloJet500_NoJetID_) { b_HLT_CaloJet500_NoJetID_->SetAddress(&HLT_CaloJet500_NoJetID_); }
    b_HLT_CaloJet550_NoJetID_ = tree->GetBranch("HLT_CaloJet550_NoJetID");
    if (b_HLT_CaloJet550_NoJetID_) { b_HLT_CaloJet550_NoJetID_->SetAddress(&HLT_CaloJet550_NoJetID_); }
    b_HLT_CaloMET100_HBHECleaned_ = tree->GetBranch("HLT_CaloMET100_HBHECleaned");
    if (b_HLT_CaloMET100_HBHECleaned_) { b_HLT_CaloMET100_HBHECleaned_->SetAddress(&HLT_CaloMET100_HBHECleaned_); }
    b_HLT_CaloMET100_NotCleaned_ = tree->GetBranch("HLT_CaloMET100_NotCleaned");
    if (b_HLT_CaloMET100_NotCleaned_) { b_HLT_CaloMET100_NotCleaned_->SetAddress(&HLT_CaloMET100_NotCleaned_); }
    b_HLT_CaloMET110_NotCleaned_ = tree->GetBranch("HLT_CaloMET110_NotCleaned");
    if (b_HLT_CaloMET110_NotCleaned_) { b_HLT_CaloMET110_NotCleaned_->SetAddress(&HLT_CaloMET110_NotCleaned_); }
    b_HLT_CaloMET250_HBHECleaned_ = tree->GetBranch("HLT_CaloMET250_HBHECleaned");
    if (b_HLT_CaloMET250_HBHECleaned_) { b_HLT_CaloMET250_HBHECleaned_->SetAddress(&HLT_CaloMET250_HBHECleaned_); }
    b_HLT_CaloMET250_NotCleaned_ = tree->GetBranch("HLT_CaloMET250_NotCleaned");
    if (b_HLT_CaloMET250_NotCleaned_) { b_HLT_CaloMET250_NotCleaned_->SetAddress(&HLT_CaloMET250_NotCleaned_); }
    b_HLT_CaloMET300_HBHECleaned_ = tree->GetBranch("HLT_CaloMET300_HBHECleaned");
    if (b_HLT_CaloMET300_HBHECleaned_) { b_HLT_CaloMET300_HBHECleaned_->SetAddress(&HLT_CaloMET300_HBHECleaned_); }
    b_HLT_CaloMET350_HBHECleaned_ = tree->GetBranch("HLT_CaloMET350_HBHECleaned");
    if (b_HLT_CaloMET350_HBHECleaned_) { b_HLT_CaloMET350_HBHECleaned_->SetAddress(&HLT_CaloMET350_HBHECleaned_); }
    b_HLT_CaloMET70_HBHECleaned_ = tree->GetBranch("HLT_CaloMET70_HBHECleaned");
    if (b_HLT_CaloMET70_HBHECleaned_) { b_HLT_CaloMET70_HBHECleaned_->SetAddress(&HLT_CaloMET70_HBHECleaned_); }
    b_HLT_CaloMET80_HBHECleaned_ = tree->GetBranch("HLT_CaloMET80_HBHECleaned");
    if (b_HLT_CaloMET80_HBHECleaned_) { b_HLT_CaloMET80_HBHECleaned_->SetAddress(&HLT_CaloMET80_HBHECleaned_); }
    b_HLT_CaloMET80_NotCleaned_ = tree->GetBranch("HLT_CaloMET80_NotCleaned");
    if (b_HLT_CaloMET80_NotCleaned_) { b_HLT_CaloMET80_NotCleaned_->SetAddress(&HLT_CaloMET80_NotCleaned_); }
    b_HLT_CaloMET90_HBHECleaned_ = tree->GetBranch("HLT_CaloMET90_HBHECleaned");
    if (b_HLT_CaloMET90_HBHECleaned_) { b_HLT_CaloMET90_HBHECleaned_->SetAddress(&HLT_CaloMET90_HBHECleaned_); }
    b_HLT_CaloMET90_NotCleaned_ = tree->GetBranch("HLT_CaloMET90_NotCleaned");
    if (b_HLT_CaloMET90_NotCleaned_) { b_HLT_CaloMET90_NotCleaned_->SetAddress(&HLT_CaloMET90_NotCleaned_); }
    b_HLT_CaloMHT90_ = tree->GetBranch("HLT_CaloMHT90");
    if (b_HLT_CaloMHT90_) { b_HLT_CaloMHT90_->SetAddress(&HLT_CaloMHT90_); }
    b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_ = tree->GetBranch("HLT_DiEle27_WPTightCaloOnly_L1DoubleEG");
    if (b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_) { b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_->SetAddress(&HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_); }
    b_HLT_DiJet110_35_Mjj650_PFMET110_ = tree->GetBranch("HLT_DiJet110_35_Mjj650_PFMET110");
    if (b_HLT_DiJet110_35_Mjj650_PFMET110_) { b_HLT_DiJet110_35_Mjj650_PFMET110_->SetAddress(&HLT_DiJet110_35_Mjj650_PFMET110_); }
    b_HLT_DiJet110_35_Mjj650_PFMET120_ = tree->GetBranch("HLT_DiJet110_35_Mjj650_PFMET120");
    if (b_HLT_DiJet110_35_Mjj650_PFMET120_) { b_HLT_DiJet110_35_Mjj650_PFMET120_->SetAddress(&HLT_DiJet110_35_Mjj650_PFMET120_); }
    b_HLT_DiJet110_35_Mjj650_PFMET130_ = tree->GetBranch("HLT_DiJet110_35_Mjj650_PFMET130");
    if (b_HLT_DiJet110_35_Mjj650_PFMET130_) { b_HLT_DiJet110_35_Mjj650_PFMET130_->SetAddress(&HLT_DiJet110_35_Mjj650_PFMET130_); }
    b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_ = tree->GetBranch("HLT_DiMu9_Ele9_CaloIdL_TrackIdL");
    if (b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_) { b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_->SetAddress(&HLT_DiMu9_Ele9_CaloIdL_TrackIdL_); }
    b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_ = tree->GetBranch("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ");
    if (b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_) { b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_->SetAddress(&HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_); }
    b_HLT_DiPFJet15_FBEta3_NoCaloMatched_ = tree->GetBranch("HLT_DiPFJet15_FBEta3_NoCaloMatched");
    if (b_HLT_DiPFJet15_FBEta3_NoCaloMatched_) { b_HLT_DiPFJet15_FBEta3_NoCaloMatched_->SetAddress(&HLT_DiPFJet15_FBEta3_NoCaloMatched_); }
    b_HLT_DiPFJet15_NoCaloMatched_ = tree->GetBranch("HLT_DiPFJet15_NoCaloMatched");
    if (b_HLT_DiPFJet15_NoCaloMatched_) { b_HLT_DiPFJet15_NoCaloMatched_->SetAddress(&HLT_DiPFJet15_NoCaloMatched_); }
    b_HLT_DiPFJet25_FBEta3_NoCaloMatched_ = tree->GetBranch("HLT_DiPFJet25_FBEta3_NoCaloMatched");
    if (b_HLT_DiPFJet25_FBEta3_NoCaloMatched_) { b_HLT_DiPFJet25_FBEta3_NoCaloMatched_->SetAddress(&HLT_DiPFJet25_FBEta3_NoCaloMatched_); }
    b_HLT_DiPFJet25_NoCaloMatched_ = tree->GetBranch("HLT_DiPFJet25_NoCaloMatched");
    if (b_HLT_DiPFJet25_NoCaloMatched_) { b_HLT_DiPFJet25_NoCaloMatched_->SetAddress(&HLT_DiPFJet25_NoCaloMatched_); }
    b_HLT_DiPFJetAve100_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve100_HFJEC");
    if (b_HLT_DiPFJetAve100_HFJEC_) { b_HLT_DiPFJetAve100_HFJEC_->SetAddress(&HLT_DiPFJetAve100_HFJEC_); }
    b_HLT_DiPFJetAve140_ = tree->GetBranch("HLT_DiPFJetAve140");
    if (b_HLT_DiPFJetAve140_) { b_HLT_DiPFJetAve140_->SetAddress(&HLT_DiPFJetAve140_); }
    b_HLT_DiPFJetAve15_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve15_HFJEC");
    if (b_HLT_DiPFJetAve15_HFJEC_) { b_HLT_DiPFJetAve15_HFJEC_->SetAddress(&HLT_DiPFJetAve15_HFJEC_); }
    b_HLT_DiPFJetAve160_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve160_HFJEC");
    if (b_HLT_DiPFJetAve160_HFJEC_) { b_HLT_DiPFJetAve160_HFJEC_->SetAddress(&HLT_DiPFJetAve160_HFJEC_); }
    b_HLT_DiPFJetAve200_ = tree->GetBranch("HLT_DiPFJetAve200");
    if (b_HLT_DiPFJetAve200_) { b_HLT_DiPFJetAve200_->SetAddress(&HLT_DiPFJetAve200_); }
    b_HLT_DiPFJetAve220_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve220_HFJEC");
    if (b_HLT_DiPFJetAve220_HFJEC_) { b_HLT_DiPFJetAve220_HFJEC_->SetAddress(&HLT_DiPFJetAve220_HFJEC_); }
    b_HLT_DiPFJetAve25_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve25_HFJEC");
    if (b_HLT_DiPFJetAve25_HFJEC_) { b_HLT_DiPFJetAve25_HFJEC_->SetAddress(&HLT_DiPFJetAve25_HFJEC_); }
    b_HLT_DiPFJetAve260_ = tree->GetBranch("HLT_DiPFJetAve260");
    if (b_HLT_DiPFJetAve260_) { b_HLT_DiPFJetAve260_->SetAddress(&HLT_DiPFJetAve260_); }
    b_HLT_DiPFJetAve300_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve300_HFJEC");
    if (b_HLT_DiPFJetAve300_HFJEC_) { b_HLT_DiPFJetAve300_HFJEC_->SetAddress(&HLT_DiPFJetAve300_HFJEC_); }
    b_HLT_DiPFJetAve320_ = tree->GetBranch("HLT_DiPFJetAve320");
    if (b_HLT_DiPFJetAve320_) { b_HLT_DiPFJetAve320_->SetAddress(&HLT_DiPFJetAve320_); }
    b_HLT_DiPFJetAve35_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve35_HFJEC");
    if (b_HLT_DiPFJetAve35_HFJEC_) { b_HLT_DiPFJetAve35_HFJEC_->SetAddress(&HLT_DiPFJetAve35_HFJEC_); }
    b_HLT_DiPFJetAve40_ = tree->GetBranch("HLT_DiPFJetAve40");
    if (b_HLT_DiPFJetAve40_) { b_HLT_DiPFJetAve40_->SetAddress(&HLT_DiPFJetAve40_); }
    b_HLT_DiPFJetAve400_ = tree->GetBranch("HLT_DiPFJetAve400");
    if (b_HLT_DiPFJetAve400_) { b_HLT_DiPFJetAve400_->SetAddress(&HLT_DiPFJetAve400_); }
    b_HLT_DiPFJetAve500_ = tree->GetBranch("HLT_DiPFJetAve500");
    if (b_HLT_DiPFJetAve500_) { b_HLT_DiPFJetAve500_->SetAddress(&HLT_DiPFJetAve500_); }
    b_HLT_DiPFJetAve60_ = tree->GetBranch("HLT_DiPFJetAve60");
    if (b_HLT_DiPFJetAve60_) { b_HLT_DiPFJetAve60_->SetAddress(&HLT_DiPFJetAve60_); }
    b_HLT_DiPFJetAve60_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve60_HFJEC");
    if (b_HLT_DiPFJetAve60_HFJEC_) { b_HLT_DiPFJetAve60_HFJEC_->SetAddress(&HLT_DiPFJetAve60_HFJEC_); }
    b_HLT_DiPFJetAve80_ = tree->GetBranch("HLT_DiPFJetAve80");
    if (b_HLT_DiPFJetAve80_) { b_HLT_DiPFJetAve80_->SetAddress(&HLT_DiPFJetAve80_); }
    b_HLT_DiPFJetAve80_HFJEC_ = tree->GetBranch("HLT_DiPFJetAve80_HFJEC");
    if (b_HLT_DiPFJetAve80_HFJEC_) { b_HLT_DiPFJetAve80_HFJEC_->SetAddress(&HLT_DiPFJetAve80_HFJEC_); }
    b_HLT_DiSC30_18_EIso_AND_HE_Mass70_ = tree->GetBranch("HLT_DiSC30_18_EIso_AND_HE_Mass70");
    if (b_HLT_DiSC30_18_EIso_AND_HE_Mass70_) { b_HLT_DiSC30_18_EIso_AND_HE_Mass70_->SetAddress(&HLT_DiSC30_18_EIso_AND_HE_Mass70_); }
    b_HLT_Dimuon0_Jpsi_ = tree->GetBranch("HLT_Dimuon0_Jpsi");
    if (b_HLT_Dimuon0_Jpsi_) { b_HLT_Dimuon0_Jpsi_->SetAddress(&HLT_Dimuon0_Jpsi_); }
    b_HLT_Dimuon0_Jpsi3p5_Muon2_ = tree->GetBranch("HLT_Dimuon0_Jpsi3p5_Muon2");
    if (b_HLT_Dimuon0_Jpsi3p5_Muon2_) { b_HLT_Dimuon0_Jpsi3p5_Muon2_->SetAddress(&HLT_Dimuon0_Jpsi3p5_Muon2_); }
    b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_ = tree->GetBranch("HLT_Dimuon0_Jpsi_L1_4R_0er1p5R");
    if (b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_) { b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_->SetAddress(&HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_); }
    b_HLT_Dimuon0_Jpsi_L1_NoOS_ = tree->GetBranch("HLT_Dimuon0_Jpsi_L1_NoOS");
    if (b_HLT_Dimuon0_Jpsi_L1_NoOS_) { b_HLT_Dimuon0_Jpsi_L1_NoOS_->SetAddress(&HLT_Dimuon0_Jpsi_L1_NoOS_); }
    b_HLT_Dimuon0_Jpsi_NoVertexing_ = tree->GetBranch("HLT_Dimuon0_Jpsi_NoVertexing");
    if (b_HLT_Dimuon0_Jpsi_NoVertexing_) { b_HLT_Dimuon0_Jpsi_NoVertexing_->SetAddress(&HLT_Dimuon0_Jpsi_NoVertexing_); }
    b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_ = tree->GetBranch("HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R");
    if (b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_) { b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_->SetAddress(&HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_); }
    b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_ = tree->GetBranch("HLT_Dimuon0_Jpsi_NoVertexing_NoOS");
    if (b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_) { b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_->SetAddress(&HLT_Dimuon0_Jpsi_NoVertexing_NoOS_); }
    b_HLT_Dimuon0_LowMass_ = tree->GetBranch("HLT_Dimuon0_LowMass");
    if (b_HLT_Dimuon0_LowMass_) { b_HLT_Dimuon0_LowMass_->SetAddress(&HLT_Dimuon0_LowMass_); }
    b_HLT_Dimuon0_LowMass_L1_0er1p5_ = tree->GetBranch("HLT_Dimuon0_LowMass_L1_0er1p5");
    if (b_HLT_Dimuon0_LowMass_L1_0er1p5_) { b_HLT_Dimuon0_LowMass_L1_0er1p5_->SetAddress(&HLT_Dimuon0_LowMass_L1_0er1p5_); }
    b_HLT_Dimuon0_LowMass_L1_0er1p5R_ = tree->GetBranch("HLT_Dimuon0_LowMass_L1_0er1p5R");
    if (b_HLT_Dimuon0_LowMass_L1_0er1p5R_) { b_HLT_Dimuon0_LowMass_L1_0er1p5R_->SetAddress(&HLT_Dimuon0_LowMass_L1_0er1p5R_); }
    b_HLT_Dimuon0_LowMass_L1_4_ = tree->GetBranch("HLT_Dimuon0_LowMass_L1_4");
    if (b_HLT_Dimuon0_LowMass_L1_4_) { b_HLT_Dimuon0_LowMass_L1_4_->SetAddress(&HLT_Dimuon0_LowMass_L1_4_); }
    b_HLT_Dimuon0_LowMass_L1_4R_ = tree->GetBranch("HLT_Dimuon0_LowMass_L1_4R");
    if (b_HLT_Dimuon0_LowMass_L1_4R_) { b_HLT_Dimuon0_LowMass_L1_4R_->SetAddress(&HLT_Dimuon0_LowMass_L1_4R_); }
    b_HLT_Dimuon0_LowMass_L1_TM530_ = tree->GetBranch("HLT_Dimuon0_LowMass_L1_TM530");
    if (b_HLT_Dimuon0_LowMass_L1_TM530_) { b_HLT_Dimuon0_LowMass_L1_TM530_->SetAddress(&HLT_Dimuon0_LowMass_L1_TM530_); }
    b_HLT_Dimuon0_Upsilon_L1_4p5_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_4p5");
    if (b_HLT_Dimuon0_Upsilon_L1_4p5_) { b_HLT_Dimuon0_Upsilon_L1_4p5_->SetAddress(&HLT_Dimuon0_Upsilon_L1_4p5_); }
    b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_4p5NoOS");
    if (b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_) { b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_->SetAddress(&HLT_Dimuon0_Upsilon_L1_4p5NoOS_); }
    b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_4p5er2p0");
    if (b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_) { b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_->SetAddress(&HLT_Dimuon0_Upsilon_L1_4p5er2p0_); }
    b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_4p5er2p0M");
    if (b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_) { b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_->SetAddress(&HLT_Dimuon0_Upsilon_L1_4p5er2p0M_); }
    b_HLT_Dimuon0_Upsilon_L1_5_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_5");
    if (b_HLT_Dimuon0_Upsilon_L1_5_) { b_HLT_Dimuon0_Upsilon_L1_5_->SetAddress(&HLT_Dimuon0_Upsilon_L1_5_); }
    b_HLT_Dimuon0_Upsilon_L1_5M_ = tree->GetBranch("HLT_Dimuon0_Upsilon_L1_5M");
    if (b_HLT_Dimuon0_Upsilon_L1_5M_) { b_HLT_Dimuon0_Upsilon_L1_5M_->SetAddress(&HLT_Dimuon0_Upsilon_L1_5M_); }
    b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_ = tree->GetBranch("HLT_Dimuon0_Upsilon_Muon_L1_TM0");
    if (b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_) { b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_->SetAddress(&HLT_Dimuon0_Upsilon_Muon_L1_TM0_); }
    b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_ = tree->GetBranch("HLT_Dimuon0_Upsilon_Muon_NoL1Mass");
    if (b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_) { b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_->SetAddress(&HLT_Dimuon0_Upsilon_Muon_NoL1Mass_); }
    b_HLT_Dimuon0_Upsilon_NoVertexing_ = tree->GetBranch("HLT_Dimuon0_Upsilon_NoVertexing");
    if (b_HLT_Dimuon0_Upsilon_NoVertexing_) { b_HLT_Dimuon0_Upsilon_NoVertexing_->SetAddress(&HLT_Dimuon0_Upsilon_NoVertexing_); }
    b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_ = tree->GetBranch("HLT_Dimuon10_PsiPrime_Barrel_Seagulls");
    if (b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_) { b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_->SetAddress(&HLT_Dimuon10_PsiPrime_Barrel_Seagulls_); }
    b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_ = tree->GetBranch("HLT_Dimuon10_Upsilon_Barrel_Seagulls");
    if (b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_) { b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_->SetAddress(&HLT_Dimuon10_Upsilon_Barrel_Seagulls_); }
    b_HLT_Dimuon12_Upsilon_eta1p5_ = tree->GetBranch("HLT_Dimuon12_Upsilon_eta1p5");
    if (b_HLT_Dimuon12_Upsilon_eta1p5_) { b_HLT_Dimuon12_Upsilon_eta1p5_->SetAddress(&HLT_Dimuon12_Upsilon_eta1p5_); }
    b_HLT_Dimuon14_Phi_Barrel_Seagulls_ = tree->GetBranch("HLT_Dimuon14_Phi_Barrel_Seagulls");
    if (b_HLT_Dimuon14_Phi_Barrel_Seagulls_) { b_HLT_Dimuon14_Phi_Barrel_Seagulls_->SetAddress(&HLT_Dimuon14_Phi_Barrel_Seagulls_); }
    b_HLT_Dimuon18_PsiPrime_ = tree->GetBranch("HLT_Dimuon18_PsiPrime");
    if (b_HLT_Dimuon18_PsiPrime_) { b_HLT_Dimuon18_PsiPrime_->SetAddress(&HLT_Dimuon18_PsiPrime_); }
    b_HLT_Dimuon18_PsiPrime_noCorrL1_ = tree->GetBranch("HLT_Dimuon18_PsiPrime_noCorrL1");
    if (b_HLT_Dimuon18_PsiPrime_noCorrL1_) { b_HLT_Dimuon18_PsiPrime_noCorrL1_->SetAddress(&HLT_Dimuon18_PsiPrime_noCorrL1_); }
    b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_ = tree->GetBranch("HLT_Dimuon20_Jpsi_Barrel_Seagulls");
    if (b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_) { b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_->SetAddress(&HLT_Dimuon20_Jpsi_Barrel_Seagulls_); }
    b_HLT_Dimuon24_Phi_noCorrL1_ = tree->GetBranch("HLT_Dimuon24_Phi_noCorrL1");
    if (b_HLT_Dimuon24_Phi_noCorrL1_) { b_HLT_Dimuon24_Phi_noCorrL1_->SetAddress(&HLT_Dimuon24_Phi_noCorrL1_); }
    b_HLT_Dimuon24_Upsilon_noCorrL1_ = tree->GetBranch("HLT_Dimuon24_Upsilon_noCorrL1");
    if (b_HLT_Dimuon24_Upsilon_noCorrL1_) { b_HLT_Dimuon24_Upsilon_noCorrL1_->SetAddress(&HLT_Dimuon24_Upsilon_noCorrL1_); }
    b_HLT_Dimuon25_Jpsi_ = tree->GetBranch("HLT_Dimuon25_Jpsi");
    if (b_HLT_Dimuon25_Jpsi_) { b_HLT_Dimuon25_Jpsi_->SetAddress(&HLT_Dimuon25_Jpsi_); }
    b_HLT_Dimuon25_Jpsi_noCorrL1_ = tree->GetBranch("HLT_Dimuon25_Jpsi_noCorrL1");
    if (b_HLT_Dimuon25_Jpsi_noCorrL1_) { b_HLT_Dimuon25_Jpsi_noCorrL1_->SetAddress(&HLT_Dimuon25_Jpsi_noCorrL1_); }
    b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = tree->GetBranch("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90");
    if (b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) { b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->SetAddress(&HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_); }
    b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = tree->GetBranch("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95");
    if (b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) { b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_->SetAddress(&HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_); }
    b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_ = tree->GetBranch("HLT_DoubleEle24_eta2p1_WPTight_Gsf");
    if (b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_) { b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_->SetAddress(&HLT_DoubleEle24_eta2p1_WPTight_Gsf_); }
    b_HLT_DoubleEle25_CaloIdL_MW_ = tree->GetBranch("HLT_DoubleEle25_CaloIdL_MW");
    if (b_HLT_DoubleEle25_CaloIdL_MW_) { b_HLT_DoubleEle25_CaloIdL_MW_->SetAddress(&HLT_DoubleEle25_CaloIdL_MW_); }
    b_HLT_DoubleEle27_CaloIdL_MW_ = tree->GetBranch("HLT_DoubleEle27_CaloIdL_MW");
    if (b_HLT_DoubleEle27_CaloIdL_MW_) { b_HLT_DoubleEle27_CaloIdL_MW_->SetAddress(&HLT_DoubleEle27_CaloIdL_MW_); }
    b_HLT_DoubleEle33_CaloIdL_MW_ = tree->GetBranch("HLT_DoubleEle33_CaloIdL_MW");
    if (b_HLT_DoubleEle33_CaloIdL_MW_) { b_HLT_DoubleEle33_CaloIdL_MW_->SetAddress(&HLT_DoubleEle33_CaloIdL_MW_); }
    b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_ = tree->GetBranch("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350");
    if (b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_) { b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_->SetAddress(&HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_); }
    b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_ = tree->GetBranch("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350");
    if (b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_) { b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_->SetAddress(&HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_); }
    b_HLT_DoubleIsoMu20_eta2p1_ = tree->GetBranch("HLT_DoubleIsoMu20_eta2p1");
    if (b_HLT_DoubleIsoMu20_eta2p1_) { b_HLT_DoubleIsoMu20_eta2p1_->SetAddress(&HLT_DoubleIsoMu20_eta2p1_); }
    b_HLT_DoubleIsoMu24_eta2p1_ = tree->GetBranch("HLT_DoubleIsoMu24_eta2p1");
    if (b_HLT_DoubleIsoMu24_eta2p1_) { b_HLT_DoubleIsoMu24_eta2p1_->SetAddress(&HLT_DoubleIsoMu24_eta2p1_); }
    b_HLT_DoubleL2Mu50_ = tree->GetBranch("HLT_DoubleL2Mu50");
    if (b_HLT_DoubleL2Mu50_) { b_HLT_DoubleL2Mu50_->SetAddress(&HLT_DoubleL2Mu50_); }
    b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_) { b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_); }
    b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_) { b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_); }
    b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_) { b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_); }
    b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_) { b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_); }
    b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_ = tree->GetBranch("HLT_DoubleMu20_7_Mass0to30_L1_DM4");
    if (b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_) { b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_->SetAddress(&HLT_DoubleMu20_7_Mass0to30_L1_DM4_); }
    b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_ = tree->GetBranch("HLT_DoubleMu20_7_Mass0to30_L1_DM4EG");
    if (b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_) { b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_->SetAddress(&HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_); }
    b_HLT_DoubleMu20_7_Mass0to30_Photon23_ = tree->GetBranch("HLT_DoubleMu20_7_Mass0to30_Photon23");
    if (b_HLT_DoubleMu20_7_Mass0to30_Photon23_) { b_HLT_DoubleMu20_7_Mass0to30_Photon23_->SetAddress(&HLT_DoubleMu20_7_Mass0to30_Photon23_); }
    b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_ = tree->GetBranch("HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi");
    if (b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_) { b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_->SetAddress(&HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_); }
    b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_ = tree->GetBranch("HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi");
    if (b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_) { b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_->SetAddress(&HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_); }
    b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_ = tree->GetBranch("HLT_DoubleMu3_DCA_PFMET50_PFMHT60");
    if (b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_) { b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_->SetAddress(&HLT_DoubleMu3_DCA_PFMET50_PFMHT60_); }
    b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_ = tree->GetBranch("HLT_DoubleMu3_DZ_PFMET50_PFMHT60");
    if (b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_) { b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_->SetAddress(&HLT_DoubleMu3_DZ_PFMET50_PFMHT60_); }
    b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_ = tree->GetBranch("HLT_DoubleMu3_DZ_PFMET70_PFMHT70");
    if (b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_) { b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_->SetAddress(&HLT_DoubleMu3_DZ_PFMET70_PFMHT70_); }
    b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_ = tree->GetBranch("HLT_DoubleMu3_DZ_PFMET90_PFMHT90");
    if (b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_) { b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_->SetAddress(&HLT_DoubleMu3_DZ_PFMET90_PFMHT90_); }
    b_HLT_DoubleMu3_Trk_Tau3mu_ = tree->GetBranch("HLT_DoubleMu3_Trk_Tau3mu");
    if (b_HLT_DoubleMu3_Trk_Tau3mu_) { b_HLT_DoubleMu3_Trk_Tau3mu_->SetAddress(&HLT_DoubleMu3_Trk_Tau3mu_); }
    b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_ = tree->GetBranch("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass");
    if (b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_) { b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_->SetAddress(&HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_); }
    b_HLT_DoubleMu43NoFiltersNoVtx_ = tree->GetBranch("HLT_DoubleMu43NoFiltersNoVtx");
    if (b_HLT_DoubleMu43NoFiltersNoVtx_) { b_HLT_DoubleMu43NoFiltersNoVtx_->SetAddress(&HLT_DoubleMu43NoFiltersNoVtx_); }
    b_HLT_DoubleMu48NoFiltersNoVtx_ = tree->GetBranch("HLT_DoubleMu48NoFiltersNoVtx");
    if (b_HLT_DoubleMu48NoFiltersNoVtx_) { b_HLT_DoubleMu48NoFiltersNoVtx_->SetAddress(&HLT_DoubleMu48NoFiltersNoVtx_); }
    b_HLT_DoubleMu4_3_Bs_ = tree->GetBranch("HLT_DoubleMu4_3_Bs");
    if (b_HLT_DoubleMu4_3_Bs_) { b_HLT_DoubleMu4_3_Bs_->SetAddress(&HLT_DoubleMu4_3_Bs_); }
    b_HLT_DoubleMu4_3_Jpsi_Displaced_ = tree->GetBranch("HLT_DoubleMu4_3_Jpsi_Displaced");
    if (b_HLT_DoubleMu4_3_Jpsi_Displaced_) { b_HLT_DoubleMu4_3_Jpsi_Displaced_->SetAddress(&HLT_DoubleMu4_3_Jpsi_Displaced_); }
    b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_ = tree->GetBranch("HLT_DoubleMu4_JpsiTrkTrk_Displaced");
    if (b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_) { b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_->SetAddress(&HLT_DoubleMu4_JpsiTrkTrk_Displaced_); }
    b_HLT_DoubleMu4_JpsiTrk_Displaced_ = tree->GetBranch("HLT_DoubleMu4_JpsiTrk_Displaced");
    if (b_HLT_DoubleMu4_JpsiTrk_Displaced_) { b_HLT_DoubleMu4_JpsiTrk_Displaced_->SetAddress(&HLT_DoubleMu4_JpsiTrk_Displaced_); }
    b_HLT_DoubleMu4_Jpsi_Displaced_ = tree->GetBranch("HLT_DoubleMu4_Jpsi_Displaced");
    if (b_HLT_DoubleMu4_Jpsi_Displaced_) { b_HLT_DoubleMu4_Jpsi_Displaced_->SetAddress(&HLT_DoubleMu4_Jpsi_Displaced_); }
    b_HLT_DoubleMu4_Jpsi_NoVertexing_ = tree->GetBranch("HLT_DoubleMu4_Jpsi_NoVertexing");
    if (b_HLT_DoubleMu4_Jpsi_NoVertexing_) { b_HLT_DoubleMu4_Jpsi_NoVertexing_->SetAddress(&HLT_DoubleMu4_Jpsi_NoVertexing_); }
    b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_ = tree->GetBranch("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced");
    if (b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_) { b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_->SetAddress(&HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_); }
    b_HLT_DoubleMu4_Mass8_DZ_PFHT350_ = tree->GetBranch("HLT_DoubleMu4_Mass8_DZ_PFHT350");
    if (b_HLT_DoubleMu4_Mass8_DZ_PFHT350_) { b_HLT_DoubleMu4_Mass8_DZ_PFHT350_->SetAddress(&HLT_DoubleMu4_Mass8_DZ_PFHT350_); }
    b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_ = tree->GetBranch("HLT_DoubleMu4_PsiPrimeTrk_Displaced");
    if (b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_) { b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_->SetAddress(&HLT_DoubleMu4_PsiPrimeTrk_Displaced_); }
    b_HLT_DoubleMu8_Mass8_PFHT350_ = tree->GetBranch("HLT_DoubleMu8_Mass8_PFHT350");
    if (b_HLT_DoubleMu8_Mass8_PFHT350_) { b_HLT_DoubleMu8_Mass8_PFHT350_->SetAddress(&HLT_DoubleMu8_Mass8_PFHT350_); }
    b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_DoublePFJets100_CaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets100_CaloBTagCSV_p33");
    if (b_HLT_DoublePFJets100_CaloBTagCSV_p33_) { b_HLT_DoublePFJets100_CaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets100_CaloBTagCSV_p33_); }
    b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_DoublePFJets200_CaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets200_CaloBTagCSV_p33");
    if (b_HLT_DoublePFJets200_CaloBTagCSV_p33_) { b_HLT_DoublePFJets200_CaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets200_CaloBTagCSV_p33_); }
    b_HLT_DoublePFJets350_CaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets350_CaloBTagCSV_p33");
    if (b_HLT_DoublePFJets350_CaloBTagCSV_p33_) { b_HLT_DoublePFJets350_CaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets350_CaloBTagCSV_p33_); }
    b_HLT_DoublePFJets40_CaloBTagCSV_p33_ = tree->GetBranch("HLT_DoublePFJets40_CaloBTagCSV_p33");
    if (b_HLT_DoublePFJets40_CaloBTagCSV_p33_) { b_HLT_DoublePFJets40_CaloBTagCSV_p33_->SetAddress(&HLT_DoublePFJets40_CaloBTagCSV_p33_); }
    b_HLT_DoublePhoton33_CaloIdL_ = tree->GetBranch("HLT_DoublePhoton33_CaloIdL");
    if (b_HLT_DoublePhoton33_CaloIdL_) { b_HLT_DoublePhoton33_CaloIdL_->SetAddress(&HLT_DoublePhoton33_CaloIdL_); }
    b_HLT_DoublePhoton70_ = tree->GetBranch("HLT_DoublePhoton70");
    if (b_HLT_DoublePhoton70_) { b_HLT_DoublePhoton70_->SetAddress(&HLT_DoublePhoton70_); }
    b_HLT_DoublePhoton85_ = tree->GetBranch("HLT_DoublePhoton85");
    if (b_HLT_DoublePhoton85_) { b_HLT_DoublePhoton85_->SetAddress(&HLT_DoublePhoton85_); }
    b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_) { b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_); }
    b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg");
    if (b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) { b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->SetAddress(&HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_); }
    b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg");
    if (b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_) { b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_->SetAddress(&HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_); }
    b_HLT_ECALHT800_ = tree->GetBranch("HLT_ECALHT800");
    if (b_HLT_ECALHT800_) { b_HLT_ECALHT800_->SetAddress(&HLT_ECALHT800_); }
    b_HLT_EcalCalibration_ = tree->GetBranch("HLT_EcalCalibration");
    if (b_HLT_EcalCalibration_) { b_HLT_EcalCalibration_->SetAddress(&HLT_EcalCalibration_); }
    b_HLT_Ele115_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele115_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele115_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele115_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele115_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ = tree->GetBranch("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30");
    if (b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_) { b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_->SetAddress(&HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_); }
    b_HLT_Ele135_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele135_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele135_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele135_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele135_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele145_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele145_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele145_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele145_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele145_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele15_IsoVVVL_PFHT450_ = tree->GetBranch("HLT_Ele15_IsoVVVL_PFHT450");
    if (b_HLT_Ele15_IsoVVVL_PFHT450_) { b_HLT_Ele15_IsoVVVL_PFHT450_->SetAddress(&HLT_Ele15_IsoVVVL_PFHT450_); }
    b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = tree->GetBranch("HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5");
    if (b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) { b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_->SetAddress(&HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_); }
    b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_ = tree->GetBranch("HLT_Ele15_IsoVVVL_PFHT450_PFMET50");
    if (b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_) { b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_->SetAddress(&HLT_Ele15_IsoVVVL_PFHT450_PFMET50_); }
    b_HLT_Ele15_IsoVVVL_PFHT600_ = tree->GetBranch("HLT_Ele15_IsoVVVL_PFHT600");
    if (b_HLT_Ele15_IsoVVVL_PFHT600_) { b_HLT_Ele15_IsoVVVL_PFHT600_->SetAddress(&HLT_Ele15_IsoVVVL_PFHT600_); }
    b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_ = tree->GetBranch("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL");
    if (b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_) { b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_->SetAddress(&HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_); }
    b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_ = tree->GetBranch("HLT_Ele17_CaloIdM_TrackIdM_PFJet30");
    if (b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_) { b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_->SetAddress(&HLT_Ele17_CaloIdM_TrackIdM_PFJet30_); }
    b_HLT_Ele200_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele200_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele200_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele200_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele200_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele20_WPLoose_Gsf_ = tree->GetBranch("HLT_Ele20_WPLoose_Gsf");
    if (b_HLT_Ele20_WPLoose_Gsf_) { b_HLT_Ele20_WPLoose_Gsf_->SetAddress(&HLT_Ele20_WPLoose_Gsf_); }
    b_HLT_Ele20_WPTight_Gsf_ = tree->GetBranch("HLT_Ele20_WPTight_Gsf");
    if (b_HLT_Ele20_WPTight_Gsf_) { b_HLT_Ele20_WPTight_Gsf_->SetAddress(&HLT_Ele20_WPTight_Gsf_); }
    b_HLT_Ele20_eta2p1_WPLoose_Gsf_ = tree->GetBranch("HLT_Ele20_eta2p1_WPLoose_Gsf");
    if (b_HLT_Ele20_eta2p1_WPLoose_Gsf_) { b_HLT_Ele20_eta2p1_WPLoose_Gsf_->SetAddress(&HLT_Ele20_eta2p1_WPLoose_Gsf_); }
    b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ = tree->GetBranch("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30");
    if (b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_) { b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_->SetAddress(&HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_); }
    b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ = tree->GetBranch("HLT_Ele23_CaloIdM_TrackIdM_PFJet30");
    if (b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_) { b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_->SetAddress(&HLT_Ele23_CaloIdM_TrackIdM_PFJet30_); }
    b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_ = tree->GetBranch("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL");
    if (b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_) { b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_->SetAddress(&HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_); }
    b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = tree->GetBranch("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ");
    if (b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) { b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_->SetAddress(&HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_); }
    b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1");
    if (b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_) { b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_->SetAddress(&HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_); }
    b_HLT_Ele250_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele250_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele250_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele250_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele250_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele27_Ele37_CaloIdL_MW_ = tree->GetBranch("HLT_Ele27_Ele37_CaloIdL_MW");
    if (b_HLT_Ele27_Ele37_CaloIdL_MW_) { b_HLT_Ele27_Ele37_CaloIdL_MW_->SetAddress(&HLT_Ele27_Ele37_CaloIdL_MW_); }
    b_HLT_Ele27_WPTight_Gsf_ = tree->GetBranch("HLT_Ele27_WPTight_Gsf");
    if (b_HLT_Ele27_WPTight_Gsf_) { b_HLT_Ele27_WPTight_Gsf_->SetAddress(&HLT_Ele27_WPTight_Gsf_); }
    b_HLT_Ele28_HighEta_SC20_Mass55_ = tree->GetBranch("HLT_Ele28_HighEta_SC20_Mass55");
    if (b_HLT_Ele28_HighEta_SC20_Mass55_) { b_HLT_Ele28_HighEta_SC20_Mass55_->SetAddress(&HLT_Ele28_HighEta_SC20_Mass55_); }
    b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_ = tree->GetBranch("HLT_Ele28_eta2p1_WPTight_Gsf_HT150");
    if (b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_) { b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_->SetAddress(&HLT_Ele28_eta2p1_WPTight_Gsf_HT150_); }
    b_HLT_Ele300_CaloIdVT_GsfTrkIdT_ = tree->GetBranch("HLT_Ele300_CaloIdVT_GsfTrkIdT");
    if (b_HLT_Ele300_CaloIdVT_GsfTrkIdT_) { b_HLT_Ele300_CaloIdVT_GsfTrkIdT_->SetAddress(&HLT_Ele300_CaloIdVT_GsfTrkIdT_); }
    b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_ = tree->GetBranch("HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned");
    if (b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_) { b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_->SetAddress(&HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_); }
    b_HLT_Ele32_WPTight_Gsf_ = tree->GetBranch("HLT_Ele32_WPTight_Gsf");
    if (b_HLT_Ele32_WPTight_Gsf_) { b_HLT_Ele32_WPTight_Gsf_->SetAddress(&HLT_Ele32_WPTight_Gsf_); }
    b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_ = tree->GetBranch("HLT_Ele32_WPTight_Gsf_L1DoubleEG");
    if (b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_) { b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_->SetAddress(&HLT_Ele32_WPTight_Gsf_L1DoubleEG_); }
    b_HLT_Ele35_WPTight_Gsf_ = tree->GetBranch("HLT_Ele35_WPTight_Gsf");
    if (b_HLT_Ele35_WPTight_Gsf_) { b_HLT_Ele35_WPTight_Gsf_->SetAddress(&HLT_Ele35_WPTight_Gsf_); }
    b_HLT_Ele35_WPTight_Gsf_L1EGMT_ = tree->GetBranch("HLT_Ele35_WPTight_Gsf_L1EGMT");
    if (b_HLT_Ele35_WPTight_Gsf_L1EGMT_) { b_HLT_Ele35_WPTight_Gsf_L1EGMT_->SetAddress(&HLT_Ele35_WPTight_Gsf_L1EGMT_); }
    b_HLT_Ele38_WPTight_Gsf_ = tree->GetBranch("HLT_Ele38_WPTight_Gsf");
    if (b_HLT_Ele38_WPTight_Gsf_) { b_HLT_Ele38_WPTight_Gsf_->SetAddress(&HLT_Ele38_WPTight_Gsf_); }
    b_HLT_Ele40_WPTight_Gsf_ = tree->GetBranch("HLT_Ele40_WPTight_Gsf");
    if (b_HLT_Ele40_WPTight_Gsf_) { b_HLT_Ele40_WPTight_Gsf_->SetAddress(&HLT_Ele40_WPTight_Gsf_); }
    b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_ = tree->GetBranch("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165");
    if (b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_) { b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_->SetAddress(&HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_); }
    b_HLT_Ele50_IsoVVVL_PFHT450_ = tree->GetBranch("HLT_Ele50_IsoVVVL_PFHT450");
    if (b_HLT_Ele50_IsoVVVL_PFHT450_) { b_HLT_Ele50_IsoVVVL_PFHT450_->SetAddress(&HLT_Ele50_IsoVVVL_PFHT450_); }
    b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_ = tree->GetBranch("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30");
    if (b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_) { b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_->SetAddress(&HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_); }
    b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ = tree->GetBranch("HLT_Ele8_CaloIdM_TrackIdM_PFJet30");
    if (b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_) { b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_->SetAddress(&HLT_Ele8_CaloIdM_TrackIdM_PFJet30_); }
    b_HLT_FullTrack_Multiplicity100_ = tree->GetBranch("HLT_FullTrack_Multiplicity100");
    if (b_HLT_FullTrack_Multiplicity100_) { b_HLT_FullTrack_Multiplicity100_->SetAddress(&HLT_FullTrack_Multiplicity100_); }
    b_HLT_FullTrack_Multiplicity130_ = tree->GetBranch("HLT_FullTrack_Multiplicity130");
    if (b_HLT_FullTrack_Multiplicity130_) { b_HLT_FullTrack_Multiplicity130_->SetAddress(&HLT_FullTrack_Multiplicity130_); }
    b_HLT_FullTrack_Multiplicity155_ = tree->GetBranch("HLT_FullTrack_Multiplicity155");
    if (b_HLT_FullTrack_Multiplicity155_) { b_HLT_FullTrack_Multiplicity155_->SetAddress(&HLT_FullTrack_Multiplicity155_); }
    b_HLT_FullTrack_Multiplicity85_ = tree->GetBranch("HLT_FullTrack_Multiplicity85");
    if (b_HLT_FullTrack_Multiplicity85_) { b_HLT_FullTrack_Multiplicity85_->SetAddress(&HLT_FullTrack_Multiplicity85_); }
    b_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton10_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton10_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton10_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton10_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton20_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton20_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton20_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton20_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton30_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton30_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton30_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton30_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton40_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton40_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton40_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton40_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton50_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton50_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton50_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton50_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton60_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton60_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton60_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton60_Eta3p1ForPPRef_); }
    b_HLT_HT300_Beamspot_ = tree->GetBranch("HLT_HT300_Beamspot");
    if (b_HLT_HT300_Beamspot_) { b_HLT_HT300_Beamspot_->SetAddress(&HLT_HT300_Beamspot_); }
    b_HLT_HT400_DisplacedDijet40_DisplacedTrack_ = tree->GetBranch("HLT_HT400_DisplacedDijet40_DisplacedTrack");
    if (b_HLT_HT400_DisplacedDijet40_DisplacedTrack_) { b_HLT_HT400_DisplacedDijet40_DisplacedTrack_->SetAddress(&HLT_HT400_DisplacedDijet40_DisplacedTrack_); }
    b_HLT_HT425_ = tree->GetBranch("HLT_HT425");
    if (b_HLT_HT425_) { b_HLT_HT425_->SetAddress(&HLT_HT425_); }
    b_HLT_HT430_DisplacedDijet40_DisplacedTrack_ = tree->GetBranch("HLT_HT430_DisplacedDijet40_DisplacedTrack");
    if (b_HLT_HT430_DisplacedDijet40_DisplacedTrack_) { b_HLT_HT430_DisplacedDijet40_DisplacedTrack_->SetAddress(&HLT_HT430_DisplacedDijet40_DisplacedTrack_); }
    b_HLT_HT430_DisplacedDijet60_DisplacedTrack_ = tree->GetBranch("HLT_HT430_DisplacedDijet60_DisplacedTrack");
    if (b_HLT_HT430_DisplacedDijet60_DisplacedTrack_) { b_HLT_HT430_DisplacedDijet60_DisplacedTrack_->SetAddress(&HLT_HT430_DisplacedDijet60_DisplacedTrack_); }
    b_HLT_HT430_DisplacedDijet80_DisplacedTrack_ = tree->GetBranch("HLT_HT430_DisplacedDijet80_DisplacedTrack");
    if (b_HLT_HT430_DisplacedDijet80_DisplacedTrack_) { b_HLT_HT430_DisplacedDijet80_DisplacedTrack_->SetAddress(&HLT_HT430_DisplacedDijet80_DisplacedTrack_); }
    b_HLT_HT450_Beamspot_ = tree->GetBranch("HLT_HT450_Beamspot");
    if (b_HLT_HT450_Beamspot_) { b_HLT_HT450_Beamspot_->SetAddress(&HLT_HT450_Beamspot_); }
    b_HLT_HT550_DisplacedDijet60_Inclusive_ = tree->GetBranch("HLT_HT550_DisplacedDijet60_Inclusive");
    if (b_HLT_HT550_DisplacedDijet60_Inclusive_) { b_HLT_HT550_DisplacedDijet60_Inclusive_->SetAddress(&HLT_HT550_DisplacedDijet60_Inclusive_); }
    b_HLT_HT550_DisplacedDijet80_Inclusive_ = tree->GetBranch("HLT_HT550_DisplacedDijet80_Inclusive");
    if (b_HLT_HT550_DisplacedDijet80_Inclusive_) { b_HLT_HT550_DisplacedDijet80_Inclusive_->SetAddress(&HLT_HT550_DisplacedDijet80_Inclusive_); }
    b_HLT_HT650_DisplacedDijet60_Inclusive_ = tree->GetBranch("HLT_HT650_DisplacedDijet60_Inclusive");
    if (b_HLT_HT650_DisplacedDijet60_Inclusive_) { b_HLT_HT650_DisplacedDijet60_Inclusive_->SetAddress(&HLT_HT650_DisplacedDijet60_Inclusive_); }
    b_HLT_HT650_DisplacedDijet80_Inclusive_ = tree->GetBranch("HLT_HT650_DisplacedDijet80_Inclusive");
    if (b_HLT_HT650_DisplacedDijet80_Inclusive_) { b_HLT_HT650_DisplacedDijet80_Inclusive_->SetAddress(&HLT_HT650_DisplacedDijet80_Inclusive_); }
    b_HLT_HT750_DisplacedDijet80_Inclusive_ = tree->GetBranch("HLT_HT750_DisplacedDijet80_Inclusive");
    if (b_HLT_HT750_DisplacedDijet80_Inclusive_) { b_HLT_HT750_DisplacedDijet80_Inclusive_->SetAddress(&HLT_HT750_DisplacedDijet80_Inclusive_); }
    b_HLT_HcalCalibration_ = tree->GetBranch("HLT_HcalCalibration");
    if (b_HLT_HcalCalibration_) { b_HLT_HcalCalibration_->SetAddress(&HLT_HcalCalibration_); }
    b_HLT_HcalIsolatedbunch_ = tree->GetBranch("HLT_HcalIsolatedbunch");
    if (b_HLT_HcalIsolatedbunch_) { b_HLT_HcalIsolatedbunch_->SetAddress(&HLT_HcalIsolatedbunch_); }
    b_HLT_HcalNZS_ = tree->GetBranch("HLT_HcalNZS");
    if (b_HLT_HcalNZS_) { b_HLT_HcalNZS_->SetAddress(&HLT_HcalNZS_); }
    b_HLT_HcalPhiSym_ = tree->GetBranch("HLT_HcalPhiSym");
    if (b_HLT_HcalPhiSym_) { b_HLT_HcalPhiSym_->SetAddress(&HLT_HcalPhiSym_); }
    b_HLT_IsoMu20_ = tree->GetBranch("HLT_IsoMu20");
    if (b_HLT_IsoMu20_) { b_HLT_IsoMu20_->SetAddress(&HLT_IsoMu20_); }
    b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_) { b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_); }
    b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_) { b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_); }
    b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_) { b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_); }
    b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_) { b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_); }
    b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_) { b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_); }
    b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = tree->GetBranch("HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1");
    if (b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_) { b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_->SetAddress(&HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_); }
    b_HLT_IsoMu24_ = tree->GetBranch("HLT_IsoMu24");
    if (b_HLT_IsoMu24_) { b_HLT_IsoMu24_->SetAddress(&HLT_IsoMu24_); }
    b_HLT_IsoMu24_eta2p1_ = tree->GetBranch("HLT_IsoMu24_eta2p1");
    if (b_HLT_IsoMu24_eta2p1_) { b_HLT_IsoMu24_eta2p1_->SetAddress(&HLT_IsoMu24_eta2p1_); }
    b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_) { b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = tree->GetBranch("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr");
    if (b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) { b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_->SetAddress(&HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = tree->GetBranch("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1");
    if (b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) { b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_->SetAddress(&HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_); }
    b_HLT_IsoMu27_ = tree->GetBranch("HLT_IsoMu27");
    if (b_HLT_IsoMu27_) { b_HLT_IsoMu27_->SetAddress(&HLT_IsoMu27_); }
    b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_ = tree->GetBranch("HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1");
    if (b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_) { b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_->SetAddress(&HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_); }
    b_HLT_IsoMu30_ = tree->GetBranch("HLT_IsoMu30");
    if (b_HLT_IsoMu30_) { b_HLT_IsoMu30_->SetAddress(&HLT_IsoMu30_); }
    b_HLT_IsoTrackHB_ = tree->GetBranch("HLT_IsoTrackHB");
    if (b_HLT_IsoTrackHB_) { b_HLT_IsoTrackHB_->SetAddress(&HLT_IsoTrackHB_); }
    b_HLT_IsoTrackHE_ = tree->GetBranch("HLT_IsoTrackHE");
    if (b_HLT_IsoTrackHE_) { b_HLT_IsoTrackHE_->SetAddress(&HLT_IsoTrackHE_); }
    b_HLT_L1ETMHadSeeds_ = tree->GetBranch("HLT_L1ETMHadSeeds");
    if (b_HLT_L1ETMHadSeeds_) { b_HLT_L1ETMHadSeeds_->SetAddress(&HLT_L1ETMHadSeeds_); }
    b_HLT_L1MinimumBiasHF0OR_ = tree->GetBranch("HLT_L1MinimumBiasHF0OR");
    if (b_HLT_L1MinimumBiasHF0OR_) { b_HLT_L1MinimumBiasHF0OR_->SetAddress(&HLT_L1MinimumBiasHF0OR_); }
    b_HLT_L1MinimumBiasHF_OR_ = tree->GetBranch("HLT_L1MinimumBiasHF_OR");
    if (b_HLT_L1MinimumBiasHF_OR_) { b_HLT_L1MinimumBiasHF_OR_->SetAddress(&HLT_L1MinimumBiasHF_OR_); }
    b_HLT_L1NotBptxOR_ = tree->GetBranch("HLT_L1NotBptxOR");
    if (b_HLT_L1NotBptxOR_) { b_HLT_L1NotBptxOR_->SetAddress(&HLT_L1NotBptxOR_); }
    b_HLT_L1SingleMu18_ = tree->GetBranch("HLT_L1SingleMu18");
    if (b_HLT_L1SingleMu18_) { b_HLT_L1SingleMu18_->SetAddress(&HLT_L1SingleMu18_); }
    b_HLT_L1SingleMu25_ = tree->GetBranch("HLT_L1SingleMu25");
    if (b_HLT_L1SingleMu25_) { b_HLT_L1SingleMu25_->SetAddress(&HLT_L1SingleMu25_); }
    b_HLT_L1UnpairedBunchBptxMinus_ = tree->GetBranch("HLT_L1UnpairedBunchBptxMinus");
    if (b_HLT_L1UnpairedBunchBptxMinus_) { b_HLT_L1UnpairedBunchBptxMinus_->SetAddress(&HLT_L1UnpairedBunchBptxMinus_); }
    b_HLT_L1UnpairedBunchBptxPlus_ = tree->GetBranch("HLT_L1UnpairedBunchBptxPlus");
    if (b_HLT_L1UnpairedBunchBptxPlus_) { b_HLT_L1UnpairedBunchBptxPlus_->SetAddress(&HLT_L1UnpairedBunchBptxPlus_); }
    b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_ = tree->GetBranch("HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142");
    if (b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_) { b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_->SetAddress(&HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_); }
    b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_ = tree->GetBranch("HLT_L1_DoubleJet30_Mass_Min400_Mu10");
    if (b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_) { b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_->SetAddress(&HLT_L1_DoubleJet30_Mass_Min400_Mu10_); }
    b_HLT_L2Mu10_ = tree->GetBranch("HLT_L2Mu10");
    if (b_HLT_L2Mu10_) { b_HLT_L2Mu10_->SetAddress(&HLT_L2Mu10_); }
    b_HLT_L2Mu10_NoVertex_NoBPTX_ = tree->GetBranch("HLT_L2Mu10_NoVertex_NoBPTX");
    if (b_HLT_L2Mu10_NoVertex_NoBPTX_) { b_HLT_L2Mu10_NoVertex_NoBPTX_->SetAddress(&HLT_L2Mu10_NoVertex_NoBPTX_); }
    b_HLT_L2Mu10_NoVertex_NoBPTX3BX_ = tree->GetBranch("HLT_L2Mu10_NoVertex_NoBPTX3BX");
    if (b_HLT_L2Mu10_NoVertex_NoBPTX3BX_) { b_HLT_L2Mu10_NoVertex_NoBPTX3BX_->SetAddress(&HLT_L2Mu10_NoVertex_NoBPTX3BX_); }
    b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_ = tree->GetBranch("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX");
    if (b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_) { b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_->SetAddress(&HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_); }
    b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_ = tree->GetBranch("HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX");
    if (b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_) { b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_->SetAddress(&HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_); }
    b_HLT_L2Mu50_ = tree->GetBranch("HLT_L2Mu50");
    if (b_HLT_L2Mu50_) { b_HLT_L2Mu50_->SetAddress(&HLT_L2Mu50_); }
    b_HLT_MET105_IsoTrk50_ = tree->GetBranch("HLT_MET105_IsoTrk50");
    if (b_HLT_MET105_IsoTrk50_) { b_HLT_MET105_IsoTrk50_->SetAddress(&HLT_MET105_IsoTrk50_); }
    b_HLT_MET120_IsoTrk50_ = tree->GetBranch("HLT_MET120_IsoTrk50");
    if (b_HLT_MET120_IsoTrk50_) { b_HLT_MET120_IsoTrk50_->SetAddress(&HLT_MET120_IsoTrk50_); }
    b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_ = tree->GetBranch("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1");
    if (b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_) { b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_->SetAddress(&HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_); }
    b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_ = tree->GetBranch("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr");
    if (b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_) { b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_->SetAddress(&HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_); }
    b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_ = tree->GetBranch("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90");
    if (b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_) { b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_->SetAddress(&HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_); }
    b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_ = tree->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight");
    if (b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_) { b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_->SetAddress(&HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_); }
    b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_ = tree->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight");
    if (b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_) { b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_->SetAddress(&HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_); }
    b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_ = tree->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight");
    if (b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_) { b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_->SetAddress(&HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_); }
    b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_ = tree->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight");
    if (b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_) { b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_->SetAddress(&HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_); }
    b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_ = tree->GetBranch("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60");
    if (b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_) { b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_->SetAddress(&HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_); }
    b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_ = tree->GetBranch("HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33");
    if (b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_) { b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_->SetAddress(&HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_); }
    b_HLT_Mu12_DoublePhoton20_ = tree->GetBranch("HLT_Mu12_DoublePhoton20");
    if (b_HLT_Mu12_DoublePhoton20_) { b_HLT_Mu12_DoublePhoton20_->SetAddress(&HLT_Mu12_DoublePhoton20_); }
    b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = tree->GetBranch("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL");
    if (b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) { b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_->SetAddress(&HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_); }
    b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = tree->GetBranch("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ");
    if (b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) { b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_->SetAddress(&HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_); }
    b_HLT_Mu15_IsoVVVL_PFHT450_ = tree->GetBranch("HLT_Mu15_IsoVVVL_PFHT450");
    if (b_HLT_Mu15_IsoVVVL_PFHT450_) { b_HLT_Mu15_IsoVVVL_PFHT450_->SetAddress(&HLT_Mu15_IsoVVVL_PFHT450_); }
    b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = tree->GetBranch("HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5");
    if (b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) { b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_->SetAddress(&HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_); }
    b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_ = tree->GetBranch("HLT_Mu15_IsoVVVL_PFHT450_PFMET50");
    if (b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_) { b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_->SetAddress(&HLT_Mu15_IsoVVVL_PFHT450_PFMET50_); }
    b_HLT_Mu15_IsoVVVL_PFHT600_ = tree->GetBranch("HLT_Mu15_IsoVVVL_PFHT600");
    if (b_HLT_Mu15_IsoVVVL_PFHT600_) { b_HLT_Mu15_IsoVVVL_PFHT600_->SetAddress(&HLT_Mu15_IsoVVVL_PFHT600_); }
    b_HLT_Mu17_ = tree->GetBranch("HLT_Mu17");
    if (b_HLT_Mu17_) { b_HLT_Mu17_->SetAddress(&HLT_Mu17_); }
    b_HLT_Mu17_Photon30_IsoCaloId_ = tree->GetBranch("HLT_Mu17_Photon30_IsoCaloId");
    if (b_HLT_Mu17_Photon30_IsoCaloId_) { b_HLT_Mu17_Photon30_IsoCaloId_->SetAddress(&HLT_Mu17_Photon30_IsoCaloId_); }
    b_HLT_Mu17_TrkIsoVVL_ = tree->GetBranch("HLT_Mu17_TrkIsoVVL");
    if (b_HLT_Mu17_TrkIsoVVL_) { b_HLT_Mu17_TrkIsoVVL_->SetAddress(&HLT_Mu17_TrkIsoVVL_); }
    b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_ = tree->GetBranch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL");
    if (b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_) { b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_->SetAddress(&HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_); }
    b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_ = tree->GetBranch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ");
    if (b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_) { b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_->SetAddress(&HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_); }
    b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_ = tree->GetBranch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8");
    if (b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_) { b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_->SetAddress(&HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_); }
    b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_ = tree->GetBranch("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8");
    if (b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_) { b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_->SetAddress(&HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_); }
    b_HLT_Mu18_Mu9_ = tree->GetBranch("HLT_Mu18_Mu9");
    if (b_HLT_Mu18_Mu9_) { b_HLT_Mu18_Mu9_->SetAddress(&HLT_Mu18_Mu9_); }
    b_HLT_Mu18_Mu9_DZ_ = tree->GetBranch("HLT_Mu18_Mu9_DZ");
    if (b_HLT_Mu18_Mu9_DZ_) { b_HLT_Mu18_Mu9_DZ_->SetAddress(&HLT_Mu18_Mu9_DZ_); }
    b_HLT_Mu18_Mu9_SameSign_ = tree->GetBranch("HLT_Mu18_Mu9_SameSign");
    if (b_HLT_Mu18_Mu9_SameSign_) { b_HLT_Mu18_Mu9_SameSign_->SetAddress(&HLT_Mu18_Mu9_SameSign_); }
    b_HLT_Mu18_Mu9_SameSign_DZ_ = tree->GetBranch("HLT_Mu18_Mu9_SameSign_DZ");
    if (b_HLT_Mu18_Mu9_SameSign_DZ_) { b_HLT_Mu18_Mu9_SameSign_DZ_->SetAddress(&HLT_Mu18_Mu9_SameSign_DZ_); }
    b_HLT_Mu19_ = tree->GetBranch("HLT_Mu19");
    if (b_HLT_Mu19_) { b_HLT_Mu19_->SetAddress(&HLT_Mu19_); }
    b_HLT_Mu19_TrkIsoVVL_ = tree->GetBranch("HLT_Mu19_TrkIsoVVL");
    if (b_HLT_Mu19_TrkIsoVVL_) { b_HLT_Mu19_TrkIsoVVL_->SetAddress(&HLT_Mu19_TrkIsoVVL_); }
    b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_ = tree->GetBranch("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL");
    if (b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_) { b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_->SetAddress(&HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_); }
    b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_ = tree->GetBranch("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ");
    if (b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_) { b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_->SetAddress(&HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_); }
    b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_ = tree->GetBranch("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8");
    if (b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_) { b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_->SetAddress(&HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_); }
    b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_ = tree->GetBranch("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8");
    if (b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_) { b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_->SetAddress(&HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_); }
    b_HLT_Mu20_ = tree->GetBranch("HLT_Mu20");
    if (b_HLT_Mu20_) { b_HLT_Mu20_->SetAddress(&HLT_Mu20_); }
    b_HLT_Mu20_Mu10_ = tree->GetBranch("HLT_Mu20_Mu10");
    if (b_HLT_Mu20_Mu10_) { b_HLT_Mu20_Mu10_->SetAddress(&HLT_Mu20_Mu10_); }
    b_HLT_Mu20_Mu10_DZ_ = tree->GetBranch("HLT_Mu20_Mu10_DZ");
    if (b_HLT_Mu20_Mu10_DZ_) { b_HLT_Mu20_Mu10_DZ_->SetAddress(&HLT_Mu20_Mu10_DZ_); }
    b_HLT_Mu20_Mu10_SameSign_ = tree->GetBranch("HLT_Mu20_Mu10_SameSign");
    if (b_HLT_Mu20_Mu10_SameSign_) { b_HLT_Mu20_Mu10_SameSign_->SetAddress(&HLT_Mu20_Mu10_SameSign_); }
    b_HLT_Mu20_Mu10_SameSign_DZ_ = tree->GetBranch("HLT_Mu20_Mu10_SameSign_DZ");
    if (b_HLT_Mu20_Mu10_SameSign_DZ_) { b_HLT_Mu20_Mu10_SameSign_DZ_->SetAddress(&HLT_Mu20_Mu10_SameSign_DZ_); }
    b_HLT_Mu20_TkMu0_Phi_ = tree->GetBranch("HLT_Mu20_TkMu0_Phi");
    if (b_HLT_Mu20_TkMu0_Phi_) { b_HLT_Mu20_TkMu0_Phi_->SetAddress(&HLT_Mu20_TkMu0_Phi_); }
    b_HLT_Mu23_Mu12_ = tree->GetBranch("HLT_Mu23_Mu12");
    if (b_HLT_Mu23_Mu12_) { b_HLT_Mu23_Mu12_->SetAddress(&HLT_Mu23_Mu12_); }
    b_HLT_Mu23_Mu12_DZ_ = tree->GetBranch("HLT_Mu23_Mu12_DZ");
    if (b_HLT_Mu23_Mu12_DZ_) { b_HLT_Mu23_Mu12_DZ_->SetAddress(&HLT_Mu23_Mu12_DZ_); }
    b_HLT_Mu23_Mu12_SameSign_ = tree->GetBranch("HLT_Mu23_Mu12_SameSign");
    if (b_HLT_Mu23_Mu12_SameSign_) { b_HLT_Mu23_Mu12_SameSign_->SetAddress(&HLT_Mu23_Mu12_SameSign_); }
    b_HLT_Mu23_Mu12_SameSign_DZ_ = tree->GetBranch("HLT_Mu23_Mu12_SameSign_DZ");
    if (b_HLT_Mu23_Mu12_SameSign_DZ_) { b_HLT_Mu23_Mu12_SameSign_DZ_->SetAddress(&HLT_Mu23_Mu12_SameSign_DZ_); }
    b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ = tree->GetBranch("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL");
    if (b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_) { b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_->SetAddress(&HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_); }
    b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = tree->GetBranch("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ");
    if (b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) { b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_->SetAddress(&HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_); }
    b_HLT_Mu25_TkMu0_Onia_ = tree->GetBranch("HLT_Mu25_TkMu0_Onia");
    if (b_HLT_Mu25_TkMu0_Onia_) { b_HLT_Mu25_TkMu0_Onia_->SetAddress(&HLT_Mu25_TkMu0_Onia_); }
    b_HLT_Mu25_TkMu0_Phi_ = tree->GetBranch("HLT_Mu25_TkMu0_Phi");
    if (b_HLT_Mu25_TkMu0_Phi_) { b_HLT_Mu25_TkMu0_Phi_->SetAddress(&HLT_Mu25_TkMu0_Phi_); }
    b_HLT_Mu27_ = tree->GetBranch("HLT_Mu27");
    if (b_HLT_Mu27_) { b_HLT_Mu27_->SetAddress(&HLT_Mu27_); }
    b_HLT_Mu27_Ele37_CaloIdL_MW_ = tree->GetBranch("HLT_Mu27_Ele37_CaloIdL_MW");
    if (b_HLT_Mu27_Ele37_CaloIdL_MW_) { b_HLT_Mu27_Ele37_CaloIdL_MW_->SetAddress(&HLT_Mu27_Ele37_CaloIdL_MW_); }
    b_HLT_Mu30_TkMu0_Onia_ = tree->GetBranch("HLT_Mu30_TkMu0_Onia");
    if (b_HLT_Mu30_TkMu0_Onia_) { b_HLT_Mu30_TkMu0_Onia_->SetAddress(&HLT_Mu30_TkMu0_Onia_); }
    b_HLT_Mu37_Ele27_CaloIdL_MW_ = tree->GetBranch("HLT_Mu37_Ele27_CaloIdL_MW");
    if (b_HLT_Mu37_Ele27_CaloIdL_MW_) { b_HLT_Mu37_Ele27_CaloIdL_MW_->SetAddress(&HLT_Mu37_Ele27_CaloIdL_MW_); }
    b_HLT_Mu37_TkMu27_ = tree->GetBranch("HLT_Mu37_TkMu27");
    if (b_HLT_Mu37_TkMu27_) { b_HLT_Mu37_TkMu27_->SetAddress(&HLT_Mu37_TkMu27_); }
    b_HLT_Mu3_PFJet40_ = tree->GetBranch("HLT_Mu3_PFJet40");
    if (b_HLT_Mu3_PFJet40_) { b_HLT_Mu3_PFJet40_->SetAddress(&HLT_Mu3_PFJet40_); }
    b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = tree->GetBranch("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL");
    if (b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) { b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_->SetAddress(&HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_); }
    b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = tree->GetBranch("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL");
    if (b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) { b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_->SetAddress(&HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_); }
    b_HLT_Mu50_ = tree->GetBranch("HLT_Mu50");
    if (b_HLT_Mu50_) { b_HLT_Mu50_->SetAddress(&HLT_Mu50_); }
    b_HLT_Mu50_IsoVVVL_PFHT450_ = tree->GetBranch("HLT_Mu50_IsoVVVL_PFHT450");
    if (b_HLT_Mu50_IsoVVVL_PFHT450_) { b_HLT_Mu50_IsoVVVL_PFHT450_->SetAddress(&HLT_Mu50_IsoVVVL_PFHT450_); }
    b_HLT_Mu55_ = tree->GetBranch("HLT_Mu55");
    if (b_HLT_Mu55_) { b_HLT_Mu55_->SetAddress(&HLT_Mu55_); }
    b_HLT_Mu7p5_L2Mu2_Jpsi_ = tree->GetBranch("HLT_Mu7p5_L2Mu2_Jpsi");
    if (b_HLT_Mu7p5_L2Mu2_Jpsi_) { b_HLT_Mu7p5_L2Mu2_Jpsi_->SetAddress(&HLT_Mu7p5_L2Mu2_Jpsi_); }
    b_HLT_Mu7p5_L2Mu2_Upsilon_ = tree->GetBranch("HLT_Mu7p5_L2Mu2_Upsilon");
    if (b_HLT_Mu7p5_L2Mu2_Upsilon_) { b_HLT_Mu7p5_L2Mu2_Upsilon_->SetAddress(&HLT_Mu7p5_L2Mu2_Upsilon_); }
    b_HLT_Mu7p5_Track2_Jpsi_ = tree->GetBranch("HLT_Mu7p5_Track2_Jpsi");
    if (b_HLT_Mu7p5_Track2_Jpsi_) { b_HLT_Mu7p5_Track2_Jpsi_->SetAddress(&HLT_Mu7p5_Track2_Jpsi_); }
    b_HLT_Mu7p5_Track2_Upsilon_ = tree->GetBranch("HLT_Mu7p5_Track2_Upsilon");
    if (b_HLT_Mu7p5_Track2_Upsilon_) { b_HLT_Mu7p5_Track2_Upsilon_->SetAddress(&HLT_Mu7p5_Track2_Upsilon_); }
    b_HLT_Mu7p5_Track3p5_Jpsi_ = tree->GetBranch("HLT_Mu7p5_Track3p5_Jpsi");
    if (b_HLT_Mu7p5_Track3p5_Jpsi_) { b_HLT_Mu7p5_Track3p5_Jpsi_->SetAddress(&HLT_Mu7p5_Track3p5_Jpsi_); }
    b_HLT_Mu7p5_Track3p5_Upsilon_ = tree->GetBranch("HLT_Mu7p5_Track3p5_Upsilon");
    if (b_HLT_Mu7p5_Track3p5_Upsilon_) { b_HLT_Mu7p5_Track3p5_Upsilon_->SetAddress(&HLT_Mu7p5_Track3p5_Upsilon_); }
    b_HLT_Mu7p5_Track7_Jpsi_ = tree->GetBranch("HLT_Mu7p5_Track7_Jpsi");
    if (b_HLT_Mu7p5_Track7_Jpsi_) { b_HLT_Mu7p5_Track7_Jpsi_->SetAddress(&HLT_Mu7p5_Track7_Jpsi_); }
    b_HLT_Mu7p5_Track7_Upsilon_ = tree->GetBranch("HLT_Mu7p5_Track7_Upsilon");
    if (b_HLT_Mu7p5_Track7_Upsilon_) { b_HLT_Mu7p5_Track7_Upsilon_->SetAddress(&HLT_Mu7p5_Track7_Upsilon_); }
    b_HLT_Mu8_ = tree->GetBranch("HLT_Mu8");
    if (b_HLT_Mu8_) { b_HLT_Mu8_->SetAddress(&HLT_Mu8_); }
    b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_ = tree->GetBranch("HLT_Mu8_DiEle12_CaloIdL_TrackIdL");
    if (b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_) { b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_->SetAddress(&HLT_Mu8_DiEle12_CaloIdL_TrackIdL_); }
    b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_ = tree->GetBranch("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ");
    if (b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_) { b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_->SetAddress(&HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_); }
    b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_ = tree->GetBranch("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350");
    if (b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_) { b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_->SetAddress(&HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_); }
    b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_ = tree->GetBranch("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ");
    if (b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_) { b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_->SetAddress(&HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_); }
    b_HLT_Mu8_TrkIsoVVL_ = tree->GetBranch("HLT_Mu8_TrkIsoVVL");
    if (b_HLT_Mu8_TrkIsoVVL_) { b_HLT_Mu8_TrkIsoVVL_->SetAddress(&HLT_Mu8_TrkIsoVVL_); }
    b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_ = tree->GetBranch("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60");
    if (b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_) { b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_->SetAddress(&HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_); }
    b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = tree->GetBranch("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL");
    if (b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) { b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_->SetAddress(&HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_); }
    b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = tree->GetBranch("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ");
    if (b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) { b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_->SetAddress(&HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_); }
    b_HLT_OldMu100_ = tree->GetBranch("HLT_OldMu100");
    if (b_HLT_OldMu100_) { b_HLT_OldMu100_->SetAddress(&HLT_OldMu100_); }
    b_HLT_PFHT1050_ = tree->GetBranch("HLT_PFHT1050");
    if (b_HLT_PFHT1050_) { b_HLT_PFHT1050_->SetAddress(&HLT_PFHT1050_); }
    b_HLT_PFHT180_ = tree->GetBranch("HLT_PFHT180");
    if (b_HLT_PFHT180_) { b_HLT_PFHT180_->SetAddress(&HLT_PFHT180_); }
    b_HLT_PFHT250_ = tree->GetBranch("HLT_PFHT250");
    if (b_HLT_PFHT250_) { b_HLT_PFHT250_->SetAddress(&HLT_PFHT250_); }
    b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_ = tree->GetBranch("HLT_PFHT300PT30_QuadPFJet_75_60_45_40");
    if (b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_) { b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_->SetAddress(&HLT_PFHT300PT30_QuadPFJet_75_60_45_40_); }
    b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_ = tree->GetBranch("HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0");
    if (b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_) { b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_->SetAddress(&HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_); }
    b_HLT_PFHT350_ = tree->GetBranch("HLT_PFHT350");
    if (b_HLT_PFHT350_) { b_HLT_PFHT350_->SetAddress(&HLT_PFHT350_); }
    b_HLT_PFHT350MinPFJet15_ = tree->GetBranch("HLT_PFHT350MinPFJet15");
    if (b_HLT_PFHT350MinPFJet15_) { b_HLT_PFHT350MinPFJet15_->SetAddress(&HLT_PFHT350MinPFJet15_); }
    b_HLT_PFHT370_ = tree->GetBranch("HLT_PFHT370");
    if (b_HLT_PFHT370_) { b_HLT_PFHT370_->SetAddress(&HLT_PFHT370_); }
    b_HLT_PFHT380_SixPFJet32_ = tree->GetBranch("HLT_PFHT380_SixPFJet32");
    if (b_HLT_PFHT380_SixPFJet32_) { b_HLT_PFHT380_SixPFJet32_->SetAddress(&HLT_PFHT380_SixPFJet32_); }
    b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_ = tree->GetBranch("HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2");
    if (b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_) { b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_->SetAddress(&HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_); }
    b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_ = tree->GetBranch("HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2");
    if (b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_) { b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_->SetAddress(&HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_); }
    b_HLT_PFHT430_ = tree->GetBranch("HLT_PFHT430");
    if (b_HLT_PFHT430_) { b_HLT_PFHT430_->SetAddress(&HLT_PFHT430_); }
    b_HLT_PFHT430_SixPFJet40_ = tree->GetBranch("HLT_PFHT430_SixPFJet40");
    if (b_HLT_PFHT430_SixPFJet40_) { b_HLT_PFHT430_SixPFJet40_->SetAddress(&HLT_PFHT430_SixPFJet40_); }
    b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_ = tree->GetBranch("HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5");
    if (b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_) { b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_->SetAddress(&HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_); }
    b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_ = tree->GetBranch("HLT_PFHT500_PFMET100_PFMHT100_IDTight");
    if (b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_) { b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_->SetAddress(&HLT_PFHT500_PFMET100_PFMHT100_IDTight_); }
    b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_ = tree->GetBranch("HLT_PFHT500_PFMET110_PFMHT110_IDTight");
    if (b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_) { b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_->SetAddress(&HLT_PFHT500_PFMET110_PFMHT110_IDTight_); }
    b_HLT_PFHT510_ = tree->GetBranch("HLT_PFHT510");
    if (b_HLT_PFHT510_) { b_HLT_PFHT510_->SetAddress(&HLT_PFHT510_); }
    b_HLT_PFHT590_ = tree->GetBranch("HLT_PFHT590");
    if (b_HLT_PFHT590_) { b_HLT_PFHT590_->SetAddress(&HLT_PFHT590_); }
    b_HLT_PFHT680_ = tree->GetBranch("HLT_PFHT680");
    if (b_HLT_PFHT680_) { b_HLT_PFHT680_->SetAddress(&HLT_PFHT680_); }
    b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_ = tree->GetBranch("HLT_PFHT700_PFMET85_PFMHT85_IDTight");
    if (b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_) { b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_->SetAddress(&HLT_PFHT700_PFMET85_PFMHT85_IDTight_); }
    b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_ = tree->GetBranch("HLT_PFHT700_PFMET95_PFMHT95_IDTight");
    if (b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_) { b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_->SetAddress(&HLT_PFHT700_PFMET95_PFMHT95_IDTight_); }
    b_HLT_PFHT780_ = tree->GetBranch("HLT_PFHT780");
    if (b_HLT_PFHT780_) { b_HLT_PFHT780_->SetAddress(&HLT_PFHT780_); }
    b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_ = tree->GetBranch("HLT_PFHT800_PFMET75_PFMHT75_IDTight");
    if (b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_) { b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_->SetAddress(&HLT_PFHT800_PFMET75_PFMHT75_IDTight_); }
    b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_ = tree->GetBranch("HLT_PFHT800_PFMET85_PFMHT85_IDTight");
    if (b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_) { b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_->SetAddress(&HLT_PFHT800_PFMET85_PFMHT85_IDTight_); }
    b_HLT_PFHT890_ = tree->GetBranch("HLT_PFHT890");
    if (b_HLT_PFHT890_) { b_HLT_PFHT890_->SetAddress(&HLT_PFHT890_); }
    b_HLT_PFJet140_ = tree->GetBranch("HLT_PFJet140");
    if (b_HLT_PFJet140_) { b_HLT_PFJet140_->SetAddress(&HLT_PFJet140_); }
    b_HLT_PFJet200_ = tree->GetBranch("HLT_PFJet200");
    if (b_HLT_PFJet200_) { b_HLT_PFJet200_->SetAddress(&HLT_PFJet200_); }
    b_HLT_PFJet260_ = tree->GetBranch("HLT_PFJet260");
    if (b_HLT_PFJet260_) { b_HLT_PFJet260_->SetAddress(&HLT_PFJet260_); }
    b_HLT_PFJet320_ = tree->GetBranch("HLT_PFJet320");
    if (b_HLT_PFJet320_) { b_HLT_PFJet320_->SetAddress(&HLT_PFJet320_); }
    b_HLT_PFJet40_ = tree->GetBranch("HLT_PFJet40");
    if (b_HLT_PFJet40_) { b_HLT_PFJet40_->SetAddress(&HLT_PFJet40_); }
    b_HLT_PFJet400_ = tree->GetBranch("HLT_PFJet400");
    if (b_HLT_PFJet400_) { b_HLT_PFJet400_->SetAddress(&HLT_PFJet400_); }
    b_HLT_PFJet450_ = tree->GetBranch("HLT_PFJet450");
    if (b_HLT_PFJet450_) { b_HLT_PFJet450_->SetAddress(&HLT_PFJet450_); }
    b_HLT_PFJet500_ = tree->GetBranch("HLT_PFJet500");
    if (b_HLT_PFJet500_) { b_HLT_PFJet500_->SetAddress(&HLT_PFJet500_); }
    b_HLT_PFJet550_ = tree->GetBranch("HLT_PFJet550");
    if (b_HLT_PFJet550_) { b_HLT_PFJet550_->SetAddress(&HLT_PFJet550_); }
    b_HLT_PFJet60_ = tree->GetBranch("HLT_PFJet60");
    if (b_HLT_PFJet60_) { b_HLT_PFJet60_->SetAddress(&HLT_PFJet60_); }
    b_HLT_PFJet80_ = tree->GetBranch("HLT_PFJet80");
    if (b_HLT_PFJet80_) { b_HLT_PFJet80_->SetAddress(&HLT_PFJet80_); }
    b_HLT_PFJetFwd140_ = tree->GetBranch("HLT_PFJetFwd140");
    if (b_HLT_PFJetFwd140_) { b_HLT_PFJetFwd140_->SetAddress(&HLT_PFJetFwd140_); }
    b_HLT_PFJetFwd200_ = tree->GetBranch("HLT_PFJetFwd200");
    if (b_HLT_PFJetFwd200_) { b_HLT_PFJetFwd200_->SetAddress(&HLT_PFJetFwd200_); }
    b_HLT_PFJetFwd260_ = tree->GetBranch("HLT_PFJetFwd260");
    if (b_HLT_PFJetFwd260_) { b_HLT_PFJetFwd260_->SetAddress(&HLT_PFJetFwd260_); }
    b_HLT_PFJetFwd320_ = tree->GetBranch("HLT_PFJetFwd320");
    if (b_HLT_PFJetFwd320_) { b_HLT_PFJetFwd320_->SetAddress(&HLT_PFJetFwd320_); }
    b_HLT_PFJetFwd40_ = tree->GetBranch("HLT_PFJetFwd40");
    if (b_HLT_PFJetFwd40_) { b_HLT_PFJetFwd40_->SetAddress(&HLT_PFJetFwd40_); }
    b_HLT_PFJetFwd400_ = tree->GetBranch("HLT_PFJetFwd400");
    if (b_HLT_PFJetFwd400_) { b_HLT_PFJetFwd400_->SetAddress(&HLT_PFJetFwd400_); }
    b_HLT_PFJetFwd450_ = tree->GetBranch("HLT_PFJetFwd450");
    if (b_HLT_PFJetFwd450_) { b_HLT_PFJetFwd450_->SetAddress(&HLT_PFJetFwd450_); }
    b_HLT_PFJetFwd500_ = tree->GetBranch("HLT_PFJetFwd500");
    if (b_HLT_PFJetFwd500_) { b_HLT_PFJetFwd500_->SetAddress(&HLT_PFJetFwd500_); }
    b_HLT_PFJetFwd60_ = tree->GetBranch("HLT_PFJetFwd60");
    if (b_HLT_PFJetFwd60_) { b_HLT_PFJetFwd60_->SetAddress(&HLT_PFJetFwd60_); }
    b_HLT_PFJetFwd80_ = tree->GetBranch("HLT_PFJetFwd80");
    if (b_HLT_PFJetFwd80_) { b_HLT_PFJetFwd80_->SetAddress(&HLT_PFJetFwd80_); }
    b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_ = tree->GetBranch("HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1");
    if (b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_) { b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_->SetAddress(&HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_); }
    b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMET100_PFMHT100_IDTight_PFHT60");
    if (b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_) { b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_->SetAddress(&HLT_PFMET100_PFMHT100_IDTight_PFHT60_); }
    b_HLT_PFMET110_PFMHT110_IDTight_ = tree->GetBranch("HLT_PFMET110_PFMHT110_IDTight");
    if (b_HLT_PFMET110_PFMHT110_IDTight_) { b_HLT_PFMET110_PFMHT110_IDTight_->SetAddress(&HLT_PFMET110_PFMHT110_IDTight_); }
    b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_ = tree->GetBranch("HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1");
    if (b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_) { b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_->SetAddress(&HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_); }
    b_HLT_PFMET120_PFMHT120_IDTight_ = tree->GetBranch("HLT_PFMET120_PFMHT120_IDTight");
    if (b_HLT_PFMET120_PFMHT120_IDTight_) { b_HLT_PFMET120_PFMHT120_IDTight_->SetAddress(&HLT_PFMET120_PFMHT120_IDTight_); }
    b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_ = tree->GetBranch("HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1");
    if (b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_) { b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_->SetAddress(&HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_); }
    b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMET120_PFMHT120_IDTight_PFHT60");
    if (b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_) { b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_->SetAddress(&HLT_PFMET120_PFMHT120_IDTight_PFHT60_); }
    b_HLT_PFMET130_PFMHT130_IDTight_ = tree->GetBranch("HLT_PFMET130_PFMHT130_IDTight");
    if (b_HLT_PFMET130_PFMHT130_IDTight_) { b_HLT_PFMET130_PFMHT130_IDTight_->SetAddress(&HLT_PFMET130_PFMHT130_IDTight_); }
    b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_ = tree->GetBranch("HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1");
    if (b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_) { b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_->SetAddress(&HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_); }
    b_HLT_PFMET140_PFMHT140_IDTight_ = tree->GetBranch("HLT_PFMET140_PFMHT140_IDTight");
    if (b_HLT_PFMET140_PFMHT140_IDTight_) { b_HLT_PFMET140_PFMHT140_IDTight_->SetAddress(&HLT_PFMET140_PFMHT140_IDTight_); }
    b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_ = tree->GetBranch("HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1");
    if (b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_) { b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_->SetAddress(&HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_); }
    b_HLT_PFMET200_HBHECleaned_ = tree->GetBranch("HLT_PFMET200_HBHECleaned");
    if (b_HLT_PFMET200_HBHECleaned_) { b_HLT_PFMET200_HBHECleaned_->SetAddress(&HLT_PFMET200_HBHECleaned_); }
    b_HLT_PFMET200_HBHE_BeamHaloCleaned_ = tree->GetBranch("HLT_PFMET200_HBHE_BeamHaloCleaned");
    if (b_HLT_PFMET200_HBHE_BeamHaloCleaned_) { b_HLT_PFMET200_HBHE_BeamHaloCleaned_->SetAddress(&HLT_PFMET200_HBHE_BeamHaloCleaned_); }
    b_HLT_PFMET200_NotCleaned_ = tree->GetBranch("HLT_PFMET200_NotCleaned");
    if (b_HLT_PFMET200_NotCleaned_) { b_HLT_PFMET200_NotCleaned_->SetAddress(&HLT_PFMET200_NotCleaned_); }
    b_HLT_PFMET250_HBHECleaned_ = tree->GetBranch("HLT_PFMET250_HBHECleaned");
    if (b_HLT_PFMET250_HBHECleaned_) { b_HLT_PFMET250_HBHECleaned_->SetAddress(&HLT_PFMET250_HBHECleaned_); }
    b_HLT_PFMET300_HBHECleaned_ = tree->GetBranch("HLT_PFMET300_HBHECleaned");
    if (b_HLT_PFMET300_HBHECleaned_) { b_HLT_PFMET300_HBHECleaned_->SetAddress(&HLT_PFMET300_HBHECleaned_); }
    b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60");
    if (b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_) { b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_->SetAddress(&HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_); }
    b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_ = tree->GetBranch("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight");
    if (b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_) { b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_->SetAddress(&HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_); }
    b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_ = tree->GetBranch("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight");
    if (b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_) { b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_->SetAddress(&HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_); }
    b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60");
    if (b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_) { b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_->SetAddress(&HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_); }
    b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_ = tree->GetBranch("HLT_PFMETNoMu130_PFMHTNoMu130_IDTight");
    if (b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_) { b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_->SetAddress(&HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_); }
    b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_ = tree->GetBranch("HLT_PFMETNoMu140_PFMHTNoMu140_IDTight");
    if (b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_) { b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_->SetAddress(&HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_); }
    b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60");
    if (b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_) { b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_->SetAddress(&HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_); }
    b_HLT_PFMETTypeOne110_PFMHT110_IDTight_ = tree->GetBranch("HLT_PFMETTypeOne110_PFMHT110_IDTight");
    if (b_HLT_PFMETTypeOne110_PFMHT110_IDTight_) { b_HLT_PFMETTypeOne110_PFMHT110_IDTight_->SetAddress(&HLT_PFMETTypeOne110_PFMHT110_IDTight_); }
    b_HLT_PFMETTypeOne120_PFMHT120_IDTight_ = tree->GetBranch("HLT_PFMETTypeOne120_PFMHT120_IDTight");
    if (b_HLT_PFMETTypeOne120_PFMHT120_IDTight_) { b_HLT_PFMETTypeOne120_PFMHT120_IDTight_->SetAddress(&HLT_PFMETTypeOne120_PFMHT120_IDTight_); }
    b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_ = tree->GetBranch("HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60");
    if (b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_) { b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_->SetAddress(&HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_); }
    b_HLT_PFMETTypeOne130_PFMHT130_IDTight_ = tree->GetBranch("HLT_PFMETTypeOne130_PFMHT130_IDTight");
    if (b_HLT_PFMETTypeOne130_PFMHT130_IDTight_) { b_HLT_PFMETTypeOne130_PFMHT130_IDTight_->SetAddress(&HLT_PFMETTypeOne130_PFMHT130_IDTight_); }
    b_HLT_PFMETTypeOne140_PFMHT140_IDTight_ = tree->GetBranch("HLT_PFMETTypeOne140_PFMHT140_IDTight");
    if (b_HLT_PFMETTypeOne140_PFMHT140_IDTight_) { b_HLT_PFMETTypeOne140_PFMHT140_IDTight_->SetAddress(&HLT_PFMETTypeOne140_PFMHT140_IDTight_); }
    b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_ = tree->GetBranch("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned");
    if (b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_) { b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_->SetAddress(&HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_); }
    b_HLT_Photon120_ = tree->GetBranch("HLT_Photon120");
    if (b_HLT_Photon120_) { b_HLT_Photon120_->SetAddress(&HLT_Photon120_); }
    b_HLT_Photon120_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon120_R9Id90_HE10_IsoM");
    if (b_HLT_Photon120_R9Id90_HE10_IsoM_) { b_HLT_Photon120_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon120_R9Id90_HE10_IsoM_); }
    b_HLT_Photon150_ = tree->GetBranch("HLT_Photon150");
    if (b_HLT_Photon150_) { b_HLT_Photon150_->SetAddress(&HLT_Photon150_); }
    b_HLT_Photon165_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon165_R9Id90_HE10_IsoM");
    if (b_HLT_Photon165_R9Id90_HE10_IsoM_) { b_HLT_Photon165_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon165_R9Id90_HE10_IsoM_); }
    b_HLT_Photon175_ = tree->GetBranch("HLT_Photon175");
    if (b_HLT_Photon175_) { b_HLT_Photon175_->SetAddress(&HLT_Photon175_); }
    b_HLT_Photon200_ = tree->GetBranch("HLT_Photon200");
    if (b_HLT_Photon200_) { b_HLT_Photon200_->SetAddress(&HLT_Photon200_); }
    b_HLT_Photon20_HoverELoose_ = tree->GetBranch("HLT_Photon20_HoverELoose");
    if (b_HLT_Photon20_HoverELoose_) { b_HLT_Photon20_HoverELoose_->SetAddress(&HLT_Photon20_HoverELoose_); }
    b_HLT_Photon25_ = tree->GetBranch("HLT_Photon25");
    if (b_HLT_Photon25_) { b_HLT_Photon25_->SetAddress(&HLT_Photon25_); }
    b_HLT_Photon300_NoHE_ = tree->GetBranch("HLT_Photon300_NoHE");
    if (b_HLT_Photon300_NoHE_) { b_HLT_Photon300_NoHE_->SetAddress(&HLT_Photon300_NoHE_); }
    b_HLT_Photon30_HoverELoose_ = tree->GetBranch("HLT_Photon30_HoverELoose");
    if (b_HLT_Photon30_HoverELoose_) { b_HLT_Photon30_HoverELoose_->SetAddress(&HLT_Photon30_HoverELoose_); }
    b_HLT_Photon33_ = tree->GetBranch("HLT_Photon33");
    if (b_HLT_Photon33_) { b_HLT_Photon33_->SetAddress(&HLT_Photon33_); }
    b_HLT_Photon40_HoverELoose_ = tree->GetBranch("HLT_Photon40_HoverELoose");
    if (b_HLT_Photon40_HoverELoose_) { b_HLT_Photon40_HoverELoose_->SetAddress(&HLT_Photon40_HoverELoose_); }
    b_HLT_Photon50_ = tree->GetBranch("HLT_Photon50");
    if (b_HLT_Photon50_) { b_HLT_Photon50_->SetAddress(&HLT_Photon50_); }
    b_HLT_Photon50_HoverELoose_ = tree->GetBranch("HLT_Photon50_HoverELoose");
    if (b_HLT_Photon50_HoverELoose_) { b_HLT_Photon50_HoverELoose_->SetAddress(&HLT_Photon50_HoverELoose_); }
    b_HLT_Photon50_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_IsoM");
    if (b_HLT_Photon50_R9Id90_HE10_IsoM_) { b_HLT_Photon50_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon50_R9Id90_HE10_IsoM_); }
    b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50");
    if (b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) { b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_->SetAddress(&HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_); }
    b_HLT_Photon60_HoverELoose_ = tree->GetBranch("HLT_Photon60_HoverELoose");
    if (b_HLT_Photon60_HoverELoose_) { b_HLT_Photon60_HoverELoose_->SetAddress(&HLT_Photon60_HoverELoose_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_); }
    b_HLT_Photon75_ = tree->GetBranch("HLT_Photon75");
    if (b_HLT_Photon75_) { b_HLT_Photon75_->SetAddress(&HLT_Photon75_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_) { b_HLT_Photon75_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_); }
    b_HLT_Photon90_ = tree->GetBranch("HLT_Photon90");
    if (b_HLT_Photon90_) { b_HLT_Photon90_->SetAddress(&HLT_Photon90_); }
    b_HLT_Photon90_CaloIdL_PFHT700_ = tree->GetBranch("HLT_Photon90_CaloIdL_PFHT700");
    if (b_HLT_Photon90_CaloIdL_PFHT700_) { b_HLT_Photon90_CaloIdL_PFHT700_->SetAddress(&HLT_Photon90_CaloIdL_PFHT700_); }
    b_HLT_Photon90_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon90_R9Id90_HE10_IsoM");
    if (b_HLT_Photon90_R9Id90_HE10_IsoM_) { b_HLT_Photon90_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon90_R9Id90_HE10_IsoM_); }
    b_HLT_Physics_ = tree->GetBranch("HLT_Physics");
    if (b_HLT_Physics_) { b_HLT_Physics_->SetAddress(&HLT_Physics_); }
    b_HLT_Physics_part0_ = tree->GetBranch("HLT_Physics_part0");
    if (b_HLT_Physics_part0_) { b_HLT_Physics_part0_->SetAddress(&HLT_Physics_part0_); }
    b_HLT_Physics_part1_ = tree->GetBranch("HLT_Physics_part1");
    if (b_HLT_Physics_part1_) { b_HLT_Physics_part1_->SetAddress(&HLT_Physics_part1_); }
    b_HLT_Physics_part2_ = tree->GetBranch("HLT_Physics_part2");
    if (b_HLT_Physics_part2_) { b_HLT_Physics_part2_->SetAddress(&HLT_Physics_part2_); }
    b_HLT_Physics_part3_ = tree->GetBranch("HLT_Physics_part3");
    if (b_HLT_Physics_part3_) { b_HLT_Physics_part3_->SetAddress(&HLT_Physics_part3_); }
    b_HLT_Physics_part4_ = tree->GetBranch("HLT_Physics_part4");
    if (b_HLT_Physics_part4_) { b_HLT_Physics_part4_->SetAddress(&HLT_Physics_part4_); }
    b_HLT_Physics_part5_ = tree->GetBranch("HLT_Physics_part5");
    if (b_HLT_Physics_part5_) { b_HLT_Physics_part5_->SetAddress(&HLT_Physics_part5_); }
    b_HLT_Physics_part6_ = tree->GetBranch("HLT_Physics_part6");
    if (b_HLT_Physics_part6_) { b_HLT_Physics_part6_->SetAddress(&HLT_Physics_part6_); }
    b_HLT_Physics_part7_ = tree->GetBranch("HLT_Physics_part7");
    if (b_HLT_Physics_part7_) { b_HLT_Physics_part7_->SetAddress(&HLT_Physics_part7_); }
    b_HLT_QuadPFJet103_88_75_15_ = tree->GetBranch("HLT_QuadPFJet103_88_75_15");
    if (b_HLT_QuadPFJet103_88_75_15_) { b_HLT_QuadPFJet103_88_75_15_->SetAddress(&HLT_QuadPFJet103_88_75_15_); }
    b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_ = tree->GetBranch("HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2");
    if (b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_) { b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_->SetAddress(&HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_); }
    b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_ = tree->GetBranch("HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1");
    if (b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_) { b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_->SetAddress(&HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_); }
    b_HLT_QuadPFJet105_88_76_15_ = tree->GetBranch("HLT_QuadPFJet105_88_76_15");
    if (b_HLT_QuadPFJet105_88_76_15_) { b_HLT_QuadPFJet105_88_76_15_->SetAddress(&HLT_QuadPFJet105_88_76_15_); }
    b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_ = tree->GetBranch("HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2");
    if (b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_) { b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_->SetAddress(&HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_); }
    b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_ = tree->GetBranch("HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1");
    if (b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_) { b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_->SetAddress(&HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_); }
    b_HLT_QuadPFJet111_90_80_15_ = tree->GetBranch("HLT_QuadPFJet111_90_80_15");
    if (b_HLT_QuadPFJet111_90_80_15_) { b_HLT_QuadPFJet111_90_80_15_->SetAddress(&HLT_QuadPFJet111_90_80_15_); }
    b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_ = tree->GetBranch("HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2");
    if (b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_) { b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_->SetAddress(&HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_); }
    b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_ = tree->GetBranch("HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1");
    if (b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_) { b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_->SetAddress(&HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_); }
    b_HLT_QuadPFJet98_83_71_15_ = tree->GetBranch("HLT_QuadPFJet98_83_71_15");
    if (b_HLT_QuadPFJet98_83_71_15_) { b_HLT_QuadPFJet98_83_71_15_->SetAddress(&HLT_QuadPFJet98_83_71_15_); }
    b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_ = tree->GetBranch("HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2");
    if (b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_) { b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_->SetAddress(&HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_); }
    b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_ = tree->GetBranch("HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1");
    if (b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_) { b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_->SetAddress(&HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_); }
    b_HLT_Random_ = tree->GetBranch("HLT_Random");
    if (b_HLT_Random_) { b_HLT_Random_->SetAddress(&HLT_Random_); }
    b_HLT_Rsq0p35_ = tree->GetBranch("HLT_Rsq0p35");
    if (b_HLT_Rsq0p35_) { b_HLT_Rsq0p35_->SetAddress(&HLT_Rsq0p35_); }
    b_HLT_Rsq0p40_ = tree->GetBranch("HLT_Rsq0p40");
    if (b_HLT_Rsq0p40_) { b_HLT_Rsq0p40_->SetAddress(&HLT_Rsq0p40_); }
    b_HLT_RsqMR300_Rsq0p09_MR200_ = tree->GetBranch("HLT_RsqMR300_Rsq0p09_MR200");
    if (b_HLT_RsqMR300_Rsq0p09_MR200_) { b_HLT_RsqMR300_Rsq0p09_MR200_->SetAddress(&HLT_RsqMR300_Rsq0p09_MR200_); }
    b_HLT_RsqMR300_Rsq0p09_MR200_4jet_ = tree->GetBranch("HLT_RsqMR300_Rsq0p09_MR200_4jet");
    if (b_HLT_RsqMR300_Rsq0p09_MR200_4jet_) { b_HLT_RsqMR300_Rsq0p09_MR200_4jet_->SetAddress(&HLT_RsqMR300_Rsq0p09_MR200_4jet_); }
    b_HLT_RsqMR320_Rsq0p09_MR200_ = tree->GetBranch("HLT_RsqMR320_Rsq0p09_MR200");
    if (b_HLT_RsqMR320_Rsq0p09_MR200_) { b_HLT_RsqMR320_Rsq0p09_MR200_->SetAddress(&HLT_RsqMR320_Rsq0p09_MR200_); }
    b_HLT_RsqMR320_Rsq0p09_MR200_4jet_ = tree->GetBranch("HLT_RsqMR320_Rsq0p09_MR200_4jet");
    if (b_HLT_RsqMR320_Rsq0p09_MR200_4jet_) { b_HLT_RsqMR320_Rsq0p09_MR200_4jet_->SetAddress(&HLT_RsqMR320_Rsq0p09_MR200_4jet_); }
    b_HLT_SingleJet30_Mu12_SinglePFJet40_ = tree->GetBranch("HLT_SingleJet30_Mu12_SinglePFJet40");
    if (b_HLT_SingleJet30_Mu12_SinglePFJet40_) { b_HLT_SingleJet30_Mu12_SinglePFJet40_->SetAddress(&HLT_SingleJet30_Mu12_SinglePFJet40_); }
    b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_ = tree->GetBranch("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15");
    if (b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_) { b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_->SetAddress(&HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_); }
    b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_ = tree->GetBranch("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1");
    if (b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_) { b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_->SetAddress(&HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_); }
    b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_ = tree->GetBranch("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15");
    if (b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_) { b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_->SetAddress(&HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_); }
    b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_ = tree->GetBranch("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1");
    if (b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_) { b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_->SetAddress(&HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_); }
    b_HLT_TkMu100_ = tree->GetBranch("HLT_TkMu100");
    if (b_HLT_TkMu100_) { b_HLT_TkMu100_->SetAddress(&HLT_TkMu100_); }
    b_HLT_Trimuon5_3p5_2_Upsilon_Muon_ = tree->GetBranch("HLT_Trimuon5_3p5_2_Upsilon_Muon");
    if (b_HLT_Trimuon5_3p5_2_Upsilon_Muon_) { b_HLT_Trimuon5_3p5_2_Upsilon_Muon_->SetAddress(&HLT_Trimuon5_3p5_2_Upsilon_Muon_); }
    b_HLT_TripleJet110_35_35_Mjj650_PFMET110_ = tree->GetBranch("HLT_TripleJet110_35_35_Mjj650_PFMET110");
    if (b_HLT_TripleJet110_35_35_Mjj650_PFMET110_) { b_HLT_TripleJet110_35_35_Mjj650_PFMET110_->SetAddress(&HLT_TripleJet110_35_35_Mjj650_PFMET110_); }
    b_HLT_TripleJet110_35_35_Mjj650_PFMET120_ = tree->GetBranch("HLT_TripleJet110_35_35_Mjj650_PFMET120");
    if (b_HLT_TripleJet110_35_35_Mjj650_PFMET120_) { b_HLT_TripleJet110_35_35_Mjj650_PFMET120_->SetAddress(&HLT_TripleJet110_35_35_Mjj650_PFMET120_); }
    b_HLT_TripleJet110_35_35_Mjj650_PFMET130_ = tree->GetBranch("HLT_TripleJet110_35_35_Mjj650_PFMET130");
    if (b_HLT_TripleJet110_35_35_Mjj650_PFMET130_) { b_HLT_TripleJet110_35_35_Mjj650_PFMET130_->SetAddress(&HLT_TripleJet110_35_35_Mjj650_PFMET130_); }
    b_HLT_TripleMu_10_5_5_DZ_ = tree->GetBranch("HLT_TripleMu_10_5_5_DZ");
    if (b_HLT_TripleMu_10_5_5_DZ_) { b_HLT_TripleMu_10_5_5_DZ_->SetAddress(&HLT_TripleMu_10_5_5_DZ_); }
    b_HLT_TripleMu_12_10_5_ = tree->GetBranch("HLT_TripleMu_12_10_5");
    if (b_HLT_TripleMu_12_10_5_) { b_HLT_TripleMu_12_10_5_->SetAddress(&HLT_TripleMu_12_10_5_); }
    b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_ = tree->GetBranch("HLT_TripleMu_5_3_3_Mass3p8to60_DCA");
    if (b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_) { b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_->SetAddress(&HLT_TripleMu_5_3_3_Mass3p8to60_DCA_); }
    b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_ = tree->GetBranch("HLT_TripleMu_5_3_3_Mass3p8to60_DZ");
    if (b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_) { b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_->SetAddress(&HLT_TripleMu_5_3_3_Mass3p8to60_DZ_); }
    b_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = tree->GetBranch("HLT_TriplePhoton_20_20_20_CaloIdLV2");
    if (b_HLT_TriplePhoton_20_20_20_CaloIdLV2_) { b_HLT_TriplePhoton_20_20_20_CaloIdLV2_->SetAddress(&HLT_TriplePhoton_20_20_20_CaloIdLV2_); }
    b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_); }
    b_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = tree->GetBranch("HLT_TriplePhoton_30_30_10_CaloIdLV2");
    if (b_HLT_TriplePhoton_30_30_10_CaloIdLV2_) { b_HLT_TriplePhoton_30_30_10_CaloIdLV2_->SetAddress(&HLT_TriplePhoton_30_30_10_CaloIdLV2_); }
    b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_); }
    b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_); }
    b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_ = tree->GetBranch("HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx");
    if (b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_) { b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_->SetAddress(&HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_); }
    b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_ = tree->GetBranch("HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx");
    if (b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_) { b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_->SetAddress(&HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_); }
    b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_ = tree->GetBranch("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx");
    if (b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_) { b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_->SetAddress(&HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_); }
    b_HLT_UncorrectedJetE30_NoBPTX_ = tree->GetBranch("HLT_UncorrectedJetE30_NoBPTX");
    if (b_HLT_UncorrectedJetE30_NoBPTX_) { b_HLT_UncorrectedJetE30_NoBPTX_->SetAddress(&HLT_UncorrectedJetE30_NoBPTX_); }
    b_HLT_UncorrectedJetE30_NoBPTX3BX_ = tree->GetBranch("HLT_UncorrectedJetE30_NoBPTX3BX");
    if (b_HLT_UncorrectedJetE30_NoBPTX3BX_) { b_HLT_UncorrectedJetE30_NoBPTX3BX_->SetAddress(&HLT_UncorrectedJetE30_NoBPTX3BX_); }
    b_HLT_UncorrectedJetE60_NoBPTX3BX_ = tree->GetBranch("HLT_UncorrectedJetE60_NoBPTX3BX");
    if (b_HLT_UncorrectedJetE60_NoBPTX3BX_) { b_HLT_UncorrectedJetE60_NoBPTX3BX_->SetAddress(&HLT_UncorrectedJetE60_NoBPTX3BX_); }
    b_HLT_UncorrectedJetE70_NoBPTX3BX_ = tree->GetBranch("HLT_UncorrectedJetE70_NoBPTX3BX");
    if (b_HLT_UncorrectedJetE70_NoBPTX3BX_) { b_HLT_UncorrectedJetE70_NoBPTX3BX_->SetAddress(&HLT_UncorrectedJetE70_NoBPTX3BX_); }
    b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg");
    if (b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_) { b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_->SetAddress(&HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_); }
    b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg");
    if (b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_) { b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_->SetAddress(&HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_); }
    b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_ = tree->GetBranch("HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg");
    if (b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_) { b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_->SetAddress(&HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_); }
    b_HLT_ZeroBias_ = tree->GetBranch("HLT_ZeroBias");
    if (b_HLT_ZeroBias_) { b_HLT_ZeroBias_->SetAddress(&HLT_ZeroBias_); }
    b_HLT_ZeroBias_FirstBXAfterTrain_ = tree->GetBranch("HLT_ZeroBias_FirstBXAfterTrain");
    if (b_HLT_ZeroBias_FirstBXAfterTrain_) { b_HLT_ZeroBias_FirstBXAfterTrain_->SetAddress(&HLT_ZeroBias_FirstBXAfterTrain_); }
    b_HLT_ZeroBias_FirstCollisionAfterAbortGap_ = tree->GetBranch("HLT_ZeroBias_FirstCollisionAfterAbortGap");
    if (b_HLT_ZeroBias_FirstCollisionAfterAbortGap_) { b_HLT_ZeroBias_FirstCollisionAfterAbortGap_->SetAddress(&HLT_ZeroBias_FirstCollisionAfterAbortGap_); }
    b_HLT_ZeroBias_FirstCollisionInTrain_ = tree->GetBranch("HLT_ZeroBias_FirstCollisionInTrain");
    if (b_HLT_ZeroBias_FirstCollisionInTrain_) { b_HLT_ZeroBias_FirstCollisionInTrain_->SetAddress(&HLT_ZeroBias_FirstCollisionInTrain_); }
    b_HLT_ZeroBias_IsolatedBunches_ = tree->GetBranch("HLT_ZeroBias_IsolatedBunches");
    if (b_HLT_ZeroBias_IsolatedBunches_) { b_HLT_ZeroBias_IsolatedBunches_->SetAddress(&HLT_ZeroBias_IsolatedBunches_); }
    b_HLT_ZeroBias_LastCollisionInTrain_ = tree->GetBranch("HLT_ZeroBias_LastCollisionInTrain");
    if (b_HLT_ZeroBias_LastCollisionInTrain_) { b_HLT_ZeroBias_LastCollisionInTrain_->SetAddress(&HLT_ZeroBias_LastCollisionInTrain_); }
    b_HLT_ZeroBias_part0_ = tree->GetBranch("HLT_ZeroBias_part0");
    if (b_HLT_ZeroBias_part0_) { b_HLT_ZeroBias_part0_->SetAddress(&HLT_ZeroBias_part0_); }
    b_HLT_ZeroBias_part1_ = tree->GetBranch("HLT_ZeroBias_part1");
    if (b_HLT_ZeroBias_part1_) { b_HLT_ZeroBias_part1_->SetAddress(&HLT_ZeroBias_part1_); }
    b_HLT_ZeroBias_part2_ = tree->GetBranch("HLT_ZeroBias_part2");
    if (b_HLT_ZeroBias_part2_) { b_HLT_ZeroBias_part2_->SetAddress(&HLT_ZeroBias_part2_); }
    b_HLT_ZeroBias_part3_ = tree->GetBranch("HLT_ZeroBias_part3");
    if (b_HLT_ZeroBias_part3_) { b_HLT_ZeroBias_part3_->SetAddress(&HLT_ZeroBias_part3_); }
    b_HLT_ZeroBias_part4_ = tree->GetBranch("HLT_ZeroBias_part4");
    if (b_HLT_ZeroBias_part4_) { b_HLT_ZeroBias_part4_->SetAddress(&HLT_ZeroBias_part4_); }
    b_HLT_ZeroBias_part5_ = tree->GetBranch("HLT_ZeroBias_part5");
    if (b_HLT_ZeroBias_part5_) { b_HLT_ZeroBias_part5_->SetAddress(&HLT_ZeroBias_part5_); }
    b_HLT_ZeroBias_part6_ = tree->GetBranch("HLT_ZeroBias_part6");
    if (b_HLT_ZeroBias_part6_) { b_HLT_ZeroBias_part6_->SetAddress(&HLT_ZeroBias_part6_); }
    b_HLT_ZeroBias_part7_ = tree->GetBranch("HLT_ZeroBias_part7");
    if (b_HLT_ZeroBias_part7_) { b_HLT_ZeroBias_part7_->SetAddress(&HLT_ZeroBias_part7_); }
    b_HLTriggerFinalPath_ = tree->GetBranch("HLTriggerFinalPath");
    if (b_HLTriggerFinalPath_) { b_HLTriggerFinalPath_->SetAddress(&HLTriggerFinalPath_); }
    b_HLTriggerFirstPath_ = tree->GetBranch("HLTriggerFirstPath");
    if (b_HLTriggerFirstPath_) { b_HLTriggerFirstPath_->SetAddress(&HLTriggerFirstPath_); }
    b_IsoTrack_dxy_ = tree->GetBranch("IsoTrack_dxy");
    if (b_IsoTrack_dxy_) { b_IsoTrack_dxy_->SetAddress(&IsoTrack_dxy_); }
    b_IsoTrack_dz_ = tree->GetBranch("IsoTrack_dz");
    if (b_IsoTrack_dz_) { b_IsoTrack_dz_->SetAddress(&IsoTrack_dz_); }
    b_IsoTrack_eta_ = tree->GetBranch("IsoTrack_eta");
    if (b_IsoTrack_eta_) { b_IsoTrack_eta_->SetAddress(&IsoTrack_eta_); }
    b_IsoTrack_isHighPurityTrack_ = tree->GetBranch("IsoTrack_isHighPurityTrack");
    if (b_IsoTrack_isHighPurityTrack_) { b_IsoTrack_isHighPurityTrack_->SetAddress(&IsoTrack_isHighPurityTrack_); }
    b_IsoTrack_isPFcand_ = tree->GetBranch("IsoTrack_isPFcand");
    if (b_IsoTrack_isPFcand_) { b_IsoTrack_isPFcand_->SetAddress(&IsoTrack_isPFcand_); }
    b_IsoTrack_miniPFRelIso_all_ = tree->GetBranch("IsoTrack_miniPFRelIso_all");
    if (b_IsoTrack_miniPFRelIso_all_) { b_IsoTrack_miniPFRelIso_all_->SetAddress(&IsoTrack_miniPFRelIso_all_); }
    b_IsoTrack_miniPFRelIso_chg_ = tree->GetBranch("IsoTrack_miniPFRelIso_chg");
    if (b_IsoTrack_miniPFRelIso_chg_) { b_IsoTrack_miniPFRelIso_chg_->SetAddress(&IsoTrack_miniPFRelIso_chg_); }
    b_IsoTrack_pdgId_ = tree->GetBranch("IsoTrack_pdgId");
    if (b_IsoTrack_pdgId_) { b_IsoTrack_pdgId_->SetAddress(&IsoTrack_pdgId_); }
    b_IsoTrack_pfRelIso03_all_ = tree->GetBranch("IsoTrack_pfRelIso03_all");
    if (b_IsoTrack_pfRelIso03_all_) { b_IsoTrack_pfRelIso03_all_->SetAddress(&IsoTrack_pfRelIso03_all_); }
    b_IsoTrack_pfRelIso03_chg_ = tree->GetBranch("IsoTrack_pfRelIso03_chg");
    if (b_IsoTrack_pfRelIso03_chg_) { b_IsoTrack_pfRelIso03_chg_->SetAddress(&IsoTrack_pfRelIso03_chg_); }
    b_IsoTrack_phi_ = tree->GetBranch("IsoTrack_phi");
    if (b_IsoTrack_phi_) { b_IsoTrack_phi_->SetAddress(&IsoTrack_phi_); }
    b_IsoTrack_pt_ = tree->GetBranch("IsoTrack_pt");
    if (b_IsoTrack_pt_) { b_IsoTrack_pt_->SetAddress(&IsoTrack_pt_); }
    b_Jet_area_ = tree->GetBranch("Jet_area");
    if (b_Jet_area_) { b_Jet_area_->SetAddress(&Jet_area_); }
    b_Jet_bReg_ = tree->GetBranch("Jet_bReg");
    if (b_Jet_bReg_) { b_Jet_bReg_->SetAddress(&Jet_bReg_); }
    b_Jet_btagCMVA_ = tree->GetBranch("Jet_btagCMVA");
    if (b_Jet_btagCMVA_) { b_Jet_btagCMVA_->SetAddress(&Jet_btagCMVA_); }
    b_Jet_btagCSVV2_ = tree->GetBranch("Jet_btagCSVV2");
    if (b_Jet_btagCSVV2_) { b_Jet_btagCSVV2_->SetAddress(&Jet_btagCSVV2_); }
    b_Jet_btagDeepB_ = tree->GetBranch("Jet_btagDeepB");
    if (b_Jet_btagDeepB_) { b_Jet_btagDeepB_->SetAddress(&Jet_btagDeepB_); }
    b_Jet_btagDeepC_ = tree->GetBranch("Jet_btagDeepC");
    if (b_Jet_btagDeepC_) { b_Jet_btagDeepC_->SetAddress(&Jet_btagDeepC_); }
    b_Jet_btagDeepFlavB_ = tree->GetBranch("Jet_btagDeepFlavB");
    if (b_Jet_btagDeepFlavB_) { b_Jet_btagDeepFlavB_->SetAddress(&Jet_btagDeepFlavB_); }
    b_Jet_chEmEF_ = tree->GetBranch("Jet_chEmEF");
    if (b_Jet_chEmEF_) { b_Jet_chEmEF_->SetAddress(&Jet_chEmEF_); }
    b_Jet_chHEF_ = tree->GetBranch("Jet_chHEF");
    if (b_Jet_chHEF_) { b_Jet_chHEF_->SetAddress(&Jet_chHEF_); }
    b_Jet_cleanmask_ = tree->GetBranch("Jet_cleanmask");
    if (b_Jet_cleanmask_) { b_Jet_cleanmask_->SetAddress(&Jet_cleanmask_); }
    b_Jet_electronIdx1_ = tree->GetBranch("Jet_electronIdx1");
    if (b_Jet_electronIdx1_) { b_Jet_electronIdx1_->SetAddress(&Jet_electronIdx1_); }
    b_Jet_electronIdx2_ = tree->GetBranch("Jet_electronIdx2");
    if (b_Jet_electronIdx2_) { b_Jet_electronIdx2_->SetAddress(&Jet_electronIdx2_); }
    b_Jet_eta_ = tree->GetBranch("Jet_eta");
    if (b_Jet_eta_) { b_Jet_eta_->SetAddress(&Jet_eta_); }
    b_Jet_genJetIdx_ = tree->GetBranch("Jet_genJetIdx");
    if (b_Jet_genJetIdx_) { b_Jet_genJetIdx_->SetAddress(&Jet_genJetIdx_); }
    b_Jet_hadronFlavour_ = tree->GetBranch("Jet_hadronFlavour");
    if (b_Jet_hadronFlavour_) { b_Jet_hadronFlavour_->SetAddress(&Jet_hadronFlavour_); }
    b_Jet_jetId_ = tree->GetBranch("Jet_jetId");
    if (b_Jet_jetId_) { b_Jet_jetId_->SetAddress(&Jet_jetId_); }
    b_Jet_mass_ = tree->GetBranch("Jet_mass");
    if (b_Jet_mass_) { b_Jet_mass_->SetAddress(&Jet_mass_); }
    b_Jet_muonIdx1_ = tree->GetBranch("Jet_muonIdx1");
    if (b_Jet_muonIdx1_) { b_Jet_muonIdx1_->SetAddress(&Jet_muonIdx1_); }
    b_Jet_muonIdx2_ = tree->GetBranch("Jet_muonIdx2");
    if (b_Jet_muonIdx2_) { b_Jet_muonIdx2_->SetAddress(&Jet_muonIdx2_); }
    b_Jet_nConstituents_ = tree->GetBranch("Jet_nConstituents");
    if (b_Jet_nConstituents_) { b_Jet_nConstituents_->SetAddress(&Jet_nConstituents_); }
    b_Jet_nElectrons_ = tree->GetBranch("Jet_nElectrons");
    if (b_Jet_nElectrons_) { b_Jet_nElectrons_->SetAddress(&Jet_nElectrons_); }
    b_Jet_nMuons_ = tree->GetBranch("Jet_nMuons");
    if (b_Jet_nMuons_) { b_Jet_nMuons_->SetAddress(&Jet_nMuons_); }
    b_Jet_neEmEF_ = tree->GetBranch("Jet_neEmEF");
    if (b_Jet_neEmEF_) { b_Jet_neEmEF_->SetAddress(&Jet_neEmEF_); }
    b_Jet_neHEF_ = tree->GetBranch("Jet_neHEF");
    if (b_Jet_neHEF_) { b_Jet_neHEF_->SetAddress(&Jet_neHEF_); }
    b_Jet_partonFlavour_ = tree->GetBranch("Jet_partonFlavour");
    if (b_Jet_partonFlavour_) { b_Jet_partonFlavour_->SetAddress(&Jet_partonFlavour_); }
    b_Jet_phi_ = tree->GetBranch("Jet_phi");
    if (b_Jet_phi_) { b_Jet_phi_->SetAddress(&Jet_phi_); }
    b_Jet_pt_ = tree->GetBranch("Jet_pt");
    if (b_Jet_pt_) { b_Jet_pt_->SetAddress(&Jet_pt_); }
    b_Jet_puId_ = tree->GetBranch("Jet_puId");
    if (b_Jet_puId_) { b_Jet_puId_->SetAddress(&Jet_puId_); }
    b_Jet_qgl_ = tree->GetBranch("Jet_qgl");
    if (b_Jet_qgl_) { b_Jet_qgl_->SetAddress(&Jet_qgl_); }
    b_Jet_rawFactor_ = tree->GetBranch("Jet_rawFactor");
    if (b_Jet_rawFactor_) { b_Jet_rawFactor_->SetAddress(&Jet_rawFactor_); }
    b_L1simulation_step_ = tree->GetBranch("L1simulation_step");
    if (b_L1simulation_step_) { b_L1simulation_step_->SetAddress(&L1simulation_step_); }
    b_LHEPart_eta_ = tree->GetBranch("LHEPart_eta");
    if (b_LHEPart_eta_) { b_LHEPart_eta_->SetAddress(&LHEPart_eta_); }
    b_LHEPart_mass_ = tree->GetBranch("LHEPart_mass");
    if (b_LHEPart_mass_) { b_LHEPart_mass_->SetAddress(&LHEPart_mass_); }
    b_LHEPart_pdgId_ = tree->GetBranch("LHEPart_pdgId");
    if (b_LHEPart_pdgId_) { b_LHEPart_pdgId_->SetAddress(&LHEPart_pdgId_); }
    b_LHEPart_phi_ = tree->GetBranch("LHEPart_phi");
    if (b_LHEPart_phi_) { b_LHEPart_phi_->SetAddress(&LHEPart_phi_); }
    b_LHEPart_pt_ = tree->GetBranch("LHEPart_pt");
    if (b_LHEPart_pt_) { b_LHEPart_pt_->SetAddress(&LHEPart_pt_); }
    b_LHEPdfWeight_ = tree->GetBranch("LHEPdfWeight");
    if (b_LHEPdfWeight_) { b_LHEPdfWeight_->SetAddress(&LHEPdfWeight_); }
    b_LHEScaleWeight_ = tree->GetBranch("LHEScaleWeight");
    if (b_LHEScaleWeight_) { b_LHEScaleWeight_->SetAddress(&LHEScaleWeight_); }
    b_LHEWeight_originalXWGTUP_ = tree->GetBranch("LHEWeight_originalXWGTUP");
    if (b_LHEWeight_originalXWGTUP_) { b_LHEWeight_originalXWGTUP_->SetAddress(&LHEWeight_originalXWGTUP_); }
    b_LHE_HT_ = tree->GetBranch("LHE_HT");
    if (b_LHE_HT_) { b_LHE_HT_->SetAddress(&LHE_HT_); }
    b_LHE_HTIncoming_ = tree->GetBranch("LHE_HTIncoming");
    if (b_LHE_HTIncoming_) { b_LHE_HTIncoming_->SetAddress(&LHE_HTIncoming_); }
    b_LHE_Nb_ = tree->GetBranch("LHE_Nb");
    if (b_LHE_Nb_) { b_LHE_Nb_->SetAddress(&LHE_Nb_); }
    b_LHE_Nc_ = tree->GetBranch("LHE_Nc");
    if (b_LHE_Nc_) { b_LHE_Nc_->SetAddress(&LHE_Nc_); }
    b_LHE_Nglu_ = tree->GetBranch("LHE_Nglu");
    if (b_LHE_Nglu_) { b_LHE_Nglu_->SetAddress(&LHE_Nglu_); }
    b_LHE_Njets_ = tree->GetBranch("LHE_Njets");
    if (b_LHE_Njets_) { b_LHE_Njets_->SetAddress(&LHE_Njets_); }
    b_LHE_NpLO_ = tree->GetBranch("LHE_NpLO");
    if (b_LHE_NpLO_) { b_LHE_NpLO_->SetAddress(&LHE_NpLO_); }
    b_LHE_NpNLO_ = tree->GetBranch("LHE_NpNLO");
    if (b_LHE_NpNLO_) { b_LHE_NpNLO_->SetAddress(&LHE_NpNLO_); }
    b_LHE_Nuds_ = tree->GetBranch("LHE_Nuds");
    if (b_LHE_Nuds_) { b_LHE_Nuds_->SetAddress(&LHE_Nuds_); }
    b_LHE_Vpt_ = tree->GetBranch("LHE_Vpt");
    if (b_LHE_Vpt_) { b_LHE_Vpt_->SetAddress(&LHE_Vpt_); }
    b_MET_MetUnclustEnUpDeltaX_ = tree->GetBranch("MET_MetUnclustEnUpDeltaX");
    if (b_MET_MetUnclustEnUpDeltaX_) { b_MET_MetUnclustEnUpDeltaX_->SetAddress(&MET_MetUnclustEnUpDeltaX_); }
    b_MET_MetUnclustEnUpDeltaY_ = tree->GetBranch("MET_MetUnclustEnUpDeltaY");
    if (b_MET_MetUnclustEnUpDeltaY_) { b_MET_MetUnclustEnUpDeltaY_->SetAddress(&MET_MetUnclustEnUpDeltaY_); }
    b_MET_covXX_ = tree->GetBranch("MET_covXX");
    if (b_MET_covXX_) { b_MET_covXX_->SetAddress(&MET_covXX_); }
    b_MET_covXY_ = tree->GetBranch("MET_covXY");
    if (b_MET_covXY_) { b_MET_covXY_->SetAddress(&MET_covXY_); }
    b_MET_covYY_ = tree->GetBranch("MET_covYY");
    if (b_MET_covYY_) { b_MET_covYY_->SetAddress(&MET_covYY_); }
    b_MET_fiducialGenPhi_ = tree->GetBranch("MET_fiducialGenPhi");
    if (b_MET_fiducialGenPhi_) { b_MET_fiducialGenPhi_->SetAddress(&MET_fiducialGenPhi_); }
    b_MET_fiducialGenPt_ = tree->GetBranch("MET_fiducialGenPt");
    if (b_MET_fiducialGenPt_) { b_MET_fiducialGenPt_->SetAddress(&MET_fiducialGenPt_); }
    b_MET_phi_ = tree->GetBranch("MET_phi");
    if (b_MET_phi_) { b_MET_phi_->SetAddress(&MET_phi_); }
    b_MET_pt_ = tree->GetBranch("MET_pt");
    if (b_MET_pt_) { b_MET_pt_->SetAddress(&MET_pt_); }
    b_MET_significance_ = tree->GetBranch("MET_significance");
    if (b_MET_significance_) { b_MET_significance_->SetAddress(&MET_significance_); }
    b_MET_sumEt_ = tree->GetBranch("MET_sumEt");
    if (b_MET_sumEt_) { b_MET_sumEt_->SetAddress(&MET_sumEt_); }
    b_Muon_charge_ = tree->GetBranch("Muon_charge");
    if (b_Muon_charge_) { b_Muon_charge_->SetAddress(&Muon_charge_); }
    b_Muon_cleanmask_ = tree->GetBranch("Muon_cleanmask");
    if (b_Muon_cleanmask_) { b_Muon_cleanmask_->SetAddress(&Muon_cleanmask_); }
    b_Muon_dxy_ = tree->GetBranch("Muon_dxy");
    if (b_Muon_dxy_) { b_Muon_dxy_->SetAddress(&Muon_dxy_); }
    b_Muon_dxyErr_ = tree->GetBranch("Muon_dxyErr");
    if (b_Muon_dxyErr_) { b_Muon_dxyErr_->SetAddress(&Muon_dxyErr_); }
    b_Muon_dz_ = tree->GetBranch("Muon_dz");
    if (b_Muon_dz_) { b_Muon_dz_->SetAddress(&Muon_dz_); }
    b_Muon_dzErr_ = tree->GetBranch("Muon_dzErr");
    if (b_Muon_dzErr_) { b_Muon_dzErr_->SetAddress(&Muon_dzErr_); }
    b_Muon_eta_ = tree->GetBranch("Muon_eta");
    if (b_Muon_eta_) { b_Muon_eta_->SetAddress(&Muon_eta_); }
    b_Muon_genPartFlav_ = tree->GetBranch("Muon_genPartFlav");
    if (b_Muon_genPartFlav_) { b_Muon_genPartFlav_->SetAddress(&Muon_genPartFlav_); }
    b_Muon_genPartIdx_ = tree->GetBranch("Muon_genPartIdx");
    if (b_Muon_genPartIdx_) { b_Muon_genPartIdx_->SetAddress(&Muon_genPartIdx_); }
    b_Muon_highPtId_ = tree->GetBranch("Muon_highPtId");
    if (b_Muon_highPtId_) { b_Muon_highPtId_->SetAddress(&Muon_highPtId_); }
    b_Muon_ip3d_ = tree->GetBranch("Muon_ip3d");
    if (b_Muon_ip3d_) { b_Muon_ip3d_->SetAddress(&Muon_ip3d_); }
    b_Muon_isPFcand_ = tree->GetBranch("Muon_isPFcand");
    if (b_Muon_isPFcand_) { b_Muon_isPFcand_->SetAddress(&Muon_isPFcand_); }
    b_Muon_jetIdx_ = tree->GetBranch("Muon_jetIdx");
    if (b_Muon_jetIdx_) { b_Muon_jetIdx_->SetAddress(&Muon_jetIdx_); }
    b_Muon_mass_ = tree->GetBranch("Muon_mass");
    if (b_Muon_mass_) { b_Muon_mass_->SetAddress(&Muon_mass_); }
    b_Muon_mediumId_ = tree->GetBranch("Muon_mediumId");
    if (b_Muon_mediumId_) { b_Muon_mediumId_->SetAddress(&Muon_mediumId_); }
    b_Muon_miniPFRelIso_all_ = tree->GetBranch("Muon_miniPFRelIso_all");
    if (b_Muon_miniPFRelIso_all_) { b_Muon_miniPFRelIso_all_->SetAddress(&Muon_miniPFRelIso_all_); }
    b_Muon_miniPFRelIso_chg_ = tree->GetBranch("Muon_miniPFRelIso_chg");
    if (b_Muon_miniPFRelIso_chg_) { b_Muon_miniPFRelIso_chg_->SetAddress(&Muon_miniPFRelIso_chg_); }
    b_Muon_mvaTTH_ = tree->GetBranch("Muon_mvaTTH");
    if (b_Muon_mvaTTH_) { b_Muon_mvaTTH_->SetAddress(&Muon_mvaTTH_); }
    b_Muon_nStations_ = tree->GetBranch("Muon_nStations");
    if (b_Muon_nStations_) { b_Muon_nStations_->SetAddress(&Muon_nStations_); }
    b_Muon_nTrackerLayers_ = tree->GetBranch("Muon_nTrackerLayers");
    if (b_Muon_nTrackerLayers_) { b_Muon_nTrackerLayers_->SetAddress(&Muon_nTrackerLayers_); }
    b_Muon_pdgId_ = tree->GetBranch("Muon_pdgId");
    if (b_Muon_pdgId_) { b_Muon_pdgId_->SetAddress(&Muon_pdgId_); }
    b_Muon_pfRelIso03_all_ = tree->GetBranch("Muon_pfRelIso03_all");
    if (b_Muon_pfRelIso03_all_) { b_Muon_pfRelIso03_all_->SetAddress(&Muon_pfRelIso03_all_); }
    b_Muon_pfRelIso03_chg_ = tree->GetBranch("Muon_pfRelIso03_chg");
    if (b_Muon_pfRelIso03_chg_) { b_Muon_pfRelIso03_chg_->SetAddress(&Muon_pfRelIso03_chg_); }
    b_Muon_pfRelIso04_all_ = tree->GetBranch("Muon_pfRelIso04_all");
    if (b_Muon_pfRelIso04_all_) { b_Muon_pfRelIso04_all_->SetAddress(&Muon_pfRelIso04_all_); }
    b_Muon_phi_ = tree->GetBranch("Muon_phi");
    if (b_Muon_phi_) { b_Muon_phi_->SetAddress(&Muon_phi_); }
    b_Muon_pt_ = tree->GetBranch("Muon_pt");
    if (b_Muon_pt_) { b_Muon_pt_->SetAddress(&Muon_pt_); }
    b_Muon_ptErr_ = tree->GetBranch("Muon_ptErr");
    if (b_Muon_ptErr_) { b_Muon_ptErr_->SetAddress(&Muon_ptErr_); }
    b_Muon_segmentComp_ = tree->GetBranch("Muon_segmentComp");
    if (b_Muon_segmentComp_) { b_Muon_segmentComp_->SetAddress(&Muon_segmentComp_); }
    b_Muon_sip3d_ = tree->GetBranch("Muon_sip3d");
    if (b_Muon_sip3d_) { b_Muon_sip3d_->SetAddress(&Muon_sip3d_); }
    b_Muon_softId_ = tree->GetBranch("Muon_softId");
    if (b_Muon_softId_) { b_Muon_softId_->SetAddress(&Muon_softId_); }
    b_Muon_tightCharge_ = tree->GetBranch("Muon_tightCharge");
    if (b_Muon_tightCharge_) { b_Muon_tightCharge_->SetAddress(&Muon_tightCharge_); }
    b_Muon_tightId_ = tree->GetBranch("Muon_tightId");
    if (b_Muon_tightId_) { b_Muon_tightId_->SetAddress(&Muon_tightId_); }
    b_OtherPV_z_ = tree->GetBranch("OtherPV_z");
    if (b_OtherPV_z_) { b_OtherPV_z_->SetAddress(&OtherPV_z_); }
    b_PV_chi2_ = tree->GetBranch("PV_chi2");
    if (b_PV_chi2_) { b_PV_chi2_->SetAddress(&PV_chi2_); }
    b_PV_ndof_ = tree->GetBranch("PV_ndof");
    if (b_PV_ndof_) { b_PV_ndof_->SetAddress(&PV_ndof_); }
    b_PV_npvs_ = tree->GetBranch("PV_npvs");
    if (b_PV_npvs_) { b_PV_npvs_->SetAddress(&PV_npvs_); }
    b_PV_npvsGood_ = tree->GetBranch("PV_npvsGood");
    if (b_PV_npvsGood_) { b_PV_npvsGood_->SetAddress(&PV_npvsGood_); }
    b_PV_score_ = tree->GetBranch("PV_score");
    if (b_PV_score_) { b_PV_score_->SetAddress(&PV_score_); }
    b_PV_x_ = tree->GetBranch("PV_x");
    if (b_PV_x_) { b_PV_x_->SetAddress(&PV_x_); }
    b_PV_y_ = tree->GetBranch("PV_y");
    if (b_PV_y_) { b_PV_y_->SetAddress(&PV_y_); }
    b_PV_z_ = tree->GetBranch("PV_z");
    if (b_PV_z_) { b_PV_z_->SetAddress(&PV_z_); }
    b_Photon_charge_ = tree->GetBranch("Photon_charge");
    if (b_Photon_charge_) { b_Photon_charge_->SetAddress(&Photon_charge_); }
    b_Photon_cleanmask_ = tree->GetBranch("Photon_cleanmask");
    if (b_Photon_cleanmask_) { b_Photon_cleanmask_->SetAddress(&Photon_cleanmask_); }
    b_Photon_cutBasedBitmap_ = tree->GetBranch("Photon_cutBasedBitmap");
    if (b_Photon_cutBasedBitmap_) { b_Photon_cutBasedBitmap_->SetAddress(&Photon_cutBasedBitmap_); }
    b_Photon_eCorr_ = tree->GetBranch("Photon_eCorr");
    if (b_Photon_eCorr_) { b_Photon_eCorr_->SetAddress(&Photon_eCorr_); }
    b_Photon_electronIdx_ = tree->GetBranch("Photon_electronIdx");
    if (b_Photon_electronIdx_) { b_Photon_electronIdx_->SetAddress(&Photon_electronIdx_); }
    b_Photon_electronVeto_ = tree->GetBranch("Photon_electronVeto");
    if (b_Photon_electronVeto_) { b_Photon_electronVeto_->SetAddress(&Photon_electronVeto_); }
    b_Photon_energyErr_ = tree->GetBranch("Photon_energyErr");
    if (b_Photon_energyErr_) { b_Photon_energyErr_->SetAddress(&Photon_energyErr_); }
    b_Photon_eta_ = tree->GetBranch("Photon_eta");
    if (b_Photon_eta_) { b_Photon_eta_->SetAddress(&Photon_eta_); }
    b_Photon_genPartFlav_ = tree->GetBranch("Photon_genPartFlav");
    if (b_Photon_genPartFlav_) { b_Photon_genPartFlav_->SetAddress(&Photon_genPartFlav_); }
    b_Photon_genPartIdx_ = tree->GetBranch("Photon_genPartIdx");
    if (b_Photon_genPartIdx_) { b_Photon_genPartIdx_->SetAddress(&Photon_genPartIdx_); }
    b_Photon_hoe_ = tree->GetBranch("Photon_hoe");
    if (b_Photon_hoe_) { b_Photon_hoe_->SetAddress(&Photon_hoe_); }
    b_Photon_isScEtaEB_ = tree->GetBranch("Photon_isScEtaEB");
    if (b_Photon_isScEtaEB_) { b_Photon_isScEtaEB_->SetAddress(&Photon_isScEtaEB_); }
    b_Photon_isScEtaEE_ = tree->GetBranch("Photon_isScEtaEE");
    if (b_Photon_isScEtaEE_) { b_Photon_isScEtaEE_->SetAddress(&Photon_isScEtaEE_); }
    b_Photon_jetIdx_ = tree->GetBranch("Photon_jetIdx");
    if (b_Photon_jetIdx_) { b_Photon_jetIdx_->SetAddress(&Photon_jetIdx_); }
    b_Photon_mass_ = tree->GetBranch("Photon_mass");
    if (b_Photon_mass_) { b_Photon_mass_->SetAddress(&Photon_mass_); }
    b_Photon_mvaID_ = tree->GetBranch("Photon_mvaID");
    if (b_Photon_mvaID_) { b_Photon_mvaID_->SetAddress(&Photon_mvaID_); }
    b_Photon_mvaID_WP80_ = tree->GetBranch("Photon_mvaID_WP80");
    if (b_Photon_mvaID_WP80_) { b_Photon_mvaID_WP80_->SetAddress(&Photon_mvaID_WP80_); }
    b_Photon_mvaID_WP90_ = tree->GetBranch("Photon_mvaID_WP90");
    if (b_Photon_mvaID_WP90_) { b_Photon_mvaID_WP90_->SetAddress(&Photon_mvaID_WP90_); }
    b_Photon_pdgId_ = tree->GetBranch("Photon_pdgId");
    if (b_Photon_pdgId_) { b_Photon_pdgId_->SetAddress(&Photon_pdgId_); }
    b_Photon_pfRelIso03_all_ = tree->GetBranch("Photon_pfRelIso03_all");
    if (b_Photon_pfRelIso03_all_) { b_Photon_pfRelIso03_all_->SetAddress(&Photon_pfRelIso03_all_); }
    b_Photon_pfRelIso03_chg_ = tree->GetBranch("Photon_pfRelIso03_chg");
    if (b_Photon_pfRelIso03_chg_) { b_Photon_pfRelIso03_chg_->SetAddress(&Photon_pfRelIso03_chg_); }
    b_Photon_phi_ = tree->GetBranch("Photon_phi");
    if (b_Photon_phi_) { b_Photon_phi_->SetAddress(&Photon_phi_); }
    b_Photon_pixelSeed_ = tree->GetBranch("Photon_pixelSeed");
    if (b_Photon_pixelSeed_) { b_Photon_pixelSeed_->SetAddress(&Photon_pixelSeed_); }
    b_Photon_pt_ = tree->GetBranch("Photon_pt");
    if (b_Photon_pt_) { b_Photon_pt_->SetAddress(&Photon_pt_); }
    b_Photon_r9_ = tree->GetBranch("Photon_r9");
    if (b_Photon_r9_) { b_Photon_r9_->SetAddress(&Photon_r9_); }
    b_Photon_sieie_ = tree->GetBranch("Photon_sieie");
    if (b_Photon_sieie_) { b_Photon_sieie_->SetAddress(&Photon_sieie_); }
    b_Photon_vidNestedWPBitmap_ = tree->GetBranch("Photon_vidNestedWPBitmap");
    if (b_Photon_vidNestedWPBitmap_) { b_Photon_vidNestedWPBitmap_->SetAddress(&Photon_vidNestedWPBitmap_); }
    b_Pileup_nPU_ = tree->GetBranch("Pileup_nPU");
    if (b_Pileup_nPU_) { b_Pileup_nPU_->SetAddress(&Pileup_nPU_); }
    b_Pileup_nTrueInt_ = tree->GetBranch("Pileup_nTrueInt");
    if (b_Pileup_nTrueInt_) { b_Pileup_nTrueInt_->SetAddress(&Pileup_nTrueInt_); }
    b_Pileup_sumEOOT_ = tree->GetBranch("Pileup_sumEOOT");
    if (b_Pileup_sumEOOT_) { b_Pileup_sumEOOT_->SetAddress(&Pileup_sumEOOT_); }
    b_Pileup_sumLOOT_ = tree->GetBranch("Pileup_sumLOOT");
    if (b_Pileup_sumLOOT_) { b_Pileup_sumLOOT_->SetAddress(&Pileup_sumLOOT_); }
    b_PuppiMET_phi_ = tree->GetBranch("PuppiMET_phi");
    if (b_PuppiMET_phi_) { b_PuppiMET_phi_->SetAddress(&PuppiMET_phi_); }
    b_PuppiMET_pt_ = tree->GetBranch("PuppiMET_pt");
    if (b_PuppiMET_pt_) { b_PuppiMET_pt_->SetAddress(&PuppiMET_pt_); }
    b_PuppiMET_sumEt_ = tree->GetBranch("PuppiMET_sumEt");
    if (b_PuppiMET_sumEt_) { b_PuppiMET_sumEt_->SetAddress(&PuppiMET_sumEt_); }
    b_RawMET_phi_ = tree->GetBranch("RawMET_phi");
    if (b_RawMET_phi_) { b_RawMET_phi_->SetAddress(&RawMET_phi_); }
    b_RawMET_pt_ = tree->GetBranch("RawMET_pt");
    if (b_RawMET_pt_) { b_RawMET_pt_->SetAddress(&RawMET_pt_); }
    b_RawMET_sumEt_ = tree->GetBranch("RawMET_sumEt");
    if (b_RawMET_sumEt_) { b_RawMET_sumEt_->SetAddress(&RawMET_sumEt_); }
    b_SV_chi2_ = tree->GetBranch("SV_chi2");
    if (b_SV_chi2_) { b_SV_chi2_->SetAddress(&SV_chi2_); }
    b_SV_dlen_ = tree->GetBranch("SV_dlen");
    if (b_SV_dlen_) { b_SV_dlen_->SetAddress(&SV_dlen_); }
    b_SV_dlenSig_ = tree->GetBranch("SV_dlenSig");
    if (b_SV_dlenSig_) { b_SV_dlenSig_->SetAddress(&SV_dlenSig_); }
    b_SV_eta_ = tree->GetBranch("SV_eta");
    if (b_SV_eta_) { b_SV_eta_->SetAddress(&SV_eta_); }
    b_SV_mass_ = tree->GetBranch("SV_mass");
    if (b_SV_mass_) { b_SV_mass_->SetAddress(&SV_mass_); }
    b_SV_ndof_ = tree->GetBranch("SV_ndof");
    if (b_SV_ndof_) { b_SV_ndof_->SetAddress(&SV_ndof_); }
    b_SV_pAngle_ = tree->GetBranch("SV_pAngle");
    if (b_SV_pAngle_) { b_SV_pAngle_->SetAddress(&SV_pAngle_); }
    b_SV_phi_ = tree->GetBranch("SV_phi");
    if (b_SV_phi_) { b_SV_phi_->SetAddress(&SV_phi_); }
    b_SV_pt_ = tree->GetBranch("SV_pt");
    if (b_SV_pt_) { b_SV_pt_->SetAddress(&SV_pt_); }
    b_SV_x_ = tree->GetBranch("SV_x");
    if (b_SV_x_) { b_SV_x_->SetAddress(&SV_x_); }
    b_SV_y_ = tree->GetBranch("SV_y");
    if (b_SV_y_) { b_SV_y_->SetAddress(&SV_y_); }
    b_SV_z_ = tree->GetBranch("SV_z");
    if (b_SV_z_) { b_SV_z_->SetAddress(&SV_z_); }
    b_SoftActivityJetHT_ = tree->GetBranch("SoftActivityJetHT");
    if (b_SoftActivityJetHT_) { b_SoftActivityJetHT_->SetAddress(&SoftActivityJetHT_); }
    b_SoftActivityJetHT10_ = tree->GetBranch("SoftActivityJetHT10");
    if (b_SoftActivityJetHT10_) { b_SoftActivityJetHT10_->SetAddress(&SoftActivityJetHT10_); }
    b_SoftActivityJetHT2_ = tree->GetBranch("SoftActivityJetHT2");
    if (b_SoftActivityJetHT2_) { b_SoftActivityJetHT2_->SetAddress(&SoftActivityJetHT2_); }
    b_SoftActivityJetHT5_ = tree->GetBranch("SoftActivityJetHT5");
    if (b_SoftActivityJetHT5_) { b_SoftActivityJetHT5_->SetAddress(&SoftActivityJetHT5_); }
    b_SoftActivityJetNjets10_ = tree->GetBranch("SoftActivityJetNjets10");
    if (b_SoftActivityJetNjets10_) { b_SoftActivityJetNjets10_->SetAddress(&SoftActivityJetNjets10_); }
    b_SoftActivityJetNjets2_ = tree->GetBranch("SoftActivityJetNjets2");
    if (b_SoftActivityJetNjets2_) { b_SoftActivityJetNjets2_->SetAddress(&SoftActivityJetNjets2_); }
    b_SoftActivityJetNjets5_ = tree->GetBranch("SoftActivityJetNjets5");
    if (b_SoftActivityJetNjets5_) { b_SoftActivityJetNjets5_->SetAddress(&SoftActivityJetNjets5_); }
    b_SoftActivityJet_eta_ = tree->GetBranch("SoftActivityJet_eta");
    if (b_SoftActivityJet_eta_) { b_SoftActivityJet_eta_->SetAddress(&SoftActivityJet_eta_); }
    b_SoftActivityJet_phi_ = tree->GetBranch("SoftActivityJet_phi");
    if (b_SoftActivityJet_phi_) { b_SoftActivityJet_phi_->SetAddress(&SoftActivityJet_phi_); }
    b_SoftActivityJet_pt_ = tree->GetBranch("SoftActivityJet_pt");
    if (b_SoftActivityJet_pt_) { b_SoftActivityJet_pt_->SetAddress(&SoftActivityJet_pt_); }
    b_SubGenJetAK8_eta_ = tree->GetBranch("SubGenJetAK8_eta");
    if (b_SubGenJetAK8_eta_) { b_SubGenJetAK8_eta_->SetAddress(&SubGenJetAK8_eta_); }
    b_SubGenJetAK8_mass_ = tree->GetBranch("SubGenJetAK8_mass");
    if (b_SubGenJetAK8_mass_) { b_SubGenJetAK8_mass_->SetAddress(&SubGenJetAK8_mass_); }
    b_SubGenJetAK8_phi_ = tree->GetBranch("SubGenJetAK8_phi");
    if (b_SubGenJetAK8_phi_) { b_SubGenJetAK8_phi_->SetAddress(&SubGenJetAK8_phi_); }
    b_SubGenJetAK8_pt_ = tree->GetBranch("SubGenJetAK8_pt");
    if (b_SubGenJetAK8_pt_) { b_SubGenJetAK8_pt_->SetAddress(&SubGenJetAK8_pt_); }
    b_SubJet_btagCMVA_ = tree->GetBranch("SubJet_btagCMVA");
    if (b_SubJet_btagCMVA_) { b_SubJet_btagCMVA_->SetAddress(&SubJet_btagCMVA_); }
    b_SubJet_btagCSVV2_ = tree->GetBranch("SubJet_btagCSVV2");
    if (b_SubJet_btagCSVV2_) { b_SubJet_btagCSVV2_->SetAddress(&SubJet_btagCSVV2_); }
    b_SubJet_btagDeepB_ = tree->GetBranch("SubJet_btagDeepB");
    if (b_SubJet_btagDeepB_) { b_SubJet_btagDeepB_->SetAddress(&SubJet_btagDeepB_); }
    b_SubJet_eta_ = tree->GetBranch("SubJet_eta");
    if (b_SubJet_eta_) { b_SubJet_eta_->SetAddress(&SubJet_eta_); }
    b_SubJet_mass_ = tree->GetBranch("SubJet_mass");
    if (b_SubJet_mass_) { b_SubJet_mass_->SetAddress(&SubJet_mass_); }
    b_SubJet_n2b1_ = tree->GetBranch("SubJet_n2b1");
    if (b_SubJet_n2b1_) { b_SubJet_n2b1_->SetAddress(&SubJet_n2b1_); }
    b_SubJet_n3b1_ = tree->GetBranch("SubJet_n3b1");
    if (b_SubJet_n3b1_) { b_SubJet_n3b1_->SetAddress(&SubJet_n3b1_); }
    b_SubJet_phi_ = tree->GetBranch("SubJet_phi");
    if (b_SubJet_phi_) { b_SubJet_phi_->SetAddress(&SubJet_phi_); }
    b_SubJet_pt_ = tree->GetBranch("SubJet_pt");
    if (b_SubJet_pt_) { b_SubJet_pt_->SetAddress(&SubJet_pt_); }
    b_SubJet_tau1_ = tree->GetBranch("SubJet_tau1");
    if (b_SubJet_tau1_) { b_SubJet_tau1_->SetAddress(&SubJet_tau1_); }
    b_SubJet_tau2_ = tree->GetBranch("SubJet_tau2");
    if (b_SubJet_tau2_) { b_SubJet_tau2_->SetAddress(&SubJet_tau2_); }
    b_SubJet_tau3_ = tree->GetBranch("SubJet_tau3");
    if (b_SubJet_tau3_) { b_SubJet_tau3_->SetAddress(&SubJet_tau3_); }
    b_SubJet_tau4_ = tree->GetBranch("SubJet_tau4");
    if (b_SubJet_tau4_) { b_SubJet_tau4_->SetAddress(&SubJet_tau4_); }
    b_Tau_charge_ = tree->GetBranch("Tau_charge");
    if (b_Tau_charge_) { b_Tau_charge_->SetAddress(&Tau_charge_); }
    b_Tau_chargedIso_ = tree->GetBranch("Tau_chargedIso");
    if (b_Tau_chargedIso_) { b_Tau_chargedIso_->SetAddress(&Tau_chargedIso_); }
    b_Tau_cleanmask_ = tree->GetBranch("Tau_cleanmask");
    if (b_Tau_cleanmask_) { b_Tau_cleanmask_->SetAddress(&Tau_cleanmask_); }
    b_Tau_decayMode_ = tree->GetBranch("Tau_decayMode");
    if (b_Tau_decayMode_) { b_Tau_decayMode_->SetAddress(&Tau_decayMode_); }
    b_Tau_dxy_ = tree->GetBranch("Tau_dxy");
    if (b_Tau_dxy_) { b_Tau_dxy_->SetAddress(&Tau_dxy_); }
    b_Tau_dz_ = tree->GetBranch("Tau_dz");
    if (b_Tau_dz_) { b_Tau_dz_->SetAddress(&Tau_dz_); }
    b_Tau_eta_ = tree->GetBranch("Tau_eta");
    if (b_Tau_eta_) { b_Tau_eta_->SetAddress(&Tau_eta_); }
    b_Tau_genPartFlav_ = tree->GetBranch("Tau_genPartFlav");
    if (b_Tau_genPartFlav_) { b_Tau_genPartFlav_->SetAddress(&Tau_genPartFlav_); }
    b_Tau_genPartIdx_ = tree->GetBranch("Tau_genPartIdx");
    if (b_Tau_genPartIdx_) { b_Tau_genPartIdx_->SetAddress(&Tau_genPartIdx_); }
    b_Tau_idAntiEle_ = tree->GetBranch("Tau_idAntiEle");
    if (b_Tau_idAntiEle_) { b_Tau_idAntiEle_->SetAddress(&Tau_idAntiEle_); }
    b_Tau_idAntiMu_ = tree->GetBranch("Tau_idAntiMu");
    if (b_Tau_idAntiMu_) { b_Tau_idAntiMu_->SetAddress(&Tau_idAntiMu_); }
    b_Tau_idDecayMode_ = tree->GetBranch("Tau_idDecayMode");
    if (b_Tau_idDecayMode_) { b_Tau_idDecayMode_->SetAddress(&Tau_idDecayMode_); }
    b_Tau_idDecayModeNewDMs_ = tree->GetBranch("Tau_idDecayModeNewDMs");
    if (b_Tau_idDecayModeNewDMs_) { b_Tau_idDecayModeNewDMs_->SetAddress(&Tau_idDecayModeNewDMs_); }
    b_Tau_idMVAnewDM2017v2_ = tree->GetBranch("Tau_idMVAnewDM2017v2");
    if (b_Tau_idMVAnewDM2017v2_) { b_Tau_idMVAnewDM2017v2_->SetAddress(&Tau_idMVAnewDM2017v2_); }
    b_Tau_idMVAoldDM_ = tree->GetBranch("Tau_idMVAoldDM");
    if (b_Tau_idMVAoldDM_) { b_Tau_idMVAoldDM_->SetAddress(&Tau_idMVAoldDM_); }
    b_Tau_idMVAoldDM2017v1_ = tree->GetBranch("Tau_idMVAoldDM2017v1");
    if (b_Tau_idMVAoldDM2017v1_) { b_Tau_idMVAoldDM2017v1_->SetAddress(&Tau_idMVAoldDM2017v1_); }
    b_Tau_idMVAoldDM2017v2_ = tree->GetBranch("Tau_idMVAoldDM2017v2");
    if (b_Tau_idMVAoldDM2017v2_) { b_Tau_idMVAoldDM2017v2_->SetAddress(&Tau_idMVAoldDM2017v2_); }
    b_Tau_idMVAoldDMdR032017v2_ = tree->GetBranch("Tau_idMVAoldDMdR032017v2");
    if (b_Tau_idMVAoldDMdR032017v2_) { b_Tau_idMVAoldDMdR032017v2_->SetAddress(&Tau_idMVAoldDMdR032017v2_); }
    b_Tau_jetIdx_ = tree->GetBranch("Tau_jetIdx");
    if (b_Tau_jetIdx_) { b_Tau_jetIdx_->SetAddress(&Tau_jetIdx_); }
    b_Tau_leadTkDeltaEta_ = tree->GetBranch("Tau_leadTkDeltaEta");
    if (b_Tau_leadTkDeltaEta_) { b_Tau_leadTkDeltaEta_->SetAddress(&Tau_leadTkDeltaEta_); }
    b_Tau_leadTkDeltaPhi_ = tree->GetBranch("Tau_leadTkDeltaPhi");
    if (b_Tau_leadTkDeltaPhi_) { b_Tau_leadTkDeltaPhi_->SetAddress(&Tau_leadTkDeltaPhi_); }
    b_Tau_leadTkPtOverTauPt_ = tree->GetBranch("Tau_leadTkPtOverTauPt");
    if (b_Tau_leadTkPtOverTauPt_) { b_Tau_leadTkPtOverTauPt_->SetAddress(&Tau_leadTkPtOverTauPt_); }
    b_Tau_mass_ = tree->GetBranch("Tau_mass");
    if (b_Tau_mass_) { b_Tau_mass_->SetAddress(&Tau_mass_); }
    b_Tau_neutralIso_ = tree->GetBranch("Tau_neutralIso");
    if (b_Tau_neutralIso_) { b_Tau_neutralIso_->SetAddress(&Tau_neutralIso_); }
    b_Tau_phi_ = tree->GetBranch("Tau_phi");
    if (b_Tau_phi_) { b_Tau_phi_->SetAddress(&Tau_phi_); }
    b_Tau_photonsOutsideSignalCone_ = tree->GetBranch("Tau_photonsOutsideSignalCone");
    if (b_Tau_photonsOutsideSignalCone_) { b_Tau_photonsOutsideSignalCone_->SetAddress(&Tau_photonsOutsideSignalCone_); }
    b_Tau_pt_ = tree->GetBranch("Tau_pt");
    if (b_Tau_pt_) { b_Tau_pt_->SetAddress(&Tau_pt_); }
    b_Tau_puCorr_ = tree->GetBranch("Tau_puCorr");
    if (b_Tau_puCorr_) { b_Tau_puCorr_->SetAddress(&Tau_puCorr_); }
    b_Tau_rawAntiEle_ = tree->GetBranch("Tau_rawAntiEle");
    if (b_Tau_rawAntiEle_) { b_Tau_rawAntiEle_->SetAddress(&Tau_rawAntiEle_); }
    b_Tau_rawAntiEleCat_ = tree->GetBranch("Tau_rawAntiEleCat");
    if (b_Tau_rawAntiEleCat_) { b_Tau_rawAntiEleCat_->SetAddress(&Tau_rawAntiEleCat_); }
    b_Tau_rawIso_ = tree->GetBranch("Tau_rawIso");
    if (b_Tau_rawIso_) { b_Tau_rawIso_->SetAddress(&Tau_rawIso_); }
    b_Tau_rawIsodR03_ = tree->GetBranch("Tau_rawIsodR03");
    if (b_Tau_rawIsodR03_) { b_Tau_rawIsodR03_->SetAddress(&Tau_rawIsodR03_); }
    b_Tau_rawMVAnewDM2017v2_ = tree->GetBranch("Tau_rawMVAnewDM2017v2");
    if (b_Tau_rawMVAnewDM2017v2_) { b_Tau_rawMVAnewDM2017v2_->SetAddress(&Tau_rawMVAnewDM2017v2_); }
    b_Tau_rawMVAoldDM_ = tree->GetBranch("Tau_rawMVAoldDM");
    if (b_Tau_rawMVAoldDM_) { b_Tau_rawMVAoldDM_->SetAddress(&Tau_rawMVAoldDM_); }
    b_Tau_rawMVAoldDM2017v1_ = tree->GetBranch("Tau_rawMVAoldDM2017v1");
    if (b_Tau_rawMVAoldDM2017v1_) { b_Tau_rawMVAoldDM2017v1_->SetAddress(&Tau_rawMVAoldDM2017v1_); }
    b_Tau_rawMVAoldDM2017v2_ = tree->GetBranch("Tau_rawMVAoldDM2017v2");
    if (b_Tau_rawMVAoldDM2017v2_) { b_Tau_rawMVAoldDM2017v2_->SetAddress(&Tau_rawMVAoldDM2017v2_); }
    b_Tau_rawMVAoldDMdR032017v2_ = tree->GetBranch("Tau_rawMVAoldDMdR032017v2");
    if (b_Tau_rawMVAoldDMdR032017v2_) { b_Tau_rawMVAoldDMdR032017v2_->SetAddress(&Tau_rawMVAoldDMdR032017v2_); }
    b_TkMET_phi_ = tree->GetBranch("TkMET_phi");
    if (b_TkMET_phi_) { b_TkMET_phi_->SetAddress(&TkMET_phi_); }
    b_TkMET_pt_ = tree->GetBranch("TkMET_pt");
    if (b_TkMET_pt_) { b_TkMET_pt_->SetAddress(&TkMET_pt_); }
    b_TkMET_sumEt_ = tree->GetBranch("TkMET_sumEt");
    if (b_TkMET_sumEt_) { b_TkMET_sumEt_->SetAddress(&TkMET_sumEt_); }
    b_TrigObj_eta_ = tree->GetBranch("TrigObj_eta");
    if (b_TrigObj_eta_) { b_TrigObj_eta_->SetAddress(&TrigObj_eta_); }
    b_TrigObj_filterBits_ = tree->GetBranch("TrigObj_filterBits");
    if (b_TrigObj_filterBits_) { b_TrigObj_filterBits_->SetAddress(&TrigObj_filterBits_); }
    b_TrigObj_id_ = tree->GetBranch("TrigObj_id");
    if (b_TrigObj_id_) { b_TrigObj_id_->SetAddress(&TrigObj_id_); }
    b_TrigObj_l1charge_ = tree->GetBranch("TrigObj_l1charge");
    if (b_TrigObj_l1charge_) { b_TrigObj_l1charge_->SetAddress(&TrigObj_l1charge_); }
    b_TrigObj_l1iso_ = tree->GetBranch("TrigObj_l1iso");
    if (b_TrigObj_l1iso_) { b_TrigObj_l1iso_->SetAddress(&TrigObj_l1iso_); }
    b_TrigObj_l1pt_ = tree->GetBranch("TrigObj_l1pt");
    if (b_TrigObj_l1pt_) { b_TrigObj_l1pt_->SetAddress(&TrigObj_l1pt_); }
    b_TrigObj_l1pt_2_ = tree->GetBranch("TrigObj_l1pt_2");
    if (b_TrigObj_l1pt_2_) { b_TrigObj_l1pt_2_->SetAddress(&TrigObj_l1pt_2_); }
    b_TrigObj_l2pt_ = tree->GetBranch("TrigObj_l2pt");
    if (b_TrigObj_l2pt_) { b_TrigObj_l2pt_->SetAddress(&TrigObj_l2pt_); }
    b_TrigObj_phi_ = tree->GetBranch("TrigObj_phi");
    if (b_TrigObj_phi_) { b_TrigObj_phi_->SetAddress(&TrigObj_phi_); }
    b_TrigObj_pt_ = tree->GetBranch("TrigObj_pt");
    if (b_TrigObj_pt_) { b_TrigObj_pt_->SetAddress(&TrigObj_pt_); }
    b_event_ = tree->GetBranch("event");
    if (b_event_) { b_event_->SetAddress(&event_); }
    b_fixedGridRhoFastjetAll_ = tree->GetBranch("fixedGridRhoFastjetAll");
    if (b_fixedGridRhoFastjetAll_) { b_fixedGridRhoFastjetAll_->SetAddress(&fixedGridRhoFastjetAll_); }
    b_fixedGridRhoFastjetCentralCalo_ = tree->GetBranch("fixedGridRhoFastjetCentralCalo");
    if (b_fixedGridRhoFastjetCentralCalo_) { b_fixedGridRhoFastjetCentralCalo_->SetAddress(&fixedGridRhoFastjetCentralCalo_); }
    b_fixedGridRhoFastjetCentralNeutral_ = tree->GetBranch("fixedGridRhoFastjetCentralNeutral");
    if (b_fixedGridRhoFastjetCentralNeutral_) { b_fixedGridRhoFastjetCentralNeutral_->SetAddress(&fixedGridRhoFastjetCentralNeutral_); }
    b_genTtbarId_ = tree->GetBranch("genTtbarId");
    if (b_genTtbarId_) { b_genTtbarId_->SetAddress(&genTtbarId_); }
    b_genWeight_ = tree->GetBranch("genWeight");
    if (b_genWeight_) { b_genWeight_->SetAddress(&genWeight_); }
    b_luminosityBlock_ = tree->GetBranch("luminosityBlock");
    if (b_luminosityBlock_) { b_luminosityBlock_->SetAddress(&luminosityBlock_); }
    b_nElectron_ = tree->GetBranch("nElectron");
    if (b_nElectron_) { b_nElectron_->SetAddress(&nElectron_); }
    b_nFatJet_ = tree->GetBranch("nFatJet");
    if (b_nFatJet_) { b_nFatJet_->SetAddress(&nFatJet_); }
    b_nGenDressedLepton_ = tree->GetBranch("nGenDressedLepton");
    if (b_nGenDressedLepton_) { b_nGenDressedLepton_->SetAddress(&nGenDressedLepton_); }
    b_nGenJet_ = tree->GetBranch("nGenJet");
    if (b_nGenJet_) { b_nGenJet_->SetAddress(&nGenJet_); }
    b_nGenJetAK8_ = tree->GetBranch("nGenJetAK8");
    if (b_nGenJetAK8_) { b_nGenJetAK8_->SetAddress(&nGenJetAK8_); }
    b_nGenPart_ = tree->GetBranch("nGenPart");
    if (b_nGenPart_) { b_nGenPart_->SetAddress(&nGenPart_); }
    b_nGenVisTau_ = tree->GetBranch("nGenVisTau");
    if (b_nGenVisTau_) { b_nGenVisTau_->SetAddress(&nGenVisTau_); }
    b_nIsoTrack_ = tree->GetBranch("nIsoTrack");
    if (b_nIsoTrack_) { b_nIsoTrack_->SetAddress(&nIsoTrack_); }
    b_nJet_ = tree->GetBranch("nJet");
    if (b_nJet_) { b_nJet_->SetAddress(&nJet_); }
    b_nLHEPart_ = tree->GetBranch("nLHEPart");
    if (b_nLHEPart_) { b_nLHEPart_->SetAddress(&nLHEPart_); }
    b_nLHEPdfWeight_ = tree->GetBranch("nLHEPdfWeight");
    if (b_nLHEPdfWeight_) { b_nLHEPdfWeight_->SetAddress(&nLHEPdfWeight_); }
    b_nLHEScaleWeight_ = tree->GetBranch("nLHEScaleWeight");
    if (b_nLHEScaleWeight_) { b_nLHEScaleWeight_->SetAddress(&nLHEScaleWeight_); }
    b_nMuon_ = tree->GetBranch("nMuon");
    if (b_nMuon_) { b_nMuon_->SetAddress(&nMuon_); }
    b_nOtherPV_ = tree->GetBranch("nOtherPV");
    if (b_nOtherPV_) { b_nOtherPV_->SetAddress(&nOtherPV_); }
    b_nPhoton_ = tree->GetBranch("nPhoton");
    if (b_nPhoton_) { b_nPhoton_->SetAddress(&nPhoton_); }
    b_nSV_ = tree->GetBranch("nSV");
    if (b_nSV_) { b_nSV_->SetAddress(&nSV_); }
    b_nSoftActivityJet_ = tree->GetBranch("nSoftActivityJet");
    if (b_nSoftActivityJet_) { b_nSoftActivityJet_->SetAddress(&nSoftActivityJet_); }
    b_nSubGenJetAK8_ = tree->GetBranch("nSubGenJetAK8");
    if (b_nSubGenJetAK8_) { b_nSubGenJetAK8_->SetAddress(&nSubGenJetAK8_); }
    b_nSubJet_ = tree->GetBranch("nSubJet");
    if (b_nSubJet_) { b_nSubJet_->SetAddress(&nSubJet_); }
    b_nTau_ = tree->GetBranch("nTau");
    if (b_nTau_) { b_nTau_->SetAddress(&nTau_); }
    b_nTrigObj_ = tree->GetBranch("nTrigObj");
    if (b_nTrigObj_) { b_nTrigObj_->SetAddress(&nTrigObj_); }
    b_run_ = tree->GetBranch("run");
    if (b_run_) { b_run_->SetAddress(&run_); }
}

void Nano::GetEntry(unsigned int idx) {
    index = idx;
    loaded_CaloMET_phi_ = false;
    loaded_CaloMET_pt_ = false;
    loaded_CaloMET_sumEt_ = false;
    loaded_Electron_charge_ = false;
    loaded_Electron_cleanmask_ = false;
    loaded_Electron_convVeto_ = false;
    loaded_Electron_cutBased_ = false;
    loaded_Electron_cutBased_HEEP_ = false;
    loaded_Electron_deltaEtaSC_ = false;
    loaded_Electron_dr03EcalRecHitSumEt_ = false;
    loaded_Electron_dr03HcalDepth1TowerSumEt_ = false;
    loaded_Electron_dr03TkSumPt_ = false;
    loaded_Electron_dxy_ = false;
    loaded_Electron_dxyErr_ = false;
    loaded_Electron_dz_ = false;
    loaded_Electron_dzErr_ = false;
    loaded_Electron_eCorr_ = false;
    loaded_Electron_eInvMinusPInv_ = false;
    loaded_Electron_energyErr_ = false;
    loaded_Electron_eta_ = false;
    loaded_Electron_genPartFlav_ = false;
    loaded_Electron_genPartIdx_ = false;
    loaded_Electron_hoe_ = false;
    loaded_Electron_ip3d_ = false;
    loaded_Electron_isPFcand_ = false;
    loaded_Electron_jetIdx_ = false;
    loaded_Electron_lostHits_ = false;
    loaded_Electron_mass_ = false;
    loaded_Electron_miniPFRelIso_all_ = false;
    loaded_Electron_miniPFRelIso_chg_ = false;
    loaded_Electron_mvaFall17Iso_ = false;
    loaded_Electron_mvaFall17Iso_WP80_ = false;
    loaded_Electron_mvaFall17Iso_WP90_ = false;
    loaded_Electron_mvaFall17Iso_WPL_ = false;
    loaded_Electron_mvaFall17noIso_ = false;
    loaded_Electron_mvaFall17noIso_WP80_ = false;
    loaded_Electron_mvaFall17noIso_WP90_ = false;
    loaded_Electron_mvaFall17noIso_WPL_ = false;
    loaded_Electron_mvaTTH_ = false;
    loaded_Electron_p4_ = false;
    loaded_Electron_pdgId_ = false;
    loaded_Electron_pfRelIso03_all_ = false;
    loaded_Electron_pfRelIso03_chg_ = false;
    loaded_Electron_phi_ = false;
    loaded_Electron_photonIdx_ = false;
    loaded_Electron_pt_ = false;
    loaded_Electron_r9_ = false;
    loaded_Electron_sieie_ = false;
    loaded_Electron_sip3d_ = false;
    loaded_Electron_tightCharge_ = false;
    loaded_Electron_vidNestedWPBitmap_ = false;
    loaded_FatJet_area_ = false;
    loaded_FatJet_btagCMVA_ = false;
    loaded_FatJet_btagCSVV2_ = false;
    loaded_FatJet_btagDeepB_ = false;
    loaded_FatJet_btagHbb_ = false;
    loaded_FatJet_eta_ = false;
    loaded_FatJet_jetId_ = false;
    loaded_FatJet_mass_ = false;
    loaded_FatJet_msoftdrop_ = false;
    loaded_FatJet_n2b1_ = false;
    loaded_FatJet_n3b1_ = false;
    loaded_FatJet_p4_ = false;
    loaded_FatJet_phi_ = false;
    loaded_FatJet_pt_ = false;
    loaded_FatJet_subJetIdx1_ = false;
    loaded_FatJet_subJetIdx2_ = false;
    loaded_FatJet_tau1_ = false;
    loaded_FatJet_tau2_ = false;
    loaded_FatJet_tau3_ = false;
    loaded_FatJet_tau4_ = false;
    loaded_Flag_BadChargedCandidateFilter_ = false;
    loaded_Flag_BadChargedCandidateSummer16Filter_ = false;
    loaded_Flag_BadPFMuonFilter_ = false;
    loaded_Flag_BadPFMuonSummer16Filter_ = false;
    loaded_Flag_CSCTightHalo2015Filter_ = false;
    loaded_Flag_CSCTightHaloFilter_ = false;
    loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_ = false;
    loaded_Flag_EcalDeadCellBoundaryEnergyFilter_ = false;
    loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_ = false;
    loaded_Flag_HBHENoiseFilter_ = false;
    loaded_Flag_HBHENoiseIsoFilter_ = false;
    loaded_Flag_HcalStripHaloFilter_ = false;
    loaded_Flag_METFilters_ = false;
    loaded_Flag_chargedHadronTrackResolutionFilter_ = false;
    loaded_Flag_ecalBadCalibFilter_ = false;
    loaded_Flag_ecalLaserCorrFilter_ = false;
    loaded_Flag_eeBadScFilter_ = false;
    loaded_Flag_globalSuperTightHalo2016Filter_ = false;
    loaded_Flag_globalTightHalo2016Filter_ = false;
    loaded_Flag_goodVertices_ = false;
    loaded_Flag_hcalLaserEventFilter_ = false;
    loaded_Flag_muonBadTrackFilter_ = false;
    loaded_Flag_trkPOGFilters_ = false;
    loaded_Flag_trkPOG_logErrorTooManyClusters_ = false;
    loaded_Flag_trkPOG_manystripclus53X_ = false;
    loaded_Flag_trkPOG_toomanystripclus53X_ = false;
    loaded_GenDressedLepton_eta_ = false;
    loaded_GenDressedLepton_mass_ = false;
    loaded_GenDressedLepton_p4_ = false;
    loaded_GenDressedLepton_pdgId_ = false;
    loaded_GenDressedLepton_phi_ = false;
    loaded_GenDressedLepton_pt_ = false;
    loaded_GenJetAK8_eta_ = false;
    loaded_GenJetAK8_hadronFlavour_ = false;
    loaded_GenJetAK8_mass_ = false;
    loaded_GenJetAK8_p4_ = false;
    loaded_GenJetAK8_partonFlavour_ = false;
    loaded_GenJetAK8_phi_ = false;
    loaded_GenJetAK8_pt_ = false;
    loaded_GenJet_eta_ = false;
    loaded_GenJet_hadronFlavour_ = false;
    loaded_GenJet_mass_ = false;
    loaded_GenJet_p4_ = false;
    loaded_GenJet_partonFlavour_ = false;
    loaded_GenJet_phi_ = false;
    loaded_GenJet_pt_ = false;
    loaded_GenMET_phi_ = false;
    loaded_GenMET_pt_ = false;
    loaded_GenPart_eta_ = false;
    loaded_GenPart_genPartIdxMother_ = false;
    loaded_GenPart_mass_ = false;
    loaded_GenPart_p4_ = false;
    loaded_GenPart_pdgId_ = false;
    loaded_GenPart_phi_ = false;
    loaded_GenPart_pt_ = false;
    loaded_GenPart_status_ = false;
    loaded_GenPart_statusFlags_ = false;
    loaded_GenVisTau_charge_ = false;
    loaded_GenVisTau_eta_ = false;
    loaded_GenVisTau_genPartIdxMother_ = false;
    loaded_GenVisTau_mass_ = false;
    loaded_GenVisTau_p4_ = false;
    loaded_GenVisTau_phi_ = false;
    loaded_GenVisTau_pt_ = false;
    loaded_GenVisTau_status_ = false;
    loaded_Generator_binvar_ = false;
    loaded_Generator_id1_ = false;
    loaded_Generator_id2_ = false;
    loaded_Generator_scalePDF_ = false;
    loaded_Generator_weight_ = false;
    loaded_Generator_x1_ = false;
    loaded_Generator_x2_ = false;
    loaded_Generator_xpdf1_ = false;
    loaded_Generator_xpdf2_ = false;
    loaded_HLT_AK4CaloJet100_ = false;
    loaded_HLT_AK4CaloJet120_ = false;
    loaded_HLT_AK4CaloJet30_ = false;
    loaded_HLT_AK4CaloJet40_ = false;
    loaded_HLT_AK4CaloJet50_ = false;
    loaded_HLT_AK4CaloJet80_ = false;
    loaded_HLT_AK4PFJet100_ = false;
    loaded_HLT_AK4PFJet120_ = false;
    loaded_HLT_AK4PFJet30_ = false;
    loaded_HLT_AK4PFJet50_ = false;
    loaded_HLT_AK4PFJet80_ = false;
    loaded_HLT_AK8PFHT750_TrimMass50_ = false;
    loaded_HLT_AK8PFHT800_TrimMass50_ = false;
    loaded_HLT_AK8PFHT850_TrimMass50_ = false;
    loaded_HLT_AK8PFHT900_TrimMass50_ = false;
    loaded_HLT_AK8PFJet140_ = false;
    loaded_HLT_AK8PFJet200_ = false;
    loaded_HLT_AK8PFJet260_ = false;
    loaded_HLT_AK8PFJet320_ = false;
    loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p1_ = false;
    loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p17_ = false;
    loaded_HLT_AK8PFJet360_TrimMass30_ = false;
    loaded_HLT_AK8PFJet380_TrimMass30_ = false;
    loaded_HLT_AK8PFJet40_ = false;
    loaded_HLT_AK8PFJet400_ = false;
    loaded_HLT_AK8PFJet400_TrimMass30_ = false;
    loaded_HLT_AK8PFJet420_TrimMass30_ = false;
    loaded_HLT_AK8PFJet450_ = false;
    loaded_HLT_AK8PFJet500_ = false;
    loaded_HLT_AK8PFJet550_ = false;
    loaded_HLT_AK8PFJet60_ = false;
    loaded_HLT_AK8PFJet80_ = false;
    loaded_HLT_AK8PFJetFwd140_ = false;
    loaded_HLT_AK8PFJetFwd200_ = false;
    loaded_HLT_AK8PFJetFwd260_ = false;
    loaded_HLT_AK8PFJetFwd320_ = false;
    loaded_HLT_AK8PFJetFwd40_ = false;
    loaded_HLT_AK8PFJetFwd400_ = false;
    loaded_HLT_AK8PFJetFwd450_ = false;
    loaded_HLT_AK8PFJetFwd500_ = false;
    loaded_HLT_AK8PFJetFwd60_ = false;
    loaded_HLT_AK8PFJetFwd80_ = false;
    loaded_HLT_BTagMu_AK4DiJet110_Mu5_ = false;
    loaded_HLT_BTagMu_AK4DiJet170_Mu5_ = false;
    loaded_HLT_BTagMu_AK4DiJet20_Mu5_ = false;
    loaded_HLT_BTagMu_AK4DiJet40_Mu5_ = false;
    loaded_HLT_BTagMu_AK4DiJet70_Mu5_ = false;
    loaded_HLT_BTagMu_AK4Jet300_Mu5_ = false;
    loaded_HLT_BTagMu_AK8DiJet170_Mu5_ = false;
    loaded_HLT_BTagMu_AK8Jet300_Mu5_ = false;
    loaded_HLT_CaloJet500_NoJetID_ = false;
    loaded_HLT_CaloJet550_NoJetID_ = false;
    loaded_HLT_CaloMET100_HBHECleaned_ = false;
    loaded_HLT_CaloMET100_NotCleaned_ = false;
    loaded_HLT_CaloMET110_NotCleaned_ = false;
    loaded_HLT_CaloMET250_HBHECleaned_ = false;
    loaded_HLT_CaloMET250_NotCleaned_ = false;
    loaded_HLT_CaloMET300_HBHECleaned_ = false;
    loaded_HLT_CaloMET350_HBHECleaned_ = false;
    loaded_HLT_CaloMET70_HBHECleaned_ = false;
    loaded_HLT_CaloMET80_HBHECleaned_ = false;
    loaded_HLT_CaloMET80_NotCleaned_ = false;
    loaded_HLT_CaloMET90_HBHECleaned_ = false;
    loaded_HLT_CaloMET90_NotCleaned_ = false;
    loaded_HLT_CaloMHT90_ = false;
    loaded_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_ = false;
    loaded_HLT_DiJet110_35_Mjj650_PFMET110_ = false;
    loaded_HLT_DiJet110_35_Mjj650_PFMET120_ = false;
    loaded_HLT_DiJet110_35_Mjj650_PFMET130_ = false;
    loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_ = false;
    loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_ = false;
    loaded_HLT_DiPFJet15_FBEta3_NoCaloMatched_ = false;
    loaded_HLT_DiPFJet15_NoCaloMatched_ = false;
    loaded_HLT_DiPFJet25_FBEta3_NoCaloMatched_ = false;
    loaded_HLT_DiPFJet25_NoCaloMatched_ = false;
    loaded_HLT_DiPFJetAve100_HFJEC_ = false;
    loaded_HLT_DiPFJetAve140_ = false;
    loaded_HLT_DiPFJetAve15_HFJEC_ = false;
    loaded_HLT_DiPFJetAve160_HFJEC_ = false;
    loaded_HLT_DiPFJetAve200_ = false;
    loaded_HLT_DiPFJetAve220_HFJEC_ = false;
    loaded_HLT_DiPFJetAve25_HFJEC_ = false;
    loaded_HLT_DiPFJetAve260_ = false;
    loaded_HLT_DiPFJetAve300_HFJEC_ = false;
    loaded_HLT_DiPFJetAve320_ = false;
    loaded_HLT_DiPFJetAve35_HFJEC_ = false;
    loaded_HLT_DiPFJetAve40_ = false;
    loaded_HLT_DiPFJetAve400_ = false;
    loaded_HLT_DiPFJetAve500_ = false;
    loaded_HLT_DiPFJetAve60_ = false;
    loaded_HLT_DiPFJetAve60_HFJEC_ = false;
    loaded_HLT_DiPFJetAve80_ = false;
    loaded_HLT_DiPFJetAve80_HFJEC_ = false;
    loaded_HLT_DiSC30_18_EIso_AND_HE_Mass70_ = false;
    loaded_HLT_Dimuon0_Jpsi_ = false;
    loaded_HLT_Dimuon0_Jpsi3p5_Muon2_ = false;
    loaded_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_ = false;
    loaded_HLT_Dimuon0_Jpsi_L1_NoOS_ = false;
    loaded_HLT_Dimuon0_Jpsi_NoVertexing_ = false;
    loaded_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_ = false;
    loaded_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_ = false;
    loaded_HLT_Dimuon0_LowMass_ = false;
    loaded_HLT_Dimuon0_LowMass_L1_0er1p5_ = false;
    loaded_HLT_Dimuon0_LowMass_L1_0er1p5R_ = false;
    loaded_HLT_Dimuon0_LowMass_L1_4_ = false;
    loaded_HLT_Dimuon0_LowMass_L1_4R_ = false;
    loaded_HLT_Dimuon0_LowMass_L1_TM530_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_4p5_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_4p5NoOS_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_5_ = false;
    loaded_HLT_Dimuon0_Upsilon_L1_5M_ = false;
    loaded_HLT_Dimuon0_Upsilon_Muon_L1_TM0_ = false;
    loaded_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_ = false;
    loaded_HLT_Dimuon0_Upsilon_NoVertexing_ = false;
    loaded_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_ = false;
    loaded_HLT_Dimuon10_Upsilon_Barrel_Seagulls_ = false;
    loaded_HLT_Dimuon12_Upsilon_eta1p5_ = false;
    loaded_HLT_Dimuon14_Phi_Barrel_Seagulls_ = false;
    loaded_HLT_Dimuon18_PsiPrime_ = false;
    loaded_HLT_Dimuon18_PsiPrime_noCorrL1_ = false;
    loaded_HLT_Dimuon20_Jpsi_Barrel_Seagulls_ = false;
    loaded_HLT_Dimuon24_Phi_noCorrL1_ = false;
    loaded_HLT_Dimuon24_Upsilon_noCorrL1_ = false;
    loaded_HLT_Dimuon25_Jpsi_ = false;
    loaded_HLT_Dimuon25_Jpsi_noCorrL1_ = false;
    loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = false;
    loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = false;
    loaded_HLT_DoubleEle24_eta2p1_WPTight_Gsf_ = false;
    loaded_HLT_DoubleEle25_CaloIdL_MW_ = false;
    loaded_HLT_DoubleEle27_CaloIdL_MW_ = false;
    loaded_HLT_DoubleEle33_CaloIdL_MW_ = false;
    loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_ = false;
    loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_ = false;
    loaded_HLT_DoubleIsoMu20_eta2p1_ = false;
    loaded_HLT_DoubleIsoMu24_eta2p1_ = false;
    loaded_HLT_DoubleL2Mu50_ = false;
    loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4_ = false;
    loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_ = false;
    loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_ = false;
    loaded_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_ = false;
    loaded_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_ = false;
    loaded_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_ = false;
    loaded_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_ = false;
    loaded_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_ = false;
    loaded_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_ = false;
    loaded_HLT_DoubleMu3_Trk_Tau3mu_ = false;
    loaded_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_ = false;
    loaded_HLT_DoubleMu43NoFiltersNoVtx_ = false;
    loaded_HLT_DoubleMu48NoFiltersNoVtx_ = false;
    loaded_HLT_DoubleMu4_3_Bs_ = false;
    loaded_HLT_DoubleMu4_3_Jpsi_Displaced_ = false;
    loaded_HLT_DoubleMu4_JpsiTrkTrk_Displaced_ = false;
    loaded_HLT_DoubleMu4_JpsiTrk_Displaced_ = false;
    loaded_HLT_DoubleMu4_Jpsi_Displaced_ = false;
    loaded_HLT_DoubleMu4_Jpsi_NoVertexing_ = false;
    loaded_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_ = false;
    loaded_HLT_DoubleMu4_Mass8_DZ_PFHT350_ = false;
    loaded_HLT_DoubleMu4_PsiPrimeTrk_Displaced_ = false;
    loaded_HLT_DoubleMu8_Mass8_PFHT350_ = false;
    loaded_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets100_CaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets200_CaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets350_CaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePFJets40_CaloBTagCSV_p33_ = false;
    loaded_HLT_DoublePhoton33_CaloIdL_ = false;
    loaded_HLT_DoublePhoton70_ = false;
    loaded_HLT_DoublePhoton85_ = false;
    loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = false;
    loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_ECALHT800_ = false;
    loaded_HLT_EcalCalibration_ = false;
    loaded_HLT_Ele115_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ = false;
    loaded_HLT_Ele135_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele145_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele15_IsoVVVL_PFHT450_ = false;
    loaded_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = false;
    loaded_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_ = false;
    loaded_HLT_Ele15_IsoVVVL_PFHT600_ = false;
    loaded_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_ = false;
    loaded_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_ = false;
    loaded_HLT_Ele200_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele20_WPLoose_Gsf_ = false;
    loaded_HLT_Ele20_WPTight_Gsf_ = false;
    loaded_HLT_Ele20_eta2p1_WPLoose_Gsf_ = false;
    loaded_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ = false;
    loaded_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ = false;
    loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_ = false;
    loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_ = false;
    loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_Ele250_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele27_Ele37_CaloIdL_MW_ = false;
    loaded_HLT_Ele27_WPTight_Gsf_ = false;
    loaded_HLT_Ele28_HighEta_SC20_Mass55_ = false;
    loaded_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_ = false;
    loaded_HLT_Ele300_CaloIdVT_GsfTrkIdT_ = false;
    loaded_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_ = false;
    loaded_HLT_Ele32_WPTight_Gsf_ = false;
    loaded_HLT_Ele32_WPTight_Gsf_L1DoubleEG_ = false;
    loaded_HLT_Ele35_WPTight_Gsf_ = false;
    loaded_HLT_Ele35_WPTight_Gsf_L1EGMT_ = false;
    loaded_HLT_Ele38_WPTight_Gsf_ = false;
    loaded_HLT_Ele40_WPTight_Gsf_ = false;
    loaded_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_ = false;
    loaded_HLT_Ele50_IsoVVVL_PFHT450_ = false;
    loaded_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_ = false;
    loaded_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ = false;
    loaded_HLT_FullTrack_Multiplicity100_ = false;
    loaded_HLT_FullTrack_Multiplicity130_ = false;
    loaded_HLT_FullTrack_Multiplicity155_ = false;
    loaded_HLT_FullTrack_Multiplicity85_ = false;
    loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = false;
    loaded_HLT_HT300_Beamspot_ = false;
    loaded_HLT_HT400_DisplacedDijet40_DisplacedTrack_ = false;
    loaded_HLT_HT425_ = false;
    loaded_HLT_HT430_DisplacedDijet40_DisplacedTrack_ = false;
    loaded_HLT_HT430_DisplacedDijet60_DisplacedTrack_ = false;
    loaded_HLT_HT430_DisplacedDijet80_DisplacedTrack_ = false;
    loaded_HLT_HT450_Beamspot_ = false;
    loaded_HLT_HT550_DisplacedDijet60_Inclusive_ = false;
    loaded_HLT_HT550_DisplacedDijet80_Inclusive_ = false;
    loaded_HLT_HT650_DisplacedDijet60_Inclusive_ = false;
    loaded_HLT_HT650_DisplacedDijet80_Inclusive_ = false;
    loaded_HLT_HT750_DisplacedDijet80_Inclusive_ = false;
    loaded_HLT_HcalCalibration_ = false;
    loaded_HLT_HcalIsolatedbunch_ = false;
    loaded_HLT_HcalNZS_ = false;
    loaded_HLT_HcalPhiSym_ = false;
    loaded_HLT_IsoMu20_ = false;
    loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_ = false;
    loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_ = false;
    loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_ = false;
    loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = false;
    loaded_HLT_IsoMu24_ = false;
    loaded_HLT_IsoMu24_eta2p1_ = false;
    loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = false;
    loaded_HLT_IsoMu27_ = false;
    loaded_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_ = false;
    loaded_HLT_IsoMu30_ = false;
    loaded_HLT_IsoTrackHB_ = false;
    loaded_HLT_IsoTrackHE_ = false;
    loaded_HLT_L1ETMHadSeeds_ = false;
    loaded_HLT_L1MinimumBiasHF0OR_ = false;
    loaded_HLT_L1MinimumBiasHF_OR_ = false;
    loaded_HLT_L1NotBptxOR_ = false;
    loaded_HLT_L1SingleMu18_ = false;
    loaded_HLT_L1SingleMu25_ = false;
    loaded_HLT_L1UnpairedBunchBptxMinus_ = false;
    loaded_HLT_L1UnpairedBunchBptxPlus_ = false;
    loaded_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_ = false;
    loaded_HLT_L1_DoubleJet30_Mass_Min400_Mu10_ = false;
    loaded_HLT_L2Mu10_ = false;
    loaded_HLT_L2Mu10_NoVertex_NoBPTX_ = false;
    loaded_HLT_L2Mu10_NoVertex_NoBPTX3BX_ = false;
    loaded_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_ = false;
    loaded_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_ = false;
    loaded_HLT_L2Mu50_ = false;
    loaded_HLT_MET105_IsoTrk50_ = false;
    loaded_HLT_MET120_IsoTrk50_ = false;
    loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_ = false;
    loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_ = false;
    loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_ = false;
    loaded_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_ = false;
    loaded_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_ = false;
    loaded_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_ = false;
    loaded_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_ = false;
    loaded_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_ = false;
    loaded_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_ = false;
    loaded_HLT_Mu12_DoublePhoton20_ = false;
    loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = false;
    loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = false;
    loaded_HLT_Mu15_IsoVVVL_PFHT450_ = false;
    loaded_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = false;
    loaded_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_ = false;
    loaded_HLT_Mu15_IsoVVVL_PFHT600_ = false;
    loaded_HLT_Mu17_ = false;
    loaded_HLT_Mu17_Photon30_IsoCaloId_ = false;
    loaded_HLT_Mu17_TrkIsoVVL_ = false;
    loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_ = false;
    loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_ = false;
    loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_ = false;
    loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_ = false;
    loaded_HLT_Mu18_Mu9_ = false;
    loaded_HLT_Mu18_Mu9_DZ_ = false;
    loaded_HLT_Mu18_Mu9_SameSign_ = false;
    loaded_HLT_Mu18_Mu9_SameSign_DZ_ = false;
    loaded_HLT_Mu19_ = false;
    loaded_HLT_Mu19_TrkIsoVVL_ = false;
    loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_ = false;
    loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_ = false;
    loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_ = false;
    loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_ = false;
    loaded_HLT_Mu20_ = false;
    loaded_HLT_Mu20_Mu10_ = false;
    loaded_HLT_Mu20_Mu10_DZ_ = false;
    loaded_HLT_Mu20_Mu10_SameSign_ = false;
    loaded_HLT_Mu20_Mu10_SameSign_DZ_ = false;
    loaded_HLT_Mu20_TkMu0_Phi_ = false;
    loaded_HLT_Mu23_Mu12_ = false;
    loaded_HLT_Mu23_Mu12_DZ_ = false;
    loaded_HLT_Mu23_Mu12_SameSign_ = false;
    loaded_HLT_Mu23_Mu12_SameSign_DZ_ = false;
    loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ = false;
    loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = false;
    loaded_HLT_Mu25_TkMu0_Onia_ = false;
    loaded_HLT_Mu25_TkMu0_Phi_ = false;
    loaded_HLT_Mu27_ = false;
    loaded_HLT_Mu27_Ele37_CaloIdL_MW_ = false;
    loaded_HLT_Mu30_TkMu0_Onia_ = false;
    loaded_HLT_Mu37_Ele27_CaloIdL_MW_ = false;
    loaded_HLT_Mu37_TkMu27_ = false;
    loaded_HLT_Mu3_PFJet40_ = false;
    loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = false;
    loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = false;
    loaded_HLT_Mu50_ = false;
    loaded_HLT_Mu50_IsoVVVL_PFHT450_ = false;
    loaded_HLT_Mu55_ = false;
    loaded_HLT_Mu7p5_L2Mu2_Jpsi_ = false;
    loaded_HLT_Mu7p5_L2Mu2_Upsilon_ = false;
    loaded_HLT_Mu7p5_Track2_Jpsi_ = false;
    loaded_HLT_Mu7p5_Track2_Upsilon_ = false;
    loaded_HLT_Mu7p5_Track3p5_Jpsi_ = false;
    loaded_HLT_Mu7p5_Track3p5_Upsilon_ = false;
    loaded_HLT_Mu7p5_Track7_Jpsi_ = false;
    loaded_HLT_Mu7p5_Track7_Upsilon_ = false;
    loaded_HLT_Mu8_ = false;
    loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_ = false;
    loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_ = false;
    loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_ = false;
    loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_ = false;
    loaded_HLT_Mu8_TrkIsoVVL_ = false;
    loaded_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_ = false;
    loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = false;
    loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = false;
    loaded_HLT_OldMu100_ = false;
    loaded_HLT_PFHT1050_ = false;
    loaded_HLT_PFHT180_ = false;
    loaded_HLT_PFHT250_ = false;
    loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_ = false;
    loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_ = false;
    loaded_HLT_PFHT350_ = false;
    loaded_HLT_PFHT350MinPFJet15_ = false;
    loaded_HLT_PFHT370_ = false;
    loaded_HLT_PFHT380_SixPFJet32_ = false;
    loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_ = false;
    loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_ = false;
    loaded_HLT_PFHT430_ = false;
    loaded_HLT_PFHT430_SixPFJet40_ = false;
    loaded_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_ = false;
    loaded_HLT_PFHT500_PFMET100_PFMHT100_IDTight_ = false;
    loaded_HLT_PFHT500_PFMET110_PFMHT110_IDTight_ = false;
    loaded_HLT_PFHT510_ = false;
    loaded_HLT_PFHT590_ = false;
    loaded_HLT_PFHT680_ = false;
    loaded_HLT_PFHT700_PFMET85_PFMHT85_IDTight_ = false;
    loaded_HLT_PFHT700_PFMET95_PFMHT95_IDTight_ = false;
    loaded_HLT_PFHT780_ = false;
    loaded_HLT_PFHT800_PFMET75_PFMHT75_IDTight_ = false;
    loaded_HLT_PFHT800_PFMET85_PFMHT85_IDTight_ = false;
    loaded_HLT_PFHT890_ = false;
    loaded_HLT_PFJet140_ = false;
    loaded_HLT_PFJet200_ = false;
    loaded_HLT_PFJet260_ = false;
    loaded_HLT_PFJet320_ = false;
    loaded_HLT_PFJet40_ = false;
    loaded_HLT_PFJet400_ = false;
    loaded_HLT_PFJet450_ = false;
    loaded_HLT_PFJet500_ = false;
    loaded_HLT_PFJet550_ = false;
    loaded_HLT_PFJet60_ = false;
    loaded_HLT_PFJet80_ = false;
    loaded_HLT_PFJetFwd140_ = false;
    loaded_HLT_PFJetFwd200_ = false;
    loaded_HLT_PFJetFwd260_ = false;
    loaded_HLT_PFJetFwd320_ = false;
    loaded_HLT_PFJetFwd40_ = false;
    loaded_HLT_PFJetFwd400_ = false;
    loaded_HLT_PFJetFwd450_ = false;
    loaded_HLT_PFJetFwd500_ = false;
    loaded_HLT_PFJetFwd60_ = false;
    loaded_HLT_PFJetFwd80_ = false;
    loaded_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_ = false;
    loaded_HLT_PFMET100_PFMHT100_IDTight_PFHT60_ = false;
    loaded_HLT_PFMET110_PFMHT110_IDTight_ = false;
    loaded_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_ = false;
    loaded_HLT_PFMET120_PFMHT120_IDTight_ = false;
    loaded_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_ = false;
    loaded_HLT_PFMET120_PFMHT120_IDTight_PFHT60_ = false;
    loaded_HLT_PFMET130_PFMHT130_IDTight_ = false;
    loaded_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_ = false;
    loaded_HLT_PFMET140_PFMHT140_IDTight_ = false;
    loaded_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_ = false;
    loaded_HLT_PFMET200_HBHECleaned_ = false;
    loaded_HLT_PFMET200_HBHE_BeamHaloCleaned_ = false;
    loaded_HLT_PFMET200_NotCleaned_ = false;
    loaded_HLT_PFMET250_HBHECleaned_ = false;
    loaded_HLT_PFMET300_HBHECleaned_ = false;
    loaded_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_ = false;
    loaded_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_ = false;
    loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_ = false;
    loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_ = false;
    loaded_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_ = false;
    loaded_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_ = false;
    loaded_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_ = false;
    loaded_HLT_PFMETTypeOne110_PFMHT110_IDTight_ = false;
    loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_ = false;
    loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_ = false;
    loaded_HLT_PFMETTypeOne130_PFMHT130_IDTight_ = false;
    loaded_HLT_PFMETTypeOne140_PFMHT140_IDTight_ = false;
    loaded_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_ = false;
    loaded_HLT_Photon120_ = false;
    loaded_HLT_Photon120_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon150_ = false;
    loaded_HLT_Photon165_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon175_ = false;
    loaded_HLT_Photon200_ = false;
    loaded_HLT_Photon20_HoverELoose_ = false;
    loaded_HLT_Photon25_ = false;
    loaded_HLT_Photon300_NoHE_ = false;
    loaded_HLT_Photon30_HoverELoose_ = false;
    loaded_HLT_Photon33_ = false;
    loaded_HLT_Photon40_HoverELoose_ = false;
    loaded_HLT_Photon50_ = false;
    loaded_HLT_Photon50_HoverELoose_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = false;
    loaded_HLT_Photon60_HoverELoose_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = false;
    loaded_HLT_Photon75_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = false;
    loaded_HLT_Photon90_ = false;
    loaded_HLT_Photon90_CaloIdL_PFHT700_ = false;
    loaded_HLT_Photon90_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Physics_ = false;
    loaded_HLT_Physics_part0_ = false;
    loaded_HLT_Physics_part1_ = false;
    loaded_HLT_Physics_part2_ = false;
    loaded_HLT_Physics_part3_ = false;
    loaded_HLT_Physics_part4_ = false;
    loaded_HLT_Physics_part5_ = false;
    loaded_HLT_Physics_part6_ = false;
    loaded_HLT_Physics_part7_ = false;
    loaded_HLT_QuadPFJet103_88_75_15_ = false;
    loaded_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_ = false;
    loaded_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_ = false;
    loaded_HLT_QuadPFJet105_88_76_15_ = false;
    loaded_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_ = false;
    loaded_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_ = false;
    loaded_HLT_QuadPFJet111_90_80_15_ = false;
    loaded_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_ = false;
    loaded_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_ = false;
    loaded_HLT_QuadPFJet98_83_71_15_ = false;
    loaded_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_ = false;
    loaded_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_ = false;
    loaded_HLT_Random_ = false;
    loaded_HLT_Rsq0p35_ = false;
    loaded_HLT_Rsq0p40_ = false;
    loaded_HLT_RsqMR300_Rsq0p09_MR200_ = false;
    loaded_HLT_RsqMR300_Rsq0p09_MR200_4jet_ = false;
    loaded_HLT_RsqMR320_Rsq0p09_MR200_ = false;
    loaded_HLT_RsqMR320_Rsq0p09_MR200_4jet_ = false;
    loaded_HLT_SingleJet30_Mu12_SinglePFJet40_ = false;
    loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_ = false;
    loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_ = false;
    loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_ = false;
    loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_ = false;
    loaded_HLT_TkMu100_ = false;
    loaded_HLT_Trimuon5_3p5_2_Upsilon_Muon_ = false;
    loaded_HLT_TripleJet110_35_35_Mjj650_PFMET110_ = false;
    loaded_HLT_TripleJet110_35_35_Mjj650_PFMET120_ = false;
    loaded_HLT_TripleJet110_35_35_Mjj650_PFMET130_ = false;
    loaded_HLT_TripleMu_10_5_5_DZ_ = false;
    loaded_HLT_TripleMu_12_10_5_ = false;
    loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_ = false;
    loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_ = false;
    loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = false;
    loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = false;
    loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = false;
    loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = false;
    loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = false;
    loaded_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_ = false;
    loaded_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_ = false;
    loaded_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_ = false;
    loaded_HLT_UncorrectedJetE30_NoBPTX_ = false;
    loaded_HLT_UncorrectedJetE30_NoBPTX3BX_ = false;
    loaded_HLT_UncorrectedJetE60_NoBPTX3BX_ = false;
    loaded_HLT_UncorrectedJetE70_NoBPTX3BX_ = false;
    loaded_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_ = false;
    loaded_HLT_ZeroBias_ = false;
    loaded_HLT_ZeroBias_FirstBXAfterTrain_ = false;
    loaded_HLT_ZeroBias_FirstCollisionAfterAbortGap_ = false;
    loaded_HLT_ZeroBias_FirstCollisionInTrain_ = false;
    loaded_HLT_ZeroBias_IsolatedBunches_ = false;
    loaded_HLT_ZeroBias_LastCollisionInTrain_ = false;
    loaded_HLT_ZeroBias_part0_ = false;
    loaded_HLT_ZeroBias_part1_ = false;
    loaded_HLT_ZeroBias_part2_ = false;
    loaded_HLT_ZeroBias_part3_ = false;
    loaded_HLT_ZeroBias_part4_ = false;
    loaded_HLT_ZeroBias_part5_ = false;
    loaded_HLT_ZeroBias_part6_ = false;
    loaded_HLT_ZeroBias_part7_ = false;
    loaded_HLTriggerFinalPath_ = false;
    loaded_HLTriggerFirstPath_ = false;
    loaded_IsoTrack_dxy_ = false;
    loaded_IsoTrack_dz_ = false;
    loaded_IsoTrack_eta_ = false;
    loaded_IsoTrack_isHighPurityTrack_ = false;
    loaded_IsoTrack_isPFcand_ = false;
    loaded_IsoTrack_miniPFRelIso_all_ = false;
    loaded_IsoTrack_miniPFRelIso_chg_ = false;
    loaded_IsoTrack_pdgId_ = false;
    loaded_IsoTrack_pfRelIso03_all_ = false;
    loaded_IsoTrack_pfRelIso03_chg_ = false;
    loaded_IsoTrack_phi_ = false;
    loaded_IsoTrack_pt_ = false;
    loaded_Jet_area_ = false;
    loaded_Jet_bReg_ = false;
    loaded_Jet_btagCMVA_ = false;
    loaded_Jet_btagCSVV2_ = false;
    loaded_Jet_btagDeepB_ = false;
    loaded_Jet_btagDeepC_ = false;
    loaded_Jet_btagDeepFlavB_ = false;
    loaded_Jet_chEmEF_ = false;
    loaded_Jet_chHEF_ = false;
    loaded_Jet_cleanmask_ = false;
    loaded_Jet_electronIdx1_ = false;
    loaded_Jet_electronIdx2_ = false;
    loaded_Jet_eta_ = false;
    loaded_Jet_genJetIdx_ = false;
    loaded_Jet_hadronFlavour_ = false;
    loaded_Jet_jetId_ = false;
    loaded_Jet_mass_ = false;
    loaded_Jet_muonIdx1_ = false;
    loaded_Jet_muonIdx2_ = false;
    loaded_Jet_nConstituents_ = false;
    loaded_Jet_nElectrons_ = false;
    loaded_Jet_nMuons_ = false;
    loaded_Jet_neEmEF_ = false;
    loaded_Jet_neHEF_ = false;
    loaded_Jet_p4_ = false;
    loaded_Jet_partonFlavour_ = false;
    loaded_Jet_phi_ = false;
    loaded_Jet_pt_ = false;
    loaded_Jet_puId_ = false;
    loaded_Jet_qgl_ = false;
    loaded_Jet_rawFactor_ = false;
    loaded_L1simulation_step_ = false;
    loaded_LHEPart_eta_ = false;
    loaded_LHEPart_mass_ = false;
    loaded_LHEPart_p4_ = false;
    loaded_LHEPart_pdgId_ = false;
    loaded_LHEPart_phi_ = false;
    loaded_LHEPart_pt_ = false;
    loaded_LHEPdfWeight_ = false;
    loaded_LHEScaleWeight_ = false;
    loaded_LHEWeight_originalXWGTUP_ = false;
    loaded_LHE_HT_ = false;
    loaded_LHE_HTIncoming_ = false;
    loaded_LHE_Nb_ = false;
    loaded_LHE_Nc_ = false;
    loaded_LHE_Nglu_ = false;
    loaded_LHE_Njets_ = false;
    loaded_LHE_NpLO_ = false;
    loaded_LHE_NpNLO_ = false;
    loaded_LHE_Nuds_ = false;
    loaded_LHE_Vpt_ = false;
    loaded_MET_MetUnclustEnUpDeltaX_ = false;
    loaded_MET_MetUnclustEnUpDeltaY_ = false;
    loaded_MET_covXX_ = false;
    loaded_MET_covXY_ = false;
    loaded_MET_covYY_ = false;
    loaded_MET_fiducialGenPhi_ = false;
    loaded_MET_fiducialGenPt_ = false;
    loaded_MET_phi_ = false;
    loaded_MET_pt_ = false;
    loaded_MET_significance_ = false;
    loaded_MET_sumEt_ = false;
    loaded_Muon_charge_ = false;
    loaded_Muon_cleanmask_ = false;
    loaded_Muon_dxy_ = false;
    loaded_Muon_dxyErr_ = false;
    loaded_Muon_dz_ = false;
    loaded_Muon_dzErr_ = false;
    loaded_Muon_eta_ = false;
    loaded_Muon_genPartFlav_ = false;
    loaded_Muon_genPartIdx_ = false;
    loaded_Muon_highPtId_ = false;
    loaded_Muon_ip3d_ = false;
    loaded_Muon_isPFcand_ = false;
    loaded_Muon_jetIdx_ = false;
    loaded_Muon_mass_ = false;
    loaded_Muon_mediumId_ = false;
    loaded_Muon_miniPFRelIso_all_ = false;
    loaded_Muon_miniPFRelIso_chg_ = false;
    loaded_Muon_mvaTTH_ = false;
    loaded_Muon_nStations_ = false;
    loaded_Muon_nTrackerLayers_ = false;
    loaded_Muon_p4_ = false;
    loaded_Muon_pdgId_ = false;
    loaded_Muon_pfRelIso03_all_ = false;
    loaded_Muon_pfRelIso03_chg_ = false;
    loaded_Muon_pfRelIso04_all_ = false;
    loaded_Muon_phi_ = false;
    loaded_Muon_pt_ = false;
    loaded_Muon_ptErr_ = false;
    loaded_Muon_segmentComp_ = false;
    loaded_Muon_sip3d_ = false;
    loaded_Muon_softId_ = false;
    loaded_Muon_tightCharge_ = false;
    loaded_Muon_tightId_ = false;
    loaded_OtherPV_z_ = false;
    loaded_PV_chi2_ = false;
    loaded_PV_ndof_ = false;
    loaded_PV_npvs_ = false;
    loaded_PV_npvsGood_ = false;
    loaded_PV_score_ = false;
    loaded_PV_x_ = false;
    loaded_PV_y_ = false;
    loaded_PV_z_ = false;
    loaded_Photon_charge_ = false;
    loaded_Photon_cleanmask_ = false;
    loaded_Photon_cutBasedBitmap_ = false;
    loaded_Photon_eCorr_ = false;
    loaded_Photon_electronIdx_ = false;
    loaded_Photon_electronVeto_ = false;
    loaded_Photon_energyErr_ = false;
    loaded_Photon_eta_ = false;
    loaded_Photon_genPartFlav_ = false;
    loaded_Photon_genPartIdx_ = false;
    loaded_Photon_hoe_ = false;
    loaded_Photon_isScEtaEB_ = false;
    loaded_Photon_isScEtaEE_ = false;
    loaded_Photon_jetIdx_ = false;
    loaded_Photon_mass_ = false;
    loaded_Photon_mvaID_ = false;
    loaded_Photon_mvaID_WP80_ = false;
    loaded_Photon_mvaID_WP90_ = false;
    loaded_Photon_p4_ = false;
    loaded_Photon_pdgId_ = false;
    loaded_Photon_pfRelIso03_all_ = false;
    loaded_Photon_pfRelIso03_chg_ = false;
    loaded_Photon_phi_ = false;
    loaded_Photon_pixelSeed_ = false;
    loaded_Photon_pt_ = false;
    loaded_Photon_r9_ = false;
    loaded_Photon_sieie_ = false;
    loaded_Photon_vidNestedWPBitmap_ = false;
    loaded_Pileup_nPU_ = false;
    loaded_Pileup_nTrueInt_ = false;
    loaded_Pileup_sumEOOT_ = false;
    loaded_Pileup_sumLOOT_ = false;
    loaded_PuppiMET_phi_ = false;
    loaded_PuppiMET_pt_ = false;
    loaded_PuppiMET_sumEt_ = false;
    loaded_RawMET_phi_ = false;
    loaded_RawMET_pt_ = false;
    loaded_RawMET_sumEt_ = false;
    loaded_SV_chi2_ = false;
    loaded_SV_dlen_ = false;
    loaded_SV_dlenSig_ = false;
    loaded_SV_eta_ = false;
    loaded_SV_mass_ = false;
    loaded_SV_ndof_ = false;
    loaded_SV_p4_ = false;
    loaded_SV_pAngle_ = false;
    loaded_SV_phi_ = false;
    loaded_SV_pt_ = false;
    loaded_SV_x_ = false;
    loaded_SV_y_ = false;
    loaded_SV_z_ = false;
    loaded_SoftActivityJetHT_ = false;
    loaded_SoftActivityJetHT10_ = false;
    loaded_SoftActivityJetHT2_ = false;
    loaded_SoftActivityJetHT5_ = false;
    loaded_SoftActivityJetNjets10_ = false;
    loaded_SoftActivityJetNjets2_ = false;
    loaded_SoftActivityJetNjets5_ = false;
    loaded_SoftActivityJet_eta_ = false;
    loaded_SoftActivityJet_phi_ = false;
    loaded_SoftActivityJet_pt_ = false;
    loaded_SubGenJetAK8_eta_ = false;
    loaded_SubGenJetAK8_mass_ = false;
    loaded_SubGenJetAK8_p4_ = false;
    loaded_SubGenJetAK8_phi_ = false;
    loaded_SubGenJetAK8_pt_ = false;
    loaded_SubJet_btagCMVA_ = false;
    loaded_SubJet_btagCSVV2_ = false;
    loaded_SubJet_btagDeepB_ = false;
    loaded_SubJet_eta_ = false;
    loaded_SubJet_mass_ = false;
    loaded_SubJet_n2b1_ = false;
    loaded_SubJet_n3b1_ = false;
    loaded_SubJet_p4_ = false;
    loaded_SubJet_phi_ = false;
    loaded_SubJet_pt_ = false;
    loaded_SubJet_tau1_ = false;
    loaded_SubJet_tau2_ = false;
    loaded_SubJet_tau3_ = false;
    loaded_SubJet_tau4_ = false;
    loaded_Tau_charge_ = false;
    loaded_Tau_chargedIso_ = false;
    loaded_Tau_cleanmask_ = false;
    loaded_Tau_decayMode_ = false;
    loaded_Tau_dxy_ = false;
    loaded_Tau_dz_ = false;
    loaded_Tau_eta_ = false;
    loaded_Tau_genPartFlav_ = false;
    loaded_Tau_genPartIdx_ = false;
    loaded_Tau_idAntiEle_ = false;
    loaded_Tau_idAntiMu_ = false;
    loaded_Tau_idDecayMode_ = false;
    loaded_Tau_idDecayModeNewDMs_ = false;
    loaded_Tau_idMVAnewDM2017v2_ = false;
    loaded_Tau_idMVAoldDM_ = false;
    loaded_Tau_idMVAoldDM2017v1_ = false;
    loaded_Tau_idMVAoldDM2017v2_ = false;
    loaded_Tau_idMVAoldDMdR032017v2_ = false;
    loaded_Tau_jetIdx_ = false;
    loaded_Tau_leadTkDeltaEta_ = false;
    loaded_Tau_leadTkDeltaPhi_ = false;
    loaded_Tau_leadTkPtOverTauPt_ = false;
    loaded_Tau_mass_ = false;
    loaded_Tau_neutralIso_ = false;
    loaded_Tau_p4_ = false;
    loaded_Tau_phi_ = false;
    loaded_Tau_photonsOutsideSignalCone_ = false;
    loaded_Tau_pt_ = false;
    loaded_Tau_puCorr_ = false;
    loaded_Tau_rawAntiEle_ = false;
    loaded_Tau_rawAntiEleCat_ = false;
    loaded_Tau_rawIso_ = false;
    loaded_Tau_rawIsodR03_ = false;
    loaded_Tau_rawMVAnewDM2017v2_ = false;
    loaded_Tau_rawMVAoldDM_ = false;
    loaded_Tau_rawMVAoldDM2017v1_ = false;
    loaded_Tau_rawMVAoldDM2017v2_ = false;
    loaded_Tau_rawMVAoldDMdR032017v2_ = false;
    loaded_TkMET_phi_ = false;
    loaded_TkMET_pt_ = false;
    loaded_TkMET_sumEt_ = false;
    loaded_TrigObj_eta_ = false;
    loaded_TrigObj_filterBits_ = false;
    loaded_TrigObj_id_ = false;
    loaded_TrigObj_l1charge_ = false;
    loaded_TrigObj_l1iso_ = false;
    loaded_TrigObj_l1pt_ = false;
    loaded_TrigObj_l1pt_2_ = false;
    loaded_TrigObj_l2pt_ = false;
    loaded_TrigObj_phi_ = false;
    loaded_TrigObj_pt_ = false;
    loaded_event_ = false;
    loaded_fixedGridRhoFastjetAll_ = false;
    loaded_fixedGridRhoFastjetCentralCalo_ = false;
    loaded_fixedGridRhoFastjetCentralNeutral_ = false;
    loaded_genTtbarId_ = false;
    loaded_genWeight_ = false;
    loaded_luminosityBlock_ = false;
    loaded_nElectron_ = false;
    loaded_nFatJet_ = false;
    loaded_nGenDressedLepton_ = false;
    loaded_nGenJet_ = false;
    loaded_nGenJetAK8_ = false;
    loaded_nGenPart_ = false;
    loaded_nGenVisTau_ = false;
    loaded_nIsoTrack_ = false;
    loaded_nJet_ = false;
    loaded_nLHEPart_ = false;
    loaded_nLHEPdfWeight_ = false;
    loaded_nLHEScaleWeight_ = false;
    loaded_nMuon_ = false;
    loaded_nOtherPV_ = false;
    loaded_nPhoton_ = false;
    loaded_nSV_ = false;
    loaded_nSoftActivityJet_ = false;
    loaded_nSubGenJetAK8_ = false;
    loaded_nSubJet_ = false;
    loaded_nTau_ = false;
    loaded_nTrigObj_ = false;
    loaded_run_ = false;
}

const float &Nano::CaloMET_phi() {
    if (!loaded_CaloMET_phi_) {
        if (!b_CaloMET_phi_) throw std::runtime_error("CaloMET_phi branch doesn't exist");
        b_CaloMET_phi_->GetEntry(index);
        loaded_CaloMET_phi_ = true;
    }
    return CaloMET_phi_;
}
const float &Nano::CaloMET_pt() {
    if (!loaded_CaloMET_pt_) {
        if (!b_CaloMET_pt_) throw std::runtime_error("CaloMET_pt branch doesn't exist");
        b_CaloMET_pt_->GetEntry(index);
        loaded_CaloMET_pt_ = true;
    }
    return CaloMET_pt_;
}
const float &Nano::CaloMET_sumEt() {
    if (!loaded_CaloMET_sumEt_) {
        if (!b_CaloMET_sumEt_) throw std::runtime_error("CaloMET_sumEt branch doesn't exist");
        b_CaloMET_sumEt_->GetEntry(index);
        loaded_CaloMET_sumEt_ = true;
    }
    return CaloMET_sumEt_;
}
const vector<int> &Nano::Electron_charge() {
    if (!loaded_Electron_charge_) {
        if (!b_Electron_charge_) throw std::runtime_error("Electron_charge branch doesn't exist");
        int bytes = b_Electron_charge_->GetEntry(index);
        v_Electron_charge_ = vector<int>(Electron_charge_,Electron_charge_+bytes/sizeof(Electron_charge_[0]));
        loaded_Electron_charge_ = true;
    }
    return v_Electron_charge_;
}
const vector<UChar_t> &Nano::Electron_cleanmask() {
    if (!loaded_Electron_cleanmask_) {
        if (!b_Electron_cleanmask_) throw std::runtime_error("Electron_cleanmask branch doesn't exist");
        int bytes = b_Electron_cleanmask_->GetEntry(index);
        v_Electron_cleanmask_ = vector<UChar_t>(Electron_cleanmask_,Electron_cleanmask_+bytes/sizeof(Electron_cleanmask_[0]));
        loaded_Electron_cleanmask_ = true;
    }
    return v_Electron_cleanmask_;
}
const vector<bool> &Nano::Electron_convVeto() {
    if (!loaded_Electron_convVeto_) {
        if (!b_Electron_convVeto_) throw std::runtime_error("Electron_convVeto branch doesn't exist");
        int bytes = b_Electron_convVeto_->GetEntry(index);
        v_Electron_convVeto_ = vector<bool>(Electron_convVeto_,Electron_convVeto_+bytes/sizeof(Electron_convVeto_[0]));
        loaded_Electron_convVeto_ = true;
    }
    return v_Electron_convVeto_;
}
const vector<int> &Nano::Electron_cutBased() {
    if (!loaded_Electron_cutBased_) {
        if (!b_Electron_cutBased_) throw std::runtime_error("Electron_cutBased branch doesn't exist");
        int bytes = b_Electron_cutBased_->GetEntry(index);
        v_Electron_cutBased_ = vector<int>(Electron_cutBased_,Electron_cutBased_+bytes/sizeof(Electron_cutBased_[0]));
        loaded_Electron_cutBased_ = true;
    }
    return v_Electron_cutBased_;
}
const vector<bool> &Nano::Electron_cutBased_HEEP() {
    if (!loaded_Electron_cutBased_HEEP_) {
        if (!b_Electron_cutBased_HEEP_) throw std::runtime_error("Electron_cutBased_HEEP branch doesn't exist");
        int bytes = b_Electron_cutBased_HEEP_->GetEntry(index);
        v_Electron_cutBased_HEEP_ = vector<bool>(Electron_cutBased_HEEP_,Electron_cutBased_HEEP_+bytes/sizeof(Electron_cutBased_HEEP_[0]));
        loaded_Electron_cutBased_HEEP_ = true;
    }
    return v_Electron_cutBased_HEEP_;
}
const vector<float> &Nano::Electron_deltaEtaSC() {
    if (!loaded_Electron_deltaEtaSC_) {
        if (!b_Electron_deltaEtaSC_) throw std::runtime_error("Electron_deltaEtaSC branch doesn't exist");
        int bytes = b_Electron_deltaEtaSC_->GetEntry(index);
        v_Electron_deltaEtaSC_ = vector<float>(Electron_deltaEtaSC_,Electron_deltaEtaSC_+bytes/sizeof(Electron_deltaEtaSC_[0]));
        loaded_Electron_deltaEtaSC_ = true;
    }
    return v_Electron_deltaEtaSC_;
}
const vector<float> &Nano::Electron_dr03EcalRecHitSumEt() {
    if (!loaded_Electron_dr03EcalRecHitSumEt_) {
        if (!b_Electron_dr03EcalRecHitSumEt_) throw std::runtime_error("Electron_dr03EcalRecHitSumEt branch doesn't exist");
        int bytes = b_Electron_dr03EcalRecHitSumEt_->GetEntry(index);
        v_Electron_dr03EcalRecHitSumEt_ = vector<float>(Electron_dr03EcalRecHitSumEt_,Electron_dr03EcalRecHitSumEt_+bytes/sizeof(Electron_dr03EcalRecHitSumEt_[0]));
        loaded_Electron_dr03EcalRecHitSumEt_ = true;
    }
    return v_Electron_dr03EcalRecHitSumEt_;
}
const vector<float> &Nano::Electron_dr03HcalDepth1TowerSumEt() {
    if (!loaded_Electron_dr03HcalDepth1TowerSumEt_) {
        if (!b_Electron_dr03HcalDepth1TowerSumEt_) throw std::runtime_error("Electron_dr03HcalDepth1TowerSumEt branch doesn't exist");
        int bytes = b_Electron_dr03HcalDepth1TowerSumEt_->GetEntry(index);
        v_Electron_dr03HcalDepth1TowerSumEt_ = vector<float>(Electron_dr03HcalDepth1TowerSumEt_,Electron_dr03HcalDepth1TowerSumEt_+bytes/sizeof(Electron_dr03HcalDepth1TowerSumEt_[0]));
        loaded_Electron_dr03HcalDepth1TowerSumEt_ = true;
    }
    return v_Electron_dr03HcalDepth1TowerSumEt_;
}
const vector<float> &Nano::Electron_dr03TkSumPt() {
    if (!loaded_Electron_dr03TkSumPt_) {
        if (!b_Electron_dr03TkSumPt_) throw std::runtime_error("Electron_dr03TkSumPt branch doesn't exist");
        int bytes = b_Electron_dr03TkSumPt_->GetEntry(index);
        v_Electron_dr03TkSumPt_ = vector<float>(Electron_dr03TkSumPt_,Electron_dr03TkSumPt_+bytes/sizeof(Electron_dr03TkSumPt_[0]));
        loaded_Electron_dr03TkSumPt_ = true;
    }
    return v_Electron_dr03TkSumPt_;
}
const vector<float> &Nano::Electron_dxy() {
    if (!loaded_Electron_dxy_) {
        if (!b_Electron_dxy_) throw std::runtime_error("Electron_dxy branch doesn't exist");
        int bytes = b_Electron_dxy_->GetEntry(index);
        v_Electron_dxy_ = vector<float>(Electron_dxy_,Electron_dxy_+bytes/sizeof(Electron_dxy_[0]));
        loaded_Electron_dxy_ = true;
    }
    return v_Electron_dxy_;
}
const vector<float> &Nano::Electron_dxyErr() {
    if (!loaded_Electron_dxyErr_) {
        if (!b_Electron_dxyErr_) throw std::runtime_error("Electron_dxyErr branch doesn't exist");
        int bytes = b_Electron_dxyErr_->GetEntry(index);
        v_Electron_dxyErr_ = vector<float>(Electron_dxyErr_,Electron_dxyErr_+bytes/sizeof(Electron_dxyErr_[0]));
        loaded_Electron_dxyErr_ = true;
    }
    return v_Electron_dxyErr_;
}
const vector<float> &Nano::Electron_dz() {
    if (!loaded_Electron_dz_) {
        if (!b_Electron_dz_) throw std::runtime_error("Electron_dz branch doesn't exist");
        int bytes = b_Electron_dz_->GetEntry(index);
        v_Electron_dz_ = vector<float>(Electron_dz_,Electron_dz_+bytes/sizeof(Electron_dz_[0]));
        loaded_Electron_dz_ = true;
    }
    return v_Electron_dz_;
}
const vector<float> &Nano::Electron_dzErr() {
    if (!loaded_Electron_dzErr_) {
        if (!b_Electron_dzErr_) throw std::runtime_error("Electron_dzErr branch doesn't exist");
        int bytes = b_Electron_dzErr_->GetEntry(index);
        v_Electron_dzErr_ = vector<float>(Electron_dzErr_,Electron_dzErr_+bytes/sizeof(Electron_dzErr_[0]));
        loaded_Electron_dzErr_ = true;
    }
    return v_Electron_dzErr_;
}
const vector<float> &Nano::Electron_eCorr() {
    if (!loaded_Electron_eCorr_) {
        if (!b_Electron_eCorr_) throw std::runtime_error("Electron_eCorr branch doesn't exist");
        int bytes = b_Electron_eCorr_->GetEntry(index);
        v_Electron_eCorr_ = vector<float>(Electron_eCorr_,Electron_eCorr_+bytes/sizeof(Electron_eCorr_[0]));
        loaded_Electron_eCorr_ = true;
    }
    return v_Electron_eCorr_;
}
const vector<float> &Nano::Electron_eInvMinusPInv() {
    if (!loaded_Electron_eInvMinusPInv_) {
        if (!b_Electron_eInvMinusPInv_) throw std::runtime_error("Electron_eInvMinusPInv branch doesn't exist");
        int bytes = b_Electron_eInvMinusPInv_->GetEntry(index);
        v_Electron_eInvMinusPInv_ = vector<float>(Electron_eInvMinusPInv_,Electron_eInvMinusPInv_+bytes/sizeof(Electron_eInvMinusPInv_[0]));
        loaded_Electron_eInvMinusPInv_ = true;
    }
    return v_Electron_eInvMinusPInv_;
}
const vector<float> &Nano::Electron_energyErr() {
    if (!loaded_Electron_energyErr_) {
        if (!b_Electron_energyErr_) throw std::runtime_error("Electron_energyErr branch doesn't exist");
        int bytes = b_Electron_energyErr_->GetEntry(index);
        v_Electron_energyErr_ = vector<float>(Electron_energyErr_,Electron_energyErr_+bytes/sizeof(Electron_energyErr_[0]));
        loaded_Electron_energyErr_ = true;
    }
    return v_Electron_energyErr_;
}
const vector<float> &Nano::Electron_eta() {
    if (!loaded_Electron_eta_) {
        if (!b_Electron_eta_) throw std::runtime_error("Electron_eta branch doesn't exist");
        int bytes = b_Electron_eta_->GetEntry(index);
        v_Electron_eta_ = vector<float>(Electron_eta_,Electron_eta_+bytes/sizeof(Electron_eta_[0]));
        loaded_Electron_eta_ = true;
    }
    return v_Electron_eta_;
}
const vector<UChar_t> &Nano::Electron_genPartFlav() {
    if (!loaded_Electron_genPartFlav_) {
        if (!b_Electron_genPartFlav_) throw std::runtime_error("Electron_genPartFlav branch doesn't exist");
        int bytes = b_Electron_genPartFlav_->GetEntry(index);
        v_Electron_genPartFlav_ = vector<UChar_t>(Electron_genPartFlav_,Electron_genPartFlav_+bytes/sizeof(Electron_genPartFlav_[0]));
        loaded_Electron_genPartFlav_ = true;
    }
    return v_Electron_genPartFlav_;
}
const vector<int> &Nano::Electron_genPartIdx() {
    if (!loaded_Electron_genPartIdx_) {
        if (!b_Electron_genPartIdx_) throw std::runtime_error("Electron_genPartIdx branch doesn't exist");
        int bytes = b_Electron_genPartIdx_->GetEntry(index);
        v_Electron_genPartIdx_ = vector<int>(Electron_genPartIdx_,Electron_genPartIdx_+bytes/sizeof(Electron_genPartIdx_[0]));
        loaded_Electron_genPartIdx_ = true;
    }
    return v_Electron_genPartIdx_;
}
const vector<float> &Nano::Electron_hoe() {
    if (!loaded_Electron_hoe_) {
        if (!b_Electron_hoe_) throw std::runtime_error("Electron_hoe branch doesn't exist");
        int bytes = b_Electron_hoe_->GetEntry(index);
        v_Electron_hoe_ = vector<float>(Electron_hoe_,Electron_hoe_+bytes/sizeof(Electron_hoe_[0]));
        loaded_Electron_hoe_ = true;
    }
    return v_Electron_hoe_;
}
const vector<float> &Nano::Electron_ip3d() {
    if (!loaded_Electron_ip3d_) {
        if (!b_Electron_ip3d_) throw std::runtime_error("Electron_ip3d branch doesn't exist");
        int bytes = b_Electron_ip3d_->GetEntry(index);
        v_Electron_ip3d_ = vector<float>(Electron_ip3d_,Electron_ip3d_+bytes/sizeof(Electron_ip3d_[0]));
        loaded_Electron_ip3d_ = true;
    }
    return v_Electron_ip3d_;
}
const vector<bool> &Nano::Electron_isPFcand() {
    if (!loaded_Electron_isPFcand_) {
        if (!b_Electron_isPFcand_) throw std::runtime_error("Electron_isPFcand branch doesn't exist");
        int bytes = b_Electron_isPFcand_->GetEntry(index);
        v_Electron_isPFcand_ = vector<bool>(Electron_isPFcand_,Electron_isPFcand_+bytes/sizeof(Electron_isPFcand_[0]));
        loaded_Electron_isPFcand_ = true;
    }
    return v_Electron_isPFcand_;
}
const vector<int> &Nano::Electron_jetIdx() {
    if (!loaded_Electron_jetIdx_) {
        if (!b_Electron_jetIdx_) throw std::runtime_error("Electron_jetIdx branch doesn't exist");
        int bytes = b_Electron_jetIdx_->GetEntry(index);
        v_Electron_jetIdx_ = vector<int>(Electron_jetIdx_,Electron_jetIdx_+bytes/sizeof(Electron_jetIdx_[0]));
        loaded_Electron_jetIdx_ = true;
    }
    return v_Electron_jetIdx_;
}
const vector<UChar_t> &Nano::Electron_lostHits() {
    if (!loaded_Electron_lostHits_) {
        if (!b_Electron_lostHits_) throw std::runtime_error("Electron_lostHits branch doesn't exist");
        int bytes = b_Electron_lostHits_->GetEntry(index);
        v_Electron_lostHits_ = vector<UChar_t>(Electron_lostHits_,Electron_lostHits_+bytes/sizeof(Electron_lostHits_[0]));
        loaded_Electron_lostHits_ = true;
    }
    return v_Electron_lostHits_;
}
const vector<float> &Nano::Electron_mass() {
    if (!loaded_Electron_mass_) {
        if (!b_Electron_mass_) throw std::runtime_error("Electron_mass branch doesn't exist");
        int bytes = b_Electron_mass_->GetEntry(index);
        v_Electron_mass_ = vector<float>(Electron_mass_,Electron_mass_+bytes/sizeof(Electron_mass_[0]));
        loaded_Electron_mass_ = true;
    }
    return v_Electron_mass_;
}
const vector<float> &Nano::Electron_miniPFRelIso_all() {
    if (!loaded_Electron_miniPFRelIso_all_) {
        if (!b_Electron_miniPFRelIso_all_) throw std::runtime_error("Electron_miniPFRelIso_all branch doesn't exist");
        int bytes = b_Electron_miniPFRelIso_all_->GetEntry(index);
        v_Electron_miniPFRelIso_all_ = vector<float>(Electron_miniPFRelIso_all_,Electron_miniPFRelIso_all_+bytes/sizeof(Electron_miniPFRelIso_all_[0]));
        loaded_Electron_miniPFRelIso_all_ = true;
    }
    return v_Electron_miniPFRelIso_all_;
}
const vector<float> &Nano::Electron_miniPFRelIso_chg() {
    if (!loaded_Electron_miniPFRelIso_chg_) {
        if (!b_Electron_miniPFRelIso_chg_) throw std::runtime_error("Electron_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_Electron_miniPFRelIso_chg_->GetEntry(index);
        v_Electron_miniPFRelIso_chg_ = vector<float>(Electron_miniPFRelIso_chg_,Electron_miniPFRelIso_chg_+bytes/sizeof(Electron_miniPFRelIso_chg_[0]));
        loaded_Electron_miniPFRelIso_chg_ = true;
    }
    return v_Electron_miniPFRelIso_chg_;
}
const vector<float> &Nano::Electron_mvaFall17Iso() {
    if (!loaded_Electron_mvaFall17Iso_) {
        if (!b_Electron_mvaFall17Iso_) throw std::runtime_error("Electron_mvaFall17Iso branch doesn't exist");
        int bytes = b_Electron_mvaFall17Iso_->GetEntry(index);
        v_Electron_mvaFall17Iso_ = vector<float>(Electron_mvaFall17Iso_,Electron_mvaFall17Iso_+bytes/sizeof(Electron_mvaFall17Iso_[0]));
        loaded_Electron_mvaFall17Iso_ = true;
    }
    return v_Electron_mvaFall17Iso_;
}
const vector<bool> &Nano::Electron_mvaFall17Iso_WP80() {
    if (!loaded_Electron_mvaFall17Iso_WP80_) {
        if (!b_Electron_mvaFall17Iso_WP80_) throw std::runtime_error("Electron_mvaFall17Iso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17Iso_WP80_->GetEntry(index);
        v_Electron_mvaFall17Iso_WP80_ = vector<bool>(Electron_mvaFall17Iso_WP80_,Electron_mvaFall17Iso_WP80_+bytes/sizeof(Electron_mvaFall17Iso_WP80_[0]));
        loaded_Electron_mvaFall17Iso_WP80_ = true;
    }
    return v_Electron_mvaFall17Iso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17Iso_WP90() {
    if (!loaded_Electron_mvaFall17Iso_WP90_) {
        if (!b_Electron_mvaFall17Iso_WP90_) throw std::runtime_error("Electron_mvaFall17Iso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17Iso_WP90_->GetEntry(index);
        v_Electron_mvaFall17Iso_WP90_ = vector<bool>(Electron_mvaFall17Iso_WP90_,Electron_mvaFall17Iso_WP90_+bytes/sizeof(Electron_mvaFall17Iso_WP90_[0]));
        loaded_Electron_mvaFall17Iso_WP90_ = true;
    }
    return v_Electron_mvaFall17Iso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17Iso_WPL() {
    if (!loaded_Electron_mvaFall17Iso_WPL_) {
        if (!b_Electron_mvaFall17Iso_WPL_) throw std::runtime_error("Electron_mvaFall17Iso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17Iso_WPL_->GetEntry(index);
        v_Electron_mvaFall17Iso_WPL_ = vector<bool>(Electron_mvaFall17Iso_WPL_,Electron_mvaFall17Iso_WPL_+bytes/sizeof(Electron_mvaFall17Iso_WPL_[0]));
        loaded_Electron_mvaFall17Iso_WPL_ = true;
    }
    return v_Electron_mvaFall17Iso_WPL_;
}
const vector<float> &Nano::Electron_mvaFall17noIso() {
    if (!loaded_Electron_mvaFall17noIso_) {
        if (!b_Electron_mvaFall17noIso_) throw std::runtime_error("Electron_mvaFall17noIso branch doesn't exist");
        int bytes = b_Electron_mvaFall17noIso_->GetEntry(index);
        v_Electron_mvaFall17noIso_ = vector<float>(Electron_mvaFall17noIso_,Electron_mvaFall17noIso_+bytes/sizeof(Electron_mvaFall17noIso_[0]));
        loaded_Electron_mvaFall17noIso_ = true;
    }
    return v_Electron_mvaFall17noIso_;
}
const vector<bool> &Nano::Electron_mvaFall17noIso_WP80() {
    if (!loaded_Electron_mvaFall17noIso_WP80_) {
        if (!b_Electron_mvaFall17noIso_WP80_) throw std::runtime_error("Electron_mvaFall17noIso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17noIso_WP80_->GetEntry(index);
        v_Electron_mvaFall17noIso_WP80_ = vector<bool>(Electron_mvaFall17noIso_WP80_,Electron_mvaFall17noIso_WP80_+bytes/sizeof(Electron_mvaFall17noIso_WP80_[0]));
        loaded_Electron_mvaFall17noIso_WP80_ = true;
    }
    return v_Electron_mvaFall17noIso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17noIso_WP90() {
    if (!loaded_Electron_mvaFall17noIso_WP90_) {
        if (!b_Electron_mvaFall17noIso_WP90_) throw std::runtime_error("Electron_mvaFall17noIso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17noIso_WP90_->GetEntry(index);
        v_Electron_mvaFall17noIso_WP90_ = vector<bool>(Electron_mvaFall17noIso_WP90_,Electron_mvaFall17noIso_WP90_+bytes/sizeof(Electron_mvaFall17noIso_WP90_[0]));
        loaded_Electron_mvaFall17noIso_WP90_ = true;
    }
    return v_Electron_mvaFall17noIso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17noIso_WPL() {
    if (!loaded_Electron_mvaFall17noIso_WPL_) {
        if (!b_Electron_mvaFall17noIso_WPL_) throw std::runtime_error("Electron_mvaFall17noIso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17noIso_WPL_->GetEntry(index);
        v_Electron_mvaFall17noIso_WPL_ = vector<bool>(Electron_mvaFall17noIso_WPL_,Electron_mvaFall17noIso_WPL_+bytes/sizeof(Electron_mvaFall17noIso_WPL_[0]));
        loaded_Electron_mvaFall17noIso_WPL_ = true;
    }
    return v_Electron_mvaFall17noIso_WPL_;
}
const vector<float> &Nano::Electron_mvaTTH() {
    if (!loaded_Electron_mvaTTH_) {
        if (!b_Electron_mvaTTH_) throw std::runtime_error("Electron_mvaTTH branch doesn't exist");
        int bytes = b_Electron_mvaTTH_->GetEntry(index);
        v_Electron_mvaTTH_ = vector<float>(Electron_mvaTTH_,Electron_mvaTTH_+bytes/sizeof(Electron_mvaTTH_[0]));
        loaded_Electron_mvaTTH_ = true;
    }
    return v_Electron_mvaTTH_;
}
const vector<LorentzVector> &Nano::Electron_p4() {
    if (!loaded_Electron_p4_) {
        v_Electron_p4_.clear();
        vector<float> pts = Nano::Electron_pt();
        vector<float> etas = Nano::Electron_eta();
        vector<float> phis = Nano::Electron_phi();
        vector<float> masses = Nano::Electron_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Electron_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Electron_p4_ = true;
    }
    return v_Electron_p4_;
}
const vector<int> &Nano::Electron_pdgId() {
    if (!loaded_Electron_pdgId_) {
        if (!b_Electron_pdgId_) throw std::runtime_error("Electron_pdgId branch doesn't exist");
        int bytes = b_Electron_pdgId_->GetEntry(index);
        v_Electron_pdgId_ = vector<int>(Electron_pdgId_,Electron_pdgId_+bytes/sizeof(Electron_pdgId_[0]));
        loaded_Electron_pdgId_ = true;
    }
    return v_Electron_pdgId_;
}
const vector<float> &Nano::Electron_pfRelIso03_all() {
    if (!loaded_Electron_pfRelIso03_all_) {
        if (!b_Electron_pfRelIso03_all_) throw std::runtime_error("Electron_pfRelIso03_all branch doesn't exist");
        int bytes = b_Electron_pfRelIso03_all_->GetEntry(index);
        v_Electron_pfRelIso03_all_ = vector<float>(Electron_pfRelIso03_all_,Electron_pfRelIso03_all_+bytes/sizeof(Electron_pfRelIso03_all_[0]));
        loaded_Electron_pfRelIso03_all_ = true;
    }
    return v_Electron_pfRelIso03_all_;
}
const vector<float> &Nano::Electron_pfRelIso03_chg() {
    if (!loaded_Electron_pfRelIso03_chg_) {
        if (!b_Electron_pfRelIso03_chg_) throw std::runtime_error("Electron_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Electron_pfRelIso03_chg_->GetEntry(index);
        v_Electron_pfRelIso03_chg_ = vector<float>(Electron_pfRelIso03_chg_,Electron_pfRelIso03_chg_+bytes/sizeof(Electron_pfRelIso03_chg_[0]));
        loaded_Electron_pfRelIso03_chg_ = true;
    }
    return v_Electron_pfRelIso03_chg_;
}
const vector<float> &Nano::Electron_phi() {
    if (!loaded_Electron_phi_) {
        if (!b_Electron_phi_) throw std::runtime_error("Electron_phi branch doesn't exist");
        int bytes = b_Electron_phi_->GetEntry(index);
        v_Electron_phi_ = vector<float>(Electron_phi_,Electron_phi_+bytes/sizeof(Electron_phi_[0]));
        loaded_Electron_phi_ = true;
    }
    return v_Electron_phi_;
}
const vector<int> &Nano::Electron_photonIdx() {
    if (!loaded_Electron_photonIdx_) {
        if (!b_Electron_photonIdx_) throw std::runtime_error("Electron_photonIdx branch doesn't exist");
        int bytes = b_Electron_photonIdx_->GetEntry(index);
        v_Electron_photonIdx_ = vector<int>(Electron_photonIdx_,Electron_photonIdx_+bytes/sizeof(Electron_photonIdx_[0]));
        loaded_Electron_photonIdx_ = true;
    }
    return v_Electron_photonIdx_;
}
const vector<float> &Nano::Electron_pt() {
    if (!loaded_Electron_pt_) {
        if (!b_Electron_pt_) throw std::runtime_error("Electron_pt branch doesn't exist");
        int bytes = b_Electron_pt_->GetEntry(index);
        v_Electron_pt_ = vector<float>(Electron_pt_,Electron_pt_+bytes/sizeof(Electron_pt_[0]));
        loaded_Electron_pt_ = true;
    }
    return v_Electron_pt_;
}
const vector<float> &Nano::Electron_r9() {
    if (!loaded_Electron_r9_) {
        if (!b_Electron_r9_) throw std::runtime_error("Electron_r9 branch doesn't exist");
        int bytes = b_Electron_r9_->GetEntry(index);
        v_Electron_r9_ = vector<float>(Electron_r9_,Electron_r9_+bytes/sizeof(Electron_r9_[0]));
        loaded_Electron_r9_ = true;
    }
    return v_Electron_r9_;
}
const vector<float> &Nano::Electron_sieie() {
    if (!loaded_Electron_sieie_) {
        if (!b_Electron_sieie_) throw std::runtime_error("Electron_sieie branch doesn't exist");
        int bytes = b_Electron_sieie_->GetEntry(index);
        v_Electron_sieie_ = vector<float>(Electron_sieie_,Electron_sieie_+bytes/sizeof(Electron_sieie_[0]));
        loaded_Electron_sieie_ = true;
    }
    return v_Electron_sieie_;
}
const vector<float> &Nano::Electron_sip3d() {
    if (!loaded_Electron_sip3d_) {
        if (!b_Electron_sip3d_) throw std::runtime_error("Electron_sip3d branch doesn't exist");
        int bytes = b_Electron_sip3d_->GetEntry(index);
        v_Electron_sip3d_ = vector<float>(Electron_sip3d_,Electron_sip3d_+bytes/sizeof(Electron_sip3d_[0]));
        loaded_Electron_sip3d_ = true;
    }
    return v_Electron_sip3d_;
}
const vector<int> &Nano::Electron_tightCharge() {
    if (!loaded_Electron_tightCharge_) {
        if (!b_Electron_tightCharge_) throw std::runtime_error("Electron_tightCharge branch doesn't exist");
        int bytes = b_Electron_tightCharge_->GetEntry(index);
        v_Electron_tightCharge_ = vector<int>(Electron_tightCharge_,Electron_tightCharge_+bytes/sizeof(Electron_tightCharge_[0]));
        loaded_Electron_tightCharge_ = true;
    }
    return v_Electron_tightCharge_;
}
const vector<int> &Nano::Electron_vidNestedWPBitmap() {
    if (!loaded_Electron_vidNestedWPBitmap_) {
        if (!b_Electron_vidNestedWPBitmap_) throw std::runtime_error("Electron_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_Electron_vidNestedWPBitmap_->GetEntry(index);
        v_Electron_vidNestedWPBitmap_ = vector<int>(Electron_vidNestedWPBitmap_,Electron_vidNestedWPBitmap_+bytes/sizeof(Electron_vidNestedWPBitmap_[0]));
        loaded_Electron_vidNestedWPBitmap_ = true;
    }
    return v_Electron_vidNestedWPBitmap_;
}
const vector<float> &Nano::FatJet_area() {
    if (!loaded_FatJet_area_) {
        if (!b_FatJet_area_) throw std::runtime_error("FatJet_area branch doesn't exist");
        int bytes = b_FatJet_area_->GetEntry(index);
        v_FatJet_area_ = vector<float>(FatJet_area_,FatJet_area_+bytes/sizeof(FatJet_area_[0]));
        loaded_FatJet_area_ = true;
    }
    return v_FatJet_area_;
}
const vector<float> &Nano::FatJet_btagCMVA() {
    if (!loaded_FatJet_btagCMVA_) {
        if (!b_FatJet_btagCMVA_) throw std::runtime_error("FatJet_btagCMVA branch doesn't exist");
        int bytes = b_FatJet_btagCMVA_->GetEntry(index);
        v_FatJet_btagCMVA_ = vector<float>(FatJet_btagCMVA_,FatJet_btagCMVA_+bytes/sizeof(FatJet_btagCMVA_[0]));
        loaded_FatJet_btagCMVA_ = true;
    }
    return v_FatJet_btagCMVA_;
}
const vector<float> &Nano::FatJet_btagCSVV2() {
    if (!loaded_FatJet_btagCSVV2_) {
        if (!b_FatJet_btagCSVV2_) throw std::runtime_error("FatJet_btagCSVV2 branch doesn't exist");
        int bytes = b_FatJet_btagCSVV2_->GetEntry(index);
        v_FatJet_btagCSVV2_ = vector<float>(FatJet_btagCSVV2_,FatJet_btagCSVV2_+bytes/sizeof(FatJet_btagCSVV2_[0]));
        loaded_FatJet_btagCSVV2_ = true;
    }
    return v_FatJet_btagCSVV2_;
}
const vector<float> &Nano::FatJet_btagDeepB() {
    if (!loaded_FatJet_btagDeepB_) {
        if (!b_FatJet_btagDeepB_) throw std::runtime_error("FatJet_btagDeepB branch doesn't exist");
        int bytes = b_FatJet_btagDeepB_->GetEntry(index);
        v_FatJet_btagDeepB_ = vector<float>(FatJet_btagDeepB_,FatJet_btagDeepB_+bytes/sizeof(FatJet_btagDeepB_[0]));
        loaded_FatJet_btagDeepB_ = true;
    }
    return v_FatJet_btagDeepB_;
}
const vector<float> &Nano::FatJet_btagHbb() {
    if (!loaded_FatJet_btagHbb_) {
        if (!b_FatJet_btagHbb_) throw std::runtime_error("FatJet_btagHbb branch doesn't exist");
        int bytes = b_FatJet_btagHbb_->GetEntry(index);
        v_FatJet_btagHbb_ = vector<float>(FatJet_btagHbb_,FatJet_btagHbb_+bytes/sizeof(FatJet_btagHbb_[0]));
        loaded_FatJet_btagHbb_ = true;
    }
    return v_FatJet_btagHbb_;
}
const vector<float> &Nano::FatJet_eta() {
    if (!loaded_FatJet_eta_) {
        if (!b_FatJet_eta_) throw std::runtime_error("FatJet_eta branch doesn't exist");
        int bytes = b_FatJet_eta_->GetEntry(index);
        v_FatJet_eta_ = vector<float>(FatJet_eta_,FatJet_eta_+bytes/sizeof(FatJet_eta_[0]));
        loaded_FatJet_eta_ = true;
    }
    return v_FatJet_eta_;
}
const vector<int> &Nano::FatJet_jetId() {
    if (!loaded_FatJet_jetId_) {
        if (!b_FatJet_jetId_) throw std::runtime_error("FatJet_jetId branch doesn't exist");
        int bytes = b_FatJet_jetId_->GetEntry(index);
        v_FatJet_jetId_ = vector<int>(FatJet_jetId_,FatJet_jetId_+bytes/sizeof(FatJet_jetId_[0]));
        loaded_FatJet_jetId_ = true;
    }
    return v_FatJet_jetId_;
}
const vector<float> &Nano::FatJet_mass() {
    if (!loaded_FatJet_mass_) {
        if (!b_FatJet_mass_) throw std::runtime_error("FatJet_mass branch doesn't exist");
        int bytes = b_FatJet_mass_->GetEntry(index);
        v_FatJet_mass_ = vector<float>(FatJet_mass_,FatJet_mass_+bytes/sizeof(FatJet_mass_[0]));
        loaded_FatJet_mass_ = true;
    }
    return v_FatJet_mass_;
}
const vector<float> &Nano::FatJet_msoftdrop() {
    if (!loaded_FatJet_msoftdrop_) {
        if (!b_FatJet_msoftdrop_) throw std::runtime_error("FatJet_msoftdrop branch doesn't exist");
        int bytes = b_FatJet_msoftdrop_->GetEntry(index);
        v_FatJet_msoftdrop_ = vector<float>(FatJet_msoftdrop_,FatJet_msoftdrop_+bytes/sizeof(FatJet_msoftdrop_[0]));
        loaded_FatJet_msoftdrop_ = true;
    }
    return v_FatJet_msoftdrop_;
}
const vector<float> &Nano::FatJet_n2b1() {
    if (!loaded_FatJet_n2b1_) {
        if (!b_FatJet_n2b1_) throw std::runtime_error("FatJet_n2b1 branch doesn't exist");
        int bytes = b_FatJet_n2b1_->GetEntry(index);
        v_FatJet_n2b1_ = vector<float>(FatJet_n2b1_,FatJet_n2b1_+bytes/sizeof(FatJet_n2b1_[0]));
        loaded_FatJet_n2b1_ = true;
    }
    return v_FatJet_n2b1_;
}
const vector<float> &Nano::FatJet_n3b1() {
    if (!loaded_FatJet_n3b1_) {
        if (!b_FatJet_n3b1_) throw std::runtime_error("FatJet_n3b1 branch doesn't exist");
        int bytes = b_FatJet_n3b1_->GetEntry(index);
        v_FatJet_n3b1_ = vector<float>(FatJet_n3b1_,FatJet_n3b1_+bytes/sizeof(FatJet_n3b1_[0]));
        loaded_FatJet_n3b1_ = true;
    }
    return v_FatJet_n3b1_;
}
const vector<LorentzVector> &Nano::FatJet_p4() {
    if (!loaded_FatJet_p4_) {
        v_FatJet_p4_.clear();
        vector<float> pts = Nano::FatJet_pt();
        vector<float> etas = Nano::FatJet_eta();
        vector<float> phis = Nano::FatJet_phi();
        vector<float> masses = Nano::FatJet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_FatJet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_FatJet_p4_ = true;
    }
    return v_FatJet_p4_;
}
const vector<float> &Nano::FatJet_phi() {
    if (!loaded_FatJet_phi_) {
        if (!b_FatJet_phi_) throw std::runtime_error("FatJet_phi branch doesn't exist");
        int bytes = b_FatJet_phi_->GetEntry(index);
        v_FatJet_phi_ = vector<float>(FatJet_phi_,FatJet_phi_+bytes/sizeof(FatJet_phi_[0]));
        loaded_FatJet_phi_ = true;
    }
    return v_FatJet_phi_;
}
const vector<float> &Nano::FatJet_pt() {
    if (!loaded_FatJet_pt_) {
        if (!b_FatJet_pt_) throw std::runtime_error("FatJet_pt branch doesn't exist");
        int bytes = b_FatJet_pt_->GetEntry(index);
        v_FatJet_pt_ = vector<float>(FatJet_pt_,FatJet_pt_+bytes/sizeof(FatJet_pt_[0]));
        loaded_FatJet_pt_ = true;
    }
    return v_FatJet_pt_;
}
const vector<int> &Nano::FatJet_subJetIdx1() {
    if (!loaded_FatJet_subJetIdx1_) {
        if (!b_FatJet_subJetIdx1_) throw std::runtime_error("FatJet_subJetIdx1 branch doesn't exist");
        int bytes = b_FatJet_subJetIdx1_->GetEntry(index);
        v_FatJet_subJetIdx1_ = vector<int>(FatJet_subJetIdx1_,FatJet_subJetIdx1_+bytes/sizeof(FatJet_subJetIdx1_[0]));
        loaded_FatJet_subJetIdx1_ = true;
    }
    return v_FatJet_subJetIdx1_;
}
const vector<int> &Nano::FatJet_subJetIdx2() {
    if (!loaded_FatJet_subJetIdx2_) {
        if (!b_FatJet_subJetIdx2_) throw std::runtime_error("FatJet_subJetIdx2 branch doesn't exist");
        int bytes = b_FatJet_subJetIdx2_->GetEntry(index);
        v_FatJet_subJetIdx2_ = vector<int>(FatJet_subJetIdx2_,FatJet_subJetIdx2_+bytes/sizeof(FatJet_subJetIdx2_[0]));
        loaded_FatJet_subJetIdx2_ = true;
    }
    return v_FatJet_subJetIdx2_;
}
const vector<float> &Nano::FatJet_tau1() {
    if (!loaded_FatJet_tau1_) {
        if (!b_FatJet_tau1_) throw std::runtime_error("FatJet_tau1 branch doesn't exist");
        int bytes = b_FatJet_tau1_->GetEntry(index);
        v_FatJet_tau1_ = vector<float>(FatJet_tau1_,FatJet_tau1_+bytes/sizeof(FatJet_tau1_[0]));
        loaded_FatJet_tau1_ = true;
    }
    return v_FatJet_tau1_;
}
const vector<float> &Nano::FatJet_tau2() {
    if (!loaded_FatJet_tau2_) {
        if (!b_FatJet_tau2_) throw std::runtime_error("FatJet_tau2 branch doesn't exist");
        int bytes = b_FatJet_tau2_->GetEntry(index);
        v_FatJet_tau2_ = vector<float>(FatJet_tau2_,FatJet_tau2_+bytes/sizeof(FatJet_tau2_[0]));
        loaded_FatJet_tau2_ = true;
    }
    return v_FatJet_tau2_;
}
const vector<float> &Nano::FatJet_tau3() {
    if (!loaded_FatJet_tau3_) {
        if (!b_FatJet_tau3_) throw std::runtime_error("FatJet_tau3 branch doesn't exist");
        int bytes = b_FatJet_tau3_->GetEntry(index);
        v_FatJet_tau3_ = vector<float>(FatJet_tau3_,FatJet_tau3_+bytes/sizeof(FatJet_tau3_[0]));
        loaded_FatJet_tau3_ = true;
    }
    return v_FatJet_tau3_;
}
const vector<float> &Nano::FatJet_tau4() {
    if (!loaded_FatJet_tau4_) {
        if (!b_FatJet_tau4_) throw std::runtime_error("FatJet_tau4 branch doesn't exist");
        int bytes = b_FatJet_tau4_->GetEntry(index);
        v_FatJet_tau4_ = vector<float>(FatJet_tau4_,FatJet_tau4_+bytes/sizeof(FatJet_tau4_[0]));
        loaded_FatJet_tau4_ = true;
    }
    return v_FatJet_tau4_;
}
const bool &Nano::Flag_BadChargedCandidateFilter() {
    if (!loaded_Flag_BadChargedCandidateFilter_) {
        if (!b_Flag_BadChargedCandidateFilter_) throw std::runtime_error("Flag_BadChargedCandidateFilter branch doesn't exist");
        b_Flag_BadChargedCandidateFilter_->GetEntry(index);
        loaded_Flag_BadChargedCandidateFilter_ = true;
    }
    return Flag_BadChargedCandidateFilter_;
}
const bool &Nano::Flag_BadChargedCandidateSummer16Filter() {
    if (!loaded_Flag_BadChargedCandidateSummer16Filter_) {
        if (!b_Flag_BadChargedCandidateSummer16Filter_) throw std::runtime_error("Flag_BadChargedCandidateSummer16Filter branch doesn't exist");
        b_Flag_BadChargedCandidateSummer16Filter_->GetEntry(index);
        loaded_Flag_BadChargedCandidateSummer16Filter_ = true;
    }
    return Flag_BadChargedCandidateSummer16Filter_;
}
const bool &Nano::Flag_BadPFMuonFilter() {
    if (!loaded_Flag_BadPFMuonFilter_) {
        if (!b_Flag_BadPFMuonFilter_) throw std::runtime_error("Flag_BadPFMuonFilter branch doesn't exist");
        b_Flag_BadPFMuonFilter_->GetEntry(index);
        loaded_Flag_BadPFMuonFilter_ = true;
    }
    return Flag_BadPFMuonFilter_;
}
const bool &Nano::Flag_BadPFMuonSummer16Filter() {
    if (!loaded_Flag_BadPFMuonSummer16Filter_) {
        if (!b_Flag_BadPFMuonSummer16Filter_) throw std::runtime_error("Flag_BadPFMuonSummer16Filter branch doesn't exist");
        b_Flag_BadPFMuonSummer16Filter_->GetEntry(index);
        loaded_Flag_BadPFMuonSummer16Filter_ = true;
    }
    return Flag_BadPFMuonSummer16Filter_;
}
const bool &Nano::Flag_CSCTightHalo2015Filter() {
    if (!loaded_Flag_CSCTightHalo2015Filter_) {
        if (!b_Flag_CSCTightHalo2015Filter_) throw std::runtime_error("Flag_CSCTightHalo2015Filter branch doesn't exist");
        b_Flag_CSCTightHalo2015Filter_->GetEntry(index);
        loaded_Flag_CSCTightHalo2015Filter_ = true;
    }
    return Flag_CSCTightHalo2015Filter_;
}
const bool &Nano::Flag_CSCTightHaloFilter() {
    if (!loaded_Flag_CSCTightHaloFilter_) {
        if (!b_Flag_CSCTightHaloFilter_) throw std::runtime_error("Flag_CSCTightHaloFilter branch doesn't exist");
        b_Flag_CSCTightHaloFilter_->GetEntry(index);
        loaded_Flag_CSCTightHaloFilter_ = true;
    }
    return Flag_CSCTightHaloFilter_;
}
const bool &Nano::Flag_CSCTightHaloTrkMuUnvetoFilter() {
    if (!loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_) {
        if (!b_Flag_CSCTightHaloTrkMuUnvetoFilter_) throw std::runtime_error("Flag_CSCTightHaloTrkMuUnvetoFilter branch doesn't exist");
        b_Flag_CSCTightHaloTrkMuUnvetoFilter_->GetEntry(index);
        loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_ = true;
    }
    return Flag_CSCTightHaloTrkMuUnvetoFilter_;
}
const bool &Nano::Flag_EcalDeadCellBoundaryEnergyFilter() {
    if (!loaded_Flag_EcalDeadCellBoundaryEnergyFilter_) {
        if (!b_Flag_EcalDeadCellBoundaryEnergyFilter_) throw std::runtime_error("Flag_EcalDeadCellBoundaryEnergyFilter branch doesn't exist");
        b_Flag_EcalDeadCellBoundaryEnergyFilter_->GetEntry(index);
        loaded_Flag_EcalDeadCellBoundaryEnergyFilter_ = true;
    }
    return Flag_EcalDeadCellBoundaryEnergyFilter_;
}
const bool &Nano::Flag_EcalDeadCellTriggerPrimitiveFilter() {
    if (!loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_) {
        if (!b_Flag_EcalDeadCellTriggerPrimitiveFilter_) throw std::runtime_error("Flag_EcalDeadCellTriggerPrimitiveFilter branch doesn't exist");
        b_Flag_EcalDeadCellTriggerPrimitiveFilter_->GetEntry(index);
        loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_ = true;
    }
    return Flag_EcalDeadCellTriggerPrimitiveFilter_;
}
const bool &Nano::Flag_HBHENoiseFilter() {
    if (!loaded_Flag_HBHENoiseFilter_) {
        if (!b_Flag_HBHENoiseFilter_) throw std::runtime_error("Flag_HBHENoiseFilter branch doesn't exist");
        b_Flag_HBHENoiseFilter_->GetEntry(index);
        loaded_Flag_HBHENoiseFilter_ = true;
    }
    return Flag_HBHENoiseFilter_;
}
const bool &Nano::Flag_HBHENoiseIsoFilter() {
    if (!loaded_Flag_HBHENoiseIsoFilter_) {
        if (!b_Flag_HBHENoiseIsoFilter_) throw std::runtime_error("Flag_HBHENoiseIsoFilter branch doesn't exist");
        b_Flag_HBHENoiseIsoFilter_->GetEntry(index);
        loaded_Flag_HBHENoiseIsoFilter_ = true;
    }
    return Flag_HBHENoiseIsoFilter_;
}
const bool &Nano::Flag_HcalStripHaloFilter() {
    if (!loaded_Flag_HcalStripHaloFilter_) {
        if (!b_Flag_HcalStripHaloFilter_) throw std::runtime_error("Flag_HcalStripHaloFilter branch doesn't exist");
        b_Flag_HcalStripHaloFilter_->GetEntry(index);
        loaded_Flag_HcalStripHaloFilter_ = true;
    }
    return Flag_HcalStripHaloFilter_;
}
const bool &Nano::Flag_METFilters() {
    if (!loaded_Flag_METFilters_) {
        if (!b_Flag_METFilters_) throw std::runtime_error("Flag_METFilters branch doesn't exist");
        b_Flag_METFilters_->GetEntry(index);
        loaded_Flag_METFilters_ = true;
    }
    return Flag_METFilters_;
}
const bool &Nano::Flag_chargedHadronTrackResolutionFilter() {
    if (!loaded_Flag_chargedHadronTrackResolutionFilter_) {
        if (!b_Flag_chargedHadronTrackResolutionFilter_) throw std::runtime_error("Flag_chargedHadronTrackResolutionFilter branch doesn't exist");
        b_Flag_chargedHadronTrackResolutionFilter_->GetEntry(index);
        loaded_Flag_chargedHadronTrackResolutionFilter_ = true;
    }
    return Flag_chargedHadronTrackResolutionFilter_;
}
const bool &Nano::Flag_ecalBadCalibFilter() {
    if (!loaded_Flag_ecalBadCalibFilter_) {
        if (!b_Flag_ecalBadCalibFilter_) throw std::runtime_error("Flag_ecalBadCalibFilter branch doesn't exist");
        b_Flag_ecalBadCalibFilter_->GetEntry(index);
        loaded_Flag_ecalBadCalibFilter_ = true;
    }
    return Flag_ecalBadCalibFilter_;
}
const bool &Nano::Flag_ecalLaserCorrFilter() {
    if (!loaded_Flag_ecalLaserCorrFilter_) {
        if (!b_Flag_ecalLaserCorrFilter_) throw std::runtime_error("Flag_ecalLaserCorrFilter branch doesn't exist");
        b_Flag_ecalLaserCorrFilter_->GetEntry(index);
        loaded_Flag_ecalLaserCorrFilter_ = true;
    }
    return Flag_ecalLaserCorrFilter_;
}
const bool &Nano::Flag_eeBadScFilter() {
    if (!loaded_Flag_eeBadScFilter_) {
        if (!b_Flag_eeBadScFilter_) throw std::runtime_error("Flag_eeBadScFilter branch doesn't exist");
        b_Flag_eeBadScFilter_->GetEntry(index);
        loaded_Flag_eeBadScFilter_ = true;
    }
    return Flag_eeBadScFilter_;
}
const bool &Nano::Flag_globalSuperTightHalo2016Filter() {
    if (!loaded_Flag_globalSuperTightHalo2016Filter_) {
        if (!b_Flag_globalSuperTightHalo2016Filter_) throw std::runtime_error("Flag_globalSuperTightHalo2016Filter branch doesn't exist");
        b_Flag_globalSuperTightHalo2016Filter_->GetEntry(index);
        loaded_Flag_globalSuperTightHalo2016Filter_ = true;
    }
    return Flag_globalSuperTightHalo2016Filter_;
}
const bool &Nano::Flag_globalTightHalo2016Filter() {
    if (!loaded_Flag_globalTightHalo2016Filter_) {
        if (!b_Flag_globalTightHalo2016Filter_) throw std::runtime_error("Flag_globalTightHalo2016Filter branch doesn't exist");
        b_Flag_globalTightHalo2016Filter_->GetEntry(index);
        loaded_Flag_globalTightHalo2016Filter_ = true;
    }
    return Flag_globalTightHalo2016Filter_;
}
const bool &Nano::Flag_goodVertices() {
    if (!loaded_Flag_goodVertices_) {
        if (!b_Flag_goodVertices_) throw std::runtime_error("Flag_goodVertices branch doesn't exist");
        b_Flag_goodVertices_->GetEntry(index);
        loaded_Flag_goodVertices_ = true;
    }
    return Flag_goodVertices_;
}
const bool &Nano::Flag_hcalLaserEventFilter() {
    if (!loaded_Flag_hcalLaserEventFilter_) {
        if (!b_Flag_hcalLaserEventFilter_) throw std::runtime_error("Flag_hcalLaserEventFilter branch doesn't exist");
        b_Flag_hcalLaserEventFilter_->GetEntry(index);
        loaded_Flag_hcalLaserEventFilter_ = true;
    }
    return Flag_hcalLaserEventFilter_;
}
const bool &Nano::Flag_muonBadTrackFilter() {
    if (!loaded_Flag_muonBadTrackFilter_) {
        if (!b_Flag_muonBadTrackFilter_) throw std::runtime_error("Flag_muonBadTrackFilter branch doesn't exist");
        b_Flag_muonBadTrackFilter_->GetEntry(index);
        loaded_Flag_muonBadTrackFilter_ = true;
    }
    return Flag_muonBadTrackFilter_;
}
const bool &Nano::Flag_trkPOGFilters() {
    if (!loaded_Flag_trkPOGFilters_) {
        if (!b_Flag_trkPOGFilters_) throw std::runtime_error("Flag_trkPOGFilters branch doesn't exist");
        b_Flag_trkPOGFilters_->GetEntry(index);
        loaded_Flag_trkPOGFilters_ = true;
    }
    return Flag_trkPOGFilters_;
}
const bool &Nano::Flag_trkPOG_logErrorTooManyClusters() {
    if (!loaded_Flag_trkPOG_logErrorTooManyClusters_) {
        if (!b_Flag_trkPOG_logErrorTooManyClusters_) throw std::runtime_error("Flag_trkPOG_logErrorTooManyClusters branch doesn't exist");
        b_Flag_trkPOG_logErrorTooManyClusters_->GetEntry(index);
        loaded_Flag_trkPOG_logErrorTooManyClusters_ = true;
    }
    return Flag_trkPOG_logErrorTooManyClusters_;
}
const bool &Nano::Flag_trkPOG_manystripclus53X() {
    if (!loaded_Flag_trkPOG_manystripclus53X_) {
        if (!b_Flag_trkPOG_manystripclus53X_) throw std::runtime_error("Flag_trkPOG_manystripclus53X branch doesn't exist");
        b_Flag_trkPOG_manystripclus53X_->GetEntry(index);
        loaded_Flag_trkPOG_manystripclus53X_ = true;
    }
    return Flag_trkPOG_manystripclus53X_;
}
const bool &Nano::Flag_trkPOG_toomanystripclus53X() {
    if (!loaded_Flag_trkPOG_toomanystripclus53X_) {
        if (!b_Flag_trkPOG_toomanystripclus53X_) throw std::runtime_error("Flag_trkPOG_toomanystripclus53X branch doesn't exist");
        b_Flag_trkPOG_toomanystripclus53X_->GetEntry(index);
        loaded_Flag_trkPOG_toomanystripclus53X_ = true;
    }
    return Flag_trkPOG_toomanystripclus53X_;
}
const vector<float> &Nano::GenDressedLepton_eta() {
    if (!loaded_GenDressedLepton_eta_) {
        if (!b_GenDressedLepton_eta_) throw std::runtime_error("GenDressedLepton_eta branch doesn't exist");
        int bytes = b_GenDressedLepton_eta_->GetEntry(index);
        v_GenDressedLepton_eta_ = vector<float>(GenDressedLepton_eta_,GenDressedLepton_eta_+bytes/sizeof(GenDressedLepton_eta_[0]));
        loaded_GenDressedLepton_eta_ = true;
    }
    return v_GenDressedLepton_eta_;
}
const vector<float> &Nano::GenDressedLepton_mass() {
    if (!loaded_GenDressedLepton_mass_) {
        if (!b_GenDressedLepton_mass_) throw std::runtime_error("GenDressedLepton_mass branch doesn't exist");
        int bytes = b_GenDressedLepton_mass_->GetEntry(index);
        v_GenDressedLepton_mass_ = vector<float>(GenDressedLepton_mass_,GenDressedLepton_mass_+bytes/sizeof(GenDressedLepton_mass_[0]));
        loaded_GenDressedLepton_mass_ = true;
    }
    return v_GenDressedLepton_mass_;
}
const vector<LorentzVector> &Nano::GenDressedLepton_p4() {
    if (!loaded_GenDressedLepton_p4_) {
        v_GenDressedLepton_p4_.clear();
        vector<float> pts = Nano::GenDressedLepton_pt();
        vector<float> etas = Nano::GenDressedLepton_eta();
        vector<float> phis = Nano::GenDressedLepton_phi();
        vector<float> masses = Nano::GenDressedLepton_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenDressedLepton_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenDressedLepton_p4_ = true;
    }
    return v_GenDressedLepton_p4_;
}
const vector<int> &Nano::GenDressedLepton_pdgId() {
    if (!loaded_GenDressedLepton_pdgId_) {
        if (!b_GenDressedLepton_pdgId_) throw std::runtime_error("GenDressedLepton_pdgId branch doesn't exist");
        int bytes = b_GenDressedLepton_pdgId_->GetEntry(index);
        v_GenDressedLepton_pdgId_ = vector<int>(GenDressedLepton_pdgId_,GenDressedLepton_pdgId_+bytes/sizeof(GenDressedLepton_pdgId_[0]));
        loaded_GenDressedLepton_pdgId_ = true;
    }
    return v_GenDressedLepton_pdgId_;
}
const vector<float> &Nano::GenDressedLepton_phi() {
    if (!loaded_GenDressedLepton_phi_) {
        if (!b_GenDressedLepton_phi_) throw std::runtime_error("GenDressedLepton_phi branch doesn't exist");
        int bytes = b_GenDressedLepton_phi_->GetEntry(index);
        v_GenDressedLepton_phi_ = vector<float>(GenDressedLepton_phi_,GenDressedLepton_phi_+bytes/sizeof(GenDressedLepton_phi_[0]));
        loaded_GenDressedLepton_phi_ = true;
    }
    return v_GenDressedLepton_phi_;
}
const vector<float> &Nano::GenDressedLepton_pt() {
    if (!loaded_GenDressedLepton_pt_) {
        if (!b_GenDressedLepton_pt_) throw std::runtime_error("GenDressedLepton_pt branch doesn't exist");
        int bytes = b_GenDressedLepton_pt_->GetEntry(index);
        v_GenDressedLepton_pt_ = vector<float>(GenDressedLepton_pt_,GenDressedLepton_pt_+bytes/sizeof(GenDressedLepton_pt_[0]));
        loaded_GenDressedLepton_pt_ = true;
    }
    return v_GenDressedLepton_pt_;
}
const vector<float> &Nano::GenJetAK8_eta() {
    if (!loaded_GenJetAK8_eta_) {
        if (!b_GenJetAK8_eta_) throw std::runtime_error("GenJetAK8_eta branch doesn't exist");
        int bytes = b_GenJetAK8_eta_->GetEntry(index);
        v_GenJetAK8_eta_ = vector<float>(GenJetAK8_eta_,GenJetAK8_eta_+bytes/sizeof(GenJetAK8_eta_[0]));
        loaded_GenJetAK8_eta_ = true;
    }
    return v_GenJetAK8_eta_;
}
const vector<UChar_t> &Nano::GenJetAK8_hadronFlavour() {
    if (!loaded_GenJetAK8_hadronFlavour_) {
        if (!b_GenJetAK8_hadronFlavour_) throw std::runtime_error("GenJetAK8_hadronFlavour branch doesn't exist");
        int bytes = b_GenJetAK8_hadronFlavour_->GetEntry(index);
        v_GenJetAK8_hadronFlavour_ = vector<UChar_t>(GenJetAK8_hadronFlavour_,GenJetAK8_hadronFlavour_+bytes/sizeof(GenJetAK8_hadronFlavour_[0]));
        loaded_GenJetAK8_hadronFlavour_ = true;
    }
    return v_GenJetAK8_hadronFlavour_;
}
const vector<float> &Nano::GenJetAK8_mass() {
    if (!loaded_GenJetAK8_mass_) {
        if (!b_GenJetAK8_mass_) throw std::runtime_error("GenJetAK8_mass branch doesn't exist");
        int bytes = b_GenJetAK8_mass_->GetEntry(index);
        v_GenJetAK8_mass_ = vector<float>(GenJetAK8_mass_,GenJetAK8_mass_+bytes/sizeof(GenJetAK8_mass_[0]));
        loaded_GenJetAK8_mass_ = true;
    }
    return v_GenJetAK8_mass_;
}
const vector<LorentzVector> &Nano::GenJetAK8_p4() {
    if (!loaded_GenJetAK8_p4_) {
        v_GenJetAK8_p4_.clear();
        vector<float> pts = Nano::GenJetAK8_pt();
        vector<float> etas = Nano::GenJetAK8_eta();
        vector<float> phis = Nano::GenJetAK8_phi();
        vector<float> masses = Nano::GenJetAK8_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenJetAK8_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenJetAK8_p4_ = true;
    }
    return v_GenJetAK8_p4_;
}
const vector<int> &Nano::GenJetAK8_partonFlavour() {
    if (!loaded_GenJetAK8_partonFlavour_) {
        if (!b_GenJetAK8_partonFlavour_) throw std::runtime_error("GenJetAK8_partonFlavour branch doesn't exist");
        int bytes = b_GenJetAK8_partonFlavour_->GetEntry(index);
        v_GenJetAK8_partonFlavour_ = vector<int>(GenJetAK8_partonFlavour_,GenJetAK8_partonFlavour_+bytes/sizeof(GenJetAK8_partonFlavour_[0]));
        loaded_GenJetAK8_partonFlavour_ = true;
    }
    return v_GenJetAK8_partonFlavour_;
}
const vector<float> &Nano::GenJetAK8_phi() {
    if (!loaded_GenJetAK8_phi_) {
        if (!b_GenJetAK8_phi_) throw std::runtime_error("GenJetAK8_phi branch doesn't exist");
        int bytes = b_GenJetAK8_phi_->GetEntry(index);
        v_GenJetAK8_phi_ = vector<float>(GenJetAK8_phi_,GenJetAK8_phi_+bytes/sizeof(GenJetAK8_phi_[0]));
        loaded_GenJetAK8_phi_ = true;
    }
    return v_GenJetAK8_phi_;
}
const vector<float> &Nano::GenJetAK8_pt() {
    if (!loaded_GenJetAK8_pt_) {
        if (!b_GenJetAK8_pt_) throw std::runtime_error("GenJetAK8_pt branch doesn't exist");
        int bytes = b_GenJetAK8_pt_->GetEntry(index);
        v_GenJetAK8_pt_ = vector<float>(GenJetAK8_pt_,GenJetAK8_pt_+bytes/sizeof(GenJetAK8_pt_[0]));
        loaded_GenJetAK8_pt_ = true;
    }
    return v_GenJetAK8_pt_;
}
const vector<float> &Nano::GenJet_eta() {
    if (!loaded_GenJet_eta_) {
        if (!b_GenJet_eta_) throw std::runtime_error("GenJet_eta branch doesn't exist");
        int bytes = b_GenJet_eta_->GetEntry(index);
        v_GenJet_eta_ = vector<float>(GenJet_eta_,GenJet_eta_+bytes/sizeof(GenJet_eta_[0]));
        loaded_GenJet_eta_ = true;
    }
    return v_GenJet_eta_;
}
const vector<UChar_t> &Nano::GenJet_hadronFlavour() {
    if (!loaded_GenJet_hadronFlavour_) {
        if (!b_GenJet_hadronFlavour_) throw std::runtime_error("GenJet_hadronFlavour branch doesn't exist");
        int bytes = b_GenJet_hadronFlavour_->GetEntry(index);
        v_GenJet_hadronFlavour_ = vector<UChar_t>(GenJet_hadronFlavour_,GenJet_hadronFlavour_+bytes/sizeof(GenJet_hadronFlavour_[0]));
        loaded_GenJet_hadronFlavour_ = true;
    }
    return v_GenJet_hadronFlavour_;
}
const vector<float> &Nano::GenJet_mass() {
    if (!loaded_GenJet_mass_) {
        if (!b_GenJet_mass_) throw std::runtime_error("GenJet_mass branch doesn't exist");
        int bytes = b_GenJet_mass_->GetEntry(index);
        v_GenJet_mass_ = vector<float>(GenJet_mass_,GenJet_mass_+bytes/sizeof(GenJet_mass_[0]));
        loaded_GenJet_mass_ = true;
    }
    return v_GenJet_mass_;
}
const vector<LorentzVector> &Nano::GenJet_p4() {
    if (!loaded_GenJet_p4_) {
        v_GenJet_p4_.clear();
        vector<float> pts = Nano::GenJet_pt();
        vector<float> etas = Nano::GenJet_eta();
        vector<float> phis = Nano::GenJet_phi();
        vector<float> masses = Nano::GenJet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenJet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenJet_p4_ = true;
    }
    return v_GenJet_p4_;
}
const vector<int> &Nano::GenJet_partonFlavour() {
    if (!loaded_GenJet_partonFlavour_) {
        if (!b_GenJet_partonFlavour_) throw std::runtime_error("GenJet_partonFlavour branch doesn't exist");
        int bytes = b_GenJet_partonFlavour_->GetEntry(index);
        v_GenJet_partonFlavour_ = vector<int>(GenJet_partonFlavour_,GenJet_partonFlavour_+bytes/sizeof(GenJet_partonFlavour_[0]));
        loaded_GenJet_partonFlavour_ = true;
    }
    return v_GenJet_partonFlavour_;
}
const vector<float> &Nano::GenJet_phi() {
    if (!loaded_GenJet_phi_) {
        if (!b_GenJet_phi_) throw std::runtime_error("GenJet_phi branch doesn't exist");
        int bytes = b_GenJet_phi_->GetEntry(index);
        v_GenJet_phi_ = vector<float>(GenJet_phi_,GenJet_phi_+bytes/sizeof(GenJet_phi_[0]));
        loaded_GenJet_phi_ = true;
    }
    return v_GenJet_phi_;
}
const vector<float> &Nano::GenJet_pt() {
    if (!loaded_GenJet_pt_) {
        if (!b_GenJet_pt_) throw std::runtime_error("GenJet_pt branch doesn't exist");
        int bytes = b_GenJet_pt_->GetEntry(index);
        v_GenJet_pt_ = vector<float>(GenJet_pt_,GenJet_pt_+bytes/sizeof(GenJet_pt_[0]));
        loaded_GenJet_pt_ = true;
    }
    return v_GenJet_pt_;
}
const float &Nano::GenMET_phi() {
    if (!loaded_GenMET_phi_) {
        if (!b_GenMET_phi_) throw std::runtime_error("GenMET_phi branch doesn't exist");
        b_GenMET_phi_->GetEntry(index);
        loaded_GenMET_phi_ = true;
    }
    return GenMET_phi_;
}
const float &Nano::GenMET_pt() {
    if (!loaded_GenMET_pt_) {
        if (!b_GenMET_pt_) throw std::runtime_error("GenMET_pt branch doesn't exist");
        b_GenMET_pt_->GetEntry(index);
        loaded_GenMET_pt_ = true;
    }
    return GenMET_pt_;
}
const vector<float> &Nano::GenPart_eta() {
    if (!loaded_GenPart_eta_) {
        if (!b_GenPart_eta_) throw std::runtime_error("GenPart_eta branch doesn't exist");
        int bytes = b_GenPart_eta_->GetEntry(index);
        v_GenPart_eta_ = vector<float>(GenPart_eta_,GenPart_eta_+bytes/sizeof(GenPart_eta_[0]));
        loaded_GenPart_eta_ = true;
    }
    return v_GenPart_eta_;
}
const vector<int> &Nano::GenPart_genPartIdxMother() {
    if (!loaded_GenPart_genPartIdxMother_) {
        if (!b_GenPart_genPartIdxMother_) throw std::runtime_error("GenPart_genPartIdxMother branch doesn't exist");
        int bytes = b_GenPart_genPartIdxMother_->GetEntry(index);
        v_GenPart_genPartIdxMother_ = vector<int>(GenPart_genPartIdxMother_,GenPart_genPartIdxMother_+bytes/sizeof(GenPart_genPartIdxMother_[0]));
        loaded_GenPart_genPartIdxMother_ = true;
    }
    return v_GenPart_genPartIdxMother_;
}
const vector<float> &Nano::GenPart_mass() {
    if (!loaded_GenPart_mass_) {
        if (!b_GenPart_mass_) throw std::runtime_error("GenPart_mass branch doesn't exist");
        int bytes = b_GenPart_mass_->GetEntry(index);
        v_GenPart_mass_ = vector<float>(GenPart_mass_,GenPart_mass_+bytes/sizeof(GenPart_mass_[0]));
        loaded_GenPart_mass_ = true;
    }
    return v_GenPart_mass_;
}
const vector<LorentzVector> &Nano::GenPart_p4() {
    if (!loaded_GenPart_p4_) {
        v_GenPart_p4_.clear();
        vector<float> pts = Nano::GenPart_pt();
        vector<float> etas = Nano::GenPart_eta();
        vector<float> phis = Nano::GenPart_phi();
        vector<float> masses = Nano::GenPart_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenPart_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenPart_p4_ = true;
    }
    return v_GenPart_p4_;
}
const vector<int> &Nano::GenPart_pdgId() {
    if (!loaded_GenPart_pdgId_) {
        if (!b_GenPart_pdgId_) throw std::runtime_error("GenPart_pdgId branch doesn't exist");
        int bytes = b_GenPart_pdgId_->GetEntry(index);
        v_GenPart_pdgId_ = vector<int>(GenPart_pdgId_,GenPart_pdgId_+bytes/sizeof(GenPart_pdgId_[0]));
        loaded_GenPart_pdgId_ = true;
    }
    return v_GenPart_pdgId_;
}
const vector<float> &Nano::GenPart_phi() {
    if (!loaded_GenPart_phi_) {
        if (!b_GenPart_phi_) throw std::runtime_error("GenPart_phi branch doesn't exist");
        int bytes = b_GenPart_phi_->GetEntry(index);
        v_GenPart_phi_ = vector<float>(GenPart_phi_,GenPart_phi_+bytes/sizeof(GenPart_phi_[0]));
        loaded_GenPart_phi_ = true;
    }
    return v_GenPart_phi_;
}
const vector<float> &Nano::GenPart_pt() {
    if (!loaded_GenPart_pt_) {
        if (!b_GenPart_pt_) throw std::runtime_error("GenPart_pt branch doesn't exist");
        int bytes = b_GenPart_pt_->GetEntry(index);
        v_GenPart_pt_ = vector<float>(GenPart_pt_,GenPart_pt_+bytes/sizeof(GenPart_pt_[0]));
        loaded_GenPart_pt_ = true;
    }
    return v_GenPart_pt_;
}
const vector<int> &Nano::GenPart_status() {
    if (!loaded_GenPart_status_) {
        if (!b_GenPart_status_) throw std::runtime_error("GenPart_status branch doesn't exist");
        int bytes = b_GenPart_status_->GetEntry(index);
        v_GenPart_status_ = vector<int>(GenPart_status_,GenPart_status_+bytes/sizeof(GenPart_status_[0]));
        loaded_GenPart_status_ = true;
    }
    return v_GenPart_status_;
}
const vector<int> &Nano::GenPart_statusFlags() {
    if (!loaded_GenPart_statusFlags_) {
        if (!b_GenPart_statusFlags_) throw std::runtime_error("GenPart_statusFlags branch doesn't exist");
        int bytes = b_GenPart_statusFlags_->GetEntry(index);
        v_GenPart_statusFlags_ = vector<int>(GenPart_statusFlags_,GenPart_statusFlags_+bytes/sizeof(GenPart_statusFlags_[0]));
        loaded_GenPart_statusFlags_ = true;
    }
    return v_GenPart_statusFlags_;
}
const vector<int> &Nano::GenVisTau_charge() {
    if (!loaded_GenVisTau_charge_) {
        if (!b_GenVisTau_charge_) throw std::runtime_error("GenVisTau_charge branch doesn't exist");
        int bytes = b_GenVisTau_charge_->GetEntry(index);
        v_GenVisTau_charge_ = vector<int>(GenVisTau_charge_,GenVisTau_charge_+bytes/sizeof(GenVisTau_charge_[0]));
        loaded_GenVisTau_charge_ = true;
    }
    return v_GenVisTau_charge_;
}
const vector<float> &Nano::GenVisTau_eta() {
    if (!loaded_GenVisTau_eta_) {
        if (!b_GenVisTau_eta_) throw std::runtime_error("GenVisTau_eta branch doesn't exist");
        int bytes = b_GenVisTau_eta_->GetEntry(index);
        v_GenVisTau_eta_ = vector<float>(GenVisTau_eta_,GenVisTau_eta_+bytes/sizeof(GenVisTau_eta_[0]));
        loaded_GenVisTau_eta_ = true;
    }
    return v_GenVisTau_eta_;
}
const vector<int> &Nano::GenVisTau_genPartIdxMother() {
    if (!loaded_GenVisTau_genPartIdxMother_) {
        if (!b_GenVisTau_genPartIdxMother_) throw std::runtime_error("GenVisTau_genPartIdxMother branch doesn't exist");
        int bytes = b_GenVisTau_genPartIdxMother_->GetEntry(index);
        v_GenVisTau_genPartIdxMother_ = vector<int>(GenVisTau_genPartIdxMother_,GenVisTau_genPartIdxMother_+bytes/sizeof(GenVisTau_genPartIdxMother_[0]));
        loaded_GenVisTau_genPartIdxMother_ = true;
    }
    return v_GenVisTau_genPartIdxMother_;
}
const vector<float> &Nano::GenVisTau_mass() {
    if (!loaded_GenVisTau_mass_) {
        if (!b_GenVisTau_mass_) throw std::runtime_error("GenVisTau_mass branch doesn't exist");
        int bytes = b_GenVisTau_mass_->GetEntry(index);
        v_GenVisTau_mass_ = vector<float>(GenVisTau_mass_,GenVisTau_mass_+bytes/sizeof(GenVisTau_mass_[0]));
        loaded_GenVisTau_mass_ = true;
    }
    return v_GenVisTau_mass_;
}
const vector<LorentzVector> &Nano::GenVisTau_p4() {
    if (!loaded_GenVisTau_p4_) {
        v_GenVisTau_p4_.clear();
        vector<float> pts = Nano::GenVisTau_pt();
        vector<float> etas = Nano::GenVisTau_eta();
        vector<float> phis = Nano::GenVisTau_phi();
        vector<float> masses = Nano::GenVisTau_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenVisTau_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenVisTau_p4_ = true;
    }
    return v_GenVisTau_p4_;
}
const vector<float> &Nano::GenVisTau_phi() {
    if (!loaded_GenVisTau_phi_) {
        if (!b_GenVisTau_phi_) throw std::runtime_error("GenVisTau_phi branch doesn't exist");
        int bytes = b_GenVisTau_phi_->GetEntry(index);
        v_GenVisTau_phi_ = vector<float>(GenVisTau_phi_,GenVisTau_phi_+bytes/sizeof(GenVisTau_phi_[0]));
        loaded_GenVisTau_phi_ = true;
    }
    return v_GenVisTau_phi_;
}
const vector<float> &Nano::GenVisTau_pt() {
    if (!loaded_GenVisTau_pt_) {
        if (!b_GenVisTau_pt_) throw std::runtime_error("GenVisTau_pt branch doesn't exist");
        int bytes = b_GenVisTau_pt_->GetEntry(index);
        v_GenVisTau_pt_ = vector<float>(GenVisTau_pt_,GenVisTau_pt_+bytes/sizeof(GenVisTau_pt_[0]));
        loaded_GenVisTau_pt_ = true;
    }
    return v_GenVisTau_pt_;
}
const vector<int> &Nano::GenVisTau_status() {
    if (!loaded_GenVisTau_status_) {
        if (!b_GenVisTau_status_) throw std::runtime_error("GenVisTau_status branch doesn't exist");
        int bytes = b_GenVisTau_status_->GetEntry(index);
        v_GenVisTau_status_ = vector<int>(GenVisTau_status_,GenVisTau_status_+bytes/sizeof(GenVisTau_status_[0]));
        loaded_GenVisTau_status_ = true;
    }
    return v_GenVisTau_status_;
}
const float &Nano::Generator_binvar() {
    if (!loaded_Generator_binvar_) {
        if (!b_Generator_binvar_) throw std::runtime_error("Generator_binvar branch doesn't exist");
        b_Generator_binvar_->GetEntry(index);
        loaded_Generator_binvar_ = true;
    }
    return Generator_binvar_;
}
const int &Nano::Generator_id1() {
    if (!loaded_Generator_id1_) {
        if (!b_Generator_id1_) throw std::runtime_error("Generator_id1 branch doesn't exist");
        b_Generator_id1_->GetEntry(index);
        loaded_Generator_id1_ = true;
    }
    return Generator_id1_;
}
const int &Nano::Generator_id2() {
    if (!loaded_Generator_id2_) {
        if (!b_Generator_id2_) throw std::runtime_error("Generator_id2 branch doesn't exist");
        b_Generator_id2_->GetEntry(index);
        loaded_Generator_id2_ = true;
    }
    return Generator_id2_;
}
const float &Nano::Generator_scalePDF() {
    if (!loaded_Generator_scalePDF_) {
        if (!b_Generator_scalePDF_) throw std::runtime_error("Generator_scalePDF branch doesn't exist");
        b_Generator_scalePDF_->GetEntry(index);
        loaded_Generator_scalePDF_ = true;
    }
    return Generator_scalePDF_;
}
const float &Nano::Generator_weight() {
    if (!loaded_Generator_weight_) {
        if (!b_Generator_weight_) throw std::runtime_error("Generator_weight branch doesn't exist");
        b_Generator_weight_->GetEntry(index);
        loaded_Generator_weight_ = true;
    }
    return Generator_weight_;
}
const float &Nano::Generator_x1() {
    if (!loaded_Generator_x1_) {
        if (!b_Generator_x1_) throw std::runtime_error("Generator_x1 branch doesn't exist");
        b_Generator_x1_->GetEntry(index);
        loaded_Generator_x1_ = true;
    }
    return Generator_x1_;
}
const float &Nano::Generator_x2() {
    if (!loaded_Generator_x2_) {
        if (!b_Generator_x2_) throw std::runtime_error("Generator_x2 branch doesn't exist");
        b_Generator_x2_->GetEntry(index);
        loaded_Generator_x2_ = true;
    }
    return Generator_x2_;
}
const float &Nano::Generator_xpdf1() {
    if (!loaded_Generator_xpdf1_) {
        if (!b_Generator_xpdf1_) throw std::runtime_error("Generator_xpdf1 branch doesn't exist");
        b_Generator_xpdf1_->GetEntry(index);
        loaded_Generator_xpdf1_ = true;
    }
    return Generator_xpdf1_;
}
const float &Nano::Generator_xpdf2() {
    if (!loaded_Generator_xpdf2_) {
        if (!b_Generator_xpdf2_) throw std::runtime_error("Generator_xpdf2 branch doesn't exist");
        b_Generator_xpdf2_->GetEntry(index);
        loaded_Generator_xpdf2_ = true;
    }
    return Generator_xpdf2_;
}
const bool &Nano::HLT_AK4CaloJet100() {
    if (!loaded_HLT_AK4CaloJet100_) {
        if (!b_HLT_AK4CaloJet100_) throw std::runtime_error("HLT_AK4CaloJet100 branch doesn't exist");
        b_HLT_AK4CaloJet100_->GetEntry(index);
        loaded_HLT_AK4CaloJet100_ = true;
    }
    return HLT_AK4CaloJet100_;
}
const bool &Nano::HLT_AK4CaloJet120() {
    if (!loaded_HLT_AK4CaloJet120_) {
        if (!b_HLT_AK4CaloJet120_) throw std::runtime_error("HLT_AK4CaloJet120 branch doesn't exist");
        b_HLT_AK4CaloJet120_->GetEntry(index);
        loaded_HLT_AK4CaloJet120_ = true;
    }
    return HLT_AK4CaloJet120_;
}
const bool &Nano::HLT_AK4CaloJet30() {
    if (!loaded_HLT_AK4CaloJet30_) {
        if (!b_HLT_AK4CaloJet30_) throw std::runtime_error("HLT_AK4CaloJet30 branch doesn't exist");
        b_HLT_AK4CaloJet30_->GetEntry(index);
        loaded_HLT_AK4CaloJet30_ = true;
    }
    return HLT_AK4CaloJet30_;
}
const bool &Nano::HLT_AK4CaloJet40() {
    if (!loaded_HLT_AK4CaloJet40_) {
        if (!b_HLT_AK4CaloJet40_) throw std::runtime_error("HLT_AK4CaloJet40 branch doesn't exist");
        b_HLT_AK4CaloJet40_->GetEntry(index);
        loaded_HLT_AK4CaloJet40_ = true;
    }
    return HLT_AK4CaloJet40_;
}
const bool &Nano::HLT_AK4CaloJet50() {
    if (!loaded_HLT_AK4CaloJet50_) {
        if (!b_HLT_AK4CaloJet50_) throw std::runtime_error("HLT_AK4CaloJet50 branch doesn't exist");
        b_HLT_AK4CaloJet50_->GetEntry(index);
        loaded_HLT_AK4CaloJet50_ = true;
    }
    return HLT_AK4CaloJet50_;
}
const bool &Nano::HLT_AK4CaloJet80() {
    if (!loaded_HLT_AK4CaloJet80_) {
        if (!b_HLT_AK4CaloJet80_) throw std::runtime_error("HLT_AK4CaloJet80 branch doesn't exist");
        b_HLT_AK4CaloJet80_->GetEntry(index);
        loaded_HLT_AK4CaloJet80_ = true;
    }
    return HLT_AK4CaloJet80_;
}
const bool &Nano::HLT_AK4PFJet100() {
    if (!loaded_HLT_AK4PFJet100_) {
        if (!b_HLT_AK4PFJet100_) throw std::runtime_error("HLT_AK4PFJet100 branch doesn't exist");
        b_HLT_AK4PFJet100_->GetEntry(index);
        loaded_HLT_AK4PFJet100_ = true;
    }
    return HLT_AK4PFJet100_;
}
const bool &Nano::HLT_AK4PFJet120() {
    if (!loaded_HLT_AK4PFJet120_) {
        if (!b_HLT_AK4PFJet120_) throw std::runtime_error("HLT_AK4PFJet120 branch doesn't exist");
        b_HLT_AK4PFJet120_->GetEntry(index);
        loaded_HLT_AK4PFJet120_ = true;
    }
    return HLT_AK4PFJet120_;
}
const bool &Nano::HLT_AK4PFJet30() {
    if (!loaded_HLT_AK4PFJet30_) {
        if (!b_HLT_AK4PFJet30_) throw std::runtime_error("HLT_AK4PFJet30 branch doesn't exist");
        b_HLT_AK4PFJet30_->GetEntry(index);
        loaded_HLT_AK4PFJet30_ = true;
    }
    return HLT_AK4PFJet30_;
}
const bool &Nano::HLT_AK4PFJet50() {
    if (!loaded_HLT_AK4PFJet50_) {
        if (!b_HLT_AK4PFJet50_) throw std::runtime_error("HLT_AK4PFJet50 branch doesn't exist");
        b_HLT_AK4PFJet50_->GetEntry(index);
        loaded_HLT_AK4PFJet50_ = true;
    }
    return HLT_AK4PFJet50_;
}
const bool &Nano::HLT_AK4PFJet80() {
    if (!loaded_HLT_AK4PFJet80_) {
        if (!b_HLT_AK4PFJet80_) throw std::runtime_error("HLT_AK4PFJet80 branch doesn't exist");
        b_HLT_AK4PFJet80_->GetEntry(index);
        loaded_HLT_AK4PFJet80_ = true;
    }
    return HLT_AK4PFJet80_;
}
const bool &Nano::HLT_AK8PFHT750_TrimMass50() {
    if (!loaded_HLT_AK8PFHT750_TrimMass50_) {
        if (!b_HLT_AK8PFHT750_TrimMass50_) throw std::runtime_error("HLT_AK8PFHT750_TrimMass50 branch doesn't exist");
        b_HLT_AK8PFHT750_TrimMass50_->GetEntry(index);
        loaded_HLT_AK8PFHT750_TrimMass50_ = true;
    }
    return HLT_AK8PFHT750_TrimMass50_;
}
const bool &Nano::HLT_AK8PFHT800_TrimMass50() {
    if (!loaded_HLT_AK8PFHT800_TrimMass50_) {
        if (!b_HLT_AK8PFHT800_TrimMass50_) throw std::runtime_error("HLT_AK8PFHT800_TrimMass50 branch doesn't exist");
        b_HLT_AK8PFHT800_TrimMass50_->GetEntry(index);
        loaded_HLT_AK8PFHT800_TrimMass50_ = true;
    }
    return HLT_AK8PFHT800_TrimMass50_;
}
const bool &Nano::HLT_AK8PFHT850_TrimMass50() {
    if (!loaded_HLT_AK8PFHT850_TrimMass50_) {
        if (!b_HLT_AK8PFHT850_TrimMass50_) throw std::runtime_error("HLT_AK8PFHT850_TrimMass50 branch doesn't exist");
        b_HLT_AK8PFHT850_TrimMass50_->GetEntry(index);
        loaded_HLT_AK8PFHT850_TrimMass50_ = true;
    }
    return HLT_AK8PFHT850_TrimMass50_;
}
const bool &Nano::HLT_AK8PFHT900_TrimMass50() {
    if (!loaded_HLT_AK8PFHT900_TrimMass50_) {
        if (!b_HLT_AK8PFHT900_TrimMass50_) throw std::runtime_error("HLT_AK8PFHT900_TrimMass50 branch doesn't exist");
        b_HLT_AK8PFHT900_TrimMass50_->GetEntry(index);
        loaded_HLT_AK8PFHT900_TrimMass50_ = true;
    }
    return HLT_AK8PFHT900_TrimMass50_;
}
const bool &Nano::HLT_AK8PFJet140() {
    if (!loaded_HLT_AK8PFJet140_) {
        if (!b_HLT_AK8PFJet140_) throw std::runtime_error("HLT_AK8PFJet140 branch doesn't exist");
        b_HLT_AK8PFJet140_->GetEntry(index);
        loaded_HLT_AK8PFJet140_ = true;
    }
    return HLT_AK8PFJet140_;
}
const bool &Nano::HLT_AK8PFJet200() {
    if (!loaded_HLT_AK8PFJet200_) {
        if (!b_HLT_AK8PFJet200_) throw std::runtime_error("HLT_AK8PFJet200 branch doesn't exist");
        b_HLT_AK8PFJet200_->GetEntry(index);
        loaded_HLT_AK8PFJet200_ = true;
    }
    return HLT_AK8PFJet200_;
}
const bool &Nano::HLT_AK8PFJet260() {
    if (!loaded_HLT_AK8PFJet260_) {
        if (!b_HLT_AK8PFJet260_) throw std::runtime_error("HLT_AK8PFJet260 branch doesn't exist");
        b_HLT_AK8PFJet260_->GetEntry(index);
        loaded_HLT_AK8PFJet260_ = true;
    }
    return HLT_AK8PFJet260_;
}
const bool &Nano::HLT_AK8PFJet320() {
    if (!loaded_HLT_AK8PFJet320_) {
        if (!b_HLT_AK8PFJet320_) throw std::runtime_error("HLT_AK8PFJet320 branch doesn't exist");
        b_HLT_AK8PFJet320_->GetEntry(index);
        loaded_HLT_AK8PFJet320_ = true;
    }
    return HLT_AK8PFJet320_;
}
const bool &Nano::HLT_AK8PFJet330_PFAK8BTagCSV_p1() {
    if (!loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p1_) {
        if (!b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_) throw std::runtime_error("HLT_AK8PFJet330_PFAK8BTagCSV_p1 branch doesn't exist");
        b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_->GetEntry(index);
        loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p1_ = true;
    }
    return HLT_AK8PFJet330_PFAK8BTagCSV_p1_;
}
const bool &Nano::HLT_AK8PFJet330_PFAK8BTagCSV_p17() {
    if (!loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p17_) {
        if (!b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_) throw std::runtime_error("HLT_AK8PFJet330_PFAK8BTagCSV_p17 branch doesn't exist");
        b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_->GetEntry(index);
        loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p17_ = true;
    }
    return HLT_AK8PFJet330_PFAK8BTagCSV_p17_;
}
const bool &Nano::HLT_AK8PFJet360_TrimMass30() {
    if (!loaded_HLT_AK8PFJet360_TrimMass30_) {
        if (!b_HLT_AK8PFJet360_TrimMass30_) throw std::runtime_error("HLT_AK8PFJet360_TrimMass30 branch doesn't exist");
        b_HLT_AK8PFJet360_TrimMass30_->GetEntry(index);
        loaded_HLT_AK8PFJet360_TrimMass30_ = true;
    }
    return HLT_AK8PFJet360_TrimMass30_;
}
const bool &Nano::HLT_AK8PFJet380_TrimMass30() {
    if (!loaded_HLT_AK8PFJet380_TrimMass30_) {
        if (!b_HLT_AK8PFJet380_TrimMass30_) throw std::runtime_error("HLT_AK8PFJet380_TrimMass30 branch doesn't exist");
        b_HLT_AK8PFJet380_TrimMass30_->GetEntry(index);
        loaded_HLT_AK8PFJet380_TrimMass30_ = true;
    }
    return HLT_AK8PFJet380_TrimMass30_;
}
const bool &Nano::HLT_AK8PFJet40() {
    if (!loaded_HLT_AK8PFJet40_) {
        if (!b_HLT_AK8PFJet40_) throw std::runtime_error("HLT_AK8PFJet40 branch doesn't exist");
        b_HLT_AK8PFJet40_->GetEntry(index);
        loaded_HLT_AK8PFJet40_ = true;
    }
    return HLT_AK8PFJet40_;
}
const bool &Nano::HLT_AK8PFJet400() {
    if (!loaded_HLT_AK8PFJet400_) {
        if (!b_HLT_AK8PFJet400_) throw std::runtime_error("HLT_AK8PFJet400 branch doesn't exist");
        b_HLT_AK8PFJet400_->GetEntry(index);
        loaded_HLT_AK8PFJet400_ = true;
    }
    return HLT_AK8PFJet400_;
}
const bool &Nano::HLT_AK8PFJet400_TrimMass30() {
    if (!loaded_HLT_AK8PFJet400_TrimMass30_) {
        if (!b_HLT_AK8PFJet400_TrimMass30_) throw std::runtime_error("HLT_AK8PFJet400_TrimMass30 branch doesn't exist");
        b_HLT_AK8PFJet400_TrimMass30_->GetEntry(index);
        loaded_HLT_AK8PFJet400_TrimMass30_ = true;
    }
    return HLT_AK8PFJet400_TrimMass30_;
}
const bool &Nano::HLT_AK8PFJet420_TrimMass30() {
    if (!loaded_HLT_AK8PFJet420_TrimMass30_) {
        if (!b_HLT_AK8PFJet420_TrimMass30_) throw std::runtime_error("HLT_AK8PFJet420_TrimMass30 branch doesn't exist");
        b_HLT_AK8PFJet420_TrimMass30_->GetEntry(index);
        loaded_HLT_AK8PFJet420_TrimMass30_ = true;
    }
    return HLT_AK8PFJet420_TrimMass30_;
}
const bool &Nano::HLT_AK8PFJet450() {
    if (!loaded_HLT_AK8PFJet450_) {
        if (!b_HLT_AK8PFJet450_) throw std::runtime_error("HLT_AK8PFJet450 branch doesn't exist");
        b_HLT_AK8PFJet450_->GetEntry(index);
        loaded_HLT_AK8PFJet450_ = true;
    }
    return HLT_AK8PFJet450_;
}
const bool &Nano::HLT_AK8PFJet500() {
    if (!loaded_HLT_AK8PFJet500_) {
        if (!b_HLT_AK8PFJet500_) throw std::runtime_error("HLT_AK8PFJet500 branch doesn't exist");
        b_HLT_AK8PFJet500_->GetEntry(index);
        loaded_HLT_AK8PFJet500_ = true;
    }
    return HLT_AK8PFJet500_;
}
const bool &Nano::HLT_AK8PFJet550() {
    if (!loaded_HLT_AK8PFJet550_) {
        if (!b_HLT_AK8PFJet550_) throw std::runtime_error("HLT_AK8PFJet550 branch doesn't exist");
        b_HLT_AK8PFJet550_->GetEntry(index);
        loaded_HLT_AK8PFJet550_ = true;
    }
    return HLT_AK8PFJet550_;
}
const bool &Nano::HLT_AK8PFJet60() {
    if (!loaded_HLT_AK8PFJet60_) {
        if (!b_HLT_AK8PFJet60_) throw std::runtime_error("HLT_AK8PFJet60 branch doesn't exist");
        b_HLT_AK8PFJet60_->GetEntry(index);
        loaded_HLT_AK8PFJet60_ = true;
    }
    return HLT_AK8PFJet60_;
}
const bool &Nano::HLT_AK8PFJet80() {
    if (!loaded_HLT_AK8PFJet80_) {
        if (!b_HLT_AK8PFJet80_) throw std::runtime_error("HLT_AK8PFJet80 branch doesn't exist");
        b_HLT_AK8PFJet80_->GetEntry(index);
        loaded_HLT_AK8PFJet80_ = true;
    }
    return HLT_AK8PFJet80_;
}
const bool &Nano::HLT_AK8PFJetFwd140() {
    if (!loaded_HLT_AK8PFJetFwd140_) {
        if (!b_HLT_AK8PFJetFwd140_) throw std::runtime_error("HLT_AK8PFJetFwd140 branch doesn't exist");
        b_HLT_AK8PFJetFwd140_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd140_ = true;
    }
    return HLT_AK8PFJetFwd140_;
}
const bool &Nano::HLT_AK8PFJetFwd200() {
    if (!loaded_HLT_AK8PFJetFwd200_) {
        if (!b_HLT_AK8PFJetFwd200_) throw std::runtime_error("HLT_AK8PFJetFwd200 branch doesn't exist");
        b_HLT_AK8PFJetFwd200_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd200_ = true;
    }
    return HLT_AK8PFJetFwd200_;
}
const bool &Nano::HLT_AK8PFJetFwd260() {
    if (!loaded_HLT_AK8PFJetFwd260_) {
        if (!b_HLT_AK8PFJetFwd260_) throw std::runtime_error("HLT_AK8PFJetFwd260 branch doesn't exist");
        b_HLT_AK8PFJetFwd260_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd260_ = true;
    }
    return HLT_AK8PFJetFwd260_;
}
const bool &Nano::HLT_AK8PFJetFwd320() {
    if (!loaded_HLT_AK8PFJetFwd320_) {
        if (!b_HLT_AK8PFJetFwd320_) throw std::runtime_error("HLT_AK8PFJetFwd320 branch doesn't exist");
        b_HLT_AK8PFJetFwd320_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd320_ = true;
    }
    return HLT_AK8PFJetFwd320_;
}
const bool &Nano::HLT_AK8PFJetFwd40() {
    if (!loaded_HLT_AK8PFJetFwd40_) {
        if (!b_HLT_AK8PFJetFwd40_) throw std::runtime_error("HLT_AK8PFJetFwd40 branch doesn't exist");
        b_HLT_AK8PFJetFwd40_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd40_ = true;
    }
    return HLT_AK8PFJetFwd40_;
}
const bool &Nano::HLT_AK8PFJetFwd400() {
    if (!loaded_HLT_AK8PFJetFwd400_) {
        if (!b_HLT_AK8PFJetFwd400_) throw std::runtime_error("HLT_AK8PFJetFwd400 branch doesn't exist");
        b_HLT_AK8PFJetFwd400_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd400_ = true;
    }
    return HLT_AK8PFJetFwd400_;
}
const bool &Nano::HLT_AK8PFJetFwd450() {
    if (!loaded_HLT_AK8PFJetFwd450_) {
        if (!b_HLT_AK8PFJetFwd450_) throw std::runtime_error("HLT_AK8PFJetFwd450 branch doesn't exist");
        b_HLT_AK8PFJetFwd450_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd450_ = true;
    }
    return HLT_AK8PFJetFwd450_;
}
const bool &Nano::HLT_AK8PFJetFwd500() {
    if (!loaded_HLT_AK8PFJetFwd500_) {
        if (!b_HLT_AK8PFJetFwd500_) throw std::runtime_error("HLT_AK8PFJetFwd500 branch doesn't exist");
        b_HLT_AK8PFJetFwd500_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd500_ = true;
    }
    return HLT_AK8PFJetFwd500_;
}
const bool &Nano::HLT_AK8PFJetFwd60() {
    if (!loaded_HLT_AK8PFJetFwd60_) {
        if (!b_HLT_AK8PFJetFwd60_) throw std::runtime_error("HLT_AK8PFJetFwd60 branch doesn't exist");
        b_HLT_AK8PFJetFwd60_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd60_ = true;
    }
    return HLT_AK8PFJetFwd60_;
}
const bool &Nano::HLT_AK8PFJetFwd80() {
    if (!loaded_HLT_AK8PFJetFwd80_) {
        if (!b_HLT_AK8PFJetFwd80_) throw std::runtime_error("HLT_AK8PFJetFwd80 branch doesn't exist");
        b_HLT_AK8PFJetFwd80_->GetEntry(index);
        loaded_HLT_AK8PFJetFwd80_ = true;
    }
    return HLT_AK8PFJetFwd80_;
}
const bool &Nano::HLT_BTagMu_AK4DiJet110_Mu5() {
    if (!loaded_HLT_BTagMu_AK4DiJet110_Mu5_) {
        if (!b_HLT_BTagMu_AK4DiJet110_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4DiJet110_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4DiJet110_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4DiJet110_Mu5_ = true;
    }
    return HLT_BTagMu_AK4DiJet110_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK4DiJet170_Mu5() {
    if (!loaded_HLT_BTagMu_AK4DiJet170_Mu5_) {
        if (!b_HLT_BTagMu_AK4DiJet170_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4DiJet170_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4DiJet170_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4DiJet170_Mu5_ = true;
    }
    return HLT_BTagMu_AK4DiJet170_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK4DiJet20_Mu5() {
    if (!loaded_HLT_BTagMu_AK4DiJet20_Mu5_) {
        if (!b_HLT_BTagMu_AK4DiJet20_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4DiJet20_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4DiJet20_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4DiJet20_Mu5_ = true;
    }
    return HLT_BTagMu_AK4DiJet20_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK4DiJet40_Mu5() {
    if (!loaded_HLT_BTagMu_AK4DiJet40_Mu5_) {
        if (!b_HLT_BTagMu_AK4DiJet40_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4DiJet40_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4DiJet40_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4DiJet40_Mu5_ = true;
    }
    return HLT_BTagMu_AK4DiJet40_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK4DiJet70_Mu5() {
    if (!loaded_HLT_BTagMu_AK4DiJet70_Mu5_) {
        if (!b_HLT_BTagMu_AK4DiJet70_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4DiJet70_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4DiJet70_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4DiJet70_Mu5_ = true;
    }
    return HLT_BTagMu_AK4DiJet70_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK4Jet300_Mu5() {
    if (!loaded_HLT_BTagMu_AK4Jet300_Mu5_) {
        if (!b_HLT_BTagMu_AK4Jet300_Mu5_) throw std::runtime_error("HLT_BTagMu_AK4Jet300_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK4Jet300_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK4Jet300_Mu5_ = true;
    }
    return HLT_BTagMu_AK4Jet300_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK8DiJet170_Mu5() {
    if (!loaded_HLT_BTagMu_AK8DiJet170_Mu5_) {
        if (!b_HLT_BTagMu_AK8DiJet170_Mu5_) throw std::runtime_error("HLT_BTagMu_AK8DiJet170_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK8DiJet170_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK8DiJet170_Mu5_ = true;
    }
    return HLT_BTagMu_AK8DiJet170_Mu5_;
}
const bool &Nano::HLT_BTagMu_AK8Jet300_Mu5() {
    if (!loaded_HLT_BTagMu_AK8Jet300_Mu5_) {
        if (!b_HLT_BTagMu_AK8Jet300_Mu5_) throw std::runtime_error("HLT_BTagMu_AK8Jet300_Mu5 branch doesn't exist");
        b_HLT_BTagMu_AK8Jet300_Mu5_->GetEntry(index);
        loaded_HLT_BTagMu_AK8Jet300_Mu5_ = true;
    }
    return HLT_BTagMu_AK8Jet300_Mu5_;
}
const bool &Nano::HLT_CaloJet500_NoJetID() {
    if (!loaded_HLT_CaloJet500_NoJetID_) {
        if (!b_HLT_CaloJet500_NoJetID_) throw std::runtime_error("HLT_CaloJet500_NoJetID branch doesn't exist");
        b_HLT_CaloJet500_NoJetID_->GetEntry(index);
        loaded_HLT_CaloJet500_NoJetID_ = true;
    }
    return HLT_CaloJet500_NoJetID_;
}
const bool &Nano::HLT_CaloJet550_NoJetID() {
    if (!loaded_HLT_CaloJet550_NoJetID_) {
        if (!b_HLT_CaloJet550_NoJetID_) throw std::runtime_error("HLT_CaloJet550_NoJetID branch doesn't exist");
        b_HLT_CaloJet550_NoJetID_->GetEntry(index);
        loaded_HLT_CaloJet550_NoJetID_ = true;
    }
    return HLT_CaloJet550_NoJetID_;
}
const bool &Nano::HLT_CaloMET100_HBHECleaned() {
    if (!loaded_HLT_CaloMET100_HBHECleaned_) {
        if (!b_HLT_CaloMET100_HBHECleaned_) throw std::runtime_error("HLT_CaloMET100_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET100_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET100_HBHECleaned_ = true;
    }
    return HLT_CaloMET100_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET100_NotCleaned() {
    if (!loaded_HLT_CaloMET100_NotCleaned_) {
        if (!b_HLT_CaloMET100_NotCleaned_) throw std::runtime_error("HLT_CaloMET100_NotCleaned branch doesn't exist");
        b_HLT_CaloMET100_NotCleaned_->GetEntry(index);
        loaded_HLT_CaloMET100_NotCleaned_ = true;
    }
    return HLT_CaloMET100_NotCleaned_;
}
const bool &Nano::HLT_CaloMET110_NotCleaned() {
    if (!loaded_HLT_CaloMET110_NotCleaned_) {
        if (!b_HLT_CaloMET110_NotCleaned_) throw std::runtime_error("HLT_CaloMET110_NotCleaned branch doesn't exist");
        b_HLT_CaloMET110_NotCleaned_->GetEntry(index);
        loaded_HLT_CaloMET110_NotCleaned_ = true;
    }
    return HLT_CaloMET110_NotCleaned_;
}
const bool &Nano::HLT_CaloMET250_HBHECleaned() {
    if (!loaded_HLT_CaloMET250_HBHECleaned_) {
        if (!b_HLT_CaloMET250_HBHECleaned_) throw std::runtime_error("HLT_CaloMET250_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET250_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET250_HBHECleaned_ = true;
    }
    return HLT_CaloMET250_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET250_NotCleaned() {
    if (!loaded_HLT_CaloMET250_NotCleaned_) {
        if (!b_HLT_CaloMET250_NotCleaned_) throw std::runtime_error("HLT_CaloMET250_NotCleaned branch doesn't exist");
        b_HLT_CaloMET250_NotCleaned_->GetEntry(index);
        loaded_HLT_CaloMET250_NotCleaned_ = true;
    }
    return HLT_CaloMET250_NotCleaned_;
}
const bool &Nano::HLT_CaloMET300_HBHECleaned() {
    if (!loaded_HLT_CaloMET300_HBHECleaned_) {
        if (!b_HLT_CaloMET300_HBHECleaned_) throw std::runtime_error("HLT_CaloMET300_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET300_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET300_HBHECleaned_ = true;
    }
    return HLT_CaloMET300_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET350_HBHECleaned() {
    if (!loaded_HLT_CaloMET350_HBHECleaned_) {
        if (!b_HLT_CaloMET350_HBHECleaned_) throw std::runtime_error("HLT_CaloMET350_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET350_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET350_HBHECleaned_ = true;
    }
    return HLT_CaloMET350_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET70_HBHECleaned() {
    if (!loaded_HLT_CaloMET70_HBHECleaned_) {
        if (!b_HLT_CaloMET70_HBHECleaned_) throw std::runtime_error("HLT_CaloMET70_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET70_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET70_HBHECleaned_ = true;
    }
    return HLT_CaloMET70_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET80_HBHECleaned() {
    if (!loaded_HLT_CaloMET80_HBHECleaned_) {
        if (!b_HLT_CaloMET80_HBHECleaned_) throw std::runtime_error("HLT_CaloMET80_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET80_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET80_HBHECleaned_ = true;
    }
    return HLT_CaloMET80_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET80_NotCleaned() {
    if (!loaded_HLT_CaloMET80_NotCleaned_) {
        if (!b_HLT_CaloMET80_NotCleaned_) throw std::runtime_error("HLT_CaloMET80_NotCleaned branch doesn't exist");
        b_HLT_CaloMET80_NotCleaned_->GetEntry(index);
        loaded_HLT_CaloMET80_NotCleaned_ = true;
    }
    return HLT_CaloMET80_NotCleaned_;
}
const bool &Nano::HLT_CaloMET90_HBHECleaned() {
    if (!loaded_HLT_CaloMET90_HBHECleaned_) {
        if (!b_HLT_CaloMET90_HBHECleaned_) throw std::runtime_error("HLT_CaloMET90_HBHECleaned branch doesn't exist");
        b_HLT_CaloMET90_HBHECleaned_->GetEntry(index);
        loaded_HLT_CaloMET90_HBHECleaned_ = true;
    }
    return HLT_CaloMET90_HBHECleaned_;
}
const bool &Nano::HLT_CaloMET90_NotCleaned() {
    if (!loaded_HLT_CaloMET90_NotCleaned_) {
        if (!b_HLT_CaloMET90_NotCleaned_) throw std::runtime_error("HLT_CaloMET90_NotCleaned branch doesn't exist");
        b_HLT_CaloMET90_NotCleaned_->GetEntry(index);
        loaded_HLT_CaloMET90_NotCleaned_ = true;
    }
    return HLT_CaloMET90_NotCleaned_;
}
const bool &Nano::HLT_CaloMHT90() {
    if (!loaded_HLT_CaloMHT90_) {
        if (!b_HLT_CaloMHT90_) throw std::runtime_error("HLT_CaloMHT90 branch doesn't exist");
        b_HLT_CaloMHT90_->GetEntry(index);
        loaded_HLT_CaloMHT90_ = true;
    }
    return HLT_CaloMHT90_;
}
const bool &Nano::HLT_DiEle27_WPTightCaloOnly_L1DoubleEG() {
    if (!loaded_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_) {
        if (!b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_) throw std::runtime_error("HLT_DiEle27_WPTightCaloOnly_L1DoubleEG branch doesn't exist");
        b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_->GetEntry(index);
        loaded_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_ = true;
    }
    return HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_;
}
const bool &Nano::HLT_DiJet110_35_Mjj650_PFMET110() {
    if (!loaded_HLT_DiJet110_35_Mjj650_PFMET110_) {
        if (!b_HLT_DiJet110_35_Mjj650_PFMET110_) throw std::runtime_error("HLT_DiJet110_35_Mjj650_PFMET110 branch doesn't exist");
        b_HLT_DiJet110_35_Mjj650_PFMET110_->GetEntry(index);
        loaded_HLT_DiJet110_35_Mjj650_PFMET110_ = true;
    }
    return HLT_DiJet110_35_Mjj650_PFMET110_;
}
const bool &Nano::HLT_DiJet110_35_Mjj650_PFMET120() {
    if (!loaded_HLT_DiJet110_35_Mjj650_PFMET120_) {
        if (!b_HLT_DiJet110_35_Mjj650_PFMET120_) throw std::runtime_error("HLT_DiJet110_35_Mjj650_PFMET120 branch doesn't exist");
        b_HLT_DiJet110_35_Mjj650_PFMET120_->GetEntry(index);
        loaded_HLT_DiJet110_35_Mjj650_PFMET120_ = true;
    }
    return HLT_DiJet110_35_Mjj650_PFMET120_;
}
const bool &Nano::HLT_DiJet110_35_Mjj650_PFMET130() {
    if (!loaded_HLT_DiJet110_35_Mjj650_PFMET130_) {
        if (!b_HLT_DiJet110_35_Mjj650_PFMET130_) throw std::runtime_error("HLT_DiJet110_35_Mjj650_PFMET130 branch doesn't exist");
        b_HLT_DiJet110_35_Mjj650_PFMET130_->GetEntry(index);
        loaded_HLT_DiJet110_35_Mjj650_PFMET130_ = true;
    }
    return HLT_DiJet110_35_Mjj650_PFMET130_;
}
const bool &Nano::HLT_DiMu9_Ele9_CaloIdL_TrackIdL() {
    if (!loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_) {
        if (!b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_) throw std::runtime_error("HLT_DiMu9_Ele9_CaloIdL_TrackIdL branch doesn't exist");
        b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_->GetEntry(index);
        loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_ = true;
    }
    return HLT_DiMu9_Ele9_CaloIdL_TrackIdL_;
}
const bool &Nano::HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ() {
    if (!loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_) {
        if (!b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_) throw std::runtime_error("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ branch doesn't exist");
        b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_->GetEntry(index);
        loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_ = true;
    }
    return HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_;
}
const bool &Nano::HLT_DiPFJet15_FBEta3_NoCaloMatched() {
    if (!loaded_HLT_DiPFJet15_FBEta3_NoCaloMatched_) {
        if (!b_HLT_DiPFJet15_FBEta3_NoCaloMatched_) throw std::runtime_error("HLT_DiPFJet15_FBEta3_NoCaloMatched branch doesn't exist");
        b_HLT_DiPFJet15_FBEta3_NoCaloMatched_->GetEntry(index);
        loaded_HLT_DiPFJet15_FBEta3_NoCaloMatched_ = true;
    }
    return HLT_DiPFJet15_FBEta3_NoCaloMatched_;
}
const bool &Nano::HLT_DiPFJet15_NoCaloMatched() {
    if (!loaded_HLT_DiPFJet15_NoCaloMatched_) {
        if (!b_HLT_DiPFJet15_NoCaloMatched_) throw std::runtime_error("HLT_DiPFJet15_NoCaloMatched branch doesn't exist");
        b_HLT_DiPFJet15_NoCaloMatched_->GetEntry(index);
        loaded_HLT_DiPFJet15_NoCaloMatched_ = true;
    }
    return HLT_DiPFJet15_NoCaloMatched_;
}
const bool &Nano::HLT_DiPFJet25_FBEta3_NoCaloMatched() {
    if (!loaded_HLT_DiPFJet25_FBEta3_NoCaloMatched_) {
        if (!b_HLT_DiPFJet25_FBEta3_NoCaloMatched_) throw std::runtime_error("HLT_DiPFJet25_FBEta3_NoCaloMatched branch doesn't exist");
        b_HLT_DiPFJet25_FBEta3_NoCaloMatched_->GetEntry(index);
        loaded_HLT_DiPFJet25_FBEta3_NoCaloMatched_ = true;
    }
    return HLT_DiPFJet25_FBEta3_NoCaloMatched_;
}
const bool &Nano::HLT_DiPFJet25_NoCaloMatched() {
    if (!loaded_HLT_DiPFJet25_NoCaloMatched_) {
        if (!b_HLT_DiPFJet25_NoCaloMatched_) throw std::runtime_error("HLT_DiPFJet25_NoCaloMatched branch doesn't exist");
        b_HLT_DiPFJet25_NoCaloMatched_->GetEntry(index);
        loaded_HLT_DiPFJet25_NoCaloMatched_ = true;
    }
    return HLT_DiPFJet25_NoCaloMatched_;
}
const bool &Nano::HLT_DiPFJetAve100_HFJEC() {
    if (!loaded_HLT_DiPFJetAve100_HFJEC_) {
        if (!b_HLT_DiPFJetAve100_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve100_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve100_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve100_HFJEC_ = true;
    }
    return HLT_DiPFJetAve100_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve140() {
    if (!loaded_HLT_DiPFJetAve140_) {
        if (!b_HLT_DiPFJetAve140_) throw std::runtime_error("HLT_DiPFJetAve140 branch doesn't exist");
        b_HLT_DiPFJetAve140_->GetEntry(index);
        loaded_HLT_DiPFJetAve140_ = true;
    }
    return HLT_DiPFJetAve140_;
}
const bool &Nano::HLT_DiPFJetAve15_HFJEC() {
    if (!loaded_HLT_DiPFJetAve15_HFJEC_) {
        if (!b_HLT_DiPFJetAve15_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve15_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve15_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve15_HFJEC_ = true;
    }
    return HLT_DiPFJetAve15_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve160_HFJEC() {
    if (!loaded_HLT_DiPFJetAve160_HFJEC_) {
        if (!b_HLT_DiPFJetAve160_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve160_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve160_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve160_HFJEC_ = true;
    }
    return HLT_DiPFJetAve160_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve200() {
    if (!loaded_HLT_DiPFJetAve200_) {
        if (!b_HLT_DiPFJetAve200_) throw std::runtime_error("HLT_DiPFJetAve200 branch doesn't exist");
        b_HLT_DiPFJetAve200_->GetEntry(index);
        loaded_HLT_DiPFJetAve200_ = true;
    }
    return HLT_DiPFJetAve200_;
}
const bool &Nano::HLT_DiPFJetAve220_HFJEC() {
    if (!loaded_HLT_DiPFJetAve220_HFJEC_) {
        if (!b_HLT_DiPFJetAve220_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve220_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve220_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve220_HFJEC_ = true;
    }
    return HLT_DiPFJetAve220_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve25_HFJEC() {
    if (!loaded_HLT_DiPFJetAve25_HFJEC_) {
        if (!b_HLT_DiPFJetAve25_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve25_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve25_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve25_HFJEC_ = true;
    }
    return HLT_DiPFJetAve25_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve260() {
    if (!loaded_HLT_DiPFJetAve260_) {
        if (!b_HLT_DiPFJetAve260_) throw std::runtime_error("HLT_DiPFJetAve260 branch doesn't exist");
        b_HLT_DiPFJetAve260_->GetEntry(index);
        loaded_HLT_DiPFJetAve260_ = true;
    }
    return HLT_DiPFJetAve260_;
}
const bool &Nano::HLT_DiPFJetAve300_HFJEC() {
    if (!loaded_HLT_DiPFJetAve300_HFJEC_) {
        if (!b_HLT_DiPFJetAve300_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve300_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve300_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve300_HFJEC_ = true;
    }
    return HLT_DiPFJetAve300_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve320() {
    if (!loaded_HLT_DiPFJetAve320_) {
        if (!b_HLT_DiPFJetAve320_) throw std::runtime_error("HLT_DiPFJetAve320 branch doesn't exist");
        b_HLT_DiPFJetAve320_->GetEntry(index);
        loaded_HLT_DiPFJetAve320_ = true;
    }
    return HLT_DiPFJetAve320_;
}
const bool &Nano::HLT_DiPFJetAve35_HFJEC() {
    if (!loaded_HLT_DiPFJetAve35_HFJEC_) {
        if (!b_HLT_DiPFJetAve35_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve35_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve35_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve35_HFJEC_ = true;
    }
    return HLT_DiPFJetAve35_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve40() {
    if (!loaded_HLT_DiPFJetAve40_) {
        if (!b_HLT_DiPFJetAve40_) throw std::runtime_error("HLT_DiPFJetAve40 branch doesn't exist");
        b_HLT_DiPFJetAve40_->GetEntry(index);
        loaded_HLT_DiPFJetAve40_ = true;
    }
    return HLT_DiPFJetAve40_;
}
const bool &Nano::HLT_DiPFJetAve400() {
    if (!loaded_HLT_DiPFJetAve400_) {
        if (!b_HLT_DiPFJetAve400_) throw std::runtime_error("HLT_DiPFJetAve400 branch doesn't exist");
        b_HLT_DiPFJetAve400_->GetEntry(index);
        loaded_HLT_DiPFJetAve400_ = true;
    }
    return HLT_DiPFJetAve400_;
}
const bool &Nano::HLT_DiPFJetAve500() {
    if (!loaded_HLT_DiPFJetAve500_) {
        if (!b_HLT_DiPFJetAve500_) throw std::runtime_error("HLT_DiPFJetAve500 branch doesn't exist");
        b_HLT_DiPFJetAve500_->GetEntry(index);
        loaded_HLT_DiPFJetAve500_ = true;
    }
    return HLT_DiPFJetAve500_;
}
const bool &Nano::HLT_DiPFJetAve60() {
    if (!loaded_HLT_DiPFJetAve60_) {
        if (!b_HLT_DiPFJetAve60_) throw std::runtime_error("HLT_DiPFJetAve60 branch doesn't exist");
        b_HLT_DiPFJetAve60_->GetEntry(index);
        loaded_HLT_DiPFJetAve60_ = true;
    }
    return HLT_DiPFJetAve60_;
}
const bool &Nano::HLT_DiPFJetAve60_HFJEC() {
    if (!loaded_HLT_DiPFJetAve60_HFJEC_) {
        if (!b_HLT_DiPFJetAve60_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve60_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve60_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve60_HFJEC_ = true;
    }
    return HLT_DiPFJetAve60_HFJEC_;
}
const bool &Nano::HLT_DiPFJetAve80() {
    if (!loaded_HLT_DiPFJetAve80_) {
        if (!b_HLT_DiPFJetAve80_) throw std::runtime_error("HLT_DiPFJetAve80 branch doesn't exist");
        b_HLT_DiPFJetAve80_->GetEntry(index);
        loaded_HLT_DiPFJetAve80_ = true;
    }
    return HLT_DiPFJetAve80_;
}
const bool &Nano::HLT_DiPFJetAve80_HFJEC() {
    if (!loaded_HLT_DiPFJetAve80_HFJEC_) {
        if (!b_HLT_DiPFJetAve80_HFJEC_) throw std::runtime_error("HLT_DiPFJetAve80_HFJEC branch doesn't exist");
        b_HLT_DiPFJetAve80_HFJEC_->GetEntry(index);
        loaded_HLT_DiPFJetAve80_HFJEC_ = true;
    }
    return HLT_DiPFJetAve80_HFJEC_;
}
const bool &Nano::HLT_DiSC30_18_EIso_AND_HE_Mass70() {
    if (!loaded_HLT_DiSC30_18_EIso_AND_HE_Mass70_) {
        if (!b_HLT_DiSC30_18_EIso_AND_HE_Mass70_) throw std::runtime_error("HLT_DiSC30_18_EIso_AND_HE_Mass70 branch doesn't exist");
        b_HLT_DiSC30_18_EIso_AND_HE_Mass70_->GetEntry(index);
        loaded_HLT_DiSC30_18_EIso_AND_HE_Mass70_ = true;
    }
    return HLT_DiSC30_18_EIso_AND_HE_Mass70_;
}
const bool &Nano::HLT_Dimuon0_Jpsi() {
    if (!loaded_HLT_Dimuon0_Jpsi_) {
        if (!b_HLT_Dimuon0_Jpsi_) throw std::runtime_error("HLT_Dimuon0_Jpsi branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_ = true;
    }
    return HLT_Dimuon0_Jpsi_;
}
const bool &Nano::HLT_Dimuon0_Jpsi3p5_Muon2() {
    if (!loaded_HLT_Dimuon0_Jpsi3p5_Muon2_) {
        if (!b_HLT_Dimuon0_Jpsi3p5_Muon2_) throw std::runtime_error("HLT_Dimuon0_Jpsi3p5_Muon2 branch doesn't exist");
        b_HLT_Dimuon0_Jpsi3p5_Muon2_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi3p5_Muon2_ = true;
    }
    return HLT_Dimuon0_Jpsi3p5_Muon2_;
}
const bool &Nano::HLT_Dimuon0_Jpsi_L1_4R_0er1p5R() {
    if (!loaded_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_) {
        if (!b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_) throw std::runtime_error("HLT_Dimuon0_Jpsi_L1_4R_0er1p5R branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_ = true;
    }
    return HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_;
}
const bool &Nano::HLT_Dimuon0_Jpsi_L1_NoOS() {
    if (!loaded_HLT_Dimuon0_Jpsi_L1_NoOS_) {
        if (!b_HLT_Dimuon0_Jpsi_L1_NoOS_) throw std::runtime_error("HLT_Dimuon0_Jpsi_L1_NoOS branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_L1_NoOS_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_L1_NoOS_ = true;
    }
    return HLT_Dimuon0_Jpsi_L1_NoOS_;
}
const bool &Nano::HLT_Dimuon0_Jpsi_NoVertexing() {
    if (!loaded_HLT_Dimuon0_Jpsi_NoVertexing_) {
        if (!b_HLT_Dimuon0_Jpsi_NoVertexing_) throw std::runtime_error("HLT_Dimuon0_Jpsi_NoVertexing branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_NoVertexing_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_NoVertexing_ = true;
    }
    return HLT_Dimuon0_Jpsi_NoVertexing_;
}
const bool &Nano::HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R() {
    if (!loaded_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_) {
        if (!b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_) throw std::runtime_error("HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_ = true;
    }
    return HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_;
}
const bool &Nano::HLT_Dimuon0_Jpsi_NoVertexing_NoOS() {
    if (!loaded_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_) {
        if (!b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_) throw std::runtime_error("HLT_Dimuon0_Jpsi_NoVertexing_NoOS branch doesn't exist");
        b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_->GetEntry(index);
        loaded_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_ = true;
    }
    return HLT_Dimuon0_Jpsi_NoVertexing_NoOS_;
}
const bool &Nano::HLT_Dimuon0_LowMass() {
    if (!loaded_HLT_Dimuon0_LowMass_) {
        if (!b_HLT_Dimuon0_LowMass_) throw std::runtime_error("HLT_Dimuon0_LowMass branch doesn't exist");
        b_HLT_Dimuon0_LowMass_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_ = true;
    }
    return HLT_Dimuon0_LowMass_;
}
const bool &Nano::HLT_Dimuon0_LowMass_L1_0er1p5() {
    if (!loaded_HLT_Dimuon0_LowMass_L1_0er1p5_) {
        if (!b_HLT_Dimuon0_LowMass_L1_0er1p5_) throw std::runtime_error("HLT_Dimuon0_LowMass_L1_0er1p5 branch doesn't exist");
        b_HLT_Dimuon0_LowMass_L1_0er1p5_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_L1_0er1p5_ = true;
    }
    return HLT_Dimuon0_LowMass_L1_0er1p5_;
}
const bool &Nano::HLT_Dimuon0_LowMass_L1_0er1p5R() {
    if (!loaded_HLT_Dimuon0_LowMass_L1_0er1p5R_) {
        if (!b_HLT_Dimuon0_LowMass_L1_0er1p5R_) throw std::runtime_error("HLT_Dimuon0_LowMass_L1_0er1p5R branch doesn't exist");
        b_HLT_Dimuon0_LowMass_L1_0er1p5R_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_L1_0er1p5R_ = true;
    }
    return HLT_Dimuon0_LowMass_L1_0er1p5R_;
}
const bool &Nano::HLT_Dimuon0_LowMass_L1_4() {
    if (!loaded_HLT_Dimuon0_LowMass_L1_4_) {
        if (!b_HLT_Dimuon0_LowMass_L1_4_) throw std::runtime_error("HLT_Dimuon0_LowMass_L1_4 branch doesn't exist");
        b_HLT_Dimuon0_LowMass_L1_4_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_L1_4_ = true;
    }
    return HLT_Dimuon0_LowMass_L1_4_;
}
const bool &Nano::HLT_Dimuon0_LowMass_L1_4R() {
    if (!loaded_HLT_Dimuon0_LowMass_L1_4R_) {
        if (!b_HLT_Dimuon0_LowMass_L1_4R_) throw std::runtime_error("HLT_Dimuon0_LowMass_L1_4R branch doesn't exist");
        b_HLT_Dimuon0_LowMass_L1_4R_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_L1_4R_ = true;
    }
    return HLT_Dimuon0_LowMass_L1_4R_;
}
const bool &Nano::HLT_Dimuon0_LowMass_L1_TM530() {
    if (!loaded_HLT_Dimuon0_LowMass_L1_TM530_) {
        if (!b_HLT_Dimuon0_LowMass_L1_TM530_) throw std::runtime_error("HLT_Dimuon0_LowMass_L1_TM530 branch doesn't exist");
        b_HLT_Dimuon0_LowMass_L1_TM530_->GetEntry(index);
        loaded_HLT_Dimuon0_LowMass_L1_TM530_ = true;
    }
    return HLT_Dimuon0_LowMass_L1_TM530_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_4p5() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_4p5_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_4p5_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_4p5 branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_4p5_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_4p5_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_4p5_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_4p5NoOS() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_4p5NoOS_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_4p5NoOS branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_4p5NoOS_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_4p5NoOS_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_4p5er2p0() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_4p5er2p0 branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_4p5er2p0_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_4p5er2p0M() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_4p5er2p0M branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_4p5er2p0M_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_5() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_5_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_5_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_5 branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_5_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_5_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_5_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_L1_5M() {
    if (!loaded_HLT_Dimuon0_Upsilon_L1_5M_) {
        if (!b_HLT_Dimuon0_Upsilon_L1_5M_) throw std::runtime_error("HLT_Dimuon0_Upsilon_L1_5M branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_L1_5M_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_L1_5M_ = true;
    }
    return HLT_Dimuon0_Upsilon_L1_5M_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_Muon_L1_TM0() {
    if (!loaded_HLT_Dimuon0_Upsilon_Muon_L1_TM0_) {
        if (!b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_) throw std::runtime_error("HLT_Dimuon0_Upsilon_Muon_L1_TM0 branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_Muon_L1_TM0_ = true;
    }
    return HLT_Dimuon0_Upsilon_Muon_L1_TM0_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_Muon_NoL1Mass() {
    if (!loaded_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_) {
        if (!b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_) throw std::runtime_error("HLT_Dimuon0_Upsilon_Muon_NoL1Mass branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_ = true;
    }
    return HLT_Dimuon0_Upsilon_Muon_NoL1Mass_;
}
const bool &Nano::HLT_Dimuon0_Upsilon_NoVertexing() {
    if (!loaded_HLT_Dimuon0_Upsilon_NoVertexing_) {
        if (!b_HLT_Dimuon0_Upsilon_NoVertexing_) throw std::runtime_error("HLT_Dimuon0_Upsilon_NoVertexing branch doesn't exist");
        b_HLT_Dimuon0_Upsilon_NoVertexing_->GetEntry(index);
        loaded_HLT_Dimuon0_Upsilon_NoVertexing_ = true;
    }
    return HLT_Dimuon0_Upsilon_NoVertexing_;
}
const bool &Nano::HLT_Dimuon10_PsiPrime_Barrel_Seagulls() {
    if (!loaded_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_) {
        if (!b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_) throw std::runtime_error("HLT_Dimuon10_PsiPrime_Barrel_Seagulls branch doesn't exist");
        b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_->GetEntry(index);
        loaded_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_ = true;
    }
    return HLT_Dimuon10_PsiPrime_Barrel_Seagulls_;
}
const bool &Nano::HLT_Dimuon10_Upsilon_Barrel_Seagulls() {
    if (!loaded_HLT_Dimuon10_Upsilon_Barrel_Seagulls_) {
        if (!b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_) throw std::runtime_error("HLT_Dimuon10_Upsilon_Barrel_Seagulls branch doesn't exist");
        b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_->GetEntry(index);
        loaded_HLT_Dimuon10_Upsilon_Barrel_Seagulls_ = true;
    }
    return HLT_Dimuon10_Upsilon_Barrel_Seagulls_;
}
const bool &Nano::HLT_Dimuon12_Upsilon_eta1p5() {
    if (!loaded_HLT_Dimuon12_Upsilon_eta1p5_) {
        if (!b_HLT_Dimuon12_Upsilon_eta1p5_) throw std::runtime_error("HLT_Dimuon12_Upsilon_eta1p5 branch doesn't exist");
        b_HLT_Dimuon12_Upsilon_eta1p5_->GetEntry(index);
        loaded_HLT_Dimuon12_Upsilon_eta1p5_ = true;
    }
    return HLT_Dimuon12_Upsilon_eta1p5_;
}
const bool &Nano::HLT_Dimuon14_Phi_Barrel_Seagulls() {
    if (!loaded_HLT_Dimuon14_Phi_Barrel_Seagulls_) {
        if (!b_HLT_Dimuon14_Phi_Barrel_Seagulls_) throw std::runtime_error("HLT_Dimuon14_Phi_Barrel_Seagulls branch doesn't exist");
        b_HLT_Dimuon14_Phi_Barrel_Seagulls_->GetEntry(index);
        loaded_HLT_Dimuon14_Phi_Barrel_Seagulls_ = true;
    }
    return HLT_Dimuon14_Phi_Barrel_Seagulls_;
}
const bool &Nano::HLT_Dimuon18_PsiPrime() {
    if (!loaded_HLT_Dimuon18_PsiPrime_) {
        if (!b_HLT_Dimuon18_PsiPrime_) throw std::runtime_error("HLT_Dimuon18_PsiPrime branch doesn't exist");
        b_HLT_Dimuon18_PsiPrime_->GetEntry(index);
        loaded_HLT_Dimuon18_PsiPrime_ = true;
    }
    return HLT_Dimuon18_PsiPrime_;
}
const bool &Nano::HLT_Dimuon18_PsiPrime_noCorrL1() {
    if (!loaded_HLT_Dimuon18_PsiPrime_noCorrL1_) {
        if (!b_HLT_Dimuon18_PsiPrime_noCorrL1_) throw std::runtime_error("HLT_Dimuon18_PsiPrime_noCorrL1 branch doesn't exist");
        b_HLT_Dimuon18_PsiPrime_noCorrL1_->GetEntry(index);
        loaded_HLT_Dimuon18_PsiPrime_noCorrL1_ = true;
    }
    return HLT_Dimuon18_PsiPrime_noCorrL1_;
}
const bool &Nano::HLT_Dimuon20_Jpsi_Barrel_Seagulls() {
    if (!loaded_HLT_Dimuon20_Jpsi_Barrel_Seagulls_) {
        if (!b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_) throw std::runtime_error("HLT_Dimuon20_Jpsi_Barrel_Seagulls branch doesn't exist");
        b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_->GetEntry(index);
        loaded_HLT_Dimuon20_Jpsi_Barrel_Seagulls_ = true;
    }
    return HLT_Dimuon20_Jpsi_Barrel_Seagulls_;
}
const bool &Nano::HLT_Dimuon24_Phi_noCorrL1() {
    if (!loaded_HLT_Dimuon24_Phi_noCorrL1_) {
        if (!b_HLT_Dimuon24_Phi_noCorrL1_) throw std::runtime_error("HLT_Dimuon24_Phi_noCorrL1 branch doesn't exist");
        b_HLT_Dimuon24_Phi_noCorrL1_->GetEntry(index);
        loaded_HLT_Dimuon24_Phi_noCorrL1_ = true;
    }
    return HLT_Dimuon24_Phi_noCorrL1_;
}
const bool &Nano::HLT_Dimuon24_Upsilon_noCorrL1() {
    if (!loaded_HLT_Dimuon24_Upsilon_noCorrL1_) {
        if (!b_HLT_Dimuon24_Upsilon_noCorrL1_) throw std::runtime_error("HLT_Dimuon24_Upsilon_noCorrL1 branch doesn't exist");
        b_HLT_Dimuon24_Upsilon_noCorrL1_->GetEntry(index);
        loaded_HLT_Dimuon24_Upsilon_noCorrL1_ = true;
    }
    return HLT_Dimuon24_Upsilon_noCorrL1_;
}
const bool &Nano::HLT_Dimuon25_Jpsi() {
    if (!loaded_HLT_Dimuon25_Jpsi_) {
        if (!b_HLT_Dimuon25_Jpsi_) throw std::runtime_error("HLT_Dimuon25_Jpsi branch doesn't exist");
        b_HLT_Dimuon25_Jpsi_->GetEntry(index);
        loaded_HLT_Dimuon25_Jpsi_ = true;
    }
    return HLT_Dimuon25_Jpsi_;
}
const bool &Nano::HLT_Dimuon25_Jpsi_noCorrL1() {
    if (!loaded_HLT_Dimuon25_Jpsi_noCorrL1_) {
        if (!b_HLT_Dimuon25_Jpsi_noCorrL1_) throw std::runtime_error("HLT_Dimuon25_Jpsi_noCorrL1 branch doesn't exist");
        b_HLT_Dimuon25_Jpsi_noCorrL1_->GetEntry(index);
        loaded_HLT_Dimuon25_Jpsi_noCorrL1_ = true;
    }
    return HLT_Dimuon25_Jpsi_noCorrL1_;
}
const bool &Nano::HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() {
    if (!loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) {
        if (!b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) throw std::runtime_error("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 branch doesn't exist");
        b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->GetEntry(index);
        loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = true;
    }
    return HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
}
const bool &Nano::HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95() {
    if (!loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) {
        if (!b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) throw std::runtime_error("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 branch doesn't exist");
        b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_->GetEntry(index);
        loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = true;
    }
    return HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
}
const bool &Nano::HLT_DoubleEle24_eta2p1_WPTight_Gsf() {
    if (!loaded_HLT_DoubleEle24_eta2p1_WPTight_Gsf_) {
        if (!b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_) throw std::runtime_error("HLT_DoubleEle24_eta2p1_WPTight_Gsf branch doesn't exist");
        b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_DoubleEle24_eta2p1_WPTight_Gsf_ = true;
    }
    return HLT_DoubleEle24_eta2p1_WPTight_Gsf_;
}
const bool &Nano::HLT_DoubleEle25_CaloIdL_MW() {
    if (!loaded_HLT_DoubleEle25_CaloIdL_MW_) {
        if (!b_HLT_DoubleEle25_CaloIdL_MW_) throw std::runtime_error("HLT_DoubleEle25_CaloIdL_MW branch doesn't exist");
        b_HLT_DoubleEle25_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_DoubleEle25_CaloIdL_MW_ = true;
    }
    return HLT_DoubleEle25_CaloIdL_MW_;
}
const bool &Nano::HLT_DoubleEle27_CaloIdL_MW() {
    if (!loaded_HLT_DoubleEle27_CaloIdL_MW_) {
        if (!b_HLT_DoubleEle27_CaloIdL_MW_) throw std::runtime_error("HLT_DoubleEle27_CaloIdL_MW branch doesn't exist");
        b_HLT_DoubleEle27_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_DoubleEle27_CaloIdL_MW_ = true;
    }
    return HLT_DoubleEle27_CaloIdL_MW_;
}
const bool &Nano::HLT_DoubleEle33_CaloIdL_MW() {
    if (!loaded_HLT_DoubleEle33_CaloIdL_MW_) {
        if (!b_HLT_DoubleEle33_CaloIdL_MW_) throw std::runtime_error("HLT_DoubleEle33_CaloIdL_MW branch doesn't exist");
        b_HLT_DoubleEle33_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_DoubleEle33_CaloIdL_MW_ = true;
    }
    return HLT_DoubleEle33_CaloIdL_MW_;
}
const bool &Nano::HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350() {
    if (!loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_) {
        if (!b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_) throw std::runtime_error("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 branch doesn't exist");
        b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_->GetEntry(index);
        loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_ = true;
    }
    return HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_;
}
const bool &Nano::HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350() {
    if (!loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_) {
        if (!b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_) throw std::runtime_error("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 branch doesn't exist");
        b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_->GetEntry(index);
        loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_ = true;
    }
    return HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_;
}
const bool &Nano::HLT_DoubleIsoMu20_eta2p1() {
    if (!loaded_HLT_DoubleIsoMu20_eta2p1_) {
        if (!b_HLT_DoubleIsoMu20_eta2p1_) throw std::runtime_error("HLT_DoubleIsoMu20_eta2p1 branch doesn't exist");
        b_HLT_DoubleIsoMu20_eta2p1_->GetEntry(index);
        loaded_HLT_DoubleIsoMu20_eta2p1_ = true;
    }
    return HLT_DoubleIsoMu20_eta2p1_;
}
const bool &Nano::HLT_DoubleIsoMu24_eta2p1() {
    if (!loaded_HLT_DoubleIsoMu24_eta2p1_) {
        if (!b_HLT_DoubleIsoMu24_eta2p1_) throw std::runtime_error("HLT_DoubleIsoMu24_eta2p1 branch doesn't exist");
        b_HLT_DoubleIsoMu24_eta2p1_->GetEntry(index);
        loaded_HLT_DoubleIsoMu24_eta2p1_ = true;
    }
    return HLT_DoubleIsoMu24_eta2p1_;
}
const bool &Nano::HLT_DoubleL2Mu50() {
    if (!loaded_HLT_DoubleL2Mu50_) {
        if (!b_HLT_DoubleL2Mu50_) throw std::runtime_error("HLT_DoubleL2Mu50 branch doesn't exist");
        b_HLT_DoubleL2Mu50_->GetEntry(index);
        loaded_HLT_DoubleL2Mu50_ = true;
    }
    return HLT_DoubleL2Mu50_;
}
const bool &Nano::HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleMu20_7_Mass0to30_L1_DM4() {
    if (!loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4_) {
        if (!b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_) throw std::runtime_error("HLT_DoubleMu20_7_Mass0to30_L1_DM4 branch doesn't exist");
        b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_->GetEntry(index);
        loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4_ = true;
    }
    return HLT_DoubleMu20_7_Mass0to30_L1_DM4_;
}
const bool &Nano::HLT_DoubleMu20_7_Mass0to30_L1_DM4EG() {
    if (!loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_) {
        if (!b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_) throw std::runtime_error("HLT_DoubleMu20_7_Mass0to30_L1_DM4EG branch doesn't exist");
        b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_->GetEntry(index);
        loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_ = true;
    }
    return HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_;
}
const bool &Nano::HLT_DoubleMu20_7_Mass0to30_Photon23() {
    if (!loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_) {
        if (!b_HLT_DoubleMu20_7_Mass0to30_Photon23_) throw std::runtime_error("HLT_DoubleMu20_7_Mass0to30_Photon23 branch doesn't exist");
        b_HLT_DoubleMu20_7_Mass0to30_Photon23_->GetEntry(index);
        loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_ = true;
    }
    return HLT_DoubleMu20_7_Mass0to30_Photon23_;
}
const bool &Nano::HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi() {
    if (!loaded_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_) {
        if (!b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_) throw std::runtime_error("HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi branch doesn't exist");
        b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_->GetEntry(index);
        loaded_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_ = true;
    }
    return HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_;
}
const bool &Nano::HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi() {
    if (!loaded_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_) {
        if (!b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_) throw std::runtime_error("HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi branch doesn't exist");
        b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_->GetEntry(index);
        loaded_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_ = true;
    }
    return HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_;
}
const bool &Nano::HLT_DoubleMu3_DCA_PFMET50_PFMHT60() {
    if (!loaded_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_) {
        if (!b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_) throw std::runtime_error("HLT_DoubleMu3_DCA_PFMET50_PFMHT60 branch doesn't exist");
        b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_->GetEntry(index);
        loaded_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_ = true;
    }
    return HLT_DoubleMu3_DCA_PFMET50_PFMHT60_;
}
const bool &Nano::HLT_DoubleMu3_DZ_PFMET50_PFMHT60() {
    if (!loaded_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_) {
        if (!b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_) throw std::runtime_error("HLT_DoubleMu3_DZ_PFMET50_PFMHT60 branch doesn't exist");
        b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_->GetEntry(index);
        loaded_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_ = true;
    }
    return HLT_DoubleMu3_DZ_PFMET50_PFMHT60_;
}
const bool &Nano::HLT_DoubleMu3_DZ_PFMET70_PFMHT70() {
    if (!loaded_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_) {
        if (!b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_) throw std::runtime_error("HLT_DoubleMu3_DZ_PFMET70_PFMHT70 branch doesn't exist");
        b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_->GetEntry(index);
        loaded_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_ = true;
    }
    return HLT_DoubleMu3_DZ_PFMET70_PFMHT70_;
}
const bool &Nano::HLT_DoubleMu3_DZ_PFMET90_PFMHT90() {
    if (!loaded_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_) {
        if (!b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_) throw std::runtime_error("HLT_DoubleMu3_DZ_PFMET90_PFMHT90 branch doesn't exist");
        b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_->GetEntry(index);
        loaded_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_ = true;
    }
    return HLT_DoubleMu3_DZ_PFMET90_PFMHT90_;
}
const bool &Nano::HLT_DoubleMu3_Trk_Tau3mu() {
    if (!loaded_HLT_DoubleMu3_Trk_Tau3mu_) {
        if (!b_HLT_DoubleMu3_Trk_Tau3mu_) throw std::runtime_error("HLT_DoubleMu3_Trk_Tau3mu branch doesn't exist");
        b_HLT_DoubleMu3_Trk_Tau3mu_->GetEntry(index);
        loaded_HLT_DoubleMu3_Trk_Tau3mu_ = true;
    }
    return HLT_DoubleMu3_Trk_Tau3mu_;
}
const bool &Nano::HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass() {
    if (!loaded_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_) {
        if (!b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_) throw std::runtime_error("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass branch doesn't exist");
        b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_->GetEntry(index);
        loaded_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_ = true;
    }
    return HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_;
}
const bool &Nano::HLT_DoubleMu43NoFiltersNoVtx() {
    if (!loaded_HLT_DoubleMu43NoFiltersNoVtx_) {
        if (!b_HLT_DoubleMu43NoFiltersNoVtx_) throw std::runtime_error("HLT_DoubleMu43NoFiltersNoVtx branch doesn't exist");
        b_HLT_DoubleMu43NoFiltersNoVtx_->GetEntry(index);
        loaded_HLT_DoubleMu43NoFiltersNoVtx_ = true;
    }
    return HLT_DoubleMu43NoFiltersNoVtx_;
}
const bool &Nano::HLT_DoubleMu48NoFiltersNoVtx() {
    if (!loaded_HLT_DoubleMu48NoFiltersNoVtx_) {
        if (!b_HLT_DoubleMu48NoFiltersNoVtx_) throw std::runtime_error("HLT_DoubleMu48NoFiltersNoVtx branch doesn't exist");
        b_HLT_DoubleMu48NoFiltersNoVtx_->GetEntry(index);
        loaded_HLT_DoubleMu48NoFiltersNoVtx_ = true;
    }
    return HLT_DoubleMu48NoFiltersNoVtx_;
}
const bool &Nano::HLT_DoubleMu4_3_Bs() {
    if (!loaded_HLT_DoubleMu4_3_Bs_) {
        if (!b_HLT_DoubleMu4_3_Bs_) throw std::runtime_error("HLT_DoubleMu4_3_Bs branch doesn't exist");
        b_HLT_DoubleMu4_3_Bs_->GetEntry(index);
        loaded_HLT_DoubleMu4_3_Bs_ = true;
    }
    return HLT_DoubleMu4_3_Bs_;
}
const bool &Nano::HLT_DoubleMu4_3_Jpsi_Displaced() {
    if (!loaded_HLT_DoubleMu4_3_Jpsi_Displaced_) {
        if (!b_HLT_DoubleMu4_3_Jpsi_Displaced_) throw std::runtime_error("HLT_DoubleMu4_3_Jpsi_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_3_Jpsi_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_3_Jpsi_Displaced_ = true;
    }
    return HLT_DoubleMu4_3_Jpsi_Displaced_;
}
const bool &Nano::HLT_DoubleMu4_JpsiTrkTrk_Displaced() {
    if (!loaded_HLT_DoubleMu4_JpsiTrkTrk_Displaced_) {
        if (!b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_) throw std::runtime_error("HLT_DoubleMu4_JpsiTrkTrk_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_JpsiTrkTrk_Displaced_ = true;
    }
    return HLT_DoubleMu4_JpsiTrkTrk_Displaced_;
}
const bool &Nano::HLT_DoubleMu4_JpsiTrk_Displaced() {
    if (!loaded_HLT_DoubleMu4_JpsiTrk_Displaced_) {
        if (!b_HLT_DoubleMu4_JpsiTrk_Displaced_) throw std::runtime_error("HLT_DoubleMu4_JpsiTrk_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_JpsiTrk_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_JpsiTrk_Displaced_ = true;
    }
    return HLT_DoubleMu4_JpsiTrk_Displaced_;
}
const bool &Nano::HLT_DoubleMu4_Jpsi_Displaced() {
    if (!loaded_HLT_DoubleMu4_Jpsi_Displaced_) {
        if (!b_HLT_DoubleMu4_Jpsi_Displaced_) throw std::runtime_error("HLT_DoubleMu4_Jpsi_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_Jpsi_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_Jpsi_Displaced_ = true;
    }
    return HLT_DoubleMu4_Jpsi_Displaced_;
}
const bool &Nano::HLT_DoubleMu4_Jpsi_NoVertexing() {
    if (!loaded_HLT_DoubleMu4_Jpsi_NoVertexing_) {
        if (!b_HLT_DoubleMu4_Jpsi_NoVertexing_) throw std::runtime_error("HLT_DoubleMu4_Jpsi_NoVertexing branch doesn't exist");
        b_HLT_DoubleMu4_Jpsi_NoVertexing_->GetEntry(index);
        loaded_HLT_DoubleMu4_Jpsi_NoVertexing_ = true;
    }
    return HLT_DoubleMu4_Jpsi_NoVertexing_;
}
const bool &Nano::HLT_DoubleMu4_LowMassNonResonantTrk_Displaced() {
    if (!loaded_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_) {
        if (!b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_) throw std::runtime_error("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_ = true;
    }
    return HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_;
}
const bool &Nano::HLT_DoubleMu4_Mass8_DZ_PFHT350() {
    if (!loaded_HLT_DoubleMu4_Mass8_DZ_PFHT350_) {
        if (!b_HLT_DoubleMu4_Mass8_DZ_PFHT350_) throw std::runtime_error("HLT_DoubleMu4_Mass8_DZ_PFHT350 branch doesn't exist");
        b_HLT_DoubleMu4_Mass8_DZ_PFHT350_->GetEntry(index);
        loaded_HLT_DoubleMu4_Mass8_DZ_PFHT350_ = true;
    }
    return HLT_DoubleMu4_Mass8_DZ_PFHT350_;
}
const bool &Nano::HLT_DoubleMu4_PsiPrimeTrk_Displaced() {
    if (!loaded_HLT_DoubleMu4_PsiPrimeTrk_Displaced_) {
        if (!b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_) throw std::runtime_error("HLT_DoubleMu4_PsiPrimeTrk_Displaced branch doesn't exist");
        b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_->GetEntry(index);
        loaded_HLT_DoubleMu4_PsiPrimeTrk_Displaced_ = true;
    }
    return HLT_DoubleMu4_PsiPrimeTrk_Displaced_;
}
const bool &Nano::HLT_DoubleMu8_Mass8_PFHT350() {
    if (!loaded_HLT_DoubleMu8_Mass8_PFHT350_) {
        if (!b_HLT_DoubleMu8_Mass8_PFHT350_) throw std::runtime_error("HLT_DoubleMu8_Mass8_PFHT350 branch doesn't exist");
        b_HLT_DoubleMu8_Mass8_PFHT350_->GetEntry(index);
        loaded_HLT_DoubleMu8_Mass8_PFHT350_ = true;
    }
    return HLT_DoubleMu8_Mass8_PFHT350_;
}
const bool &Nano::HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets100_CaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets100_CaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets100_CaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets100_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets100_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets100_CaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets100_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets200_CaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets200_CaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets200_CaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets200_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets200_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets200_CaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets200_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets350_CaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets350_CaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets350_CaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets350_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets350_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets350_CaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets350_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePFJets40_CaloBTagCSV_p33() {
    if (!loaded_HLT_DoublePFJets40_CaloBTagCSV_p33_) {
        if (!b_HLT_DoublePFJets40_CaloBTagCSV_p33_) throw std::runtime_error("HLT_DoublePFJets40_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_DoublePFJets40_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_DoublePFJets40_CaloBTagCSV_p33_ = true;
    }
    return HLT_DoublePFJets40_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_DoublePhoton33_CaloIdL() {
    if (!loaded_HLT_DoublePhoton33_CaloIdL_) {
        if (!b_HLT_DoublePhoton33_CaloIdL_) throw std::runtime_error("HLT_DoublePhoton33_CaloIdL branch doesn't exist");
        b_HLT_DoublePhoton33_CaloIdL_->GetEntry(index);
        loaded_HLT_DoublePhoton33_CaloIdL_ = true;
    }
    return HLT_DoublePhoton33_CaloIdL_;
}
const bool &Nano::HLT_DoublePhoton70() {
    if (!loaded_HLT_DoublePhoton70_) {
        if (!b_HLT_DoublePhoton70_) throw std::runtime_error("HLT_DoublePhoton70 branch doesn't exist");
        b_HLT_DoublePhoton70_->GetEntry(index);
        loaded_HLT_DoublePhoton70_ = true;
    }
    return HLT_DoublePhoton70_;
}
const bool &Nano::HLT_DoublePhoton85() {
    if (!loaded_HLT_DoublePhoton85_) {
        if (!b_HLT_DoublePhoton85_) throw std::runtime_error("HLT_DoublePhoton85 branch doesn't exist");
        b_HLT_DoublePhoton85_->GetEntry(index);
        loaded_HLT_DoublePhoton85_ = true;
    }
    return HLT_DoublePhoton85_;
}
const bool &Nano::HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() {
    if (!loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) {
        if (!b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_ = true;
    }
    return HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
}
const bool &Nano::HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_) {
        if (!b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_ECALHT800() {
    if (!loaded_HLT_ECALHT800_) {
        if (!b_HLT_ECALHT800_) throw std::runtime_error("HLT_ECALHT800 branch doesn't exist");
        b_HLT_ECALHT800_->GetEntry(index);
        loaded_HLT_ECALHT800_ = true;
    }
    return HLT_ECALHT800_;
}
const bool &Nano::HLT_EcalCalibration() {
    if (!loaded_HLT_EcalCalibration_) {
        if (!b_HLT_EcalCalibration_) throw std::runtime_error("HLT_EcalCalibration branch doesn't exist");
        b_HLT_EcalCalibration_->GetEntry(index);
        loaded_HLT_EcalCalibration_ = true;
    }
    return HLT_EcalCalibration_;
}
const bool &Nano::HLT_Ele115_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele115_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele115_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele115_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele115_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele115_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele115_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30() {
    if (!loaded_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_) {
        if (!b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_) throw std::runtime_error("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 branch doesn't exist");
        b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_->GetEntry(index);
        loaded_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ = true;
    }
    return HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_;
}
const bool &Nano::HLT_Ele135_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele135_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele135_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele135_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele135_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele135_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele135_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele145_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele145_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele145_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele145_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele145_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele145_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele145_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele15_IsoVVVL_PFHT450() {
    if (!loaded_HLT_Ele15_IsoVVVL_PFHT450_) {
        if (!b_HLT_Ele15_IsoVVVL_PFHT450_) throw std::runtime_error("HLT_Ele15_IsoVVVL_PFHT450 branch doesn't exist");
        b_HLT_Ele15_IsoVVVL_PFHT450_->GetEntry(index);
        loaded_HLT_Ele15_IsoVVVL_PFHT450_ = true;
    }
    return HLT_Ele15_IsoVVVL_PFHT450_;
}
const bool &Nano::HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5() {
    if (!loaded_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) {
        if (!b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) throw std::runtime_error("HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5 branch doesn't exist");
        b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_->GetEntry(index);
        loaded_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = true;
    }
    return HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
}
const bool &Nano::HLT_Ele15_IsoVVVL_PFHT450_PFMET50() {
    if (!loaded_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_) {
        if (!b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_) throw std::runtime_error("HLT_Ele15_IsoVVVL_PFHT450_PFMET50 branch doesn't exist");
        b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_->GetEntry(index);
        loaded_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_ = true;
    }
    return HLT_Ele15_IsoVVVL_PFHT450_PFMET50_;
}
const bool &Nano::HLT_Ele15_IsoVVVL_PFHT600() {
    if (!loaded_HLT_Ele15_IsoVVVL_PFHT600_) {
        if (!b_HLT_Ele15_IsoVVVL_PFHT600_) throw std::runtime_error("HLT_Ele15_IsoVVVL_PFHT600 branch doesn't exist");
        b_HLT_Ele15_IsoVVVL_PFHT600_->GetEntry(index);
        loaded_HLT_Ele15_IsoVVVL_PFHT600_ = true;
    }
    return HLT_Ele15_IsoVVVL_PFHT600_;
}
const bool &Nano::HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL() {
    if (!loaded_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_) {
        if (!b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_) throw std::runtime_error("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL branch doesn't exist");
        b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_->GetEntry(index);
        loaded_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_ = true;
    }
    return HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_;
}
const bool &Nano::HLT_Ele17_CaloIdM_TrackIdM_PFJet30() {
    if (!loaded_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_) {
        if (!b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_) throw std::runtime_error("HLT_Ele17_CaloIdM_TrackIdM_PFJet30 branch doesn't exist");
        b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_->GetEntry(index);
        loaded_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_ = true;
    }
    return HLT_Ele17_CaloIdM_TrackIdM_PFJet30_;
}
const bool &Nano::HLT_Ele200_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele200_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele200_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele200_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele200_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele200_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele200_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele20_WPLoose_Gsf() {
    if (!loaded_HLT_Ele20_WPLoose_Gsf_) {
        if (!b_HLT_Ele20_WPLoose_Gsf_) throw std::runtime_error("HLT_Ele20_WPLoose_Gsf branch doesn't exist");
        b_HLT_Ele20_WPLoose_Gsf_->GetEntry(index);
        loaded_HLT_Ele20_WPLoose_Gsf_ = true;
    }
    return HLT_Ele20_WPLoose_Gsf_;
}
const bool &Nano::HLT_Ele20_WPTight_Gsf() {
    if (!loaded_HLT_Ele20_WPTight_Gsf_) {
        if (!b_HLT_Ele20_WPTight_Gsf_) throw std::runtime_error("HLT_Ele20_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele20_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele20_WPTight_Gsf_ = true;
    }
    return HLT_Ele20_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele20_eta2p1_WPLoose_Gsf() {
    if (!loaded_HLT_Ele20_eta2p1_WPLoose_Gsf_) {
        if (!b_HLT_Ele20_eta2p1_WPLoose_Gsf_) throw std::runtime_error("HLT_Ele20_eta2p1_WPLoose_Gsf branch doesn't exist");
        b_HLT_Ele20_eta2p1_WPLoose_Gsf_->GetEntry(index);
        loaded_HLT_Ele20_eta2p1_WPLoose_Gsf_ = true;
    }
    return HLT_Ele20_eta2p1_WPLoose_Gsf_;
}
const bool &Nano::HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30() {
    if (!loaded_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_) {
        if (!b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_) throw std::runtime_error("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 branch doesn't exist");
        b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_->GetEntry(index);
        loaded_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ = true;
    }
    return HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_;
}
const bool &Nano::HLT_Ele23_CaloIdM_TrackIdM_PFJet30() {
    if (!loaded_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_) {
        if (!b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_) throw std::runtime_error("HLT_Ele23_CaloIdM_TrackIdM_PFJet30 branch doesn't exist");
        b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_->GetEntry(index);
        loaded_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ = true;
    }
    return HLT_Ele23_CaloIdM_TrackIdM_PFJet30_;
}
const bool &Nano::HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL() {
    if (!loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_) {
        if (!b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_) throw std::runtime_error("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL branch doesn't exist");
        b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_->GetEntry(index);
        loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_ = true;
    }
    return HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
}
const bool &Nano::HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() {
    if (!loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) {
        if (!b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) throw std::runtime_error("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ branch doesn't exist");
        b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_->GetEntry(index);
        loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = true;
    }
    return HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_;
}
const bool &Nano::HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_Ele250_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele250_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele250_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele250_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele250_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele250_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele250_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele27_Ele37_CaloIdL_MW() {
    if (!loaded_HLT_Ele27_Ele37_CaloIdL_MW_) {
        if (!b_HLT_Ele27_Ele37_CaloIdL_MW_) throw std::runtime_error("HLT_Ele27_Ele37_CaloIdL_MW branch doesn't exist");
        b_HLT_Ele27_Ele37_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_Ele27_Ele37_CaloIdL_MW_ = true;
    }
    return HLT_Ele27_Ele37_CaloIdL_MW_;
}
const bool &Nano::HLT_Ele27_WPTight_Gsf() {
    if (!loaded_HLT_Ele27_WPTight_Gsf_) {
        if (!b_HLT_Ele27_WPTight_Gsf_) throw std::runtime_error("HLT_Ele27_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele27_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele27_WPTight_Gsf_ = true;
    }
    return HLT_Ele27_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele28_HighEta_SC20_Mass55() {
    if (!loaded_HLT_Ele28_HighEta_SC20_Mass55_) {
        if (!b_HLT_Ele28_HighEta_SC20_Mass55_) throw std::runtime_error("HLT_Ele28_HighEta_SC20_Mass55 branch doesn't exist");
        b_HLT_Ele28_HighEta_SC20_Mass55_->GetEntry(index);
        loaded_HLT_Ele28_HighEta_SC20_Mass55_ = true;
    }
    return HLT_Ele28_HighEta_SC20_Mass55_;
}
const bool &Nano::HLT_Ele28_eta2p1_WPTight_Gsf_HT150() {
    if (!loaded_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_) {
        if (!b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_) throw std::runtime_error("HLT_Ele28_eta2p1_WPTight_Gsf_HT150 branch doesn't exist");
        b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_->GetEntry(index);
        loaded_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_ = true;
    }
    return HLT_Ele28_eta2p1_WPTight_Gsf_HT150_;
}
const bool &Nano::HLT_Ele300_CaloIdVT_GsfTrkIdT() {
    if (!loaded_HLT_Ele300_CaloIdVT_GsfTrkIdT_) {
        if (!b_HLT_Ele300_CaloIdVT_GsfTrkIdT_) throw std::runtime_error("HLT_Ele300_CaloIdVT_GsfTrkIdT branch doesn't exist");
        b_HLT_Ele300_CaloIdVT_GsfTrkIdT_->GetEntry(index);
        loaded_HLT_Ele300_CaloIdVT_GsfTrkIdT_ = true;
    }
    return HLT_Ele300_CaloIdVT_GsfTrkIdT_;
}
const bool &Nano::HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned() {
    if (!loaded_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_) {
        if (!b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_) throw std::runtime_error("HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned branch doesn't exist");
        b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_->GetEntry(index);
        loaded_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_ = true;
    }
    return HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_;
}
const bool &Nano::HLT_Ele32_WPTight_Gsf() {
    if (!loaded_HLT_Ele32_WPTight_Gsf_) {
        if (!b_HLT_Ele32_WPTight_Gsf_) throw std::runtime_error("HLT_Ele32_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele32_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele32_WPTight_Gsf_ = true;
    }
    return HLT_Ele32_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele32_WPTight_Gsf_L1DoubleEG() {
    if (!loaded_HLT_Ele32_WPTight_Gsf_L1DoubleEG_) {
        if (!b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_) throw std::runtime_error("HLT_Ele32_WPTight_Gsf_L1DoubleEG branch doesn't exist");
        b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_->GetEntry(index);
        loaded_HLT_Ele32_WPTight_Gsf_L1DoubleEG_ = true;
    }
    return HLT_Ele32_WPTight_Gsf_L1DoubleEG_;
}
const bool &Nano::HLT_Ele35_WPTight_Gsf() {
    if (!loaded_HLT_Ele35_WPTight_Gsf_) {
        if (!b_HLT_Ele35_WPTight_Gsf_) throw std::runtime_error("HLT_Ele35_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele35_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele35_WPTight_Gsf_ = true;
    }
    return HLT_Ele35_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele35_WPTight_Gsf_L1EGMT() {
    if (!loaded_HLT_Ele35_WPTight_Gsf_L1EGMT_) {
        if (!b_HLT_Ele35_WPTight_Gsf_L1EGMT_) throw std::runtime_error("HLT_Ele35_WPTight_Gsf_L1EGMT branch doesn't exist");
        b_HLT_Ele35_WPTight_Gsf_L1EGMT_->GetEntry(index);
        loaded_HLT_Ele35_WPTight_Gsf_L1EGMT_ = true;
    }
    return HLT_Ele35_WPTight_Gsf_L1EGMT_;
}
const bool &Nano::HLT_Ele38_WPTight_Gsf() {
    if (!loaded_HLT_Ele38_WPTight_Gsf_) {
        if (!b_HLT_Ele38_WPTight_Gsf_) throw std::runtime_error("HLT_Ele38_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele38_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele38_WPTight_Gsf_ = true;
    }
    return HLT_Ele38_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele40_WPTight_Gsf() {
    if (!loaded_HLT_Ele40_WPTight_Gsf_) {
        if (!b_HLT_Ele40_WPTight_Gsf_) throw std::runtime_error("HLT_Ele40_WPTight_Gsf branch doesn't exist");
        b_HLT_Ele40_WPTight_Gsf_->GetEntry(index);
        loaded_HLT_Ele40_WPTight_Gsf_ = true;
    }
    return HLT_Ele40_WPTight_Gsf_;
}
const bool &Nano::HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165() {
    if (!loaded_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_) {
        if (!b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_) throw std::runtime_error("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165 branch doesn't exist");
        b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_->GetEntry(index);
        loaded_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_ = true;
    }
    return HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_;
}
const bool &Nano::HLT_Ele50_IsoVVVL_PFHT450() {
    if (!loaded_HLT_Ele50_IsoVVVL_PFHT450_) {
        if (!b_HLT_Ele50_IsoVVVL_PFHT450_) throw std::runtime_error("HLT_Ele50_IsoVVVL_PFHT450 branch doesn't exist");
        b_HLT_Ele50_IsoVVVL_PFHT450_->GetEntry(index);
        loaded_HLT_Ele50_IsoVVVL_PFHT450_ = true;
    }
    return HLT_Ele50_IsoVVVL_PFHT450_;
}
const bool &Nano::HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30() {
    if (!loaded_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_) {
        if (!b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_) throw std::runtime_error("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 branch doesn't exist");
        b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_->GetEntry(index);
        loaded_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_ = true;
    }
    return HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_;
}
const bool &Nano::HLT_Ele8_CaloIdM_TrackIdM_PFJet30() {
    if (!loaded_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_) {
        if (!b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_) throw std::runtime_error("HLT_Ele8_CaloIdM_TrackIdM_PFJet30 branch doesn't exist");
        b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_->GetEntry(index);
        loaded_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ = true;
    }
    return HLT_Ele8_CaloIdM_TrackIdM_PFJet30_;
}
const bool &Nano::HLT_FullTrack_Multiplicity100() {
    if (!loaded_HLT_FullTrack_Multiplicity100_) {
        if (!b_HLT_FullTrack_Multiplicity100_) throw std::runtime_error("HLT_FullTrack_Multiplicity100 branch doesn't exist");
        b_HLT_FullTrack_Multiplicity100_->GetEntry(index);
        loaded_HLT_FullTrack_Multiplicity100_ = true;
    }
    return HLT_FullTrack_Multiplicity100_;
}
const bool &Nano::HLT_FullTrack_Multiplicity130() {
    if (!loaded_HLT_FullTrack_Multiplicity130_) {
        if (!b_HLT_FullTrack_Multiplicity130_) throw std::runtime_error("HLT_FullTrack_Multiplicity130 branch doesn't exist");
        b_HLT_FullTrack_Multiplicity130_->GetEntry(index);
        loaded_HLT_FullTrack_Multiplicity130_ = true;
    }
    return HLT_FullTrack_Multiplicity130_;
}
const bool &Nano::HLT_FullTrack_Multiplicity155() {
    if (!loaded_HLT_FullTrack_Multiplicity155_) {
        if (!b_HLT_FullTrack_Multiplicity155_) throw std::runtime_error("HLT_FullTrack_Multiplicity155 branch doesn't exist");
        b_HLT_FullTrack_Multiplicity155_->GetEntry(index);
        loaded_HLT_FullTrack_Multiplicity155_ = true;
    }
    return HLT_FullTrack_Multiplicity155_;
}
const bool &Nano::HLT_FullTrack_Multiplicity85() {
    if (!loaded_HLT_FullTrack_Multiplicity85_) {
        if (!b_HLT_FullTrack_Multiplicity85_) throw std::runtime_error("HLT_FullTrack_Multiplicity85 branch doesn't exist");
        b_HLT_FullTrack_Multiplicity85_->GetEntry(index);
        loaded_HLT_FullTrack_Multiplicity85_ = true;
    }
    return HLT_FullTrack_Multiplicity85_;
}
const bool &Nano::HLT_HISinglePhoton10_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton10_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton10_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton10_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton10_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton20_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton20_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton20_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton20_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton20_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton30_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton30_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton30_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton30_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton30_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton40_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton40_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton40_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton40_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton40_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton50_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton50_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton50_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton50_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton50_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton60_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton60_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton60_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton60_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton60_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HT300_Beamspot() {
    if (!loaded_HLT_HT300_Beamspot_) {
        if (!b_HLT_HT300_Beamspot_) throw std::runtime_error("HLT_HT300_Beamspot branch doesn't exist");
        b_HLT_HT300_Beamspot_->GetEntry(index);
        loaded_HLT_HT300_Beamspot_ = true;
    }
    return HLT_HT300_Beamspot_;
}
const bool &Nano::HLT_HT400_DisplacedDijet40_DisplacedTrack() {
    if (!loaded_HLT_HT400_DisplacedDijet40_DisplacedTrack_) {
        if (!b_HLT_HT400_DisplacedDijet40_DisplacedTrack_) throw std::runtime_error("HLT_HT400_DisplacedDijet40_DisplacedTrack branch doesn't exist");
        b_HLT_HT400_DisplacedDijet40_DisplacedTrack_->GetEntry(index);
        loaded_HLT_HT400_DisplacedDijet40_DisplacedTrack_ = true;
    }
    return HLT_HT400_DisplacedDijet40_DisplacedTrack_;
}
const bool &Nano::HLT_HT425() {
    if (!loaded_HLT_HT425_) {
        if (!b_HLT_HT425_) throw std::runtime_error("HLT_HT425 branch doesn't exist");
        b_HLT_HT425_->GetEntry(index);
        loaded_HLT_HT425_ = true;
    }
    return HLT_HT425_;
}
const bool &Nano::HLT_HT430_DisplacedDijet40_DisplacedTrack() {
    if (!loaded_HLT_HT430_DisplacedDijet40_DisplacedTrack_) {
        if (!b_HLT_HT430_DisplacedDijet40_DisplacedTrack_) throw std::runtime_error("HLT_HT430_DisplacedDijet40_DisplacedTrack branch doesn't exist");
        b_HLT_HT430_DisplacedDijet40_DisplacedTrack_->GetEntry(index);
        loaded_HLT_HT430_DisplacedDijet40_DisplacedTrack_ = true;
    }
    return HLT_HT430_DisplacedDijet40_DisplacedTrack_;
}
const bool &Nano::HLT_HT430_DisplacedDijet60_DisplacedTrack() {
    if (!loaded_HLT_HT430_DisplacedDijet60_DisplacedTrack_) {
        if (!b_HLT_HT430_DisplacedDijet60_DisplacedTrack_) throw std::runtime_error("HLT_HT430_DisplacedDijet60_DisplacedTrack branch doesn't exist");
        b_HLT_HT430_DisplacedDijet60_DisplacedTrack_->GetEntry(index);
        loaded_HLT_HT430_DisplacedDijet60_DisplacedTrack_ = true;
    }
    return HLT_HT430_DisplacedDijet60_DisplacedTrack_;
}
const bool &Nano::HLT_HT430_DisplacedDijet80_DisplacedTrack() {
    if (!loaded_HLT_HT430_DisplacedDijet80_DisplacedTrack_) {
        if (!b_HLT_HT430_DisplacedDijet80_DisplacedTrack_) throw std::runtime_error("HLT_HT430_DisplacedDijet80_DisplacedTrack branch doesn't exist");
        b_HLT_HT430_DisplacedDijet80_DisplacedTrack_->GetEntry(index);
        loaded_HLT_HT430_DisplacedDijet80_DisplacedTrack_ = true;
    }
    return HLT_HT430_DisplacedDijet80_DisplacedTrack_;
}
const bool &Nano::HLT_HT450_Beamspot() {
    if (!loaded_HLT_HT450_Beamspot_) {
        if (!b_HLT_HT450_Beamspot_) throw std::runtime_error("HLT_HT450_Beamspot branch doesn't exist");
        b_HLT_HT450_Beamspot_->GetEntry(index);
        loaded_HLT_HT450_Beamspot_ = true;
    }
    return HLT_HT450_Beamspot_;
}
const bool &Nano::HLT_HT550_DisplacedDijet60_Inclusive() {
    if (!loaded_HLT_HT550_DisplacedDijet60_Inclusive_) {
        if (!b_HLT_HT550_DisplacedDijet60_Inclusive_) throw std::runtime_error("HLT_HT550_DisplacedDijet60_Inclusive branch doesn't exist");
        b_HLT_HT550_DisplacedDijet60_Inclusive_->GetEntry(index);
        loaded_HLT_HT550_DisplacedDijet60_Inclusive_ = true;
    }
    return HLT_HT550_DisplacedDijet60_Inclusive_;
}
const bool &Nano::HLT_HT550_DisplacedDijet80_Inclusive() {
    if (!loaded_HLT_HT550_DisplacedDijet80_Inclusive_) {
        if (!b_HLT_HT550_DisplacedDijet80_Inclusive_) throw std::runtime_error("HLT_HT550_DisplacedDijet80_Inclusive branch doesn't exist");
        b_HLT_HT550_DisplacedDijet80_Inclusive_->GetEntry(index);
        loaded_HLT_HT550_DisplacedDijet80_Inclusive_ = true;
    }
    return HLT_HT550_DisplacedDijet80_Inclusive_;
}
const bool &Nano::HLT_HT650_DisplacedDijet60_Inclusive() {
    if (!loaded_HLT_HT650_DisplacedDijet60_Inclusive_) {
        if (!b_HLT_HT650_DisplacedDijet60_Inclusive_) throw std::runtime_error("HLT_HT650_DisplacedDijet60_Inclusive branch doesn't exist");
        b_HLT_HT650_DisplacedDijet60_Inclusive_->GetEntry(index);
        loaded_HLT_HT650_DisplacedDijet60_Inclusive_ = true;
    }
    return HLT_HT650_DisplacedDijet60_Inclusive_;
}
const bool &Nano::HLT_HT650_DisplacedDijet80_Inclusive() {
    if (!loaded_HLT_HT650_DisplacedDijet80_Inclusive_) {
        if (!b_HLT_HT650_DisplacedDijet80_Inclusive_) throw std::runtime_error("HLT_HT650_DisplacedDijet80_Inclusive branch doesn't exist");
        b_HLT_HT650_DisplacedDijet80_Inclusive_->GetEntry(index);
        loaded_HLT_HT650_DisplacedDijet80_Inclusive_ = true;
    }
    return HLT_HT650_DisplacedDijet80_Inclusive_;
}
const bool &Nano::HLT_HT750_DisplacedDijet80_Inclusive() {
    if (!loaded_HLT_HT750_DisplacedDijet80_Inclusive_) {
        if (!b_HLT_HT750_DisplacedDijet80_Inclusive_) throw std::runtime_error("HLT_HT750_DisplacedDijet80_Inclusive branch doesn't exist");
        b_HLT_HT750_DisplacedDijet80_Inclusive_->GetEntry(index);
        loaded_HLT_HT750_DisplacedDijet80_Inclusive_ = true;
    }
    return HLT_HT750_DisplacedDijet80_Inclusive_;
}
const bool &Nano::HLT_HcalCalibration() {
    if (!loaded_HLT_HcalCalibration_) {
        if (!b_HLT_HcalCalibration_) throw std::runtime_error("HLT_HcalCalibration branch doesn't exist");
        b_HLT_HcalCalibration_->GetEntry(index);
        loaded_HLT_HcalCalibration_ = true;
    }
    return HLT_HcalCalibration_;
}
const bool &Nano::HLT_HcalIsolatedbunch() {
    if (!loaded_HLT_HcalIsolatedbunch_) {
        if (!b_HLT_HcalIsolatedbunch_) throw std::runtime_error("HLT_HcalIsolatedbunch branch doesn't exist");
        b_HLT_HcalIsolatedbunch_->GetEntry(index);
        loaded_HLT_HcalIsolatedbunch_ = true;
    }
    return HLT_HcalIsolatedbunch_;
}
const bool &Nano::HLT_HcalNZS() {
    if (!loaded_HLT_HcalNZS_) {
        if (!b_HLT_HcalNZS_) throw std::runtime_error("HLT_HcalNZS branch doesn't exist");
        b_HLT_HcalNZS_->GetEntry(index);
        loaded_HLT_HcalNZS_ = true;
    }
    return HLT_HcalNZS_;
}
const bool &Nano::HLT_HcalPhiSym() {
    if (!loaded_HLT_HcalPhiSym_) {
        if (!b_HLT_HcalPhiSym_) throw std::runtime_error("HLT_HcalPhiSym branch doesn't exist");
        b_HLT_HcalPhiSym_->GetEntry(index);
        loaded_HLT_HcalPhiSym_ = true;
    }
    return HLT_HcalPhiSym_;
}
const bool &Nano::HLT_IsoMu20() {
    if (!loaded_HLT_IsoMu20_) {
        if (!b_HLT_IsoMu20_) throw std::runtime_error("HLT_IsoMu20 branch doesn't exist");
        b_HLT_IsoMu20_->GetEntry(index);
        loaded_HLT_IsoMu20_ = true;
    }
    return HLT_IsoMu20_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_;
}
const bool &Nano::HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1() {
    if (!loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_) {
        if (!b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_) throw std::runtime_error("HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1 branch doesn't exist");
        b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_ = true;
    }
    return HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
}
const bool &Nano::HLT_IsoMu24() {
    if (!loaded_HLT_IsoMu24_) {
        if (!b_HLT_IsoMu24_) throw std::runtime_error("HLT_IsoMu24 branch doesn't exist");
        b_HLT_IsoMu24_->GetEntry(index);
        loaded_HLT_IsoMu24_ = true;
    }
    return HLT_IsoMu24_;
}
const bool &Nano::HLT_IsoMu24_eta2p1() {
    if (!loaded_HLT_IsoMu24_eta2p1_) {
        if (!b_HLT_IsoMu24_eta2p1_) throw std::runtime_error("HLT_IsoMu24_eta2p1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_ = true;
    }
    return HLT_IsoMu24_eta2p1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr() {
    if (!loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) {
        if (!b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) throw std::runtime_error("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = true;
    }
    return HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1() {
    if (!loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) {
        if (!b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_) throw std::runtime_error("HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1 branch doesn't exist");
        b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_->GetEntry(index);
        loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_ = true;
    }
    return HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
}
const bool &Nano::HLT_IsoMu27() {
    if (!loaded_HLT_IsoMu27_) {
        if (!b_HLT_IsoMu27_) throw std::runtime_error("HLT_IsoMu27 branch doesn't exist");
        b_HLT_IsoMu27_->GetEntry(index);
        loaded_HLT_IsoMu27_ = true;
    }
    return HLT_IsoMu27_;
}
const bool &Nano::HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1() {
    if (!loaded_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_) {
        if (!b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_) throw std::runtime_error("HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1 branch doesn't exist");
        b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_->GetEntry(index);
        loaded_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_ = true;
    }
    return HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_;
}
const bool &Nano::HLT_IsoMu30() {
    if (!loaded_HLT_IsoMu30_) {
        if (!b_HLT_IsoMu30_) throw std::runtime_error("HLT_IsoMu30 branch doesn't exist");
        b_HLT_IsoMu30_->GetEntry(index);
        loaded_HLT_IsoMu30_ = true;
    }
    return HLT_IsoMu30_;
}
const bool &Nano::HLT_IsoTrackHB() {
    if (!loaded_HLT_IsoTrackHB_) {
        if (!b_HLT_IsoTrackHB_) throw std::runtime_error("HLT_IsoTrackHB branch doesn't exist");
        b_HLT_IsoTrackHB_->GetEntry(index);
        loaded_HLT_IsoTrackHB_ = true;
    }
    return HLT_IsoTrackHB_;
}
const bool &Nano::HLT_IsoTrackHE() {
    if (!loaded_HLT_IsoTrackHE_) {
        if (!b_HLT_IsoTrackHE_) throw std::runtime_error("HLT_IsoTrackHE branch doesn't exist");
        b_HLT_IsoTrackHE_->GetEntry(index);
        loaded_HLT_IsoTrackHE_ = true;
    }
    return HLT_IsoTrackHE_;
}
const bool &Nano::HLT_L1ETMHadSeeds() {
    if (!loaded_HLT_L1ETMHadSeeds_) {
        if (!b_HLT_L1ETMHadSeeds_) throw std::runtime_error("HLT_L1ETMHadSeeds branch doesn't exist");
        b_HLT_L1ETMHadSeeds_->GetEntry(index);
        loaded_HLT_L1ETMHadSeeds_ = true;
    }
    return HLT_L1ETMHadSeeds_;
}
const bool &Nano::HLT_L1MinimumBiasHF0OR() {
    if (!loaded_HLT_L1MinimumBiasHF0OR_) {
        if (!b_HLT_L1MinimumBiasHF0OR_) throw std::runtime_error("HLT_L1MinimumBiasHF0OR branch doesn't exist");
        b_HLT_L1MinimumBiasHF0OR_->GetEntry(index);
        loaded_HLT_L1MinimumBiasHF0OR_ = true;
    }
    return HLT_L1MinimumBiasHF0OR_;
}
const bool &Nano::HLT_L1MinimumBiasHF_OR() {
    if (!loaded_HLT_L1MinimumBiasHF_OR_) {
        if (!b_HLT_L1MinimumBiasHF_OR_) throw std::runtime_error("HLT_L1MinimumBiasHF_OR branch doesn't exist");
        b_HLT_L1MinimumBiasHF_OR_->GetEntry(index);
        loaded_HLT_L1MinimumBiasHF_OR_ = true;
    }
    return HLT_L1MinimumBiasHF_OR_;
}
const bool &Nano::HLT_L1NotBptxOR() {
    if (!loaded_HLT_L1NotBptxOR_) {
        if (!b_HLT_L1NotBptxOR_) throw std::runtime_error("HLT_L1NotBptxOR branch doesn't exist");
        b_HLT_L1NotBptxOR_->GetEntry(index);
        loaded_HLT_L1NotBptxOR_ = true;
    }
    return HLT_L1NotBptxOR_;
}
const bool &Nano::HLT_L1SingleMu18() {
    if (!loaded_HLT_L1SingleMu18_) {
        if (!b_HLT_L1SingleMu18_) throw std::runtime_error("HLT_L1SingleMu18 branch doesn't exist");
        b_HLT_L1SingleMu18_->GetEntry(index);
        loaded_HLT_L1SingleMu18_ = true;
    }
    return HLT_L1SingleMu18_;
}
const bool &Nano::HLT_L1SingleMu25() {
    if (!loaded_HLT_L1SingleMu25_) {
        if (!b_HLT_L1SingleMu25_) throw std::runtime_error("HLT_L1SingleMu25 branch doesn't exist");
        b_HLT_L1SingleMu25_->GetEntry(index);
        loaded_HLT_L1SingleMu25_ = true;
    }
    return HLT_L1SingleMu25_;
}
const bool &Nano::HLT_L1UnpairedBunchBptxMinus() {
    if (!loaded_HLT_L1UnpairedBunchBptxMinus_) {
        if (!b_HLT_L1UnpairedBunchBptxMinus_) throw std::runtime_error("HLT_L1UnpairedBunchBptxMinus branch doesn't exist");
        b_HLT_L1UnpairedBunchBptxMinus_->GetEntry(index);
        loaded_HLT_L1UnpairedBunchBptxMinus_ = true;
    }
    return HLT_L1UnpairedBunchBptxMinus_;
}
const bool &Nano::HLT_L1UnpairedBunchBptxPlus() {
    if (!loaded_HLT_L1UnpairedBunchBptxPlus_) {
        if (!b_HLT_L1UnpairedBunchBptxPlus_) throw std::runtime_error("HLT_L1UnpairedBunchBptxPlus branch doesn't exist");
        b_HLT_L1UnpairedBunchBptxPlus_->GetEntry(index);
        loaded_HLT_L1UnpairedBunchBptxPlus_ = true;
    }
    return HLT_L1UnpairedBunchBptxPlus_;
}
const bool &Nano::HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142() {
    if (!loaded_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_) {
        if (!b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_) throw std::runtime_error("HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 branch doesn't exist");
        b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_->GetEntry(index);
        loaded_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_ = true;
    }
    return HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_;
}
const bool &Nano::HLT_L1_DoubleJet30_Mass_Min400_Mu10() {
    if (!loaded_HLT_L1_DoubleJet30_Mass_Min400_Mu10_) {
        if (!b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_) throw std::runtime_error("HLT_L1_DoubleJet30_Mass_Min400_Mu10 branch doesn't exist");
        b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_->GetEntry(index);
        loaded_HLT_L1_DoubleJet30_Mass_Min400_Mu10_ = true;
    }
    return HLT_L1_DoubleJet30_Mass_Min400_Mu10_;
}
const bool &Nano::HLT_L2Mu10() {
    if (!loaded_HLT_L2Mu10_) {
        if (!b_HLT_L2Mu10_) throw std::runtime_error("HLT_L2Mu10 branch doesn't exist");
        b_HLT_L2Mu10_->GetEntry(index);
        loaded_HLT_L2Mu10_ = true;
    }
    return HLT_L2Mu10_;
}
const bool &Nano::HLT_L2Mu10_NoVertex_NoBPTX() {
    if (!loaded_HLT_L2Mu10_NoVertex_NoBPTX_) {
        if (!b_HLT_L2Mu10_NoVertex_NoBPTX_) throw std::runtime_error("HLT_L2Mu10_NoVertex_NoBPTX branch doesn't exist");
        b_HLT_L2Mu10_NoVertex_NoBPTX_->GetEntry(index);
        loaded_HLT_L2Mu10_NoVertex_NoBPTX_ = true;
    }
    return HLT_L2Mu10_NoVertex_NoBPTX_;
}
const bool &Nano::HLT_L2Mu10_NoVertex_NoBPTX3BX() {
    if (!loaded_HLT_L2Mu10_NoVertex_NoBPTX3BX_) {
        if (!b_HLT_L2Mu10_NoVertex_NoBPTX3BX_) throw std::runtime_error("HLT_L2Mu10_NoVertex_NoBPTX3BX branch doesn't exist");
        b_HLT_L2Mu10_NoVertex_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_L2Mu10_NoVertex_NoBPTX3BX_ = true;
    }
    return HLT_L2Mu10_NoVertex_NoBPTX3BX_;
}
const bool &Nano::HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX() {
    if (!loaded_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_) {
        if (!b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_) throw std::runtime_error("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX branch doesn't exist");
        b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_ = true;
    }
    return HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_;
}
const bool &Nano::HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX() {
    if (!loaded_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_) {
        if (!b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_) throw std::runtime_error("HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX branch doesn't exist");
        b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_ = true;
    }
    return HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_;
}
const bool &Nano::HLT_L2Mu50() {
    if (!loaded_HLT_L2Mu50_) {
        if (!b_HLT_L2Mu50_) throw std::runtime_error("HLT_L2Mu50 branch doesn't exist");
        b_HLT_L2Mu50_->GetEntry(index);
        loaded_HLT_L2Mu50_ = true;
    }
    return HLT_L2Mu50_;
}
const bool &Nano::HLT_MET105_IsoTrk50() {
    if (!loaded_HLT_MET105_IsoTrk50_) {
        if (!b_HLT_MET105_IsoTrk50_) throw std::runtime_error("HLT_MET105_IsoTrk50 branch doesn't exist");
        b_HLT_MET105_IsoTrk50_->GetEntry(index);
        loaded_HLT_MET105_IsoTrk50_ = true;
    }
    return HLT_MET105_IsoTrk50_;
}
const bool &Nano::HLT_MET120_IsoTrk50() {
    if (!loaded_HLT_MET120_IsoTrk50_) {
        if (!b_HLT_MET120_IsoTrk50_) throw std::runtime_error("HLT_MET120_IsoTrk50 branch doesn't exist");
        b_HLT_MET120_IsoTrk50_->GetEntry(index);
        loaded_HLT_MET120_IsoTrk50_ = true;
    }
    return HLT_MET120_IsoTrk50_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1() {
    if (!loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_) {
        if (!b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_) throw std::runtime_error("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_ = true;
    }
    return HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr() {
    if (!loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_) {
        if (!b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_) throw std::runtime_error("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_ = true;
    }
    return HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_;
}
const bool &Nano::HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90() {
    if (!loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_) {
        if (!b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_) throw std::runtime_error("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 branch doesn't exist");
        b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_->GetEntry(index);
        loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_ = true;
    }
    return HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_;
}
const bool &Nano::HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight() {
    if (!loaded_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_) {
        if (!b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_) throw std::runtime_error("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight branch doesn't exist");
        b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_->GetEntry(index);
        loaded_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_ = true;
    }
    return HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_;
}
const bool &Nano::HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight() {
    if (!loaded_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_) {
        if (!b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_) throw std::runtime_error("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight branch doesn't exist");
        b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_->GetEntry(index);
        loaded_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_ = true;
    }
    return HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_;
}
const bool &Nano::HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight() {
    if (!loaded_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_) {
        if (!b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_) throw std::runtime_error("HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight branch doesn't exist");
        b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_->GetEntry(index);
        loaded_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_ = true;
    }
    return HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_;
}
const bool &Nano::HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight() {
    if (!loaded_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_) {
        if (!b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_) throw std::runtime_error("HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight branch doesn't exist");
        b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_->GetEntry(index);
        loaded_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_ = true;
    }
    return HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_;
}
const bool &Nano::HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60() {
    if (!loaded_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_) {
        if (!b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_) throw std::runtime_error("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 branch doesn't exist");
        b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_->GetEntry(index);
        loaded_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_ = true;
    }
    return HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_;
}
const bool &Nano::HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33() {
    if (!loaded_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_) {
        if (!b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_) throw std::runtime_error("HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33 branch doesn't exist");
        b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_->GetEntry(index);
        loaded_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_ = true;
    }
    return HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_;
}
const bool &Nano::HLT_Mu12_DoublePhoton20() {
    if (!loaded_HLT_Mu12_DoublePhoton20_) {
        if (!b_HLT_Mu12_DoublePhoton20_) throw std::runtime_error("HLT_Mu12_DoublePhoton20 branch doesn't exist");
        b_HLT_Mu12_DoublePhoton20_->GetEntry(index);
        loaded_HLT_Mu12_DoublePhoton20_ = true;
    }
    return HLT_Mu12_DoublePhoton20_;
}
const bool &Nano::HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() {
    if (!loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) {
        if (!b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) throw std::runtime_error("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL branch doesn't exist");
        b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_->GetEntry(index);
        loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = true;
    }
    return HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
}
const bool &Nano::HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ() {
    if (!loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) {
        if (!b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) throw std::runtime_error("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ branch doesn't exist");
        b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_->GetEntry(index);
        loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = true;
    }
    return HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
}
const bool &Nano::HLT_Mu15_IsoVVVL_PFHT450() {
    if (!loaded_HLT_Mu15_IsoVVVL_PFHT450_) {
        if (!b_HLT_Mu15_IsoVVVL_PFHT450_) throw std::runtime_error("HLT_Mu15_IsoVVVL_PFHT450 branch doesn't exist");
        b_HLT_Mu15_IsoVVVL_PFHT450_->GetEntry(index);
        loaded_HLT_Mu15_IsoVVVL_PFHT450_ = true;
    }
    return HLT_Mu15_IsoVVVL_PFHT450_;
}
const bool &Nano::HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5() {
    if (!loaded_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) {
        if (!b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_) throw std::runtime_error("HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5 branch doesn't exist");
        b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_->GetEntry(index);
        loaded_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_ = true;
    }
    return HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
}
const bool &Nano::HLT_Mu15_IsoVVVL_PFHT450_PFMET50() {
    if (!loaded_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_) {
        if (!b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_) throw std::runtime_error("HLT_Mu15_IsoVVVL_PFHT450_PFMET50 branch doesn't exist");
        b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_->GetEntry(index);
        loaded_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_ = true;
    }
    return HLT_Mu15_IsoVVVL_PFHT450_PFMET50_;
}
const bool &Nano::HLT_Mu15_IsoVVVL_PFHT600() {
    if (!loaded_HLT_Mu15_IsoVVVL_PFHT600_) {
        if (!b_HLT_Mu15_IsoVVVL_PFHT600_) throw std::runtime_error("HLT_Mu15_IsoVVVL_PFHT600 branch doesn't exist");
        b_HLT_Mu15_IsoVVVL_PFHT600_->GetEntry(index);
        loaded_HLT_Mu15_IsoVVVL_PFHT600_ = true;
    }
    return HLT_Mu15_IsoVVVL_PFHT600_;
}
const bool &Nano::HLT_Mu17() {
    if (!loaded_HLT_Mu17_) {
        if (!b_HLT_Mu17_) throw std::runtime_error("HLT_Mu17 branch doesn't exist");
        b_HLT_Mu17_->GetEntry(index);
        loaded_HLT_Mu17_ = true;
    }
    return HLT_Mu17_;
}
const bool &Nano::HLT_Mu17_Photon30_IsoCaloId() {
    if (!loaded_HLT_Mu17_Photon30_IsoCaloId_) {
        if (!b_HLT_Mu17_Photon30_IsoCaloId_) throw std::runtime_error("HLT_Mu17_Photon30_IsoCaloId branch doesn't exist");
        b_HLT_Mu17_Photon30_IsoCaloId_->GetEntry(index);
        loaded_HLT_Mu17_Photon30_IsoCaloId_ = true;
    }
    return HLT_Mu17_Photon30_IsoCaloId_;
}
const bool &Nano::HLT_Mu17_TrkIsoVVL() {
    if (!loaded_HLT_Mu17_TrkIsoVVL_) {
        if (!b_HLT_Mu17_TrkIsoVVL_) throw std::runtime_error("HLT_Mu17_TrkIsoVVL branch doesn't exist");
        b_HLT_Mu17_TrkIsoVVL_->GetEntry(index);
        loaded_HLT_Mu17_TrkIsoVVL_ = true;
    }
    return HLT_Mu17_TrkIsoVVL_;
}
const bool &Nano::HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL() {
    if (!loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_) {
        if (!b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_) throw std::runtime_error("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL branch doesn't exist");
        b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_->GetEntry(index);
        loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_ = true;
    }
    return HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_;
}
const bool &Nano::HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ() {
    if (!loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_) {
        if (!b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_) throw std::runtime_error("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ branch doesn't exist");
        b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_->GetEntry(index);
        loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_ = true;
    }
    return HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
}
const bool &Nano::HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8() {
    if (!loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_) {
        if (!b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_) throw std::runtime_error("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 branch doesn't exist");
        b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_->GetEntry(index);
        loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_ = true;
    }
    return HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_;
}
const bool &Nano::HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8() {
    if (!loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_) {
        if (!b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_) throw std::runtime_error("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 branch doesn't exist");
        b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_->GetEntry(index);
        loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_ = true;
    }
    return HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_;
}
const bool &Nano::HLT_Mu18_Mu9() {
    if (!loaded_HLT_Mu18_Mu9_) {
        if (!b_HLT_Mu18_Mu9_) throw std::runtime_error("HLT_Mu18_Mu9 branch doesn't exist");
        b_HLT_Mu18_Mu9_->GetEntry(index);
        loaded_HLT_Mu18_Mu9_ = true;
    }
    return HLT_Mu18_Mu9_;
}
const bool &Nano::HLT_Mu18_Mu9_DZ() {
    if (!loaded_HLT_Mu18_Mu9_DZ_) {
        if (!b_HLT_Mu18_Mu9_DZ_) throw std::runtime_error("HLT_Mu18_Mu9_DZ branch doesn't exist");
        b_HLT_Mu18_Mu9_DZ_->GetEntry(index);
        loaded_HLT_Mu18_Mu9_DZ_ = true;
    }
    return HLT_Mu18_Mu9_DZ_;
}
const bool &Nano::HLT_Mu18_Mu9_SameSign() {
    if (!loaded_HLT_Mu18_Mu9_SameSign_) {
        if (!b_HLT_Mu18_Mu9_SameSign_) throw std::runtime_error("HLT_Mu18_Mu9_SameSign branch doesn't exist");
        b_HLT_Mu18_Mu9_SameSign_->GetEntry(index);
        loaded_HLT_Mu18_Mu9_SameSign_ = true;
    }
    return HLT_Mu18_Mu9_SameSign_;
}
const bool &Nano::HLT_Mu18_Mu9_SameSign_DZ() {
    if (!loaded_HLT_Mu18_Mu9_SameSign_DZ_) {
        if (!b_HLT_Mu18_Mu9_SameSign_DZ_) throw std::runtime_error("HLT_Mu18_Mu9_SameSign_DZ branch doesn't exist");
        b_HLT_Mu18_Mu9_SameSign_DZ_->GetEntry(index);
        loaded_HLT_Mu18_Mu9_SameSign_DZ_ = true;
    }
    return HLT_Mu18_Mu9_SameSign_DZ_;
}
const bool &Nano::HLT_Mu19() {
    if (!loaded_HLT_Mu19_) {
        if (!b_HLT_Mu19_) throw std::runtime_error("HLT_Mu19 branch doesn't exist");
        b_HLT_Mu19_->GetEntry(index);
        loaded_HLT_Mu19_ = true;
    }
    return HLT_Mu19_;
}
const bool &Nano::HLT_Mu19_TrkIsoVVL() {
    if (!loaded_HLT_Mu19_TrkIsoVVL_) {
        if (!b_HLT_Mu19_TrkIsoVVL_) throw std::runtime_error("HLT_Mu19_TrkIsoVVL branch doesn't exist");
        b_HLT_Mu19_TrkIsoVVL_->GetEntry(index);
        loaded_HLT_Mu19_TrkIsoVVL_ = true;
    }
    return HLT_Mu19_TrkIsoVVL_;
}
const bool &Nano::HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL() {
    if (!loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_) {
        if (!b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_) throw std::runtime_error("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL branch doesn't exist");
        b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_->GetEntry(index);
        loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_ = true;
    }
    return HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_;
}
const bool &Nano::HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ() {
    if (!loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_) {
        if (!b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_) throw std::runtime_error("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ branch doesn't exist");
        b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_->GetEntry(index);
        loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_ = true;
    }
    return HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_;
}
const bool &Nano::HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8() {
    if (!loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_) {
        if (!b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_) throw std::runtime_error("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 branch doesn't exist");
        b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_->GetEntry(index);
        loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_ = true;
    }
    return HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_;
}
const bool &Nano::HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8() {
    if (!loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_) {
        if (!b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_) throw std::runtime_error("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 branch doesn't exist");
        b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_->GetEntry(index);
        loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_ = true;
    }
    return HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_;
}
const bool &Nano::HLT_Mu20() {
    if (!loaded_HLT_Mu20_) {
        if (!b_HLT_Mu20_) throw std::runtime_error("HLT_Mu20 branch doesn't exist");
        b_HLT_Mu20_->GetEntry(index);
        loaded_HLT_Mu20_ = true;
    }
    return HLT_Mu20_;
}
const bool &Nano::HLT_Mu20_Mu10() {
    if (!loaded_HLT_Mu20_Mu10_) {
        if (!b_HLT_Mu20_Mu10_) throw std::runtime_error("HLT_Mu20_Mu10 branch doesn't exist");
        b_HLT_Mu20_Mu10_->GetEntry(index);
        loaded_HLT_Mu20_Mu10_ = true;
    }
    return HLT_Mu20_Mu10_;
}
const bool &Nano::HLT_Mu20_Mu10_DZ() {
    if (!loaded_HLT_Mu20_Mu10_DZ_) {
        if (!b_HLT_Mu20_Mu10_DZ_) throw std::runtime_error("HLT_Mu20_Mu10_DZ branch doesn't exist");
        b_HLT_Mu20_Mu10_DZ_->GetEntry(index);
        loaded_HLT_Mu20_Mu10_DZ_ = true;
    }
    return HLT_Mu20_Mu10_DZ_;
}
const bool &Nano::HLT_Mu20_Mu10_SameSign() {
    if (!loaded_HLT_Mu20_Mu10_SameSign_) {
        if (!b_HLT_Mu20_Mu10_SameSign_) throw std::runtime_error("HLT_Mu20_Mu10_SameSign branch doesn't exist");
        b_HLT_Mu20_Mu10_SameSign_->GetEntry(index);
        loaded_HLT_Mu20_Mu10_SameSign_ = true;
    }
    return HLT_Mu20_Mu10_SameSign_;
}
const bool &Nano::HLT_Mu20_Mu10_SameSign_DZ() {
    if (!loaded_HLT_Mu20_Mu10_SameSign_DZ_) {
        if (!b_HLT_Mu20_Mu10_SameSign_DZ_) throw std::runtime_error("HLT_Mu20_Mu10_SameSign_DZ branch doesn't exist");
        b_HLT_Mu20_Mu10_SameSign_DZ_->GetEntry(index);
        loaded_HLT_Mu20_Mu10_SameSign_DZ_ = true;
    }
    return HLT_Mu20_Mu10_SameSign_DZ_;
}
const bool &Nano::HLT_Mu20_TkMu0_Phi() {
    if (!loaded_HLT_Mu20_TkMu0_Phi_) {
        if (!b_HLT_Mu20_TkMu0_Phi_) throw std::runtime_error("HLT_Mu20_TkMu0_Phi branch doesn't exist");
        b_HLT_Mu20_TkMu0_Phi_->GetEntry(index);
        loaded_HLT_Mu20_TkMu0_Phi_ = true;
    }
    return HLT_Mu20_TkMu0_Phi_;
}
const bool &Nano::HLT_Mu23_Mu12() {
    if (!loaded_HLT_Mu23_Mu12_) {
        if (!b_HLT_Mu23_Mu12_) throw std::runtime_error("HLT_Mu23_Mu12 branch doesn't exist");
        b_HLT_Mu23_Mu12_->GetEntry(index);
        loaded_HLT_Mu23_Mu12_ = true;
    }
    return HLT_Mu23_Mu12_;
}
const bool &Nano::HLT_Mu23_Mu12_DZ() {
    if (!loaded_HLT_Mu23_Mu12_DZ_) {
        if (!b_HLT_Mu23_Mu12_DZ_) throw std::runtime_error("HLT_Mu23_Mu12_DZ branch doesn't exist");
        b_HLT_Mu23_Mu12_DZ_->GetEntry(index);
        loaded_HLT_Mu23_Mu12_DZ_ = true;
    }
    return HLT_Mu23_Mu12_DZ_;
}
const bool &Nano::HLT_Mu23_Mu12_SameSign() {
    if (!loaded_HLT_Mu23_Mu12_SameSign_) {
        if (!b_HLT_Mu23_Mu12_SameSign_) throw std::runtime_error("HLT_Mu23_Mu12_SameSign branch doesn't exist");
        b_HLT_Mu23_Mu12_SameSign_->GetEntry(index);
        loaded_HLT_Mu23_Mu12_SameSign_ = true;
    }
    return HLT_Mu23_Mu12_SameSign_;
}
const bool &Nano::HLT_Mu23_Mu12_SameSign_DZ() {
    if (!loaded_HLT_Mu23_Mu12_SameSign_DZ_) {
        if (!b_HLT_Mu23_Mu12_SameSign_DZ_) throw std::runtime_error("HLT_Mu23_Mu12_SameSign_DZ branch doesn't exist");
        b_HLT_Mu23_Mu12_SameSign_DZ_->GetEntry(index);
        loaded_HLT_Mu23_Mu12_SameSign_DZ_ = true;
    }
    return HLT_Mu23_Mu12_SameSign_DZ_;
}
const bool &Nano::HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL() {
    if (!loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_) {
        if (!b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_) throw std::runtime_error("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL branch doesn't exist");
        b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_->GetEntry(index);
        loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ = true;
    }
    return HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
}
const bool &Nano::HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() {
    if (!loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) {
        if (!b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_) throw std::runtime_error("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ branch doesn't exist");
        b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_->GetEntry(index);
        loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_ = true;
    }
    return HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
}
const bool &Nano::HLT_Mu25_TkMu0_Onia() {
    if (!loaded_HLT_Mu25_TkMu0_Onia_) {
        if (!b_HLT_Mu25_TkMu0_Onia_) throw std::runtime_error("HLT_Mu25_TkMu0_Onia branch doesn't exist");
        b_HLT_Mu25_TkMu0_Onia_->GetEntry(index);
        loaded_HLT_Mu25_TkMu0_Onia_ = true;
    }
    return HLT_Mu25_TkMu0_Onia_;
}
const bool &Nano::HLT_Mu25_TkMu0_Phi() {
    if (!loaded_HLT_Mu25_TkMu0_Phi_) {
        if (!b_HLT_Mu25_TkMu0_Phi_) throw std::runtime_error("HLT_Mu25_TkMu0_Phi branch doesn't exist");
        b_HLT_Mu25_TkMu0_Phi_->GetEntry(index);
        loaded_HLT_Mu25_TkMu0_Phi_ = true;
    }
    return HLT_Mu25_TkMu0_Phi_;
}
const bool &Nano::HLT_Mu27() {
    if (!loaded_HLT_Mu27_) {
        if (!b_HLT_Mu27_) throw std::runtime_error("HLT_Mu27 branch doesn't exist");
        b_HLT_Mu27_->GetEntry(index);
        loaded_HLT_Mu27_ = true;
    }
    return HLT_Mu27_;
}
const bool &Nano::HLT_Mu27_Ele37_CaloIdL_MW() {
    if (!loaded_HLT_Mu27_Ele37_CaloIdL_MW_) {
        if (!b_HLT_Mu27_Ele37_CaloIdL_MW_) throw std::runtime_error("HLT_Mu27_Ele37_CaloIdL_MW branch doesn't exist");
        b_HLT_Mu27_Ele37_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_Mu27_Ele37_CaloIdL_MW_ = true;
    }
    return HLT_Mu27_Ele37_CaloIdL_MW_;
}
const bool &Nano::HLT_Mu30_TkMu0_Onia() {
    if (!loaded_HLT_Mu30_TkMu0_Onia_) {
        if (!b_HLT_Mu30_TkMu0_Onia_) throw std::runtime_error("HLT_Mu30_TkMu0_Onia branch doesn't exist");
        b_HLT_Mu30_TkMu0_Onia_->GetEntry(index);
        loaded_HLT_Mu30_TkMu0_Onia_ = true;
    }
    return HLT_Mu30_TkMu0_Onia_;
}
const bool &Nano::HLT_Mu37_Ele27_CaloIdL_MW() {
    if (!loaded_HLT_Mu37_Ele27_CaloIdL_MW_) {
        if (!b_HLT_Mu37_Ele27_CaloIdL_MW_) throw std::runtime_error("HLT_Mu37_Ele27_CaloIdL_MW branch doesn't exist");
        b_HLT_Mu37_Ele27_CaloIdL_MW_->GetEntry(index);
        loaded_HLT_Mu37_Ele27_CaloIdL_MW_ = true;
    }
    return HLT_Mu37_Ele27_CaloIdL_MW_;
}
const bool &Nano::HLT_Mu37_TkMu27() {
    if (!loaded_HLT_Mu37_TkMu27_) {
        if (!b_HLT_Mu37_TkMu27_) throw std::runtime_error("HLT_Mu37_TkMu27 branch doesn't exist");
        b_HLT_Mu37_TkMu27_->GetEntry(index);
        loaded_HLT_Mu37_TkMu27_ = true;
    }
    return HLT_Mu37_TkMu27_;
}
const bool &Nano::HLT_Mu3_PFJet40() {
    if (!loaded_HLT_Mu3_PFJet40_) {
        if (!b_HLT_Mu3_PFJet40_) throw std::runtime_error("HLT_Mu3_PFJet40 branch doesn't exist");
        b_HLT_Mu3_PFJet40_->GetEntry(index);
        loaded_HLT_Mu3_PFJet40_ = true;
    }
    return HLT_Mu3_PFJet40_;
}
const bool &Nano::HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL() {
    if (!loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) {
        if (!b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) throw std::runtime_error("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL branch doesn't exist");
        b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = true;
    }
    return HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
}
const bool &Nano::HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL() {
    if (!loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) {
        if (!b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) throw std::runtime_error("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL branch doesn't exist");
        b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = true;
    }
    return HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
}
const bool &Nano::HLT_Mu50() {
    if (!loaded_HLT_Mu50_) {
        if (!b_HLT_Mu50_) throw std::runtime_error("HLT_Mu50 branch doesn't exist");
        b_HLT_Mu50_->GetEntry(index);
        loaded_HLT_Mu50_ = true;
    }
    return HLT_Mu50_;
}
const bool &Nano::HLT_Mu50_IsoVVVL_PFHT450() {
    if (!loaded_HLT_Mu50_IsoVVVL_PFHT450_) {
        if (!b_HLT_Mu50_IsoVVVL_PFHT450_) throw std::runtime_error("HLT_Mu50_IsoVVVL_PFHT450 branch doesn't exist");
        b_HLT_Mu50_IsoVVVL_PFHT450_->GetEntry(index);
        loaded_HLT_Mu50_IsoVVVL_PFHT450_ = true;
    }
    return HLT_Mu50_IsoVVVL_PFHT450_;
}
const bool &Nano::HLT_Mu55() {
    if (!loaded_HLT_Mu55_) {
        if (!b_HLT_Mu55_) throw std::runtime_error("HLT_Mu55 branch doesn't exist");
        b_HLT_Mu55_->GetEntry(index);
        loaded_HLT_Mu55_ = true;
    }
    return HLT_Mu55_;
}
const bool &Nano::HLT_Mu7p5_L2Mu2_Jpsi() {
    if (!loaded_HLT_Mu7p5_L2Mu2_Jpsi_) {
        if (!b_HLT_Mu7p5_L2Mu2_Jpsi_) throw std::runtime_error("HLT_Mu7p5_L2Mu2_Jpsi branch doesn't exist");
        b_HLT_Mu7p5_L2Mu2_Jpsi_->GetEntry(index);
        loaded_HLT_Mu7p5_L2Mu2_Jpsi_ = true;
    }
    return HLT_Mu7p5_L2Mu2_Jpsi_;
}
const bool &Nano::HLT_Mu7p5_L2Mu2_Upsilon() {
    if (!loaded_HLT_Mu7p5_L2Mu2_Upsilon_) {
        if (!b_HLT_Mu7p5_L2Mu2_Upsilon_) throw std::runtime_error("HLT_Mu7p5_L2Mu2_Upsilon branch doesn't exist");
        b_HLT_Mu7p5_L2Mu2_Upsilon_->GetEntry(index);
        loaded_HLT_Mu7p5_L2Mu2_Upsilon_ = true;
    }
    return HLT_Mu7p5_L2Mu2_Upsilon_;
}
const bool &Nano::HLT_Mu7p5_Track2_Jpsi() {
    if (!loaded_HLT_Mu7p5_Track2_Jpsi_) {
        if (!b_HLT_Mu7p5_Track2_Jpsi_) throw std::runtime_error("HLT_Mu7p5_Track2_Jpsi branch doesn't exist");
        b_HLT_Mu7p5_Track2_Jpsi_->GetEntry(index);
        loaded_HLT_Mu7p5_Track2_Jpsi_ = true;
    }
    return HLT_Mu7p5_Track2_Jpsi_;
}
const bool &Nano::HLT_Mu7p5_Track2_Upsilon() {
    if (!loaded_HLT_Mu7p5_Track2_Upsilon_) {
        if (!b_HLT_Mu7p5_Track2_Upsilon_) throw std::runtime_error("HLT_Mu7p5_Track2_Upsilon branch doesn't exist");
        b_HLT_Mu7p5_Track2_Upsilon_->GetEntry(index);
        loaded_HLT_Mu7p5_Track2_Upsilon_ = true;
    }
    return HLT_Mu7p5_Track2_Upsilon_;
}
const bool &Nano::HLT_Mu7p5_Track3p5_Jpsi() {
    if (!loaded_HLT_Mu7p5_Track3p5_Jpsi_) {
        if (!b_HLT_Mu7p5_Track3p5_Jpsi_) throw std::runtime_error("HLT_Mu7p5_Track3p5_Jpsi branch doesn't exist");
        b_HLT_Mu7p5_Track3p5_Jpsi_->GetEntry(index);
        loaded_HLT_Mu7p5_Track3p5_Jpsi_ = true;
    }
    return HLT_Mu7p5_Track3p5_Jpsi_;
}
const bool &Nano::HLT_Mu7p5_Track3p5_Upsilon() {
    if (!loaded_HLT_Mu7p5_Track3p5_Upsilon_) {
        if (!b_HLT_Mu7p5_Track3p5_Upsilon_) throw std::runtime_error("HLT_Mu7p5_Track3p5_Upsilon branch doesn't exist");
        b_HLT_Mu7p5_Track3p5_Upsilon_->GetEntry(index);
        loaded_HLT_Mu7p5_Track3p5_Upsilon_ = true;
    }
    return HLT_Mu7p5_Track3p5_Upsilon_;
}
const bool &Nano::HLT_Mu7p5_Track7_Jpsi() {
    if (!loaded_HLT_Mu7p5_Track7_Jpsi_) {
        if (!b_HLT_Mu7p5_Track7_Jpsi_) throw std::runtime_error("HLT_Mu7p5_Track7_Jpsi branch doesn't exist");
        b_HLT_Mu7p5_Track7_Jpsi_->GetEntry(index);
        loaded_HLT_Mu7p5_Track7_Jpsi_ = true;
    }
    return HLT_Mu7p5_Track7_Jpsi_;
}
const bool &Nano::HLT_Mu7p5_Track7_Upsilon() {
    if (!loaded_HLT_Mu7p5_Track7_Upsilon_) {
        if (!b_HLT_Mu7p5_Track7_Upsilon_) throw std::runtime_error("HLT_Mu7p5_Track7_Upsilon branch doesn't exist");
        b_HLT_Mu7p5_Track7_Upsilon_->GetEntry(index);
        loaded_HLT_Mu7p5_Track7_Upsilon_ = true;
    }
    return HLT_Mu7p5_Track7_Upsilon_;
}
const bool &Nano::HLT_Mu8() {
    if (!loaded_HLT_Mu8_) {
        if (!b_HLT_Mu8_) throw std::runtime_error("HLT_Mu8 branch doesn't exist");
        b_HLT_Mu8_->GetEntry(index);
        loaded_HLT_Mu8_ = true;
    }
    return HLT_Mu8_;
}
const bool &Nano::HLT_Mu8_DiEle12_CaloIdL_TrackIdL() {
    if (!loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_) {
        if (!b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_) throw std::runtime_error("HLT_Mu8_DiEle12_CaloIdL_TrackIdL branch doesn't exist");
        b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_->GetEntry(index);
        loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_ = true;
    }
    return HLT_Mu8_DiEle12_CaloIdL_TrackIdL_;
}
const bool &Nano::HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ() {
    if (!loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_) {
        if (!b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_) throw std::runtime_error("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ branch doesn't exist");
        b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_->GetEntry(index);
        loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_ = true;
    }
    return HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_;
}
const bool &Nano::HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350() {
    if (!loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_) {
        if (!b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_) throw std::runtime_error("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 branch doesn't exist");
        b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_->GetEntry(index);
        loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_ = true;
    }
    return HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_;
}
const bool &Nano::HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ() {
    if (!loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_) {
        if (!b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_) throw std::runtime_error("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ branch doesn't exist");
        b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_->GetEntry(index);
        loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_ = true;
    }
    return HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_;
}
const bool &Nano::HLT_Mu8_TrkIsoVVL() {
    if (!loaded_HLT_Mu8_TrkIsoVVL_) {
        if (!b_HLT_Mu8_TrkIsoVVL_) throw std::runtime_error("HLT_Mu8_TrkIsoVVL branch doesn't exist");
        b_HLT_Mu8_TrkIsoVVL_->GetEntry(index);
        loaded_HLT_Mu8_TrkIsoVVL_ = true;
    }
    return HLT_Mu8_TrkIsoVVL_;
}
const bool &Nano::HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60() {
    if (!loaded_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_) {
        if (!b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_) throw std::runtime_error("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 branch doesn't exist");
        b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_->GetEntry(index);
        loaded_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_ = true;
    }
    return HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_;
}
const bool &Nano::HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() {
    if (!loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) {
        if (!b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_) throw std::runtime_error("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL branch doesn't exist");
        b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_->GetEntry(index);
        loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ = true;
    }
    return HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
}
const bool &Nano::HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ() {
    if (!loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) {
        if (!b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_) throw std::runtime_error("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ branch doesn't exist");
        b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_->GetEntry(index);
        loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_ = true;
    }
    return HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
}
const bool &Nano::HLT_OldMu100() {
    if (!loaded_HLT_OldMu100_) {
        if (!b_HLT_OldMu100_) throw std::runtime_error("HLT_OldMu100 branch doesn't exist");
        b_HLT_OldMu100_->GetEntry(index);
        loaded_HLT_OldMu100_ = true;
    }
    return HLT_OldMu100_;
}
const bool &Nano::HLT_PFHT1050() {
    if (!loaded_HLT_PFHT1050_) {
        if (!b_HLT_PFHT1050_) throw std::runtime_error("HLT_PFHT1050 branch doesn't exist");
        b_HLT_PFHT1050_->GetEntry(index);
        loaded_HLT_PFHT1050_ = true;
    }
    return HLT_PFHT1050_;
}
const bool &Nano::HLT_PFHT180() {
    if (!loaded_HLT_PFHT180_) {
        if (!b_HLT_PFHT180_) throw std::runtime_error("HLT_PFHT180 branch doesn't exist");
        b_HLT_PFHT180_->GetEntry(index);
        loaded_HLT_PFHT180_ = true;
    }
    return HLT_PFHT180_;
}
const bool &Nano::HLT_PFHT250() {
    if (!loaded_HLT_PFHT250_) {
        if (!b_HLT_PFHT250_) throw std::runtime_error("HLT_PFHT250 branch doesn't exist");
        b_HLT_PFHT250_->GetEntry(index);
        loaded_HLT_PFHT250_ = true;
    }
    return HLT_PFHT250_;
}
const bool &Nano::HLT_PFHT300PT30_QuadPFJet_75_60_45_40() {
    if (!loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_) {
        if (!b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_) throw std::runtime_error("HLT_PFHT300PT30_QuadPFJet_75_60_45_40 branch doesn't exist");
        b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_->GetEntry(index);
        loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_ = true;
    }
    return HLT_PFHT300PT30_QuadPFJet_75_60_45_40_;
}
const bool &Nano::HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0() {
    if (!loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_) {
        if (!b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_) throw std::runtime_error("HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0 branch doesn't exist");
        b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_->GetEntry(index);
        loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_ = true;
    }
    return HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_;
}
const bool &Nano::HLT_PFHT350() {
    if (!loaded_HLT_PFHT350_) {
        if (!b_HLT_PFHT350_) throw std::runtime_error("HLT_PFHT350 branch doesn't exist");
        b_HLT_PFHT350_->GetEntry(index);
        loaded_HLT_PFHT350_ = true;
    }
    return HLT_PFHT350_;
}
const bool &Nano::HLT_PFHT350MinPFJet15() {
    if (!loaded_HLT_PFHT350MinPFJet15_) {
        if (!b_HLT_PFHT350MinPFJet15_) throw std::runtime_error("HLT_PFHT350MinPFJet15 branch doesn't exist");
        b_HLT_PFHT350MinPFJet15_->GetEntry(index);
        loaded_HLT_PFHT350MinPFJet15_ = true;
    }
    return HLT_PFHT350MinPFJet15_;
}
const bool &Nano::HLT_PFHT370() {
    if (!loaded_HLT_PFHT370_) {
        if (!b_HLT_PFHT370_) throw std::runtime_error("HLT_PFHT370 branch doesn't exist");
        b_HLT_PFHT370_->GetEntry(index);
        loaded_HLT_PFHT370_ = true;
    }
    return HLT_PFHT370_;
}
const bool &Nano::HLT_PFHT380_SixPFJet32() {
    if (!loaded_HLT_PFHT380_SixPFJet32_) {
        if (!b_HLT_PFHT380_SixPFJet32_) throw std::runtime_error("HLT_PFHT380_SixPFJet32 branch doesn't exist");
        b_HLT_PFHT380_SixPFJet32_->GetEntry(index);
        loaded_HLT_PFHT380_SixPFJet32_ = true;
    }
    return HLT_PFHT380_SixPFJet32_;
}
const bool &Nano::HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2() {
    if (!loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_) {
        if (!b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_) throw std::runtime_error("HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2 branch doesn't exist");
        b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_->GetEntry(index);
        loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_ = true;
    }
    return HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_;
}
const bool &Nano::HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2() {
    if (!loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_) {
        if (!b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_) throw std::runtime_error("HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2 branch doesn't exist");
        b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_->GetEntry(index);
        loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_ = true;
    }
    return HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_;
}
const bool &Nano::HLT_PFHT430() {
    if (!loaded_HLT_PFHT430_) {
        if (!b_HLT_PFHT430_) throw std::runtime_error("HLT_PFHT430 branch doesn't exist");
        b_HLT_PFHT430_->GetEntry(index);
        loaded_HLT_PFHT430_ = true;
    }
    return HLT_PFHT430_;
}
const bool &Nano::HLT_PFHT430_SixPFJet40() {
    if (!loaded_HLT_PFHT430_SixPFJet40_) {
        if (!b_HLT_PFHT430_SixPFJet40_) throw std::runtime_error("HLT_PFHT430_SixPFJet40 branch doesn't exist");
        b_HLT_PFHT430_SixPFJet40_->GetEntry(index);
        loaded_HLT_PFHT430_SixPFJet40_ = true;
    }
    return HLT_PFHT430_SixPFJet40_;
}
const bool &Nano::HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5() {
    if (!loaded_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_) {
        if (!b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_) throw std::runtime_error("HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5 branch doesn't exist");
        b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_->GetEntry(index);
        loaded_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_ = true;
    }
    return HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_;
}
const bool &Nano::HLT_PFHT500_PFMET100_PFMHT100_IDTight() {
    if (!loaded_HLT_PFHT500_PFMET100_PFMHT100_IDTight_) {
        if (!b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_) throw std::runtime_error("HLT_PFHT500_PFMET100_PFMHT100_IDTight branch doesn't exist");
        b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_->GetEntry(index);
        loaded_HLT_PFHT500_PFMET100_PFMHT100_IDTight_ = true;
    }
    return HLT_PFHT500_PFMET100_PFMHT100_IDTight_;
}
const bool &Nano::HLT_PFHT500_PFMET110_PFMHT110_IDTight() {
    if (!loaded_HLT_PFHT500_PFMET110_PFMHT110_IDTight_) {
        if (!b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_) throw std::runtime_error("HLT_PFHT500_PFMET110_PFMHT110_IDTight branch doesn't exist");
        b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_->GetEntry(index);
        loaded_HLT_PFHT500_PFMET110_PFMHT110_IDTight_ = true;
    }
    return HLT_PFHT500_PFMET110_PFMHT110_IDTight_;
}
const bool &Nano::HLT_PFHT510() {
    if (!loaded_HLT_PFHT510_) {
        if (!b_HLT_PFHT510_) throw std::runtime_error("HLT_PFHT510 branch doesn't exist");
        b_HLT_PFHT510_->GetEntry(index);
        loaded_HLT_PFHT510_ = true;
    }
    return HLT_PFHT510_;
}
const bool &Nano::HLT_PFHT590() {
    if (!loaded_HLT_PFHT590_) {
        if (!b_HLT_PFHT590_) throw std::runtime_error("HLT_PFHT590 branch doesn't exist");
        b_HLT_PFHT590_->GetEntry(index);
        loaded_HLT_PFHT590_ = true;
    }
    return HLT_PFHT590_;
}
const bool &Nano::HLT_PFHT680() {
    if (!loaded_HLT_PFHT680_) {
        if (!b_HLT_PFHT680_) throw std::runtime_error("HLT_PFHT680 branch doesn't exist");
        b_HLT_PFHT680_->GetEntry(index);
        loaded_HLT_PFHT680_ = true;
    }
    return HLT_PFHT680_;
}
const bool &Nano::HLT_PFHT700_PFMET85_PFMHT85_IDTight() {
    if (!loaded_HLT_PFHT700_PFMET85_PFMHT85_IDTight_) {
        if (!b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_) throw std::runtime_error("HLT_PFHT700_PFMET85_PFMHT85_IDTight branch doesn't exist");
        b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_->GetEntry(index);
        loaded_HLT_PFHT700_PFMET85_PFMHT85_IDTight_ = true;
    }
    return HLT_PFHT700_PFMET85_PFMHT85_IDTight_;
}
const bool &Nano::HLT_PFHT700_PFMET95_PFMHT95_IDTight() {
    if (!loaded_HLT_PFHT700_PFMET95_PFMHT95_IDTight_) {
        if (!b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_) throw std::runtime_error("HLT_PFHT700_PFMET95_PFMHT95_IDTight branch doesn't exist");
        b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_->GetEntry(index);
        loaded_HLT_PFHT700_PFMET95_PFMHT95_IDTight_ = true;
    }
    return HLT_PFHT700_PFMET95_PFMHT95_IDTight_;
}
const bool &Nano::HLT_PFHT780() {
    if (!loaded_HLT_PFHT780_) {
        if (!b_HLT_PFHT780_) throw std::runtime_error("HLT_PFHT780 branch doesn't exist");
        b_HLT_PFHT780_->GetEntry(index);
        loaded_HLT_PFHT780_ = true;
    }
    return HLT_PFHT780_;
}
const bool &Nano::HLT_PFHT800_PFMET75_PFMHT75_IDTight() {
    if (!loaded_HLT_PFHT800_PFMET75_PFMHT75_IDTight_) {
        if (!b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_) throw std::runtime_error("HLT_PFHT800_PFMET75_PFMHT75_IDTight branch doesn't exist");
        b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_->GetEntry(index);
        loaded_HLT_PFHT800_PFMET75_PFMHT75_IDTight_ = true;
    }
    return HLT_PFHT800_PFMET75_PFMHT75_IDTight_;
}
const bool &Nano::HLT_PFHT800_PFMET85_PFMHT85_IDTight() {
    if (!loaded_HLT_PFHT800_PFMET85_PFMHT85_IDTight_) {
        if (!b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_) throw std::runtime_error("HLT_PFHT800_PFMET85_PFMHT85_IDTight branch doesn't exist");
        b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_->GetEntry(index);
        loaded_HLT_PFHT800_PFMET85_PFMHT85_IDTight_ = true;
    }
    return HLT_PFHT800_PFMET85_PFMHT85_IDTight_;
}
const bool &Nano::HLT_PFHT890() {
    if (!loaded_HLT_PFHT890_) {
        if (!b_HLT_PFHT890_) throw std::runtime_error("HLT_PFHT890 branch doesn't exist");
        b_HLT_PFHT890_->GetEntry(index);
        loaded_HLT_PFHT890_ = true;
    }
    return HLT_PFHT890_;
}
const bool &Nano::HLT_PFJet140() {
    if (!loaded_HLT_PFJet140_) {
        if (!b_HLT_PFJet140_) throw std::runtime_error("HLT_PFJet140 branch doesn't exist");
        b_HLT_PFJet140_->GetEntry(index);
        loaded_HLT_PFJet140_ = true;
    }
    return HLT_PFJet140_;
}
const bool &Nano::HLT_PFJet200() {
    if (!loaded_HLT_PFJet200_) {
        if (!b_HLT_PFJet200_) throw std::runtime_error("HLT_PFJet200 branch doesn't exist");
        b_HLT_PFJet200_->GetEntry(index);
        loaded_HLT_PFJet200_ = true;
    }
    return HLT_PFJet200_;
}
const bool &Nano::HLT_PFJet260() {
    if (!loaded_HLT_PFJet260_) {
        if (!b_HLT_PFJet260_) throw std::runtime_error("HLT_PFJet260 branch doesn't exist");
        b_HLT_PFJet260_->GetEntry(index);
        loaded_HLT_PFJet260_ = true;
    }
    return HLT_PFJet260_;
}
const bool &Nano::HLT_PFJet320() {
    if (!loaded_HLT_PFJet320_) {
        if (!b_HLT_PFJet320_) throw std::runtime_error("HLT_PFJet320 branch doesn't exist");
        b_HLT_PFJet320_->GetEntry(index);
        loaded_HLT_PFJet320_ = true;
    }
    return HLT_PFJet320_;
}
const bool &Nano::HLT_PFJet40() {
    if (!loaded_HLT_PFJet40_) {
        if (!b_HLT_PFJet40_) throw std::runtime_error("HLT_PFJet40 branch doesn't exist");
        b_HLT_PFJet40_->GetEntry(index);
        loaded_HLT_PFJet40_ = true;
    }
    return HLT_PFJet40_;
}
const bool &Nano::HLT_PFJet400() {
    if (!loaded_HLT_PFJet400_) {
        if (!b_HLT_PFJet400_) throw std::runtime_error("HLT_PFJet400 branch doesn't exist");
        b_HLT_PFJet400_->GetEntry(index);
        loaded_HLT_PFJet400_ = true;
    }
    return HLT_PFJet400_;
}
const bool &Nano::HLT_PFJet450() {
    if (!loaded_HLT_PFJet450_) {
        if (!b_HLT_PFJet450_) throw std::runtime_error("HLT_PFJet450 branch doesn't exist");
        b_HLT_PFJet450_->GetEntry(index);
        loaded_HLT_PFJet450_ = true;
    }
    return HLT_PFJet450_;
}
const bool &Nano::HLT_PFJet500() {
    if (!loaded_HLT_PFJet500_) {
        if (!b_HLT_PFJet500_) throw std::runtime_error("HLT_PFJet500 branch doesn't exist");
        b_HLT_PFJet500_->GetEntry(index);
        loaded_HLT_PFJet500_ = true;
    }
    return HLT_PFJet500_;
}
const bool &Nano::HLT_PFJet550() {
    if (!loaded_HLT_PFJet550_) {
        if (!b_HLT_PFJet550_) throw std::runtime_error("HLT_PFJet550 branch doesn't exist");
        b_HLT_PFJet550_->GetEntry(index);
        loaded_HLT_PFJet550_ = true;
    }
    return HLT_PFJet550_;
}
const bool &Nano::HLT_PFJet60() {
    if (!loaded_HLT_PFJet60_) {
        if (!b_HLT_PFJet60_) throw std::runtime_error("HLT_PFJet60 branch doesn't exist");
        b_HLT_PFJet60_->GetEntry(index);
        loaded_HLT_PFJet60_ = true;
    }
    return HLT_PFJet60_;
}
const bool &Nano::HLT_PFJet80() {
    if (!loaded_HLT_PFJet80_) {
        if (!b_HLT_PFJet80_) throw std::runtime_error("HLT_PFJet80 branch doesn't exist");
        b_HLT_PFJet80_->GetEntry(index);
        loaded_HLT_PFJet80_ = true;
    }
    return HLT_PFJet80_;
}
const bool &Nano::HLT_PFJetFwd140() {
    if (!loaded_HLT_PFJetFwd140_) {
        if (!b_HLT_PFJetFwd140_) throw std::runtime_error("HLT_PFJetFwd140 branch doesn't exist");
        b_HLT_PFJetFwd140_->GetEntry(index);
        loaded_HLT_PFJetFwd140_ = true;
    }
    return HLT_PFJetFwd140_;
}
const bool &Nano::HLT_PFJetFwd200() {
    if (!loaded_HLT_PFJetFwd200_) {
        if (!b_HLT_PFJetFwd200_) throw std::runtime_error("HLT_PFJetFwd200 branch doesn't exist");
        b_HLT_PFJetFwd200_->GetEntry(index);
        loaded_HLT_PFJetFwd200_ = true;
    }
    return HLT_PFJetFwd200_;
}
const bool &Nano::HLT_PFJetFwd260() {
    if (!loaded_HLT_PFJetFwd260_) {
        if (!b_HLT_PFJetFwd260_) throw std::runtime_error("HLT_PFJetFwd260 branch doesn't exist");
        b_HLT_PFJetFwd260_->GetEntry(index);
        loaded_HLT_PFJetFwd260_ = true;
    }
    return HLT_PFJetFwd260_;
}
const bool &Nano::HLT_PFJetFwd320() {
    if (!loaded_HLT_PFJetFwd320_) {
        if (!b_HLT_PFJetFwd320_) throw std::runtime_error("HLT_PFJetFwd320 branch doesn't exist");
        b_HLT_PFJetFwd320_->GetEntry(index);
        loaded_HLT_PFJetFwd320_ = true;
    }
    return HLT_PFJetFwd320_;
}
const bool &Nano::HLT_PFJetFwd40() {
    if (!loaded_HLT_PFJetFwd40_) {
        if (!b_HLT_PFJetFwd40_) throw std::runtime_error("HLT_PFJetFwd40 branch doesn't exist");
        b_HLT_PFJetFwd40_->GetEntry(index);
        loaded_HLT_PFJetFwd40_ = true;
    }
    return HLT_PFJetFwd40_;
}
const bool &Nano::HLT_PFJetFwd400() {
    if (!loaded_HLT_PFJetFwd400_) {
        if (!b_HLT_PFJetFwd400_) throw std::runtime_error("HLT_PFJetFwd400 branch doesn't exist");
        b_HLT_PFJetFwd400_->GetEntry(index);
        loaded_HLT_PFJetFwd400_ = true;
    }
    return HLT_PFJetFwd400_;
}
const bool &Nano::HLT_PFJetFwd450() {
    if (!loaded_HLT_PFJetFwd450_) {
        if (!b_HLT_PFJetFwd450_) throw std::runtime_error("HLT_PFJetFwd450 branch doesn't exist");
        b_HLT_PFJetFwd450_->GetEntry(index);
        loaded_HLT_PFJetFwd450_ = true;
    }
    return HLT_PFJetFwd450_;
}
const bool &Nano::HLT_PFJetFwd500() {
    if (!loaded_HLT_PFJetFwd500_) {
        if (!b_HLT_PFJetFwd500_) throw std::runtime_error("HLT_PFJetFwd500 branch doesn't exist");
        b_HLT_PFJetFwd500_->GetEntry(index);
        loaded_HLT_PFJetFwd500_ = true;
    }
    return HLT_PFJetFwd500_;
}
const bool &Nano::HLT_PFJetFwd60() {
    if (!loaded_HLT_PFJetFwd60_) {
        if (!b_HLT_PFJetFwd60_) throw std::runtime_error("HLT_PFJetFwd60 branch doesn't exist");
        b_HLT_PFJetFwd60_->GetEntry(index);
        loaded_HLT_PFJetFwd60_ = true;
    }
    return HLT_PFJetFwd60_;
}
const bool &Nano::HLT_PFJetFwd80() {
    if (!loaded_HLT_PFJetFwd80_) {
        if (!b_HLT_PFJetFwd80_) throw std::runtime_error("HLT_PFJetFwd80 branch doesn't exist");
        b_HLT_PFJetFwd80_->GetEntry(index);
        loaded_HLT_PFJetFwd80_ = true;
    }
    return HLT_PFJetFwd80_;
}
const bool &Nano::HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1() {
    if (!loaded_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_) {
        if (!b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_) throw std::runtime_error("HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1 branch doesn't exist");
        b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_->GetEntry(index);
        loaded_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_ = true;
    }
    return HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_;
}
const bool &Nano::HLT_PFMET100_PFMHT100_IDTight_PFHT60() {
    if (!loaded_HLT_PFMET100_PFMHT100_IDTight_PFHT60_) {
        if (!b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMET100_PFMHT100_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMET100_PFMHT100_IDTight_PFHT60_ = true;
    }
    return HLT_PFMET100_PFMHT100_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMET110_PFMHT110_IDTight() {
    if (!loaded_HLT_PFMET110_PFMHT110_IDTight_) {
        if (!b_HLT_PFMET110_PFMHT110_IDTight_) throw std::runtime_error("HLT_PFMET110_PFMHT110_IDTight branch doesn't exist");
        b_HLT_PFMET110_PFMHT110_IDTight_->GetEntry(index);
        loaded_HLT_PFMET110_PFMHT110_IDTight_ = true;
    }
    return HLT_PFMET110_PFMHT110_IDTight_;
}
const bool &Nano::HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1() {
    if (!loaded_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_) {
        if (!b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_) throw std::runtime_error("HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1 branch doesn't exist");
        b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_->GetEntry(index);
        loaded_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_ = true;
    }
    return HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_;
}
const bool &Nano::HLT_PFMET120_PFMHT120_IDTight() {
    if (!loaded_HLT_PFMET120_PFMHT120_IDTight_) {
        if (!b_HLT_PFMET120_PFMHT120_IDTight_) throw std::runtime_error("HLT_PFMET120_PFMHT120_IDTight branch doesn't exist");
        b_HLT_PFMET120_PFMHT120_IDTight_->GetEntry(index);
        loaded_HLT_PFMET120_PFMHT120_IDTight_ = true;
    }
    return HLT_PFMET120_PFMHT120_IDTight_;
}
const bool &Nano::HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1() {
    if (!loaded_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_) {
        if (!b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_) throw std::runtime_error("HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1 branch doesn't exist");
        b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_->GetEntry(index);
        loaded_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_ = true;
    }
    return HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_;
}
const bool &Nano::HLT_PFMET120_PFMHT120_IDTight_PFHT60() {
    if (!loaded_HLT_PFMET120_PFMHT120_IDTight_PFHT60_) {
        if (!b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMET120_PFMHT120_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMET120_PFMHT120_IDTight_PFHT60_ = true;
    }
    return HLT_PFMET120_PFMHT120_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMET130_PFMHT130_IDTight() {
    if (!loaded_HLT_PFMET130_PFMHT130_IDTight_) {
        if (!b_HLT_PFMET130_PFMHT130_IDTight_) throw std::runtime_error("HLT_PFMET130_PFMHT130_IDTight branch doesn't exist");
        b_HLT_PFMET130_PFMHT130_IDTight_->GetEntry(index);
        loaded_HLT_PFMET130_PFMHT130_IDTight_ = true;
    }
    return HLT_PFMET130_PFMHT130_IDTight_;
}
const bool &Nano::HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1() {
    if (!loaded_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_) {
        if (!b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_) throw std::runtime_error("HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1 branch doesn't exist");
        b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_->GetEntry(index);
        loaded_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_ = true;
    }
    return HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_;
}
const bool &Nano::HLT_PFMET140_PFMHT140_IDTight() {
    if (!loaded_HLT_PFMET140_PFMHT140_IDTight_) {
        if (!b_HLT_PFMET140_PFMHT140_IDTight_) throw std::runtime_error("HLT_PFMET140_PFMHT140_IDTight branch doesn't exist");
        b_HLT_PFMET140_PFMHT140_IDTight_->GetEntry(index);
        loaded_HLT_PFMET140_PFMHT140_IDTight_ = true;
    }
    return HLT_PFMET140_PFMHT140_IDTight_;
}
const bool &Nano::HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1() {
    if (!loaded_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_) {
        if (!b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_) throw std::runtime_error("HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1 branch doesn't exist");
        b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_->GetEntry(index);
        loaded_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_ = true;
    }
    return HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_;
}
const bool &Nano::HLT_PFMET200_HBHECleaned() {
    if (!loaded_HLT_PFMET200_HBHECleaned_) {
        if (!b_HLT_PFMET200_HBHECleaned_) throw std::runtime_error("HLT_PFMET200_HBHECleaned branch doesn't exist");
        b_HLT_PFMET200_HBHECleaned_->GetEntry(index);
        loaded_HLT_PFMET200_HBHECleaned_ = true;
    }
    return HLT_PFMET200_HBHECleaned_;
}
const bool &Nano::HLT_PFMET200_HBHE_BeamHaloCleaned() {
    if (!loaded_HLT_PFMET200_HBHE_BeamHaloCleaned_) {
        if (!b_HLT_PFMET200_HBHE_BeamHaloCleaned_) throw std::runtime_error("HLT_PFMET200_HBHE_BeamHaloCleaned branch doesn't exist");
        b_HLT_PFMET200_HBHE_BeamHaloCleaned_->GetEntry(index);
        loaded_HLT_PFMET200_HBHE_BeamHaloCleaned_ = true;
    }
    return HLT_PFMET200_HBHE_BeamHaloCleaned_;
}
const bool &Nano::HLT_PFMET200_NotCleaned() {
    if (!loaded_HLT_PFMET200_NotCleaned_) {
        if (!b_HLT_PFMET200_NotCleaned_) throw std::runtime_error("HLT_PFMET200_NotCleaned branch doesn't exist");
        b_HLT_PFMET200_NotCleaned_->GetEntry(index);
        loaded_HLT_PFMET200_NotCleaned_ = true;
    }
    return HLT_PFMET200_NotCleaned_;
}
const bool &Nano::HLT_PFMET250_HBHECleaned() {
    if (!loaded_HLT_PFMET250_HBHECleaned_) {
        if (!b_HLT_PFMET250_HBHECleaned_) throw std::runtime_error("HLT_PFMET250_HBHECleaned branch doesn't exist");
        b_HLT_PFMET250_HBHECleaned_->GetEntry(index);
        loaded_HLT_PFMET250_HBHECleaned_ = true;
    }
    return HLT_PFMET250_HBHECleaned_;
}
const bool &Nano::HLT_PFMET300_HBHECleaned() {
    if (!loaded_HLT_PFMET300_HBHECleaned_) {
        if (!b_HLT_PFMET300_HBHECleaned_) throw std::runtime_error("HLT_PFMET300_HBHECleaned branch doesn't exist");
        b_HLT_PFMET300_HBHECleaned_->GetEntry(index);
        loaded_HLT_PFMET300_HBHECleaned_ = true;
    }
    return HLT_PFMET300_HBHECleaned_;
}
const bool &Nano::HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60() {
    if (!loaded_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_) {
        if (!b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_ = true;
    }
    return HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMETNoMu110_PFMHTNoMu110_IDTight() {
    if (!loaded_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_) {
        if (!b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_) throw std::runtime_error("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight branch doesn't exist");
        b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_->GetEntry(index);
        loaded_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_ = true;
    }
    return HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_;
}
const bool &Nano::HLT_PFMETNoMu120_PFMHTNoMu120_IDTight() {
    if (!loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_) {
        if (!b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_) throw std::runtime_error("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight branch doesn't exist");
        b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_->GetEntry(index);
        loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_ = true;
    }
    return HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_;
}
const bool &Nano::HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60() {
    if (!loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_) {
        if (!b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_ = true;
    }
    return HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMETNoMu130_PFMHTNoMu130_IDTight() {
    if (!loaded_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_) {
        if (!b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_) throw std::runtime_error("HLT_PFMETNoMu130_PFMHTNoMu130_IDTight branch doesn't exist");
        b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_->GetEntry(index);
        loaded_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_ = true;
    }
    return HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_;
}
const bool &Nano::HLT_PFMETNoMu140_PFMHTNoMu140_IDTight() {
    if (!loaded_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_) {
        if (!b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_) throw std::runtime_error("HLT_PFMETNoMu140_PFMHTNoMu140_IDTight branch doesn't exist");
        b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_->GetEntry(index);
        loaded_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_ = true;
    }
    return HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_;
}
const bool &Nano::HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60() {
    if (!loaded_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_) {
        if (!b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_ = true;
    }
    return HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMETTypeOne110_PFMHT110_IDTight() {
    if (!loaded_HLT_PFMETTypeOne110_PFMHT110_IDTight_) {
        if (!b_HLT_PFMETTypeOne110_PFMHT110_IDTight_) throw std::runtime_error("HLT_PFMETTypeOne110_PFMHT110_IDTight branch doesn't exist");
        b_HLT_PFMETTypeOne110_PFMHT110_IDTight_->GetEntry(index);
        loaded_HLT_PFMETTypeOne110_PFMHT110_IDTight_ = true;
    }
    return HLT_PFMETTypeOne110_PFMHT110_IDTight_;
}
const bool &Nano::HLT_PFMETTypeOne120_PFMHT120_IDTight() {
    if (!loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_) {
        if (!b_HLT_PFMETTypeOne120_PFMHT120_IDTight_) throw std::runtime_error("HLT_PFMETTypeOne120_PFMHT120_IDTight branch doesn't exist");
        b_HLT_PFMETTypeOne120_PFMHT120_IDTight_->GetEntry(index);
        loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_ = true;
    }
    return HLT_PFMETTypeOne120_PFMHT120_IDTight_;
}
const bool &Nano::HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60() {
    if (!loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_) {
        if (!b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_) throw std::runtime_error("HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60 branch doesn't exist");
        b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_->GetEntry(index);
        loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_ = true;
    }
    return HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_;
}
const bool &Nano::HLT_PFMETTypeOne130_PFMHT130_IDTight() {
    if (!loaded_HLT_PFMETTypeOne130_PFMHT130_IDTight_) {
        if (!b_HLT_PFMETTypeOne130_PFMHT130_IDTight_) throw std::runtime_error("HLT_PFMETTypeOne130_PFMHT130_IDTight branch doesn't exist");
        b_HLT_PFMETTypeOne130_PFMHT130_IDTight_->GetEntry(index);
        loaded_HLT_PFMETTypeOne130_PFMHT130_IDTight_ = true;
    }
    return HLT_PFMETTypeOne130_PFMHT130_IDTight_;
}
const bool &Nano::HLT_PFMETTypeOne140_PFMHT140_IDTight() {
    if (!loaded_HLT_PFMETTypeOne140_PFMHT140_IDTight_) {
        if (!b_HLT_PFMETTypeOne140_PFMHT140_IDTight_) throw std::runtime_error("HLT_PFMETTypeOne140_PFMHT140_IDTight branch doesn't exist");
        b_HLT_PFMETTypeOne140_PFMHT140_IDTight_->GetEntry(index);
        loaded_HLT_PFMETTypeOne140_PFMHT140_IDTight_ = true;
    }
    return HLT_PFMETTypeOne140_PFMHT140_IDTight_;
}
const bool &Nano::HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned() {
    if (!loaded_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_) {
        if (!b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_) throw std::runtime_error("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned branch doesn't exist");
        b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_->GetEntry(index);
        loaded_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_ = true;
    }
    return HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_;
}
const bool &Nano::HLT_Photon120() {
    if (!loaded_HLT_Photon120_) {
        if (!b_HLT_Photon120_) throw std::runtime_error("HLT_Photon120 branch doesn't exist");
        b_HLT_Photon120_->GetEntry(index);
        loaded_HLT_Photon120_ = true;
    }
    return HLT_Photon120_;
}
const bool &Nano::HLT_Photon120_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon120_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon120_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon120_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon120_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon120_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon120_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon150() {
    if (!loaded_HLT_Photon150_) {
        if (!b_HLT_Photon150_) throw std::runtime_error("HLT_Photon150 branch doesn't exist");
        b_HLT_Photon150_->GetEntry(index);
        loaded_HLT_Photon150_ = true;
    }
    return HLT_Photon150_;
}
const bool &Nano::HLT_Photon165_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon165_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon165_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon165_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon165_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon165_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon165_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon175() {
    if (!loaded_HLT_Photon175_) {
        if (!b_HLT_Photon175_) throw std::runtime_error("HLT_Photon175 branch doesn't exist");
        b_HLT_Photon175_->GetEntry(index);
        loaded_HLT_Photon175_ = true;
    }
    return HLT_Photon175_;
}
const bool &Nano::HLT_Photon200() {
    if (!loaded_HLT_Photon200_) {
        if (!b_HLT_Photon200_) throw std::runtime_error("HLT_Photon200 branch doesn't exist");
        b_HLT_Photon200_->GetEntry(index);
        loaded_HLT_Photon200_ = true;
    }
    return HLT_Photon200_;
}
const bool &Nano::HLT_Photon20_HoverELoose() {
    if (!loaded_HLT_Photon20_HoverELoose_) {
        if (!b_HLT_Photon20_HoverELoose_) throw std::runtime_error("HLT_Photon20_HoverELoose branch doesn't exist");
        b_HLT_Photon20_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon20_HoverELoose_ = true;
    }
    return HLT_Photon20_HoverELoose_;
}
const bool &Nano::HLT_Photon25() {
    if (!loaded_HLT_Photon25_) {
        if (!b_HLT_Photon25_) throw std::runtime_error("HLT_Photon25 branch doesn't exist");
        b_HLT_Photon25_->GetEntry(index);
        loaded_HLT_Photon25_ = true;
    }
    return HLT_Photon25_;
}
const bool &Nano::HLT_Photon300_NoHE() {
    if (!loaded_HLT_Photon300_NoHE_) {
        if (!b_HLT_Photon300_NoHE_) throw std::runtime_error("HLT_Photon300_NoHE branch doesn't exist");
        b_HLT_Photon300_NoHE_->GetEntry(index);
        loaded_HLT_Photon300_NoHE_ = true;
    }
    return HLT_Photon300_NoHE_;
}
const bool &Nano::HLT_Photon30_HoverELoose() {
    if (!loaded_HLT_Photon30_HoverELoose_) {
        if (!b_HLT_Photon30_HoverELoose_) throw std::runtime_error("HLT_Photon30_HoverELoose branch doesn't exist");
        b_HLT_Photon30_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon30_HoverELoose_ = true;
    }
    return HLT_Photon30_HoverELoose_;
}
const bool &Nano::HLT_Photon33() {
    if (!loaded_HLT_Photon33_) {
        if (!b_HLT_Photon33_) throw std::runtime_error("HLT_Photon33 branch doesn't exist");
        b_HLT_Photon33_->GetEntry(index);
        loaded_HLT_Photon33_ = true;
    }
    return HLT_Photon33_;
}
const bool &Nano::HLT_Photon40_HoverELoose() {
    if (!loaded_HLT_Photon40_HoverELoose_) {
        if (!b_HLT_Photon40_HoverELoose_) throw std::runtime_error("HLT_Photon40_HoverELoose branch doesn't exist");
        b_HLT_Photon40_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon40_HoverELoose_ = true;
    }
    return HLT_Photon40_HoverELoose_;
}
const bool &Nano::HLT_Photon50() {
    if (!loaded_HLT_Photon50_) {
        if (!b_HLT_Photon50_) throw std::runtime_error("HLT_Photon50 branch doesn't exist");
        b_HLT_Photon50_->GetEntry(index);
        loaded_HLT_Photon50_ = true;
    }
    return HLT_Photon50_;
}
const bool &Nano::HLT_Photon50_HoverELoose() {
    if (!loaded_HLT_Photon50_HoverELoose_) {
        if (!b_HLT_Photon50_HoverELoose_) throw std::runtime_error("HLT_Photon50_HoverELoose branch doesn't exist");
        b_HLT_Photon50_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon50_HoverELoose_ = true;
    }
    return HLT_Photon50_HoverELoose_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon50_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) {
        if (!b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
}
const bool &Nano::HLT_Photon60_HoverELoose() {
    if (!loaded_HLT_Photon60_HoverELoose_) {
        if (!b_HLT_Photon60_HoverELoose_) throw std::runtime_error("HLT_Photon60_HoverELoose branch doesn't exist");
        b_HLT_Photon60_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon60_HoverELoose_ = true;
    }
    return HLT_Photon60_HoverELoose_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
}
const bool &Nano::HLT_Photon75() {
    if (!loaded_HLT_Photon75_) {
        if (!b_HLT_Photon75_) throw std::runtime_error("HLT_Photon75 branch doesn't exist");
        b_HLT_Photon75_->GetEntry(index);
        loaded_HLT_Photon75_ = true;
    }
    return HLT_Photon75_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
}
const bool &Nano::HLT_Photon90() {
    if (!loaded_HLT_Photon90_) {
        if (!b_HLT_Photon90_) throw std::runtime_error("HLT_Photon90 branch doesn't exist");
        b_HLT_Photon90_->GetEntry(index);
        loaded_HLT_Photon90_ = true;
    }
    return HLT_Photon90_;
}
const bool &Nano::HLT_Photon90_CaloIdL_PFHT700() {
    if (!loaded_HLT_Photon90_CaloIdL_PFHT700_) {
        if (!b_HLT_Photon90_CaloIdL_PFHT700_) throw std::runtime_error("HLT_Photon90_CaloIdL_PFHT700 branch doesn't exist");
        b_HLT_Photon90_CaloIdL_PFHT700_->GetEntry(index);
        loaded_HLT_Photon90_CaloIdL_PFHT700_ = true;
    }
    return HLT_Photon90_CaloIdL_PFHT700_;
}
const bool &Nano::HLT_Photon90_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon90_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon90_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon90_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon90_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon90_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon90_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Physics() {
    if (!loaded_HLT_Physics_) {
        if (!b_HLT_Physics_) throw std::runtime_error("HLT_Physics branch doesn't exist");
        b_HLT_Physics_->GetEntry(index);
        loaded_HLT_Physics_ = true;
    }
    return HLT_Physics_;
}
const bool &Nano::HLT_Physics_part0() {
    if (!loaded_HLT_Physics_part0_) {
        if (!b_HLT_Physics_part0_) throw std::runtime_error("HLT_Physics_part0 branch doesn't exist");
        b_HLT_Physics_part0_->GetEntry(index);
        loaded_HLT_Physics_part0_ = true;
    }
    return HLT_Physics_part0_;
}
const bool &Nano::HLT_Physics_part1() {
    if (!loaded_HLT_Physics_part1_) {
        if (!b_HLT_Physics_part1_) throw std::runtime_error("HLT_Physics_part1 branch doesn't exist");
        b_HLT_Physics_part1_->GetEntry(index);
        loaded_HLT_Physics_part1_ = true;
    }
    return HLT_Physics_part1_;
}
const bool &Nano::HLT_Physics_part2() {
    if (!loaded_HLT_Physics_part2_) {
        if (!b_HLT_Physics_part2_) throw std::runtime_error("HLT_Physics_part2 branch doesn't exist");
        b_HLT_Physics_part2_->GetEntry(index);
        loaded_HLT_Physics_part2_ = true;
    }
    return HLT_Physics_part2_;
}
const bool &Nano::HLT_Physics_part3() {
    if (!loaded_HLT_Physics_part3_) {
        if (!b_HLT_Physics_part3_) throw std::runtime_error("HLT_Physics_part3 branch doesn't exist");
        b_HLT_Physics_part3_->GetEntry(index);
        loaded_HLT_Physics_part3_ = true;
    }
    return HLT_Physics_part3_;
}
const bool &Nano::HLT_Physics_part4() {
    if (!loaded_HLT_Physics_part4_) {
        if (!b_HLT_Physics_part4_) throw std::runtime_error("HLT_Physics_part4 branch doesn't exist");
        b_HLT_Physics_part4_->GetEntry(index);
        loaded_HLT_Physics_part4_ = true;
    }
    return HLT_Physics_part4_;
}
const bool &Nano::HLT_Physics_part5() {
    if (!loaded_HLT_Physics_part5_) {
        if (!b_HLT_Physics_part5_) throw std::runtime_error("HLT_Physics_part5 branch doesn't exist");
        b_HLT_Physics_part5_->GetEntry(index);
        loaded_HLT_Physics_part5_ = true;
    }
    return HLT_Physics_part5_;
}
const bool &Nano::HLT_Physics_part6() {
    if (!loaded_HLT_Physics_part6_) {
        if (!b_HLT_Physics_part6_) throw std::runtime_error("HLT_Physics_part6 branch doesn't exist");
        b_HLT_Physics_part6_->GetEntry(index);
        loaded_HLT_Physics_part6_ = true;
    }
    return HLT_Physics_part6_;
}
const bool &Nano::HLT_Physics_part7() {
    if (!loaded_HLT_Physics_part7_) {
        if (!b_HLT_Physics_part7_) throw std::runtime_error("HLT_Physics_part7 branch doesn't exist");
        b_HLT_Physics_part7_->GetEntry(index);
        loaded_HLT_Physics_part7_ = true;
    }
    return HLT_Physics_part7_;
}
const bool &Nano::HLT_QuadPFJet103_88_75_15() {
    if (!loaded_HLT_QuadPFJet103_88_75_15_) {
        if (!b_HLT_QuadPFJet103_88_75_15_) throw std::runtime_error("HLT_QuadPFJet103_88_75_15 branch doesn't exist");
        b_HLT_QuadPFJet103_88_75_15_->GetEntry(index);
        loaded_HLT_QuadPFJet103_88_75_15_ = true;
    }
    return HLT_QuadPFJet103_88_75_15_;
}
const bool &Nano::HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2() {
    if (!loaded_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_) {
        if (!b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_) throw std::runtime_error("HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2 branch doesn't exist");
        b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_->GetEntry(index);
        loaded_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_ = true;
    }
    return HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_;
}
const bool &Nano::HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1() {
    if (!loaded_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_) {
        if (!b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_) throw std::runtime_error("HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1 branch doesn't exist");
        b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_->GetEntry(index);
        loaded_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_ = true;
    }
    return HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_;
}
const bool &Nano::HLT_QuadPFJet105_88_76_15() {
    if (!loaded_HLT_QuadPFJet105_88_76_15_) {
        if (!b_HLT_QuadPFJet105_88_76_15_) throw std::runtime_error("HLT_QuadPFJet105_88_76_15 branch doesn't exist");
        b_HLT_QuadPFJet105_88_76_15_->GetEntry(index);
        loaded_HLT_QuadPFJet105_88_76_15_ = true;
    }
    return HLT_QuadPFJet105_88_76_15_;
}
const bool &Nano::HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2() {
    if (!loaded_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_) {
        if (!b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_) throw std::runtime_error("HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2 branch doesn't exist");
        b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_->GetEntry(index);
        loaded_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_ = true;
    }
    return HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_;
}
const bool &Nano::HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1() {
    if (!loaded_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_) {
        if (!b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_) throw std::runtime_error("HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1 branch doesn't exist");
        b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_->GetEntry(index);
        loaded_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_ = true;
    }
    return HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_;
}
const bool &Nano::HLT_QuadPFJet111_90_80_15() {
    if (!loaded_HLT_QuadPFJet111_90_80_15_) {
        if (!b_HLT_QuadPFJet111_90_80_15_) throw std::runtime_error("HLT_QuadPFJet111_90_80_15 branch doesn't exist");
        b_HLT_QuadPFJet111_90_80_15_->GetEntry(index);
        loaded_HLT_QuadPFJet111_90_80_15_ = true;
    }
    return HLT_QuadPFJet111_90_80_15_;
}
const bool &Nano::HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2() {
    if (!loaded_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_) {
        if (!b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_) throw std::runtime_error("HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2 branch doesn't exist");
        b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_->GetEntry(index);
        loaded_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_ = true;
    }
    return HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_;
}
const bool &Nano::HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1() {
    if (!loaded_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_) {
        if (!b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_) throw std::runtime_error("HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1 branch doesn't exist");
        b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_->GetEntry(index);
        loaded_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_ = true;
    }
    return HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_;
}
const bool &Nano::HLT_QuadPFJet98_83_71_15() {
    if (!loaded_HLT_QuadPFJet98_83_71_15_) {
        if (!b_HLT_QuadPFJet98_83_71_15_) throw std::runtime_error("HLT_QuadPFJet98_83_71_15 branch doesn't exist");
        b_HLT_QuadPFJet98_83_71_15_->GetEntry(index);
        loaded_HLT_QuadPFJet98_83_71_15_ = true;
    }
    return HLT_QuadPFJet98_83_71_15_;
}
const bool &Nano::HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2() {
    if (!loaded_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_) {
        if (!b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_) throw std::runtime_error("HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2 branch doesn't exist");
        b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_->GetEntry(index);
        loaded_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_ = true;
    }
    return HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_;
}
const bool &Nano::HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1() {
    if (!loaded_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_) {
        if (!b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_) throw std::runtime_error("HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1 branch doesn't exist");
        b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_->GetEntry(index);
        loaded_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_ = true;
    }
    return HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_;
}
const bool &Nano::HLT_Random() {
    if (!loaded_HLT_Random_) {
        if (!b_HLT_Random_) throw std::runtime_error("HLT_Random branch doesn't exist");
        b_HLT_Random_->GetEntry(index);
        loaded_HLT_Random_ = true;
    }
    return HLT_Random_;
}
const bool &Nano::HLT_Rsq0p35() {
    if (!loaded_HLT_Rsq0p35_) {
        if (!b_HLT_Rsq0p35_) throw std::runtime_error("HLT_Rsq0p35 branch doesn't exist");
        b_HLT_Rsq0p35_->GetEntry(index);
        loaded_HLT_Rsq0p35_ = true;
    }
    return HLT_Rsq0p35_;
}
const bool &Nano::HLT_Rsq0p40() {
    if (!loaded_HLT_Rsq0p40_) {
        if (!b_HLT_Rsq0p40_) throw std::runtime_error("HLT_Rsq0p40 branch doesn't exist");
        b_HLT_Rsq0p40_->GetEntry(index);
        loaded_HLT_Rsq0p40_ = true;
    }
    return HLT_Rsq0p40_;
}
const bool &Nano::HLT_RsqMR300_Rsq0p09_MR200() {
    if (!loaded_HLT_RsqMR300_Rsq0p09_MR200_) {
        if (!b_HLT_RsqMR300_Rsq0p09_MR200_) throw std::runtime_error("HLT_RsqMR300_Rsq0p09_MR200 branch doesn't exist");
        b_HLT_RsqMR300_Rsq0p09_MR200_->GetEntry(index);
        loaded_HLT_RsqMR300_Rsq0p09_MR200_ = true;
    }
    return HLT_RsqMR300_Rsq0p09_MR200_;
}
const bool &Nano::HLT_RsqMR300_Rsq0p09_MR200_4jet() {
    if (!loaded_HLT_RsqMR300_Rsq0p09_MR200_4jet_) {
        if (!b_HLT_RsqMR300_Rsq0p09_MR200_4jet_) throw std::runtime_error("HLT_RsqMR300_Rsq0p09_MR200_4jet branch doesn't exist");
        b_HLT_RsqMR300_Rsq0p09_MR200_4jet_->GetEntry(index);
        loaded_HLT_RsqMR300_Rsq0p09_MR200_4jet_ = true;
    }
    return HLT_RsqMR300_Rsq0p09_MR200_4jet_;
}
const bool &Nano::HLT_RsqMR320_Rsq0p09_MR200() {
    if (!loaded_HLT_RsqMR320_Rsq0p09_MR200_) {
        if (!b_HLT_RsqMR320_Rsq0p09_MR200_) throw std::runtime_error("HLT_RsqMR320_Rsq0p09_MR200 branch doesn't exist");
        b_HLT_RsqMR320_Rsq0p09_MR200_->GetEntry(index);
        loaded_HLT_RsqMR320_Rsq0p09_MR200_ = true;
    }
    return HLT_RsqMR320_Rsq0p09_MR200_;
}
const bool &Nano::HLT_RsqMR320_Rsq0p09_MR200_4jet() {
    if (!loaded_HLT_RsqMR320_Rsq0p09_MR200_4jet_) {
        if (!b_HLT_RsqMR320_Rsq0p09_MR200_4jet_) throw std::runtime_error("HLT_RsqMR320_Rsq0p09_MR200_4jet branch doesn't exist");
        b_HLT_RsqMR320_Rsq0p09_MR200_4jet_->GetEntry(index);
        loaded_HLT_RsqMR320_Rsq0p09_MR200_4jet_ = true;
    }
    return HLT_RsqMR320_Rsq0p09_MR200_4jet_;
}
const bool &Nano::HLT_SingleJet30_Mu12_SinglePFJet40() {
    if (!loaded_HLT_SingleJet30_Mu12_SinglePFJet40_) {
        if (!b_HLT_SingleJet30_Mu12_SinglePFJet40_) throw std::runtime_error("HLT_SingleJet30_Mu12_SinglePFJet40 branch doesn't exist");
        b_HLT_SingleJet30_Mu12_SinglePFJet40_->GetEntry(index);
        loaded_HLT_SingleJet30_Mu12_SinglePFJet40_ = true;
    }
    return HLT_SingleJet30_Mu12_SinglePFJet40_;
}
const bool &Nano::HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15() {
    if (!loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_) {
        if (!b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_) throw std::runtime_error("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 branch doesn't exist");
        b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_->GetEntry(index);
        loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_ = true;
    }
    return HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_;
}
const bool &Nano::HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1() {
    if (!loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_) {
        if (!b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_) throw std::runtime_error("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 branch doesn't exist");
        b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_->GetEntry(index);
        loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_ = true;
    }
    return HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_;
}
const bool &Nano::HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15() {
    if (!loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_) {
        if (!b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_) throw std::runtime_error("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15 branch doesn't exist");
        b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_->GetEntry(index);
        loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_ = true;
    }
    return HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_;
}
const bool &Nano::HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1() {
    if (!loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_) {
        if (!b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_) throw std::runtime_error("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 branch doesn't exist");
        b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_->GetEntry(index);
        loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_ = true;
    }
    return HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_;
}
const bool &Nano::HLT_TkMu100() {
    if (!loaded_HLT_TkMu100_) {
        if (!b_HLT_TkMu100_) throw std::runtime_error("HLT_TkMu100 branch doesn't exist");
        b_HLT_TkMu100_->GetEntry(index);
        loaded_HLT_TkMu100_ = true;
    }
    return HLT_TkMu100_;
}
const bool &Nano::HLT_Trimuon5_3p5_2_Upsilon_Muon() {
    if (!loaded_HLT_Trimuon5_3p5_2_Upsilon_Muon_) {
        if (!b_HLT_Trimuon5_3p5_2_Upsilon_Muon_) throw std::runtime_error("HLT_Trimuon5_3p5_2_Upsilon_Muon branch doesn't exist");
        b_HLT_Trimuon5_3p5_2_Upsilon_Muon_->GetEntry(index);
        loaded_HLT_Trimuon5_3p5_2_Upsilon_Muon_ = true;
    }
    return HLT_Trimuon5_3p5_2_Upsilon_Muon_;
}
const bool &Nano::HLT_TripleJet110_35_35_Mjj650_PFMET110() {
    if (!loaded_HLT_TripleJet110_35_35_Mjj650_PFMET110_) {
        if (!b_HLT_TripleJet110_35_35_Mjj650_PFMET110_) throw std::runtime_error("HLT_TripleJet110_35_35_Mjj650_PFMET110 branch doesn't exist");
        b_HLT_TripleJet110_35_35_Mjj650_PFMET110_->GetEntry(index);
        loaded_HLT_TripleJet110_35_35_Mjj650_PFMET110_ = true;
    }
    return HLT_TripleJet110_35_35_Mjj650_PFMET110_;
}
const bool &Nano::HLT_TripleJet110_35_35_Mjj650_PFMET120() {
    if (!loaded_HLT_TripleJet110_35_35_Mjj650_PFMET120_) {
        if (!b_HLT_TripleJet110_35_35_Mjj650_PFMET120_) throw std::runtime_error("HLT_TripleJet110_35_35_Mjj650_PFMET120 branch doesn't exist");
        b_HLT_TripleJet110_35_35_Mjj650_PFMET120_->GetEntry(index);
        loaded_HLT_TripleJet110_35_35_Mjj650_PFMET120_ = true;
    }
    return HLT_TripleJet110_35_35_Mjj650_PFMET120_;
}
const bool &Nano::HLT_TripleJet110_35_35_Mjj650_PFMET130() {
    if (!loaded_HLT_TripleJet110_35_35_Mjj650_PFMET130_) {
        if (!b_HLT_TripleJet110_35_35_Mjj650_PFMET130_) throw std::runtime_error("HLT_TripleJet110_35_35_Mjj650_PFMET130 branch doesn't exist");
        b_HLT_TripleJet110_35_35_Mjj650_PFMET130_->GetEntry(index);
        loaded_HLT_TripleJet110_35_35_Mjj650_PFMET130_ = true;
    }
    return HLT_TripleJet110_35_35_Mjj650_PFMET130_;
}
const bool &Nano::HLT_TripleMu_10_5_5_DZ() {
    if (!loaded_HLT_TripleMu_10_5_5_DZ_) {
        if (!b_HLT_TripleMu_10_5_5_DZ_) throw std::runtime_error("HLT_TripleMu_10_5_5_DZ branch doesn't exist");
        b_HLT_TripleMu_10_5_5_DZ_->GetEntry(index);
        loaded_HLT_TripleMu_10_5_5_DZ_ = true;
    }
    return HLT_TripleMu_10_5_5_DZ_;
}
const bool &Nano::HLT_TripleMu_12_10_5() {
    if (!loaded_HLT_TripleMu_12_10_5_) {
        if (!b_HLT_TripleMu_12_10_5_) throw std::runtime_error("HLT_TripleMu_12_10_5 branch doesn't exist");
        b_HLT_TripleMu_12_10_5_->GetEntry(index);
        loaded_HLT_TripleMu_12_10_5_ = true;
    }
    return HLT_TripleMu_12_10_5_;
}
const bool &Nano::HLT_TripleMu_5_3_3_Mass3p8to60_DCA() {
    if (!loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_) {
        if (!b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_) throw std::runtime_error("HLT_TripleMu_5_3_3_Mass3p8to60_DCA branch doesn't exist");
        b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_->GetEntry(index);
        loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_ = true;
    }
    return HLT_TripleMu_5_3_3_Mass3p8to60_DCA_;
}
const bool &Nano::HLT_TripleMu_5_3_3_Mass3p8to60_DZ() {
    if (!loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_) {
        if (!b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_) throw std::runtime_error("HLT_TripleMu_5_3_3_Mass3p8to60_DZ branch doesn't exist");
        b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_->GetEntry(index);
        loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_ = true;
    }
    return HLT_TripleMu_5_3_3_Mass3p8to60_DZ_;
}
const bool &Nano::HLT_TriplePhoton_20_20_20_CaloIdLV2() {
    if (!loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_) {
        if (!b_HLT_TriplePhoton_20_20_20_CaloIdLV2_) throw std::runtime_error("HLT_TriplePhoton_20_20_20_CaloIdLV2 branch doesn't exist");
        b_HLT_TriplePhoton_20_20_20_CaloIdLV2_->GetEntry(index);
        loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = true;
    }
    return HLT_TriplePhoton_20_20_20_CaloIdLV2_;
}
const bool &Nano::HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
}
const bool &Nano::HLT_TriplePhoton_30_30_10_CaloIdLV2() {
    if (!loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_) {
        if (!b_HLT_TriplePhoton_30_30_10_CaloIdLV2_) throw std::runtime_error("HLT_TriplePhoton_30_30_10_CaloIdLV2 branch doesn't exist");
        b_HLT_TriplePhoton_30_30_10_CaloIdLV2_->GetEntry(index);
        loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = true;
    }
    return HLT_TriplePhoton_30_30_10_CaloIdLV2_;
}
const bool &Nano::HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
}
const bool &Nano::HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
}
const bool &Nano::HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx() {
    if (!loaded_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_) {
        if (!b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_) throw std::runtime_error("HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx branch doesn't exist");
        b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_->GetEntry(index);
        loaded_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_ = true;
    }
    return HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_;
}
const bool &Nano::HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx() {
    if (!loaded_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_) {
        if (!b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_) throw std::runtime_error("HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx branch doesn't exist");
        b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_->GetEntry(index);
        loaded_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_ = true;
    }
    return HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_;
}
const bool &Nano::HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx() {
    if (!loaded_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_) {
        if (!b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_) throw std::runtime_error("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx branch doesn't exist");
        b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_->GetEntry(index);
        loaded_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_ = true;
    }
    return HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_;
}
const bool &Nano::HLT_UncorrectedJetE30_NoBPTX() {
    if (!loaded_HLT_UncorrectedJetE30_NoBPTX_) {
        if (!b_HLT_UncorrectedJetE30_NoBPTX_) throw std::runtime_error("HLT_UncorrectedJetE30_NoBPTX branch doesn't exist");
        b_HLT_UncorrectedJetE30_NoBPTX_->GetEntry(index);
        loaded_HLT_UncorrectedJetE30_NoBPTX_ = true;
    }
    return HLT_UncorrectedJetE30_NoBPTX_;
}
const bool &Nano::HLT_UncorrectedJetE30_NoBPTX3BX() {
    if (!loaded_HLT_UncorrectedJetE30_NoBPTX3BX_) {
        if (!b_HLT_UncorrectedJetE30_NoBPTX3BX_) throw std::runtime_error("HLT_UncorrectedJetE30_NoBPTX3BX branch doesn't exist");
        b_HLT_UncorrectedJetE30_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_UncorrectedJetE30_NoBPTX3BX_ = true;
    }
    return HLT_UncorrectedJetE30_NoBPTX3BX_;
}
const bool &Nano::HLT_UncorrectedJetE60_NoBPTX3BX() {
    if (!loaded_HLT_UncorrectedJetE60_NoBPTX3BX_) {
        if (!b_HLT_UncorrectedJetE60_NoBPTX3BX_) throw std::runtime_error("HLT_UncorrectedJetE60_NoBPTX3BX branch doesn't exist");
        b_HLT_UncorrectedJetE60_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_UncorrectedJetE60_NoBPTX3BX_ = true;
    }
    return HLT_UncorrectedJetE60_NoBPTX3BX_;
}
const bool &Nano::HLT_UncorrectedJetE70_NoBPTX3BX() {
    if (!loaded_HLT_UncorrectedJetE70_NoBPTX3BX_) {
        if (!b_HLT_UncorrectedJetE70_NoBPTX3BX_) throw std::runtime_error("HLT_UncorrectedJetE70_NoBPTX3BX branch doesn't exist");
        b_HLT_UncorrectedJetE70_NoBPTX3BX_->GetEntry(index);
        loaded_HLT_UncorrectedJetE70_NoBPTX3BX_ = true;
    }
    return HLT_UncorrectedJetE70_NoBPTX3BX_;
}
const bool &Nano::HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_) {
        if (!b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_) {
        if (!b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg() {
    if (!loaded_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_) {
        if (!b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_) throw std::runtime_error("HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg branch doesn't exist");
        b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_->GetEntry(index);
        loaded_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_ = true;
    }
    return HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_;
}
const bool &Nano::HLT_ZeroBias() {
    if (!loaded_HLT_ZeroBias_) {
        if (!b_HLT_ZeroBias_) throw std::runtime_error("HLT_ZeroBias branch doesn't exist");
        b_HLT_ZeroBias_->GetEntry(index);
        loaded_HLT_ZeroBias_ = true;
    }
    return HLT_ZeroBias_;
}
const bool &Nano::HLT_ZeroBias_FirstBXAfterTrain() {
    if (!loaded_HLT_ZeroBias_FirstBXAfterTrain_) {
        if (!b_HLT_ZeroBias_FirstBXAfterTrain_) throw std::runtime_error("HLT_ZeroBias_FirstBXAfterTrain branch doesn't exist");
        b_HLT_ZeroBias_FirstBXAfterTrain_->GetEntry(index);
        loaded_HLT_ZeroBias_FirstBXAfterTrain_ = true;
    }
    return HLT_ZeroBias_FirstBXAfterTrain_;
}
const bool &Nano::HLT_ZeroBias_FirstCollisionAfterAbortGap() {
    if (!loaded_HLT_ZeroBias_FirstCollisionAfterAbortGap_) {
        if (!b_HLT_ZeroBias_FirstCollisionAfterAbortGap_) throw std::runtime_error("HLT_ZeroBias_FirstCollisionAfterAbortGap branch doesn't exist");
        b_HLT_ZeroBias_FirstCollisionAfterAbortGap_->GetEntry(index);
        loaded_HLT_ZeroBias_FirstCollisionAfterAbortGap_ = true;
    }
    return HLT_ZeroBias_FirstCollisionAfterAbortGap_;
}
const bool &Nano::HLT_ZeroBias_FirstCollisionInTrain() {
    if (!loaded_HLT_ZeroBias_FirstCollisionInTrain_) {
        if (!b_HLT_ZeroBias_FirstCollisionInTrain_) throw std::runtime_error("HLT_ZeroBias_FirstCollisionInTrain branch doesn't exist");
        b_HLT_ZeroBias_FirstCollisionInTrain_->GetEntry(index);
        loaded_HLT_ZeroBias_FirstCollisionInTrain_ = true;
    }
    return HLT_ZeroBias_FirstCollisionInTrain_;
}
const bool &Nano::HLT_ZeroBias_IsolatedBunches() {
    if (!loaded_HLT_ZeroBias_IsolatedBunches_) {
        if (!b_HLT_ZeroBias_IsolatedBunches_) throw std::runtime_error("HLT_ZeroBias_IsolatedBunches branch doesn't exist");
        b_HLT_ZeroBias_IsolatedBunches_->GetEntry(index);
        loaded_HLT_ZeroBias_IsolatedBunches_ = true;
    }
    return HLT_ZeroBias_IsolatedBunches_;
}
const bool &Nano::HLT_ZeroBias_LastCollisionInTrain() {
    if (!loaded_HLT_ZeroBias_LastCollisionInTrain_) {
        if (!b_HLT_ZeroBias_LastCollisionInTrain_) throw std::runtime_error("HLT_ZeroBias_LastCollisionInTrain branch doesn't exist");
        b_HLT_ZeroBias_LastCollisionInTrain_->GetEntry(index);
        loaded_HLT_ZeroBias_LastCollisionInTrain_ = true;
    }
    return HLT_ZeroBias_LastCollisionInTrain_;
}
const bool &Nano::HLT_ZeroBias_part0() {
    if (!loaded_HLT_ZeroBias_part0_) {
        if (!b_HLT_ZeroBias_part0_) throw std::runtime_error("HLT_ZeroBias_part0 branch doesn't exist");
        b_HLT_ZeroBias_part0_->GetEntry(index);
        loaded_HLT_ZeroBias_part0_ = true;
    }
    return HLT_ZeroBias_part0_;
}
const bool &Nano::HLT_ZeroBias_part1() {
    if (!loaded_HLT_ZeroBias_part1_) {
        if (!b_HLT_ZeroBias_part1_) throw std::runtime_error("HLT_ZeroBias_part1 branch doesn't exist");
        b_HLT_ZeroBias_part1_->GetEntry(index);
        loaded_HLT_ZeroBias_part1_ = true;
    }
    return HLT_ZeroBias_part1_;
}
const bool &Nano::HLT_ZeroBias_part2() {
    if (!loaded_HLT_ZeroBias_part2_) {
        if (!b_HLT_ZeroBias_part2_) throw std::runtime_error("HLT_ZeroBias_part2 branch doesn't exist");
        b_HLT_ZeroBias_part2_->GetEntry(index);
        loaded_HLT_ZeroBias_part2_ = true;
    }
    return HLT_ZeroBias_part2_;
}
const bool &Nano::HLT_ZeroBias_part3() {
    if (!loaded_HLT_ZeroBias_part3_) {
        if (!b_HLT_ZeroBias_part3_) throw std::runtime_error("HLT_ZeroBias_part3 branch doesn't exist");
        b_HLT_ZeroBias_part3_->GetEntry(index);
        loaded_HLT_ZeroBias_part3_ = true;
    }
    return HLT_ZeroBias_part3_;
}
const bool &Nano::HLT_ZeroBias_part4() {
    if (!loaded_HLT_ZeroBias_part4_) {
        if (!b_HLT_ZeroBias_part4_) throw std::runtime_error("HLT_ZeroBias_part4 branch doesn't exist");
        b_HLT_ZeroBias_part4_->GetEntry(index);
        loaded_HLT_ZeroBias_part4_ = true;
    }
    return HLT_ZeroBias_part4_;
}
const bool &Nano::HLT_ZeroBias_part5() {
    if (!loaded_HLT_ZeroBias_part5_) {
        if (!b_HLT_ZeroBias_part5_) throw std::runtime_error("HLT_ZeroBias_part5 branch doesn't exist");
        b_HLT_ZeroBias_part5_->GetEntry(index);
        loaded_HLT_ZeroBias_part5_ = true;
    }
    return HLT_ZeroBias_part5_;
}
const bool &Nano::HLT_ZeroBias_part6() {
    if (!loaded_HLT_ZeroBias_part6_) {
        if (!b_HLT_ZeroBias_part6_) throw std::runtime_error("HLT_ZeroBias_part6 branch doesn't exist");
        b_HLT_ZeroBias_part6_->GetEntry(index);
        loaded_HLT_ZeroBias_part6_ = true;
    }
    return HLT_ZeroBias_part6_;
}
const bool &Nano::HLT_ZeroBias_part7() {
    if (!loaded_HLT_ZeroBias_part7_) {
        if (!b_HLT_ZeroBias_part7_) throw std::runtime_error("HLT_ZeroBias_part7 branch doesn't exist");
        b_HLT_ZeroBias_part7_->GetEntry(index);
        loaded_HLT_ZeroBias_part7_ = true;
    }
    return HLT_ZeroBias_part7_;
}
const bool &Nano::HLTriggerFinalPath() {
    if (!loaded_HLTriggerFinalPath_) {
        if (!b_HLTriggerFinalPath_) throw std::runtime_error("HLTriggerFinalPath branch doesn't exist");
        b_HLTriggerFinalPath_->GetEntry(index);
        loaded_HLTriggerFinalPath_ = true;
    }
    return HLTriggerFinalPath_;
}
const bool &Nano::HLTriggerFirstPath() {
    if (!loaded_HLTriggerFirstPath_) {
        if (!b_HLTriggerFirstPath_) throw std::runtime_error("HLTriggerFirstPath branch doesn't exist");
        b_HLTriggerFirstPath_->GetEntry(index);
        loaded_HLTriggerFirstPath_ = true;
    }
    return HLTriggerFirstPath_;
}
const vector<float> &Nano::IsoTrack_dxy() {
    if (!loaded_IsoTrack_dxy_) {
        if (!b_IsoTrack_dxy_) throw std::runtime_error("IsoTrack_dxy branch doesn't exist");
        int bytes = b_IsoTrack_dxy_->GetEntry(index);
        v_IsoTrack_dxy_ = vector<float>(IsoTrack_dxy_,IsoTrack_dxy_+bytes/sizeof(IsoTrack_dxy_[0]));
        loaded_IsoTrack_dxy_ = true;
    }
    return v_IsoTrack_dxy_;
}
const vector<float> &Nano::IsoTrack_dz() {
    if (!loaded_IsoTrack_dz_) {
        if (!b_IsoTrack_dz_) throw std::runtime_error("IsoTrack_dz branch doesn't exist");
        int bytes = b_IsoTrack_dz_->GetEntry(index);
        v_IsoTrack_dz_ = vector<float>(IsoTrack_dz_,IsoTrack_dz_+bytes/sizeof(IsoTrack_dz_[0]));
        loaded_IsoTrack_dz_ = true;
    }
    return v_IsoTrack_dz_;
}
const vector<float> &Nano::IsoTrack_eta() {
    if (!loaded_IsoTrack_eta_) {
        if (!b_IsoTrack_eta_) throw std::runtime_error("IsoTrack_eta branch doesn't exist");
        int bytes = b_IsoTrack_eta_->GetEntry(index);
        v_IsoTrack_eta_ = vector<float>(IsoTrack_eta_,IsoTrack_eta_+bytes/sizeof(IsoTrack_eta_[0]));
        loaded_IsoTrack_eta_ = true;
    }
    return v_IsoTrack_eta_;
}
const vector<bool> &Nano::IsoTrack_isHighPurityTrack() {
    if (!loaded_IsoTrack_isHighPurityTrack_) {
        if (!b_IsoTrack_isHighPurityTrack_) throw std::runtime_error("IsoTrack_isHighPurityTrack branch doesn't exist");
        int bytes = b_IsoTrack_isHighPurityTrack_->GetEntry(index);
        v_IsoTrack_isHighPurityTrack_ = vector<bool>(IsoTrack_isHighPurityTrack_,IsoTrack_isHighPurityTrack_+bytes/sizeof(IsoTrack_isHighPurityTrack_[0]));
        loaded_IsoTrack_isHighPurityTrack_ = true;
    }
    return v_IsoTrack_isHighPurityTrack_;
}
const vector<bool> &Nano::IsoTrack_isPFcand() {
    if (!loaded_IsoTrack_isPFcand_) {
        if (!b_IsoTrack_isPFcand_) throw std::runtime_error("IsoTrack_isPFcand branch doesn't exist");
        int bytes = b_IsoTrack_isPFcand_->GetEntry(index);
        v_IsoTrack_isPFcand_ = vector<bool>(IsoTrack_isPFcand_,IsoTrack_isPFcand_+bytes/sizeof(IsoTrack_isPFcand_[0]));
        loaded_IsoTrack_isPFcand_ = true;
    }
    return v_IsoTrack_isPFcand_;
}
const vector<float> &Nano::IsoTrack_miniPFRelIso_all() {
    if (!loaded_IsoTrack_miniPFRelIso_all_) {
        if (!b_IsoTrack_miniPFRelIso_all_) throw std::runtime_error("IsoTrack_miniPFRelIso_all branch doesn't exist");
        int bytes = b_IsoTrack_miniPFRelIso_all_->GetEntry(index);
        v_IsoTrack_miniPFRelIso_all_ = vector<float>(IsoTrack_miniPFRelIso_all_,IsoTrack_miniPFRelIso_all_+bytes/sizeof(IsoTrack_miniPFRelIso_all_[0]));
        loaded_IsoTrack_miniPFRelIso_all_ = true;
    }
    return v_IsoTrack_miniPFRelIso_all_;
}
const vector<float> &Nano::IsoTrack_miniPFRelIso_chg() {
    if (!loaded_IsoTrack_miniPFRelIso_chg_) {
        if (!b_IsoTrack_miniPFRelIso_chg_) throw std::runtime_error("IsoTrack_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_IsoTrack_miniPFRelIso_chg_->GetEntry(index);
        v_IsoTrack_miniPFRelIso_chg_ = vector<float>(IsoTrack_miniPFRelIso_chg_,IsoTrack_miniPFRelIso_chg_+bytes/sizeof(IsoTrack_miniPFRelIso_chg_[0]));
        loaded_IsoTrack_miniPFRelIso_chg_ = true;
    }
    return v_IsoTrack_miniPFRelIso_chg_;
}
const vector<int> &Nano::IsoTrack_pdgId() {
    if (!loaded_IsoTrack_pdgId_) {
        if (!b_IsoTrack_pdgId_) throw std::runtime_error("IsoTrack_pdgId branch doesn't exist");
        int bytes = b_IsoTrack_pdgId_->GetEntry(index);
        v_IsoTrack_pdgId_ = vector<int>(IsoTrack_pdgId_,IsoTrack_pdgId_+bytes/sizeof(IsoTrack_pdgId_[0]));
        loaded_IsoTrack_pdgId_ = true;
    }
    return v_IsoTrack_pdgId_;
}
const vector<float> &Nano::IsoTrack_pfRelIso03_all() {
    if (!loaded_IsoTrack_pfRelIso03_all_) {
        if (!b_IsoTrack_pfRelIso03_all_) throw std::runtime_error("IsoTrack_pfRelIso03_all branch doesn't exist");
        int bytes = b_IsoTrack_pfRelIso03_all_->GetEntry(index);
        v_IsoTrack_pfRelIso03_all_ = vector<float>(IsoTrack_pfRelIso03_all_,IsoTrack_pfRelIso03_all_+bytes/sizeof(IsoTrack_pfRelIso03_all_[0]));
        loaded_IsoTrack_pfRelIso03_all_ = true;
    }
    return v_IsoTrack_pfRelIso03_all_;
}
const vector<float> &Nano::IsoTrack_pfRelIso03_chg() {
    if (!loaded_IsoTrack_pfRelIso03_chg_) {
        if (!b_IsoTrack_pfRelIso03_chg_) throw std::runtime_error("IsoTrack_pfRelIso03_chg branch doesn't exist");
        int bytes = b_IsoTrack_pfRelIso03_chg_->GetEntry(index);
        v_IsoTrack_pfRelIso03_chg_ = vector<float>(IsoTrack_pfRelIso03_chg_,IsoTrack_pfRelIso03_chg_+bytes/sizeof(IsoTrack_pfRelIso03_chg_[0]));
        loaded_IsoTrack_pfRelIso03_chg_ = true;
    }
    return v_IsoTrack_pfRelIso03_chg_;
}
const vector<float> &Nano::IsoTrack_phi() {
    if (!loaded_IsoTrack_phi_) {
        if (!b_IsoTrack_phi_) throw std::runtime_error("IsoTrack_phi branch doesn't exist");
        int bytes = b_IsoTrack_phi_->GetEntry(index);
        v_IsoTrack_phi_ = vector<float>(IsoTrack_phi_,IsoTrack_phi_+bytes/sizeof(IsoTrack_phi_[0]));
        loaded_IsoTrack_phi_ = true;
    }
    return v_IsoTrack_phi_;
}
const vector<float> &Nano::IsoTrack_pt() {
    if (!loaded_IsoTrack_pt_) {
        if (!b_IsoTrack_pt_) throw std::runtime_error("IsoTrack_pt branch doesn't exist");
        int bytes = b_IsoTrack_pt_->GetEntry(index);
        v_IsoTrack_pt_ = vector<float>(IsoTrack_pt_,IsoTrack_pt_+bytes/sizeof(IsoTrack_pt_[0]));
        loaded_IsoTrack_pt_ = true;
    }
    return v_IsoTrack_pt_;
}
const vector<float> &Nano::Jet_area() {
    if (!loaded_Jet_area_) {
        if (!b_Jet_area_) throw std::runtime_error("Jet_area branch doesn't exist");
        int bytes = b_Jet_area_->GetEntry(index);
        v_Jet_area_ = vector<float>(Jet_area_,Jet_area_+bytes/sizeof(Jet_area_[0]));
        loaded_Jet_area_ = true;
    }
    return v_Jet_area_;
}
const vector<float> &Nano::Jet_bReg() {
    if (!loaded_Jet_bReg_) {
        if (!b_Jet_bReg_) throw std::runtime_error("Jet_bReg branch doesn't exist");
        int bytes = b_Jet_bReg_->GetEntry(index);
        v_Jet_bReg_ = vector<float>(Jet_bReg_,Jet_bReg_+bytes/sizeof(Jet_bReg_[0]));
        loaded_Jet_bReg_ = true;
    }
    return v_Jet_bReg_;
}
const vector<float> &Nano::Jet_btagCMVA() {
    if (!loaded_Jet_btagCMVA_) {
        if (!b_Jet_btagCMVA_) throw std::runtime_error("Jet_btagCMVA branch doesn't exist");
        int bytes = b_Jet_btagCMVA_->GetEntry(index);
        v_Jet_btagCMVA_ = vector<float>(Jet_btagCMVA_,Jet_btagCMVA_+bytes/sizeof(Jet_btagCMVA_[0]));
        loaded_Jet_btagCMVA_ = true;
    }
    return v_Jet_btagCMVA_;
}
const vector<float> &Nano::Jet_btagCSVV2() {
    if (!loaded_Jet_btagCSVV2_) {
        if (!b_Jet_btagCSVV2_) throw std::runtime_error("Jet_btagCSVV2 branch doesn't exist");
        int bytes = b_Jet_btagCSVV2_->GetEntry(index);
        v_Jet_btagCSVV2_ = vector<float>(Jet_btagCSVV2_,Jet_btagCSVV2_+bytes/sizeof(Jet_btagCSVV2_[0]));
        loaded_Jet_btagCSVV2_ = true;
    }
    return v_Jet_btagCSVV2_;
}
const vector<float> &Nano::Jet_btagDeepB() {
    if (!loaded_Jet_btagDeepB_) {
        if (!b_Jet_btagDeepB_) throw std::runtime_error("Jet_btagDeepB branch doesn't exist");
        int bytes = b_Jet_btagDeepB_->GetEntry(index);
        v_Jet_btagDeepB_ = vector<float>(Jet_btagDeepB_,Jet_btagDeepB_+bytes/sizeof(Jet_btagDeepB_[0]));
        loaded_Jet_btagDeepB_ = true;
    }
    return v_Jet_btagDeepB_;
}
const vector<float> &Nano::Jet_btagDeepC() {
    if (!loaded_Jet_btagDeepC_) {
        if (!b_Jet_btagDeepC_) throw std::runtime_error("Jet_btagDeepC branch doesn't exist");
        int bytes = b_Jet_btagDeepC_->GetEntry(index);
        v_Jet_btagDeepC_ = vector<float>(Jet_btagDeepC_,Jet_btagDeepC_+bytes/sizeof(Jet_btagDeepC_[0]));
        loaded_Jet_btagDeepC_ = true;
    }
    return v_Jet_btagDeepC_;
}
const vector<float> &Nano::Jet_btagDeepFlavB() {
    if (!loaded_Jet_btagDeepFlavB_) {
        if (!b_Jet_btagDeepFlavB_) throw std::runtime_error("Jet_btagDeepFlavB branch doesn't exist");
        int bytes = b_Jet_btagDeepFlavB_->GetEntry(index);
        v_Jet_btagDeepFlavB_ = vector<float>(Jet_btagDeepFlavB_,Jet_btagDeepFlavB_+bytes/sizeof(Jet_btagDeepFlavB_[0]));
        loaded_Jet_btagDeepFlavB_ = true;
    }
    return v_Jet_btagDeepFlavB_;
}
const vector<float> &Nano::Jet_chEmEF() {
    if (!loaded_Jet_chEmEF_) {
        if (!b_Jet_chEmEF_) throw std::runtime_error("Jet_chEmEF branch doesn't exist");
        int bytes = b_Jet_chEmEF_->GetEntry(index);
        v_Jet_chEmEF_ = vector<float>(Jet_chEmEF_,Jet_chEmEF_+bytes/sizeof(Jet_chEmEF_[0]));
        loaded_Jet_chEmEF_ = true;
    }
    return v_Jet_chEmEF_;
}
const vector<float> &Nano::Jet_chHEF() {
    if (!loaded_Jet_chHEF_) {
        if (!b_Jet_chHEF_) throw std::runtime_error("Jet_chHEF branch doesn't exist");
        int bytes = b_Jet_chHEF_->GetEntry(index);
        v_Jet_chHEF_ = vector<float>(Jet_chHEF_,Jet_chHEF_+bytes/sizeof(Jet_chHEF_[0]));
        loaded_Jet_chHEF_ = true;
    }
    return v_Jet_chHEF_;
}
const vector<UChar_t> &Nano::Jet_cleanmask() {
    if (!loaded_Jet_cleanmask_) {
        if (!b_Jet_cleanmask_) throw std::runtime_error("Jet_cleanmask branch doesn't exist");
        int bytes = b_Jet_cleanmask_->GetEntry(index);
        v_Jet_cleanmask_ = vector<UChar_t>(Jet_cleanmask_,Jet_cleanmask_+bytes/sizeof(Jet_cleanmask_[0]));
        loaded_Jet_cleanmask_ = true;
    }
    return v_Jet_cleanmask_;
}
const vector<int> &Nano::Jet_electronIdx1() {
    if (!loaded_Jet_electronIdx1_) {
        if (!b_Jet_electronIdx1_) throw std::runtime_error("Jet_electronIdx1 branch doesn't exist");
        int bytes = b_Jet_electronIdx1_->GetEntry(index);
        v_Jet_electronIdx1_ = vector<int>(Jet_electronIdx1_,Jet_electronIdx1_+bytes/sizeof(Jet_electronIdx1_[0]));
        loaded_Jet_electronIdx1_ = true;
    }
    return v_Jet_electronIdx1_;
}
const vector<int> &Nano::Jet_electronIdx2() {
    if (!loaded_Jet_electronIdx2_) {
        if (!b_Jet_electronIdx2_) throw std::runtime_error("Jet_electronIdx2 branch doesn't exist");
        int bytes = b_Jet_electronIdx2_->GetEntry(index);
        v_Jet_electronIdx2_ = vector<int>(Jet_electronIdx2_,Jet_electronIdx2_+bytes/sizeof(Jet_electronIdx2_[0]));
        loaded_Jet_electronIdx2_ = true;
    }
    return v_Jet_electronIdx2_;
}
const vector<float> &Nano::Jet_eta() {
    if (!loaded_Jet_eta_) {
        if (!b_Jet_eta_) throw std::runtime_error("Jet_eta branch doesn't exist");
        int bytes = b_Jet_eta_->GetEntry(index);
        v_Jet_eta_ = vector<float>(Jet_eta_,Jet_eta_+bytes/sizeof(Jet_eta_[0]));
        loaded_Jet_eta_ = true;
    }
    return v_Jet_eta_;
}
const vector<int> &Nano::Jet_genJetIdx() {
    if (!loaded_Jet_genJetIdx_) {
        if (!b_Jet_genJetIdx_) throw std::runtime_error("Jet_genJetIdx branch doesn't exist");
        int bytes = b_Jet_genJetIdx_->GetEntry(index);
        v_Jet_genJetIdx_ = vector<int>(Jet_genJetIdx_,Jet_genJetIdx_+bytes/sizeof(Jet_genJetIdx_[0]));
        loaded_Jet_genJetIdx_ = true;
    }
    return v_Jet_genJetIdx_;
}
const vector<int> &Nano::Jet_hadronFlavour() {
    if (!loaded_Jet_hadronFlavour_) {
        if (!b_Jet_hadronFlavour_) throw std::runtime_error("Jet_hadronFlavour branch doesn't exist");
        int bytes = b_Jet_hadronFlavour_->GetEntry(index);
        v_Jet_hadronFlavour_ = vector<int>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes/sizeof(Jet_hadronFlavour_[0]));
        loaded_Jet_hadronFlavour_ = true;
    }
    return v_Jet_hadronFlavour_;
}
const vector<int> &Nano::Jet_jetId() {
    if (!loaded_Jet_jetId_) {
        if (!b_Jet_jetId_) throw std::runtime_error("Jet_jetId branch doesn't exist");
        int bytes = b_Jet_jetId_->GetEntry(index);
        v_Jet_jetId_ = vector<int>(Jet_jetId_,Jet_jetId_+bytes/sizeof(Jet_jetId_[0]));
        loaded_Jet_jetId_ = true;
    }
    return v_Jet_jetId_;
}
const vector<float> &Nano::Jet_mass() {
    if (!loaded_Jet_mass_) {
        if (!b_Jet_mass_) throw std::runtime_error("Jet_mass branch doesn't exist");
        int bytes = b_Jet_mass_->GetEntry(index);
        v_Jet_mass_ = vector<float>(Jet_mass_,Jet_mass_+bytes/sizeof(Jet_mass_[0]));
        loaded_Jet_mass_ = true;
    }
    return v_Jet_mass_;
}
const vector<int> &Nano::Jet_muonIdx1() {
    if (!loaded_Jet_muonIdx1_) {
        if (!b_Jet_muonIdx1_) throw std::runtime_error("Jet_muonIdx1 branch doesn't exist");
        int bytes = b_Jet_muonIdx1_->GetEntry(index);
        v_Jet_muonIdx1_ = vector<int>(Jet_muonIdx1_,Jet_muonIdx1_+bytes/sizeof(Jet_muonIdx1_[0]));
        loaded_Jet_muonIdx1_ = true;
    }
    return v_Jet_muonIdx1_;
}
const vector<int> &Nano::Jet_muonIdx2() {
    if (!loaded_Jet_muonIdx2_) {
        if (!b_Jet_muonIdx2_) throw std::runtime_error("Jet_muonIdx2 branch doesn't exist");
        int bytes = b_Jet_muonIdx2_->GetEntry(index);
        v_Jet_muonIdx2_ = vector<int>(Jet_muonIdx2_,Jet_muonIdx2_+bytes/sizeof(Jet_muonIdx2_[0]));
        loaded_Jet_muonIdx2_ = true;
    }
    return v_Jet_muonIdx2_;
}
const vector<int> &Nano::Jet_nConstituents() {
    if (!loaded_Jet_nConstituents_) {
        if (!b_Jet_nConstituents_) throw std::runtime_error("Jet_nConstituents branch doesn't exist");
        int bytes = b_Jet_nConstituents_->GetEntry(index);
        v_Jet_nConstituents_ = vector<int>(Jet_nConstituents_,Jet_nConstituents_+bytes/sizeof(Jet_nConstituents_[0]));
        loaded_Jet_nConstituents_ = true;
    }
    return v_Jet_nConstituents_;
}
const vector<int> &Nano::Jet_nElectrons() {
    if (!loaded_Jet_nElectrons_) {
        if (!b_Jet_nElectrons_) throw std::runtime_error("Jet_nElectrons branch doesn't exist");
        int bytes = b_Jet_nElectrons_->GetEntry(index);
        v_Jet_nElectrons_ = vector<int>(Jet_nElectrons_,Jet_nElectrons_+bytes/sizeof(Jet_nElectrons_[0]));
        loaded_Jet_nElectrons_ = true;
    }
    return v_Jet_nElectrons_;
}
const vector<int> &Nano::Jet_nMuons() {
    if (!loaded_Jet_nMuons_) {
        if (!b_Jet_nMuons_) throw std::runtime_error("Jet_nMuons branch doesn't exist");
        int bytes = b_Jet_nMuons_->GetEntry(index);
        v_Jet_nMuons_ = vector<int>(Jet_nMuons_,Jet_nMuons_+bytes/sizeof(Jet_nMuons_[0]));
        loaded_Jet_nMuons_ = true;
    }
    return v_Jet_nMuons_;
}
const vector<float> &Nano::Jet_neEmEF() {
    if (!loaded_Jet_neEmEF_) {
        if (!b_Jet_neEmEF_) throw std::runtime_error("Jet_neEmEF branch doesn't exist");
        int bytes = b_Jet_neEmEF_->GetEntry(index);
        v_Jet_neEmEF_ = vector<float>(Jet_neEmEF_,Jet_neEmEF_+bytes/sizeof(Jet_neEmEF_[0]));
        loaded_Jet_neEmEF_ = true;
    }
    return v_Jet_neEmEF_;
}
const vector<float> &Nano::Jet_neHEF() {
    if (!loaded_Jet_neHEF_) {
        if (!b_Jet_neHEF_) throw std::runtime_error("Jet_neHEF branch doesn't exist");
        int bytes = b_Jet_neHEF_->GetEntry(index);
        v_Jet_neHEF_ = vector<float>(Jet_neHEF_,Jet_neHEF_+bytes/sizeof(Jet_neHEF_[0]));
        loaded_Jet_neHEF_ = true;
    }
    return v_Jet_neHEF_;
}
const vector<LorentzVector> &Nano::Jet_p4() {
    if (!loaded_Jet_p4_) {
        v_Jet_p4_.clear();
        vector<float> pts = Nano::Jet_pt();
        vector<float> etas = Nano::Jet_eta();
        vector<float> phis = Nano::Jet_phi();
        vector<float> masses = Nano::Jet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Jet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Jet_p4_ = true;
    }
    return v_Jet_p4_;
}
const vector<int> &Nano::Jet_partonFlavour() {
    if (!loaded_Jet_partonFlavour_) {
        if (!b_Jet_partonFlavour_) throw std::runtime_error("Jet_partonFlavour branch doesn't exist");
        int bytes = b_Jet_partonFlavour_->GetEntry(index);
        v_Jet_partonFlavour_ = vector<int>(Jet_partonFlavour_,Jet_partonFlavour_+bytes/sizeof(Jet_partonFlavour_[0]));
        loaded_Jet_partonFlavour_ = true;
    }
    return v_Jet_partonFlavour_;
}
const vector<float> &Nano::Jet_phi() {
    if (!loaded_Jet_phi_) {
        if (!b_Jet_phi_) throw std::runtime_error("Jet_phi branch doesn't exist");
        int bytes = b_Jet_phi_->GetEntry(index);
        v_Jet_phi_ = vector<float>(Jet_phi_,Jet_phi_+bytes/sizeof(Jet_phi_[0]));
        loaded_Jet_phi_ = true;
    }
    return v_Jet_phi_;
}
const vector<float> &Nano::Jet_pt() {
    if (!loaded_Jet_pt_) {
        if (!b_Jet_pt_) throw std::runtime_error("Jet_pt branch doesn't exist");
        int bytes = b_Jet_pt_->GetEntry(index);
        v_Jet_pt_ = vector<float>(Jet_pt_,Jet_pt_+bytes/sizeof(Jet_pt_[0]));
        loaded_Jet_pt_ = true;
    }
    return v_Jet_pt_;
}
const vector<int> &Nano::Jet_puId() {
    if (!loaded_Jet_puId_) {
        if (!b_Jet_puId_) throw std::runtime_error("Jet_puId branch doesn't exist");
        int bytes = b_Jet_puId_->GetEntry(index);
        v_Jet_puId_ = vector<int>(Jet_puId_,Jet_puId_+bytes/sizeof(Jet_puId_[0]));
        loaded_Jet_puId_ = true;
    }
    return v_Jet_puId_;
}
const vector<float> &Nano::Jet_qgl() {
    if (!loaded_Jet_qgl_) {
        if (!b_Jet_qgl_) throw std::runtime_error("Jet_qgl branch doesn't exist");
        int bytes = b_Jet_qgl_->GetEntry(index);
        v_Jet_qgl_ = vector<float>(Jet_qgl_,Jet_qgl_+bytes/sizeof(Jet_qgl_[0]));
        loaded_Jet_qgl_ = true;
    }
    return v_Jet_qgl_;
}
const vector<float> &Nano::Jet_rawFactor() {
    if (!loaded_Jet_rawFactor_) {
        if (!b_Jet_rawFactor_) throw std::runtime_error("Jet_rawFactor branch doesn't exist");
        int bytes = b_Jet_rawFactor_->GetEntry(index);
        v_Jet_rawFactor_ = vector<float>(Jet_rawFactor_,Jet_rawFactor_+bytes/sizeof(Jet_rawFactor_[0]));
        loaded_Jet_rawFactor_ = true;
    }
    return v_Jet_rawFactor_;
}
const bool &Nano::L1simulation_step() {
    if (!loaded_L1simulation_step_) {
        if (!b_L1simulation_step_) throw std::runtime_error("L1simulation_step branch doesn't exist");
        b_L1simulation_step_->GetEntry(index);
        loaded_L1simulation_step_ = true;
    }
    return L1simulation_step_;
}
const vector<float> &Nano::LHEPart_eta() {
    if (!loaded_LHEPart_eta_) {
        if (!b_LHEPart_eta_) throw std::runtime_error("LHEPart_eta branch doesn't exist");
        int bytes = b_LHEPart_eta_->GetEntry(index);
        v_LHEPart_eta_ = vector<float>(LHEPart_eta_,LHEPart_eta_+bytes/sizeof(LHEPart_eta_[0]));
        loaded_LHEPart_eta_ = true;
    }
    return v_LHEPart_eta_;
}
const vector<float> &Nano::LHEPart_mass() {
    if (!loaded_LHEPart_mass_) {
        if (!b_LHEPart_mass_) throw std::runtime_error("LHEPart_mass branch doesn't exist");
        int bytes = b_LHEPart_mass_->GetEntry(index);
        v_LHEPart_mass_ = vector<float>(LHEPart_mass_,LHEPart_mass_+bytes/sizeof(LHEPart_mass_[0]));
        loaded_LHEPart_mass_ = true;
    }
    return v_LHEPart_mass_;
}
const vector<LorentzVector> &Nano::LHEPart_p4() {
    if (!loaded_LHEPart_p4_) {
        v_LHEPart_p4_.clear();
        vector<float> pts = Nano::LHEPart_pt();
        vector<float> etas = Nano::LHEPart_eta();
        vector<float> phis = Nano::LHEPart_phi();
        vector<float> masses = Nano::LHEPart_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_LHEPart_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_LHEPart_p4_ = true;
    }
    return v_LHEPart_p4_;
}
const vector<int> &Nano::LHEPart_pdgId() {
    if (!loaded_LHEPart_pdgId_) {
        if (!b_LHEPart_pdgId_) throw std::runtime_error("LHEPart_pdgId branch doesn't exist");
        int bytes = b_LHEPart_pdgId_->GetEntry(index);
        v_LHEPart_pdgId_ = vector<int>(LHEPart_pdgId_,LHEPart_pdgId_+bytes/sizeof(LHEPart_pdgId_[0]));
        loaded_LHEPart_pdgId_ = true;
    }
    return v_LHEPart_pdgId_;
}
const vector<float> &Nano::LHEPart_phi() {
    if (!loaded_LHEPart_phi_) {
        if (!b_LHEPart_phi_) throw std::runtime_error("LHEPart_phi branch doesn't exist");
        int bytes = b_LHEPart_phi_->GetEntry(index);
        v_LHEPart_phi_ = vector<float>(LHEPart_phi_,LHEPart_phi_+bytes/sizeof(LHEPart_phi_[0]));
        loaded_LHEPart_phi_ = true;
    }
    return v_LHEPart_phi_;
}
const vector<float> &Nano::LHEPart_pt() {
    if (!loaded_LHEPart_pt_) {
        if (!b_LHEPart_pt_) throw std::runtime_error("LHEPart_pt branch doesn't exist");
        int bytes = b_LHEPart_pt_->GetEntry(index);
        v_LHEPart_pt_ = vector<float>(LHEPart_pt_,LHEPart_pt_+bytes/sizeof(LHEPart_pt_[0]));
        loaded_LHEPart_pt_ = true;
    }
    return v_LHEPart_pt_;
}
const vector<float> &Nano::LHEPdfWeight() {
    if (!loaded_LHEPdfWeight_) {
        if (!b_LHEPdfWeight_) throw std::runtime_error("LHEPdfWeight branch doesn't exist");
        int bytes = b_LHEPdfWeight_->GetEntry(index);
        v_LHEPdfWeight_ = vector<float>(LHEPdfWeight_,LHEPdfWeight_+bytes/sizeof(LHEPdfWeight_[0]));
        loaded_LHEPdfWeight_ = true;
    }
    return v_LHEPdfWeight_;
}
const vector<float> &Nano::LHEScaleWeight() {
    if (!loaded_LHEScaleWeight_) {
        if (!b_LHEScaleWeight_) throw std::runtime_error("LHEScaleWeight branch doesn't exist");
        int bytes = b_LHEScaleWeight_->GetEntry(index);
        v_LHEScaleWeight_ = vector<float>(LHEScaleWeight_,LHEScaleWeight_+bytes/sizeof(LHEScaleWeight_[0]));
        loaded_LHEScaleWeight_ = true;
    }
    return v_LHEScaleWeight_;
}
const float &Nano::LHEWeight_originalXWGTUP() {
    if (!loaded_LHEWeight_originalXWGTUP_) {
        if (!b_LHEWeight_originalXWGTUP_) throw std::runtime_error("LHEWeight_originalXWGTUP branch doesn't exist");
        b_LHEWeight_originalXWGTUP_->GetEntry(index);
        loaded_LHEWeight_originalXWGTUP_ = true;
    }
    return LHEWeight_originalXWGTUP_;
}
const float &Nano::LHE_HT() {
    if (!loaded_LHE_HT_) {
        if (!b_LHE_HT_) throw std::runtime_error("LHE_HT branch doesn't exist");
        b_LHE_HT_->GetEntry(index);
        loaded_LHE_HT_ = true;
    }
    return LHE_HT_;
}
const float &Nano::LHE_HTIncoming() {
    if (!loaded_LHE_HTIncoming_) {
        if (!b_LHE_HTIncoming_) throw std::runtime_error("LHE_HTIncoming branch doesn't exist");
        b_LHE_HTIncoming_->GetEntry(index);
        loaded_LHE_HTIncoming_ = true;
    }
    return LHE_HTIncoming_;
}
const UChar_t &Nano::LHE_Nb() {
    if (!loaded_LHE_Nb_) {
        if (!b_LHE_Nb_) throw std::runtime_error("LHE_Nb branch doesn't exist");
        b_LHE_Nb_->GetEntry(index);
        loaded_LHE_Nb_ = true;
    }
    return LHE_Nb_;
}
const UChar_t &Nano::LHE_Nc() {
    if (!loaded_LHE_Nc_) {
        if (!b_LHE_Nc_) throw std::runtime_error("LHE_Nc branch doesn't exist");
        b_LHE_Nc_->GetEntry(index);
        loaded_LHE_Nc_ = true;
    }
    return LHE_Nc_;
}
const UChar_t &Nano::LHE_Nglu() {
    if (!loaded_LHE_Nglu_) {
        if (!b_LHE_Nglu_) throw std::runtime_error("LHE_Nglu branch doesn't exist");
        b_LHE_Nglu_->GetEntry(index);
        loaded_LHE_Nglu_ = true;
    }
    return LHE_Nglu_;
}
const UChar_t &Nano::LHE_Njets() {
    if (!loaded_LHE_Njets_) {
        if (!b_LHE_Njets_) throw std::runtime_error("LHE_Njets branch doesn't exist");
        b_LHE_Njets_->GetEntry(index);
        loaded_LHE_Njets_ = true;
    }
    return LHE_Njets_;
}
const UChar_t &Nano::LHE_NpLO() {
    if (!loaded_LHE_NpLO_) {
        if (!b_LHE_NpLO_) throw std::runtime_error("LHE_NpLO branch doesn't exist");
        b_LHE_NpLO_->GetEntry(index);
        loaded_LHE_NpLO_ = true;
    }
    return LHE_NpLO_;
}
const UChar_t &Nano::LHE_NpNLO() {
    if (!loaded_LHE_NpNLO_) {
        if (!b_LHE_NpNLO_) throw std::runtime_error("LHE_NpNLO branch doesn't exist");
        b_LHE_NpNLO_->GetEntry(index);
        loaded_LHE_NpNLO_ = true;
    }
    return LHE_NpNLO_;
}
const UChar_t &Nano::LHE_Nuds() {
    if (!loaded_LHE_Nuds_) {
        if (!b_LHE_Nuds_) throw std::runtime_error("LHE_Nuds branch doesn't exist");
        b_LHE_Nuds_->GetEntry(index);
        loaded_LHE_Nuds_ = true;
    }
    return LHE_Nuds_;
}
const float &Nano::LHE_Vpt() {
    if (!loaded_LHE_Vpt_) {
        if (!b_LHE_Vpt_) throw std::runtime_error("LHE_Vpt branch doesn't exist");
        b_LHE_Vpt_->GetEntry(index);
        loaded_LHE_Vpt_ = true;
    }
    return LHE_Vpt_;
}
const float &Nano::MET_MetUnclustEnUpDeltaX() {
    if (!loaded_MET_MetUnclustEnUpDeltaX_) {
        if (!b_MET_MetUnclustEnUpDeltaX_) throw std::runtime_error("MET_MetUnclustEnUpDeltaX branch doesn't exist");
        b_MET_MetUnclustEnUpDeltaX_->GetEntry(index);
        loaded_MET_MetUnclustEnUpDeltaX_ = true;
    }
    return MET_MetUnclustEnUpDeltaX_;
}
const float &Nano::MET_MetUnclustEnUpDeltaY() {
    if (!loaded_MET_MetUnclustEnUpDeltaY_) {
        if (!b_MET_MetUnclustEnUpDeltaY_) throw std::runtime_error("MET_MetUnclustEnUpDeltaY branch doesn't exist");
        b_MET_MetUnclustEnUpDeltaY_->GetEntry(index);
        loaded_MET_MetUnclustEnUpDeltaY_ = true;
    }
    return MET_MetUnclustEnUpDeltaY_;
}
const float &Nano::MET_covXX() {
    if (!loaded_MET_covXX_) {
        if (!b_MET_covXX_) throw std::runtime_error("MET_covXX branch doesn't exist");
        b_MET_covXX_->GetEntry(index);
        loaded_MET_covXX_ = true;
    }
    return MET_covXX_;
}
const float &Nano::MET_covXY() {
    if (!loaded_MET_covXY_) {
        if (!b_MET_covXY_) throw std::runtime_error("MET_covXY branch doesn't exist");
        b_MET_covXY_->GetEntry(index);
        loaded_MET_covXY_ = true;
    }
    return MET_covXY_;
}
const float &Nano::MET_covYY() {
    if (!loaded_MET_covYY_) {
        if (!b_MET_covYY_) throw std::runtime_error("MET_covYY branch doesn't exist");
        b_MET_covYY_->GetEntry(index);
        loaded_MET_covYY_ = true;
    }
    return MET_covYY_;
}
const float &Nano::MET_fiducialGenPhi() {
    if (!loaded_MET_fiducialGenPhi_) {
        if (!b_MET_fiducialGenPhi_) throw std::runtime_error("MET_fiducialGenPhi branch doesn't exist");
        b_MET_fiducialGenPhi_->GetEntry(index);
        loaded_MET_fiducialGenPhi_ = true;
    }
    return MET_fiducialGenPhi_;
}
const float &Nano::MET_fiducialGenPt() {
    if (!loaded_MET_fiducialGenPt_) {
        if (!b_MET_fiducialGenPt_) throw std::runtime_error("MET_fiducialGenPt branch doesn't exist");
        b_MET_fiducialGenPt_->GetEntry(index);
        loaded_MET_fiducialGenPt_ = true;
    }
    return MET_fiducialGenPt_;
}
const float &Nano::MET_phi() {
    if (!loaded_MET_phi_) {
        if (!b_MET_phi_) throw std::runtime_error("MET_phi branch doesn't exist");
        b_MET_phi_->GetEntry(index);
        loaded_MET_phi_ = true;
    }
    return MET_phi_;
}
const float &Nano::MET_pt() {
    if (!loaded_MET_pt_) {
        if (!b_MET_pt_) throw std::runtime_error("MET_pt branch doesn't exist");
        b_MET_pt_->GetEntry(index);
        loaded_MET_pt_ = true;
    }
    return MET_pt_;
}
const float &Nano::MET_significance() {
    if (!loaded_MET_significance_) {
        if (!b_MET_significance_) throw std::runtime_error("MET_significance branch doesn't exist");
        b_MET_significance_->GetEntry(index);
        loaded_MET_significance_ = true;
    }
    return MET_significance_;
}
const float &Nano::MET_sumEt() {
    if (!loaded_MET_sumEt_) {
        if (!b_MET_sumEt_) throw std::runtime_error("MET_sumEt branch doesn't exist");
        b_MET_sumEt_->GetEntry(index);
        loaded_MET_sumEt_ = true;
    }
    return MET_sumEt_;
}
const vector<int> &Nano::Muon_charge() {
    if (!loaded_Muon_charge_) {
        if (!b_Muon_charge_) throw std::runtime_error("Muon_charge branch doesn't exist");
        int bytes = b_Muon_charge_->GetEntry(index);
        v_Muon_charge_ = vector<int>(Muon_charge_,Muon_charge_+bytes/sizeof(Muon_charge_[0]));
        loaded_Muon_charge_ = true;
    }
    return v_Muon_charge_;
}
const vector<UChar_t> &Nano::Muon_cleanmask() {
    if (!loaded_Muon_cleanmask_) {
        if (!b_Muon_cleanmask_) throw std::runtime_error("Muon_cleanmask branch doesn't exist");
        int bytes = b_Muon_cleanmask_->GetEntry(index);
        v_Muon_cleanmask_ = vector<UChar_t>(Muon_cleanmask_,Muon_cleanmask_+bytes/sizeof(Muon_cleanmask_[0]));
        loaded_Muon_cleanmask_ = true;
    }
    return v_Muon_cleanmask_;
}
const vector<float> &Nano::Muon_dxy() {
    if (!loaded_Muon_dxy_) {
        if (!b_Muon_dxy_) throw std::runtime_error("Muon_dxy branch doesn't exist");
        int bytes = b_Muon_dxy_->GetEntry(index);
        v_Muon_dxy_ = vector<float>(Muon_dxy_,Muon_dxy_+bytes/sizeof(Muon_dxy_[0]));
        loaded_Muon_dxy_ = true;
    }
    return v_Muon_dxy_;
}
const vector<float> &Nano::Muon_dxyErr() {
    if (!loaded_Muon_dxyErr_) {
        if (!b_Muon_dxyErr_) throw std::runtime_error("Muon_dxyErr branch doesn't exist");
        int bytes = b_Muon_dxyErr_->GetEntry(index);
        v_Muon_dxyErr_ = vector<float>(Muon_dxyErr_,Muon_dxyErr_+bytes/sizeof(Muon_dxyErr_[0]));
        loaded_Muon_dxyErr_ = true;
    }
    return v_Muon_dxyErr_;
}
const vector<float> &Nano::Muon_dz() {
    if (!loaded_Muon_dz_) {
        if (!b_Muon_dz_) throw std::runtime_error("Muon_dz branch doesn't exist");
        int bytes = b_Muon_dz_->GetEntry(index);
        v_Muon_dz_ = vector<float>(Muon_dz_,Muon_dz_+bytes/sizeof(Muon_dz_[0]));
        loaded_Muon_dz_ = true;
    }
    return v_Muon_dz_;
}
const vector<float> &Nano::Muon_dzErr() {
    if (!loaded_Muon_dzErr_) {
        if (!b_Muon_dzErr_) throw std::runtime_error("Muon_dzErr branch doesn't exist");
        int bytes = b_Muon_dzErr_->GetEntry(index);
        v_Muon_dzErr_ = vector<float>(Muon_dzErr_,Muon_dzErr_+bytes/sizeof(Muon_dzErr_[0]));
        loaded_Muon_dzErr_ = true;
    }
    return v_Muon_dzErr_;
}
const vector<float> &Nano::Muon_eta() {
    if (!loaded_Muon_eta_) {
        if (!b_Muon_eta_) throw std::runtime_error("Muon_eta branch doesn't exist");
        int bytes = b_Muon_eta_->GetEntry(index);
        v_Muon_eta_ = vector<float>(Muon_eta_,Muon_eta_+bytes/sizeof(Muon_eta_[0]));
        loaded_Muon_eta_ = true;
    }
    return v_Muon_eta_;
}
const vector<UChar_t> &Nano::Muon_genPartFlav() {
    if (!loaded_Muon_genPartFlav_) {
        if (!b_Muon_genPartFlav_) throw std::runtime_error("Muon_genPartFlav branch doesn't exist");
        int bytes = b_Muon_genPartFlav_->GetEntry(index);
        v_Muon_genPartFlav_ = vector<UChar_t>(Muon_genPartFlav_,Muon_genPartFlav_+bytes/sizeof(Muon_genPartFlav_[0]));
        loaded_Muon_genPartFlav_ = true;
    }
    return v_Muon_genPartFlav_;
}
const vector<int> &Nano::Muon_genPartIdx() {
    if (!loaded_Muon_genPartIdx_) {
        if (!b_Muon_genPartIdx_) throw std::runtime_error("Muon_genPartIdx branch doesn't exist");
        int bytes = b_Muon_genPartIdx_->GetEntry(index);
        v_Muon_genPartIdx_ = vector<int>(Muon_genPartIdx_,Muon_genPartIdx_+bytes/sizeof(Muon_genPartIdx_[0]));
        loaded_Muon_genPartIdx_ = true;
    }
    return v_Muon_genPartIdx_;
}
const vector<UChar_t> &Nano::Muon_highPtId() {
    if (!loaded_Muon_highPtId_) {
        if (!b_Muon_highPtId_) throw std::runtime_error("Muon_highPtId branch doesn't exist");
        int bytes = b_Muon_highPtId_->GetEntry(index);
        v_Muon_highPtId_ = vector<UChar_t>(Muon_highPtId_,Muon_highPtId_+bytes/sizeof(Muon_highPtId_[0]));
        loaded_Muon_highPtId_ = true;
    }
    return v_Muon_highPtId_;
}
const vector<float> &Nano::Muon_ip3d() {
    if (!loaded_Muon_ip3d_) {
        if (!b_Muon_ip3d_) throw std::runtime_error("Muon_ip3d branch doesn't exist");
        int bytes = b_Muon_ip3d_->GetEntry(index);
        v_Muon_ip3d_ = vector<float>(Muon_ip3d_,Muon_ip3d_+bytes/sizeof(Muon_ip3d_[0]));
        loaded_Muon_ip3d_ = true;
    }
    return v_Muon_ip3d_;
}
const vector<bool> &Nano::Muon_isPFcand() {
    if (!loaded_Muon_isPFcand_) {
        if (!b_Muon_isPFcand_) throw std::runtime_error("Muon_isPFcand branch doesn't exist");
        int bytes = b_Muon_isPFcand_->GetEntry(index);
        v_Muon_isPFcand_ = vector<bool>(Muon_isPFcand_,Muon_isPFcand_+bytes/sizeof(Muon_isPFcand_[0]));
        loaded_Muon_isPFcand_ = true;
    }
    return v_Muon_isPFcand_;
}
const vector<int> &Nano::Muon_jetIdx() {
    if (!loaded_Muon_jetIdx_) {
        if (!b_Muon_jetIdx_) throw std::runtime_error("Muon_jetIdx branch doesn't exist");
        int bytes = b_Muon_jetIdx_->GetEntry(index);
        v_Muon_jetIdx_ = vector<int>(Muon_jetIdx_,Muon_jetIdx_+bytes/sizeof(Muon_jetIdx_[0]));
        loaded_Muon_jetIdx_ = true;
    }
    return v_Muon_jetIdx_;
}
const vector<float> &Nano::Muon_mass() {
    if (!loaded_Muon_mass_) {
        if (!b_Muon_mass_) throw std::runtime_error("Muon_mass branch doesn't exist");
        int bytes = b_Muon_mass_->GetEntry(index);
        v_Muon_mass_ = vector<float>(Muon_mass_,Muon_mass_+bytes/sizeof(Muon_mass_[0]));
        loaded_Muon_mass_ = true;
    }
    return v_Muon_mass_;
}
const vector<bool> &Nano::Muon_mediumId() {
    if (!loaded_Muon_mediumId_) {
        if (!b_Muon_mediumId_) throw std::runtime_error("Muon_mediumId branch doesn't exist");
        int bytes = b_Muon_mediumId_->GetEntry(index);
        v_Muon_mediumId_ = vector<bool>(Muon_mediumId_,Muon_mediumId_+bytes/sizeof(Muon_mediumId_[0]));
        loaded_Muon_mediumId_ = true;
    }
    return v_Muon_mediumId_;
}
const vector<float> &Nano::Muon_miniPFRelIso_all() {
    if (!loaded_Muon_miniPFRelIso_all_) {
        if (!b_Muon_miniPFRelIso_all_) throw std::runtime_error("Muon_miniPFRelIso_all branch doesn't exist");
        int bytes = b_Muon_miniPFRelIso_all_->GetEntry(index);
        v_Muon_miniPFRelIso_all_ = vector<float>(Muon_miniPFRelIso_all_,Muon_miniPFRelIso_all_+bytes/sizeof(Muon_miniPFRelIso_all_[0]));
        loaded_Muon_miniPFRelIso_all_ = true;
    }
    return v_Muon_miniPFRelIso_all_;
}
const vector<float> &Nano::Muon_miniPFRelIso_chg() {
    if (!loaded_Muon_miniPFRelIso_chg_) {
        if (!b_Muon_miniPFRelIso_chg_) throw std::runtime_error("Muon_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_Muon_miniPFRelIso_chg_->GetEntry(index);
        v_Muon_miniPFRelIso_chg_ = vector<float>(Muon_miniPFRelIso_chg_,Muon_miniPFRelIso_chg_+bytes/sizeof(Muon_miniPFRelIso_chg_[0]));
        loaded_Muon_miniPFRelIso_chg_ = true;
    }
    return v_Muon_miniPFRelIso_chg_;
}
const vector<float> &Nano::Muon_mvaTTH() {
    if (!loaded_Muon_mvaTTH_) {
        if (!b_Muon_mvaTTH_) throw std::runtime_error("Muon_mvaTTH branch doesn't exist");
        int bytes = b_Muon_mvaTTH_->GetEntry(index);
        v_Muon_mvaTTH_ = vector<float>(Muon_mvaTTH_,Muon_mvaTTH_+bytes/sizeof(Muon_mvaTTH_[0]));
        loaded_Muon_mvaTTH_ = true;
    }
    return v_Muon_mvaTTH_;
}
const vector<int> &Nano::Muon_nStations() {
    if (!loaded_Muon_nStations_) {
        if (!b_Muon_nStations_) throw std::runtime_error("Muon_nStations branch doesn't exist");
        int bytes = b_Muon_nStations_->GetEntry(index);
        v_Muon_nStations_ = vector<int>(Muon_nStations_,Muon_nStations_+bytes/sizeof(Muon_nStations_[0]));
        loaded_Muon_nStations_ = true;
    }
    return v_Muon_nStations_;
}
const vector<int> &Nano::Muon_nTrackerLayers() {
    if (!loaded_Muon_nTrackerLayers_) {
        if (!b_Muon_nTrackerLayers_) throw std::runtime_error("Muon_nTrackerLayers branch doesn't exist");
        int bytes = b_Muon_nTrackerLayers_->GetEntry(index);
        v_Muon_nTrackerLayers_ = vector<int>(Muon_nTrackerLayers_,Muon_nTrackerLayers_+bytes/sizeof(Muon_nTrackerLayers_[0]));
        loaded_Muon_nTrackerLayers_ = true;
    }
    return v_Muon_nTrackerLayers_;
}
const vector<LorentzVector> &Nano::Muon_p4() {
    if (!loaded_Muon_p4_) {
        v_Muon_p4_.clear();
        vector<float> pts = Nano::Muon_pt();
        vector<float> etas = Nano::Muon_eta();
        vector<float> phis = Nano::Muon_phi();
        vector<float> masses = Nano::Muon_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Muon_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Muon_p4_ = true;
    }
    return v_Muon_p4_;
}
const vector<int> &Nano::Muon_pdgId() {
    if (!loaded_Muon_pdgId_) {
        if (!b_Muon_pdgId_) throw std::runtime_error("Muon_pdgId branch doesn't exist");
        int bytes = b_Muon_pdgId_->GetEntry(index);
        v_Muon_pdgId_ = vector<int>(Muon_pdgId_,Muon_pdgId_+bytes/sizeof(Muon_pdgId_[0]));
        loaded_Muon_pdgId_ = true;
    }
    return v_Muon_pdgId_;
}
const vector<float> &Nano::Muon_pfRelIso03_all() {
    if (!loaded_Muon_pfRelIso03_all_) {
        if (!b_Muon_pfRelIso03_all_) throw std::runtime_error("Muon_pfRelIso03_all branch doesn't exist");
        int bytes = b_Muon_pfRelIso03_all_->GetEntry(index);
        v_Muon_pfRelIso03_all_ = vector<float>(Muon_pfRelIso03_all_,Muon_pfRelIso03_all_+bytes/sizeof(Muon_pfRelIso03_all_[0]));
        loaded_Muon_pfRelIso03_all_ = true;
    }
    return v_Muon_pfRelIso03_all_;
}
const vector<float> &Nano::Muon_pfRelIso03_chg() {
    if (!loaded_Muon_pfRelIso03_chg_) {
        if (!b_Muon_pfRelIso03_chg_) throw std::runtime_error("Muon_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Muon_pfRelIso03_chg_->GetEntry(index);
        v_Muon_pfRelIso03_chg_ = vector<float>(Muon_pfRelIso03_chg_,Muon_pfRelIso03_chg_+bytes/sizeof(Muon_pfRelIso03_chg_[0]));
        loaded_Muon_pfRelIso03_chg_ = true;
    }
    return v_Muon_pfRelIso03_chg_;
}
const vector<float> &Nano::Muon_pfRelIso04_all() {
    if (!loaded_Muon_pfRelIso04_all_) {
        if (!b_Muon_pfRelIso04_all_) throw std::runtime_error("Muon_pfRelIso04_all branch doesn't exist");
        int bytes = b_Muon_pfRelIso04_all_->GetEntry(index);
        v_Muon_pfRelIso04_all_ = vector<float>(Muon_pfRelIso04_all_,Muon_pfRelIso04_all_+bytes/sizeof(Muon_pfRelIso04_all_[0]));
        loaded_Muon_pfRelIso04_all_ = true;
    }
    return v_Muon_pfRelIso04_all_;
}
const vector<float> &Nano::Muon_phi() {
    if (!loaded_Muon_phi_) {
        if (!b_Muon_phi_) throw std::runtime_error("Muon_phi branch doesn't exist");
        int bytes = b_Muon_phi_->GetEntry(index);
        v_Muon_phi_ = vector<float>(Muon_phi_,Muon_phi_+bytes/sizeof(Muon_phi_[0]));
        loaded_Muon_phi_ = true;
    }
    return v_Muon_phi_;
}
const vector<float> &Nano::Muon_pt() {
    if (!loaded_Muon_pt_) {
        if (!b_Muon_pt_) throw std::runtime_error("Muon_pt branch doesn't exist");
        int bytes = b_Muon_pt_->GetEntry(index);
        v_Muon_pt_ = vector<float>(Muon_pt_,Muon_pt_+bytes/sizeof(Muon_pt_[0]));
        loaded_Muon_pt_ = true;
    }
    return v_Muon_pt_;
}
const vector<float> &Nano::Muon_ptErr() {
    if (!loaded_Muon_ptErr_) {
        if (!b_Muon_ptErr_) throw std::runtime_error("Muon_ptErr branch doesn't exist");
        int bytes = b_Muon_ptErr_->GetEntry(index);
        v_Muon_ptErr_ = vector<float>(Muon_ptErr_,Muon_ptErr_+bytes/sizeof(Muon_ptErr_[0]));
        loaded_Muon_ptErr_ = true;
    }
    return v_Muon_ptErr_;
}
const vector<float> &Nano::Muon_segmentComp() {
    if (!loaded_Muon_segmentComp_) {
        if (!b_Muon_segmentComp_) throw std::runtime_error("Muon_segmentComp branch doesn't exist");
        int bytes = b_Muon_segmentComp_->GetEntry(index);
        v_Muon_segmentComp_ = vector<float>(Muon_segmentComp_,Muon_segmentComp_+bytes/sizeof(Muon_segmentComp_[0]));
        loaded_Muon_segmentComp_ = true;
    }
    return v_Muon_segmentComp_;
}
const vector<float> &Nano::Muon_sip3d() {
    if (!loaded_Muon_sip3d_) {
        if (!b_Muon_sip3d_) throw std::runtime_error("Muon_sip3d branch doesn't exist");
        int bytes = b_Muon_sip3d_->GetEntry(index);
        v_Muon_sip3d_ = vector<float>(Muon_sip3d_,Muon_sip3d_+bytes/sizeof(Muon_sip3d_[0]));
        loaded_Muon_sip3d_ = true;
    }
    return v_Muon_sip3d_;
}
const vector<bool> &Nano::Muon_softId() {
    if (!loaded_Muon_softId_) {
        if (!b_Muon_softId_) throw std::runtime_error("Muon_softId branch doesn't exist");
        int bytes = b_Muon_softId_->GetEntry(index);
        v_Muon_softId_ = vector<bool>(Muon_softId_,Muon_softId_+bytes/sizeof(Muon_softId_[0]));
        loaded_Muon_softId_ = true;
    }
    return v_Muon_softId_;
}
const vector<int> &Nano::Muon_tightCharge() {
    if (!loaded_Muon_tightCharge_) {
        if (!b_Muon_tightCharge_) throw std::runtime_error("Muon_tightCharge branch doesn't exist");
        int bytes = b_Muon_tightCharge_->GetEntry(index);
        v_Muon_tightCharge_ = vector<int>(Muon_tightCharge_,Muon_tightCharge_+bytes/sizeof(Muon_tightCharge_[0]));
        loaded_Muon_tightCharge_ = true;
    }
    return v_Muon_tightCharge_;
}
const vector<bool> &Nano::Muon_tightId() {
    if (!loaded_Muon_tightId_) {
        if (!b_Muon_tightId_) throw std::runtime_error("Muon_tightId branch doesn't exist");
        int bytes = b_Muon_tightId_->GetEntry(index);
        v_Muon_tightId_ = vector<bool>(Muon_tightId_,Muon_tightId_+bytes/sizeof(Muon_tightId_[0]));
        loaded_Muon_tightId_ = true;
    }
    return v_Muon_tightId_;
}
const vector<float> &Nano::OtherPV_z() {
    if (!loaded_OtherPV_z_) {
        if (!b_OtherPV_z_) throw std::runtime_error("OtherPV_z branch doesn't exist");
        int bytes = b_OtherPV_z_->GetEntry(index);
        v_OtherPV_z_ = vector<float>(OtherPV_z_,OtherPV_z_+bytes/sizeof(OtherPV_z_[0]));
        loaded_OtherPV_z_ = true;
    }
    return v_OtherPV_z_;
}
const float &Nano::PV_chi2() {
    if (!loaded_PV_chi2_) {
        if (!b_PV_chi2_) throw std::runtime_error("PV_chi2 branch doesn't exist");
        b_PV_chi2_->GetEntry(index);
        loaded_PV_chi2_ = true;
    }
    return PV_chi2_;
}
const float &Nano::PV_ndof() {
    if (!loaded_PV_ndof_) {
        if (!b_PV_ndof_) throw std::runtime_error("PV_ndof branch doesn't exist");
        b_PV_ndof_->GetEntry(index);
        loaded_PV_ndof_ = true;
    }
    return PV_ndof_;
}
const int &Nano::PV_npvs() {
    if (!loaded_PV_npvs_) {
        if (!b_PV_npvs_) throw std::runtime_error("PV_npvs branch doesn't exist");
        b_PV_npvs_->GetEntry(index);
        loaded_PV_npvs_ = true;
    }
    return PV_npvs_;
}
const int &Nano::PV_npvsGood() {
    if (!loaded_PV_npvsGood_) {
        if (!b_PV_npvsGood_) throw std::runtime_error("PV_npvsGood branch doesn't exist");
        b_PV_npvsGood_->GetEntry(index);
        loaded_PV_npvsGood_ = true;
    }
    return PV_npvsGood_;
}
const float &Nano::PV_score() {
    if (!loaded_PV_score_) {
        if (!b_PV_score_) throw std::runtime_error("PV_score branch doesn't exist");
        b_PV_score_->GetEntry(index);
        loaded_PV_score_ = true;
    }
    return PV_score_;
}
const float &Nano::PV_x() {
    if (!loaded_PV_x_) {
        if (!b_PV_x_) throw std::runtime_error("PV_x branch doesn't exist");
        b_PV_x_->GetEntry(index);
        loaded_PV_x_ = true;
    }
    return PV_x_;
}
const float &Nano::PV_y() {
    if (!loaded_PV_y_) {
        if (!b_PV_y_) throw std::runtime_error("PV_y branch doesn't exist");
        b_PV_y_->GetEntry(index);
        loaded_PV_y_ = true;
    }
    return PV_y_;
}
const float &Nano::PV_z() {
    if (!loaded_PV_z_) {
        if (!b_PV_z_) throw std::runtime_error("PV_z branch doesn't exist");
        b_PV_z_->GetEntry(index);
        loaded_PV_z_ = true;
    }
    return PV_z_;
}
const vector<int> &Nano::Photon_charge() {
    if (!loaded_Photon_charge_) {
        if (!b_Photon_charge_) throw std::runtime_error("Photon_charge branch doesn't exist");
        int bytes = b_Photon_charge_->GetEntry(index);
        v_Photon_charge_ = vector<int>(Photon_charge_,Photon_charge_+bytes/sizeof(Photon_charge_[0]));
        loaded_Photon_charge_ = true;
    }
    return v_Photon_charge_;
}
const vector<UChar_t> &Nano::Photon_cleanmask() {
    if (!loaded_Photon_cleanmask_) {
        if (!b_Photon_cleanmask_) throw std::runtime_error("Photon_cleanmask branch doesn't exist");
        int bytes = b_Photon_cleanmask_->GetEntry(index);
        v_Photon_cleanmask_ = vector<UChar_t>(Photon_cleanmask_,Photon_cleanmask_+bytes/sizeof(Photon_cleanmask_[0]));
        loaded_Photon_cleanmask_ = true;
    }
    return v_Photon_cleanmask_;
}
const vector<int> &Nano::Photon_cutBasedBitmap() {
    if (!loaded_Photon_cutBasedBitmap_) {
        if (!b_Photon_cutBasedBitmap_) throw std::runtime_error("Photon_cutBasedBitmap branch doesn't exist");
        int bytes = b_Photon_cutBasedBitmap_->GetEntry(index);
        v_Photon_cutBasedBitmap_ = vector<int>(Photon_cutBasedBitmap_,Photon_cutBasedBitmap_+bytes/sizeof(Photon_cutBasedBitmap_[0]));
        loaded_Photon_cutBasedBitmap_ = true;
    }
    return v_Photon_cutBasedBitmap_;
}
const vector<float> &Nano::Photon_eCorr() {
    if (!loaded_Photon_eCorr_) {
        if (!b_Photon_eCorr_) throw std::runtime_error("Photon_eCorr branch doesn't exist");
        int bytes = b_Photon_eCorr_->GetEntry(index);
        v_Photon_eCorr_ = vector<float>(Photon_eCorr_,Photon_eCorr_+bytes/sizeof(Photon_eCorr_[0]));
        loaded_Photon_eCorr_ = true;
    }
    return v_Photon_eCorr_;
}
const vector<int> &Nano::Photon_electronIdx() {
    if (!loaded_Photon_electronIdx_) {
        if (!b_Photon_electronIdx_) throw std::runtime_error("Photon_electronIdx branch doesn't exist");
        int bytes = b_Photon_electronIdx_->GetEntry(index);
        v_Photon_electronIdx_ = vector<int>(Photon_electronIdx_,Photon_electronIdx_+bytes/sizeof(Photon_electronIdx_[0]));
        loaded_Photon_electronIdx_ = true;
    }
    return v_Photon_electronIdx_;
}
const vector<bool> &Nano::Photon_electronVeto() {
    if (!loaded_Photon_electronVeto_) {
        if (!b_Photon_electronVeto_) throw std::runtime_error("Photon_electronVeto branch doesn't exist");
        int bytes = b_Photon_electronVeto_->GetEntry(index);
        v_Photon_electronVeto_ = vector<bool>(Photon_electronVeto_,Photon_electronVeto_+bytes/sizeof(Photon_electronVeto_[0]));
        loaded_Photon_electronVeto_ = true;
    }
    return v_Photon_electronVeto_;
}
const vector<float> &Nano::Photon_energyErr() {
    if (!loaded_Photon_energyErr_) {
        if (!b_Photon_energyErr_) throw std::runtime_error("Photon_energyErr branch doesn't exist");
        int bytes = b_Photon_energyErr_->GetEntry(index);
        v_Photon_energyErr_ = vector<float>(Photon_energyErr_,Photon_energyErr_+bytes/sizeof(Photon_energyErr_[0]));
        loaded_Photon_energyErr_ = true;
    }
    return v_Photon_energyErr_;
}
const vector<float> &Nano::Photon_eta() {
    if (!loaded_Photon_eta_) {
        if (!b_Photon_eta_) throw std::runtime_error("Photon_eta branch doesn't exist");
        int bytes = b_Photon_eta_->GetEntry(index);
        v_Photon_eta_ = vector<float>(Photon_eta_,Photon_eta_+bytes/sizeof(Photon_eta_[0]));
        loaded_Photon_eta_ = true;
    }
    return v_Photon_eta_;
}
const vector<UChar_t> &Nano::Photon_genPartFlav() {
    if (!loaded_Photon_genPartFlav_) {
        if (!b_Photon_genPartFlav_) throw std::runtime_error("Photon_genPartFlav branch doesn't exist");
        int bytes = b_Photon_genPartFlav_->GetEntry(index);
        v_Photon_genPartFlav_ = vector<UChar_t>(Photon_genPartFlav_,Photon_genPartFlav_+bytes/sizeof(Photon_genPartFlav_[0]));
        loaded_Photon_genPartFlav_ = true;
    }
    return v_Photon_genPartFlav_;
}
const vector<int> &Nano::Photon_genPartIdx() {
    if (!loaded_Photon_genPartIdx_) {
        if (!b_Photon_genPartIdx_) throw std::runtime_error("Photon_genPartIdx branch doesn't exist");
        int bytes = b_Photon_genPartIdx_->GetEntry(index);
        v_Photon_genPartIdx_ = vector<int>(Photon_genPartIdx_,Photon_genPartIdx_+bytes/sizeof(Photon_genPartIdx_[0]));
        loaded_Photon_genPartIdx_ = true;
    }
    return v_Photon_genPartIdx_;
}
const vector<float> &Nano::Photon_hoe() {
    if (!loaded_Photon_hoe_) {
        if (!b_Photon_hoe_) throw std::runtime_error("Photon_hoe branch doesn't exist");
        int bytes = b_Photon_hoe_->GetEntry(index);
        v_Photon_hoe_ = vector<float>(Photon_hoe_,Photon_hoe_+bytes/sizeof(Photon_hoe_[0]));
        loaded_Photon_hoe_ = true;
    }
    return v_Photon_hoe_;
}
const vector<bool> &Nano::Photon_isScEtaEB() {
    if (!loaded_Photon_isScEtaEB_) {
        if (!b_Photon_isScEtaEB_) throw std::runtime_error("Photon_isScEtaEB branch doesn't exist");
        int bytes = b_Photon_isScEtaEB_->GetEntry(index);
        v_Photon_isScEtaEB_ = vector<bool>(Photon_isScEtaEB_,Photon_isScEtaEB_+bytes/sizeof(Photon_isScEtaEB_[0]));
        loaded_Photon_isScEtaEB_ = true;
    }
    return v_Photon_isScEtaEB_;
}
const vector<bool> &Nano::Photon_isScEtaEE() {
    if (!loaded_Photon_isScEtaEE_) {
        if (!b_Photon_isScEtaEE_) throw std::runtime_error("Photon_isScEtaEE branch doesn't exist");
        int bytes = b_Photon_isScEtaEE_->GetEntry(index);
        v_Photon_isScEtaEE_ = vector<bool>(Photon_isScEtaEE_,Photon_isScEtaEE_+bytes/sizeof(Photon_isScEtaEE_[0]));
        loaded_Photon_isScEtaEE_ = true;
    }
    return v_Photon_isScEtaEE_;
}
const vector<int> &Nano::Photon_jetIdx() {
    if (!loaded_Photon_jetIdx_) {
        if (!b_Photon_jetIdx_) throw std::runtime_error("Photon_jetIdx branch doesn't exist");
        int bytes = b_Photon_jetIdx_->GetEntry(index);
        v_Photon_jetIdx_ = vector<int>(Photon_jetIdx_,Photon_jetIdx_+bytes/sizeof(Photon_jetIdx_[0]));
        loaded_Photon_jetIdx_ = true;
    }
    return v_Photon_jetIdx_;
}
const vector<float> &Nano::Photon_mass() {
    if (!loaded_Photon_mass_) {
        if (!b_Photon_mass_) throw std::runtime_error("Photon_mass branch doesn't exist");
        int bytes = b_Photon_mass_->GetEntry(index);
        v_Photon_mass_ = vector<float>(Photon_mass_,Photon_mass_+bytes/sizeof(Photon_mass_[0]));
        loaded_Photon_mass_ = true;
    }
    return v_Photon_mass_;
}
const vector<float> &Nano::Photon_mvaID() {
    if (!loaded_Photon_mvaID_) {
        if (!b_Photon_mvaID_) throw std::runtime_error("Photon_mvaID branch doesn't exist");
        int bytes = b_Photon_mvaID_->GetEntry(index);
        v_Photon_mvaID_ = vector<float>(Photon_mvaID_,Photon_mvaID_+bytes/sizeof(Photon_mvaID_[0]));
        loaded_Photon_mvaID_ = true;
    }
    return v_Photon_mvaID_;
}
const vector<bool> &Nano::Photon_mvaID_WP80() {
    if (!loaded_Photon_mvaID_WP80_) {
        if (!b_Photon_mvaID_WP80_) throw std::runtime_error("Photon_mvaID_WP80 branch doesn't exist");
        int bytes = b_Photon_mvaID_WP80_->GetEntry(index);
        v_Photon_mvaID_WP80_ = vector<bool>(Photon_mvaID_WP80_,Photon_mvaID_WP80_+bytes/sizeof(Photon_mvaID_WP80_[0]));
        loaded_Photon_mvaID_WP80_ = true;
    }
    return v_Photon_mvaID_WP80_;
}
const vector<bool> &Nano::Photon_mvaID_WP90() {
    if (!loaded_Photon_mvaID_WP90_) {
        if (!b_Photon_mvaID_WP90_) throw std::runtime_error("Photon_mvaID_WP90 branch doesn't exist");
        int bytes = b_Photon_mvaID_WP90_->GetEntry(index);
        v_Photon_mvaID_WP90_ = vector<bool>(Photon_mvaID_WP90_,Photon_mvaID_WP90_+bytes/sizeof(Photon_mvaID_WP90_[0]));
        loaded_Photon_mvaID_WP90_ = true;
    }
    return v_Photon_mvaID_WP90_;
}
const vector<LorentzVector> &Nano::Photon_p4() {
    if (!loaded_Photon_p4_) {
        v_Photon_p4_.clear();
        vector<float> pts = Nano::Photon_pt();
        vector<float> etas = Nano::Photon_eta();
        vector<float> phis = Nano::Photon_phi();
        vector<float> masses = Nano::Photon_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Photon_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Photon_p4_ = true;
    }
    return v_Photon_p4_;
}
const vector<int> &Nano::Photon_pdgId() {
    if (!loaded_Photon_pdgId_) {
        if (!b_Photon_pdgId_) throw std::runtime_error("Photon_pdgId branch doesn't exist");
        int bytes = b_Photon_pdgId_->GetEntry(index);
        v_Photon_pdgId_ = vector<int>(Photon_pdgId_,Photon_pdgId_+bytes/sizeof(Photon_pdgId_[0]));
        loaded_Photon_pdgId_ = true;
    }
    return v_Photon_pdgId_;
}
const vector<float> &Nano::Photon_pfRelIso03_all() {
    if (!loaded_Photon_pfRelIso03_all_) {
        if (!b_Photon_pfRelIso03_all_) throw std::runtime_error("Photon_pfRelIso03_all branch doesn't exist");
        int bytes = b_Photon_pfRelIso03_all_->GetEntry(index);
        v_Photon_pfRelIso03_all_ = vector<float>(Photon_pfRelIso03_all_,Photon_pfRelIso03_all_+bytes/sizeof(Photon_pfRelIso03_all_[0]));
        loaded_Photon_pfRelIso03_all_ = true;
    }
    return v_Photon_pfRelIso03_all_;
}
const vector<float> &Nano::Photon_pfRelIso03_chg() {
    if (!loaded_Photon_pfRelIso03_chg_) {
        if (!b_Photon_pfRelIso03_chg_) throw std::runtime_error("Photon_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Photon_pfRelIso03_chg_->GetEntry(index);
        v_Photon_pfRelIso03_chg_ = vector<float>(Photon_pfRelIso03_chg_,Photon_pfRelIso03_chg_+bytes/sizeof(Photon_pfRelIso03_chg_[0]));
        loaded_Photon_pfRelIso03_chg_ = true;
    }
    return v_Photon_pfRelIso03_chg_;
}
const vector<float> &Nano::Photon_phi() {
    if (!loaded_Photon_phi_) {
        if (!b_Photon_phi_) throw std::runtime_error("Photon_phi branch doesn't exist");
        int bytes = b_Photon_phi_->GetEntry(index);
        v_Photon_phi_ = vector<float>(Photon_phi_,Photon_phi_+bytes/sizeof(Photon_phi_[0]));
        loaded_Photon_phi_ = true;
    }
    return v_Photon_phi_;
}
const vector<bool> &Nano::Photon_pixelSeed() {
    if (!loaded_Photon_pixelSeed_) {
        if (!b_Photon_pixelSeed_) throw std::runtime_error("Photon_pixelSeed branch doesn't exist");
        int bytes = b_Photon_pixelSeed_->GetEntry(index);
        v_Photon_pixelSeed_ = vector<bool>(Photon_pixelSeed_,Photon_pixelSeed_+bytes/sizeof(Photon_pixelSeed_[0]));
        loaded_Photon_pixelSeed_ = true;
    }
    return v_Photon_pixelSeed_;
}
const vector<float> &Nano::Photon_pt() {
    if (!loaded_Photon_pt_) {
        if (!b_Photon_pt_) throw std::runtime_error("Photon_pt branch doesn't exist");
        int bytes = b_Photon_pt_->GetEntry(index);
        v_Photon_pt_ = vector<float>(Photon_pt_,Photon_pt_+bytes/sizeof(Photon_pt_[0]));
        loaded_Photon_pt_ = true;
    }
    return v_Photon_pt_;
}
const vector<float> &Nano::Photon_r9() {
    if (!loaded_Photon_r9_) {
        if (!b_Photon_r9_) throw std::runtime_error("Photon_r9 branch doesn't exist");
        int bytes = b_Photon_r9_->GetEntry(index);
        v_Photon_r9_ = vector<float>(Photon_r9_,Photon_r9_+bytes/sizeof(Photon_r9_[0]));
        loaded_Photon_r9_ = true;
    }
    return v_Photon_r9_;
}
const vector<float> &Nano::Photon_sieie() {
    if (!loaded_Photon_sieie_) {
        if (!b_Photon_sieie_) throw std::runtime_error("Photon_sieie branch doesn't exist");
        int bytes = b_Photon_sieie_->GetEntry(index);
        v_Photon_sieie_ = vector<float>(Photon_sieie_,Photon_sieie_+bytes/sizeof(Photon_sieie_[0]));
        loaded_Photon_sieie_ = true;
    }
    return v_Photon_sieie_;
}
const vector<int> &Nano::Photon_vidNestedWPBitmap() {
    if (!loaded_Photon_vidNestedWPBitmap_) {
        if (!b_Photon_vidNestedWPBitmap_) throw std::runtime_error("Photon_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_Photon_vidNestedWPBitmap_->GetEntry(index);
        v_Photon_vidNestedWPBitmap_ = vector<int>(Photon_vidNestedWPBitmap_,Photon_vidNestedWPBitmap_+bytes/sizeof(Photon_vidNestedWPBitmap_[0]));
        loaded_Photon_vidNestedWPBitmap_ = true;
    }
    return v_Photon_vidNestedWPBitmap_;
}
const int &Nano::Pileup_nPU() {
    if (!loaded_Pileup_nPU_) {
        if (!b_Pileup_nPU_) throw std::runtime_error("Pileup_nPU branch doesn't exist");
        b_Pileup_nPU_->GetEntry(index);
        loaded_Pileup_nPU_ = true;
    }
    return Pileup_nPU_;
}
const float &Nano::Pileup_nTrueInt() {
    if (!loaded_Pileup_nTrueInt_) {
        if (!b_Pileup_nTrueInt_) throw std::runtime_error("Pileup_nTrueInt branch doesn't exist");
        b_Pileup_nTrueInt_->GetEntry(index);
        loaded_Pileup_nTrueInt_ = true;
    }
    return Pileup_nTrueInt_;
}
const int &Nano::Pileup_sumEOOT() {
    if (!loaded_Pileup_sumEOOT_) {
        if (!b_Pileup_sumEOOT_) throw std::runtime_error("Pileup_sumEOOT branch doesn't exist");
        b_Pileup_sumEOOT_->GetEntry(index);
        loaded_Pileup_sumEOOT_ = true;
    }
    return Pileup_sumEOOT_;
}
const int &Nano::Pileup_sumLOOT() {
    if (!loaded_Pileup_sumLOOT_) {
        if (!b_Pileup_sumLOOT_) throw std::runtime_error("Pileup_sumLOOT branch doesn't exist");
        b_Pileup_sumLOOT_->GetEntry(index);
        loaded_Pileup_sumLOOT_ = true;
    }
    return Pileup_sumLOOT_;
}
const float &Nano::PuppiMET_phi() {
    if (!loaded_PuppiMET_phi_) {
        if (!b_PuppiMET_phi_) throw std::runtime_error("PuppiMET_phi branch doesn't exist");
        b_PuppiMET_phi_->GetEntry(index);
        loaded_PuppiMET_phi_ = true;
    }
    return PuppiMET_phi_;
}
const float &Nano::PuppiMET_pt() {
    if (!loaded_PuppiMET_pt_) {
        if (!b_PuppiMET_pt_) throw std::runtime_error("PuppiMET_pt branch doesn't exist");
        b_PuppiMET_pt_->GetEntry(index);
        loaded_PuppiMET_pt_ = true;
    }
    return PuppiMET_pt_;
}
const float &Nano::PuppiMET_sumEt() {
    if (!loaded_PuppiMET_sumEt_) {
        if (!b_PuppiMET_sumEt_) throw std::runtime_error("PuppiMET_sumEt branch doesn't exist");
        b_PuppiMET_sumEt_->GetEntry(index);
        loaded_PuppiMET_sumEt_ = true;
    }
    return PuppiMET_sumEt_;
}
const float &Nano::RawMET_phi() {
    if (!loaded_RawMET_phi_) {
        if (!b_RawMET_phi_) throw std::runtime_error("RawMET_phi branch doesn't exist");
        b_RawMET_phi_->GetEntry(index);
        loaded_RawMET_phi_ = true;
    }
    return RawMET_phi_;
}
const float &Nano::RawMET_pt() {
    if (!loaded_RawMET_pt_) {
        if (!b_RawMET_pt_) throw std::runtime_error("RawMET_pt branch doesn't exist");
        b_RawMET_pt_->GetEntry(index);
        loaded_RawMET_pt_ = true;
    }
    return RawMET_pt_;
}
const float &Nano::RawMET_sumEt() {
    if (!loaded_RawMET_sumEt_) {
        if (!b_RawMET_sumEt_) throw std::runtime_error("RawMET_sumEt branch doesn't exist");
        b_RawMET_sumEt_->GetEntry(index);
        loaded_RawMET_sumEt_ = true;
    }
    return RawMET_sumEt_;
}
const vector<float> &Nano::SV_chi2() {
    if (!loaded_SV_chi2_) {
        if (!b_SV_chi2_) throw std::runtime_error("SV_chi2 branch doesn't exist");
        int bytes = b_SV_chi2_->GetEntry(index);
        v_SV_chi2_ = vector<float>(SV_chi2_,SV_chi2_+bytes/sizeof(SV_chi2_[0]));
        loaded_SV_chi2_ = true;
    }
    return v_SV_chi2_;
}
const vector<float> &Nano::SV_dlen() {
    if (!loaded_SV_dlen_) {
        if (!b_SV_dlen_) throw std::runtime_error("SV_dlen branch doesn't exist");
        int bytes = b_SV_dlen_->GetEntry(index);
        v_SV_dlen_ = vector<float>(SV_dlen_,SV_dlen_+bytes/sizeof(SV_dlen_[0]));
        loaded_SV_dlen_ = true;
    }
    return v_SV_dlen_;
}
const vector<float> &Nano::SV_dlenSig() {
    if (!loaded_SV_dlenSig_) {
        if (!b_SV_dlenSig_) throw std::runtime_error("SV_dlenSig branch doesn't exist");
        int bytes = b_SV_dlenSig_->GetEntry(index);
        v_SV_dlenSig_ = vector<float>(SV_dlenSig_,SV_dlenSig_+bytes/sizeof(SV_dlenSig_[0]));
        loaded_SV_dlenSig_ = true;
    }
    return v_SV_dlenSig_;
}
const vector<float> &Nano::SV_eta() {
    if (!loaded_SV_eta_) {
        if (!b_SV_eta_) throw std::runtime_error("SV_eta branch doesn't exist");
        int bytes = b_SV_eta_->GetEntry(index);
        v_SV_eta_ = vector<float>(SV_eta_,SV_eta_+bytes/sizeof(SV_eta_[0]));
        loaded_SV_eta_ = true;
    }
    return v_SV_eta_;
}
const vector<float> &Nano::SV_mass() {
    if (!loaded_SV_mass_) {
        if (!b_SV_mass_) throw std::runtime_error("SV_mass branch doesn't exist");
        int bytes = b_SV_mass_->GetEntry(index);
        v_SV_mass_ = vector<float>(SV_mass_,SV_mass_+bytes/sizeof(SV_mass_[0]));
        loaded_SV_mass_ = true;
    }
    return v_SV_mass_;
}
const vector<float> &Nano::SV_ndof() {
    if (!loaded_SV_ndof_) {
        if (!b_SV_ndof_) throw std::runtime_error("SV_ndof branch doesn't exist");
        int bytes = b_SV_ndof_->GetEntry(index);
        v_SV_ndof_ = vector<float>(SV_ndof_,SV_ndof_+bytes/sizeof(SV_ndof_[0]));
        loaded_SV_ndof_ = true;
    }
    return v_SV_ndof_;
}
const vector<LorentzVector> &Nano::SV_p4() {
    if (!loaded_SV_p4_) {
        v_SV_p4_.clear();
        vector<float> pts = Nano::SV_pt();
        vector<float> etas = Nano::SV_eta();
        vector<float> phis = Nano::SV_phi();
        vector<float> masses = Nano::SV_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SV_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SV_p4_ = true;
    }
    return v_SV_p4_;
}
const vector<float> &Nano::SV_pAngle() {
    if (!loaded_SV_pAngle_) {
        if (!b_SV_pAngle_) throw std::runtime_error("SV_pAngle branch doesn't exist");
        int bytes = b_SV_pAngle_->GetEntry(index);
        v_SV_pAngle_ = vector<float>(SV_pAngle_,SV_pAngle_+bytes/sizeof(SV_pAngle_[0]));
        loaded_SV_pAngle_ = true;
    }
    return v_SV_pAngle_;
}
const vector<float> &Nano::SV_phi() {
    if (!loaded_SV_phi_) {
        if (!b_SV_phi_) throw std::runtime_error("SV_phi branch doesn't exist");
        int bytes = b_SV_phi_->GetEntry(index);
        v_SV_phi_ = vector<float>(SV_phi_,SV_phi_+bytes/sizeof(SV_phi_[0]));
        loaded_SV_phi_ = true;
    }
    return v_SV_phi_;
}
const vector<float> &Nano::SV_pt() {
    if (!loaded_SV_pt_) {
        if (!b_SV_pt_) throw std::runtime_error("SV_pt branch doesn't exist");
        int bytes = b_SV_pt_->GetEntry(index);
        v_SV_pt_ = vector<float>(SV_pt_,SV_pt_+bytes/sizeof(SV_pt_[0]));
        loaded_SV_pt_ = true;
    }
    return v_SV_pt_;
}
const vector<float> &Nano::SV_x() {
    if (!loaded_SV_x_) {
        if (!b_SV_x_) throw std::runtime_error("SV_x branch doesn't exist");
        int bytes = b_SV_x_->GetEntry(index);
        v_SV_x_ = vector<float>(SV_x_,SV_x_+bytes/sizeof(SV_x_[0]));
        loaded_SV_x_ = true;
    }
    return v_SV_x_;
}
const vector<float> &Nano::SV_y() {
    if (!loaded_SV_y_) {
        if (!b_SV_y_) throw std::runtime_error("SV_y branch doesn't exist");
        int bytes = b_SV_y_->GetEntry(index);
        v_SV_y_ = vector<float>(SV_y_,SV_y_+bytes/sizeof(SV_y_[0]));
        loaded_SV_y_ = true;
    }
    return v_SV_y_;
}
const vector<float> &Nano::SV_z() {
    if (!loaded_SV_z_) {
        if (!b_SV_z_) throw std::runtime_error("SV_z branch doesn't exist");
        int bytes = b_SV_z_->GetEntry(index);
        v_SV_z_ = vector<float>(SV_z_,SV_z_+bytes/sizeof(SV_z_[0]));
        loaded_SV_z_ = true;
    }
    return v_SV_z_;
}
const float &Nano::SoftActivityJetHT() {
    if (!loaded_SoftActivityJetHT_) {
        if (!b_SoftActivityJetHT_) throw std::runtime_error("SoftActivityJetHT branch doesn't exist");
        b_SoftActivityJetHT_->GetEntry(index);
        loaded_SoftActivityJetHT_ = true;
    }
    return SoftActivityJetHT_;
}
const float &Nano::SoftActivityJetHT10() {
    if (!loaded_SoftActivityJetHT10_) {
        if (!b_SoftActivityJetHT10_) throw std::runtime_error("SoftActivityJetHT10 branch doesn't exist");
        b_SoftActivityJetHT10_->GetEntry(index);
        loaded_SoftActivityJetHT10_ = true;
    }
    return SoftActivityJetHT10_;
}
const float &Nano::SoftActivityJetHT2() {
    if (!loaded_SoftActivityJetHT2_) {
        if (!b_SoftActivityJetHT2_) throw std::runtime_error("SoftActivityJetHT2 branch doesn't exist");
        b_SoftActivityJetHT2_->GetEntry(index);
        loaded_SoftActivityJetHT2_ = true;
    }
    return SoftActivityJetHT2_;
}
const float &Nano::SoftActivityJetHT5() {
    if (!loaded_SoftActivityJetHT5_) {
        if (!b_SoftActivityJetHT5_) throw std::runtime_error("SoftActivityJetHT5 branch doesn't exist");
        b_SoftActivityJetHT5_->GetEntry(index);
        loaded_SoftActivityJetHT5_ = true;
    }
    return SoftActivityJetHT5_;
}
const int &Nano::SoftActivityJetNjets10() {
    if (!loaded_SoftActivityJetNjets10_) {
        if (!b_SoftActivityJetNjets10_) throw std::runtime_error("SoftActivityJetNjets10 branch doesn't exist");
        b_SoftActivityJetNjets10_->GetEntry(index);
        loaded_SoftActivityJetNjets10_ = true;
    }
    return SoftActivityJetNjets10_;
}
const int &Nano::SoftActivityJetNjets2() {
    if (!loaded_SoftActivityJetNjets2_) {
        if (!b_SoftActivityJetNjets2_) throw std::runtime_error("SoftActivityJetNjets2 branch doesn't exist");
        b_SoftActivityJetNjets2_->GetEntry(index);
        loaded_SoftActivityJetNjets2_ = true;
    }
    return SoftActivityJetNjets2_;
}
const int &Nano::SoftActivityJetNjets5() {
    if (!loaded_SoftActivityJetNjets5_) {
        if (!b_SoftActivityJetNjets5_) throw std::runtime_error("SoftActivityJetNjets5 branch doesn't exist");
        b_SoftActivityJetNjets5_->GetEntry(index);
        loaded_SoftActivityJetNjets5_ = true;
    }
    return SoftActivityJetNjets5_;
}
const vector<float> &Nano::SoftActivityJet_eta() {
    if (!loaded_SoftActivityJet_eta_) {
        if (!b_SoftActivityJet_eta_) throw std::runtime_error("SoftActivityJet_eta branch doesn't exist");
        int bytes = b_SoftActivityJet_eta_->GetEntry(index);
        v_SoftActivityJet_eta_ = vector<float>(SoftActivityJet_eta_,SoftActivityJet_eta_+bytes/sizeof(SoftActivityJet_eta_[0]));
        loaded_SoftActivityJet_eta_ = true;
    }
    return v_SoftActivityJet_eta_;
}
const vector<float> &Nano::SoftActivityJet_phi() {
    if (!loaded_SoftActivityJet_phi_) {
        if (!b_SoftActivityJet_phi_) throw std::runtime_error("SoftActivityJet_phi branch doesn't exist");
        int bytes = b_SoftActivityJet_phi_->GetEntry(index);
        v_SoftActivityJet_phi_ = vector<float>(SoftActivityJet_phi_,SoftActivityJet_phi_+bytes/sizeof(SoftActivityJet_phi_[0]));
        loaded_SoftActivityJet_phi_ = true;
    }
    return v_SoftActivityJet_phi_;
}
const vector<float> &Nano::SoftActivityJet_pt() {
    if (!loaded_SoftActivityJet_pt_) {
        if (!b_SoftActivityJet_pt_) throw std::runtime_error("SoftActivityJet_pt branch doesn't exist");
        int bytes = b_SoftActivityJet_pt_->GetEntry(index);
        v_SoftActivityJet_pt_ = vector<float>(SoftActivityJet_pt_,SoftActivityJet_pt_+bytes/sizeof(SoftActivityJet_pt_[0]));
        loaded_SoftActivityJet_pt_ = true;
    }
    return v_SoftActivityJet_pt_;
}
const vector<float> &Nano::SubGenJetAK8_eta() {
    if (!loaded_SubGenJetAK8_eta_) {
        if (!b_SubGenJetAK8_eta_) throw std::runtime_error("SubGenJetAK8_eta branch doesn't exist");
        int bytes = b_SubGenJetAK8_eta_->GetEntry(index);
        v_SubGenJetAK8_eta_ = vector<float>(SubGenJetAK8_eta_,SubGenJetAK8_eta_+bytes/sizeof(SubGenJetAK8_eta_[0]));
        loaded_SubGenJetAK8_eta_ = true;
    }
    return v_SubGenJetAK8_eta_;
}
const vector<float> &Nano::SubGenJetAK8_mass() {
    if (!loaded_SubGenJetAK8_mass_) {
        if (!b_SubGenJetAK8_mass_) throw std::runtime_error("SubGenJetAK8_mass branch doesn't exist");
        int bytes = b_SubGenJetAK8_mass_->GetEntry(index);
        v_SubGenJetAK8_mass_ = vector<float>(SubGenJetAK8_mass_,SubGenJetAK8_mass_+bytes/sizeof(SubGenJetAK8_mass_[0]));
        loaded_SubGenJetAK8_mass_ = true;
    }
    return v_SubGenJetAK8_mass_;
}
const vector<LorentzVector> &Nano::SubGenJetAK8_p4() {
    if (!loaded_SubGenJetAK8_p4_) {
        v_SubGenJetAK8_p4_.clear();
        vector<float> pts = Nano::SubGenJetAK8_pt();
        vector<float> etas = Nano::SubGenJetAK8_eta();
        vector<float> phis = Nano::SubGenJetAK8_phi();
        vector<float> masses = Nano::SubGenJetAK8_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SubGenJetAK8_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SubGenJetAK8_p4_ = true;
    }
    return v_SubGenJetAK8_p4_;
}
const vector<float> &Nano::SubGenJetAK8_phi() {
    if (!loaded_SubGenJetAK8_phi_) {
        if (!b_SubGenJetAK8_phi_) throw std::runtime_error("SubGenJetAK8_phi branch doesn't exist");
        int bytes = b_SubGenJetAK8_phi_->GetEntry(index);
        v_SubGenJetAK8_phi_ = vector<float>(SubGenJetAK8_phi_,SubGenJetAK8_phi_+bytes/sizeof(SubGenJetAK8_phi_[0]));
        loaded_SubGenJetAK8_phi_ = true;
    }
    return v_SubGenJetAK8_phi_;
}
const vector<float> &Nano::SubGenJetAK8_pt() {
    if (!loaded_SubGenJetAK8_pt_) {
        if (!b_SubGenJetAK8_pt_) throw std::runtime_error("SubGenJetAK8_pt branch doesn't exist");
        int bytes = b_SubGenJetAK8_pt_->GetEntry(index);
        v_SubGenJetAK8_pt_ = vector<float>(SubGenJetAK8_pt_,SubGenJetAK8_pt_+bytes/sizeof(SubGenJetAK8_pt_[0]));
        loaded_SubGenJetAK8_pt_ = true;
    }
    return v_SubGenJetAK8_pt_;
}
const vector<float> &Nano::SubJet_btagCMVA() {
    if (!loaded_SubJet_btagCMVA_) {
        if (!b_SubJet_btagCMVA_) throw std::runtime_error("SubJet_btagCMVA branch doesn't exist");
        int bytes = b_SubJet_btagCMVA_->GetEntry(index);
        v_SubJet_btagCMVA_ = vector<float>(SubJet_btagCMVA_,SubJet_btagCMVA_+bytes/sizeof(SubJet_btagCMVA_[0]));
        loaded_SubJet_btagCMVA_ = true;
    }
    return v_SubJet_btagCMVA_;
}
const vector<float> &Nano::SubJet_btagCSVV2() {
    if (!loaded_SubJet_btagCSVV2_) {
        if (!b_SubJet_btagCSVV2_) throw std::runtime_error("SubJet_btagCSVV2 branch doesn't exist");
        int bytes = b_SubJet_btagCSVV2_->GetEntry(index);
        v_SubJet_btagCSVV2_ = vector<float>(SubJet_btagCSVV2_,SubJet_btagCSVV2_+bytes/sizeof(SubJet_btagCSVV2_[0]));
        loaded_SubJet_btagCSVV2_ = true;
    }
    return v_SubJet_btagCSVV2_;
}
const vector<float> &Nano::SubJet_btagDeepB() {
    if (!loaded_SubJet_btagDeepB_) {
        if (!b_SubJet_btagDeepB_) throw std::runtime_error("SubJet_btagDeepB branch doesn't exist");
        int bytes = b_SubJet_btagDeepB_->GetEntry(index);
        v_SubJet_btagDeepB_ = vector<float>(SubJet_btagDeepB_,SubJet_btagDeepB_+bytes/sizeof(SubJet_btagDeepB_[0]));
        loaded_SubJet_btagDeepB_ = true;
    }
    return v_SubJet_btagDeepB_;
}
const vector<float> &Nano::SubJet_eta() {
    if (!loaded_SubJet_eta_) {
        if (!b_SubJet_eta_) throw std::runtime_error("SubJet_eta branch doesn't exist");
        int bytes = b_SubJet_eta_->GetEntry(index);
        v_SubJet_eta_ = vector<float>(SubJet_eta_,SubJet_eta_+bytes/sizeof(SubJet_eta_[0]));
        loaded_SubJet_eta_ = true;
    }
    return v_SubJet_eta_;
}
const vector<float> &Nano::SubJet_mass() {
    if (!loaded_SubJet_mass_) {
        if (!b_SubJet_mass_) throw std::runtime_error("SubJet_mass branch doesn't exist");
        int bytes = b_SubJet_mass_->GetEntry(index);
        v_SubJet_mass_ = vector<float>(SubJet_mass_,SubJet_mass_+bytes/sizeof(SubJet_mass_[0]));
        loaded_SubJet_mass_ = true;
    }
    return v_SubJet_mass_;
}
const vector<float> &Nano::SubJet_n2b1() {
    if (!loaded_SubJet_n2b1_) {
        if (!b_SubJet_n2b1_) throw std::runtime_error("SubJet_n2b1 branch doesn't exist");
        int bytes = b_SubJet_n2b1_->GetEntry(index);
        v_SubJet_n2b1_ = vector<float>(SubJet_n2b1_,SubJet_n2b1_+bytes/sizeof(SubJet_n2b1_[0]));
        loaded_SubJet_n2b1_ = true;
    }
    return v_SubJet_n2b1_;
}
const vector<float> &Nano::SubJet_n3b1() {
    if (!loaded_SubJet_n3b1_) {
        if (!b_SubJet_n3b1_) throw std::runtime_error("SubJet_n3b1 branch doesn't exist");
        int bytes = b_SubJet_n3b1_->GetEntry(index);
        v_SubJet_n3b1_ = vector<float>(SubJet_n3b1_,SubJet_n3b1_+bytes/sizeof(SubJet_n3b1_[0]));
        loaded_SubJet_n3b1_ = true;
    }
    return v_SubJet_n3b1_;
}
const vector<LorentzVector> &Nano::SubJet_p4() {
    if (!loaded_SubJet_p4_) {
        v_SubJet_p4_.clear();
        vector<float> pts = Nano::SubJet_pt();
        vector<float> etas = Nano::SubJet_eta();
        vector<float> phis = Nano::SubJet_phi();
        vector<float> masses = Nano::SubJet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SubJet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SubJet_p4_ = true;
    }
    return v_SubJet_p4_;
}
const vector<float> &Nano::SubJet_phi() {
    if (!loaded_SubJet_phi_) {
        if (!b_SubJet_phi_) throw std::runtime_error("SubJet_phi branch doesn't exist");
        int bytes = b_SubJet_phi_->GetEntry(index);
        v_SubJet_phi_ = vector<float>(SubJet_phi_,SubJet_phi_+bytes/sizeof(SubJet_phi_[0]));
        loaded_SubJet_phi_ = true;
    }
    return v_SubJet_phi_;
}
const vector<float> &Nano::SubJet_pt() {
    if (!loaded_SubJet_pt_) {
        if (!b_SubJet_pt_) throw std::runtime_error("SubJet_pt branch doesn't exist");
        int bytes = b_SubJet_pt_->GetEntry(index);
        v_SubJet_pt_ = vector<float>(SubJet_pt_,SubJet_pt_+bytes/sizeof(SubJet_pt_[0]));
        loaded_SubJet_pt_ = true;
    }
    return v_SubJet_pt_;
}
const vector<float> &Nano::SubJet_tau1() {
    if (!loaded_SubJet_tau1_) {
        if (!b_SubJet_tau1_) throw std::runtime_error("SubJet_tau1 branch doesn't exist");
        int bytes = b_SubJet_tau1_->GetEntry(index);
        v_SubJet_tau1_ = vector<float>(SubJet_tau1_,SubJet_tau1_+bytes/sizeof(SubJet_tau1_[0]));
        loaded_SubJet_tau1_ = true;
    }
    return v_SubJet_tau1_;
}
const vector<float> &Nano::SubJet_tau2() {
    if (!loaded_SubJet_tau2_) {
        if (!b_SubJet_tau2_) throw std::runtime_error("SubJet_tau2 branch doesn't exist");
        int bytes = b_SubJet_tau2_->GetEntry(index);
        v_SubJet_tau2_ = vector<float>(SubJet_tau2_,SubJet_tau2_+bytes/sizeof(SubJet_tau2_[0]));
        loaded_SubJet_tau2_ = true;
    }
    return v_SubJet_tau2_;
}
const vector<float> &Nano::SubJet_tau3() {
    if (!loaded_SubJet_tau3_) {
        if (!b_SubJet_tau3_) throw std::runtime_error("SubJet_tau3 branch doesn't exist");
        int bytes = b_SubJet_tau3_->GetEntry(index);
        v_SubJet_tau3_ = vector<float>(SubJet_tau3_,SubJet_tau3_+bytes/sizeof(SubJet_tau3_[0]));
        loaded_SubJet_tau3_ = true;
    }
    return v_SubJet_tau3_;
}
const vector<float> &Nano::SubJet_tau4() {
    if (!loaded_SubJet_tau4_) {
        if (!b_SubJet_tau4_) throw std::runtime_error("SubJet_tau4 branch doesn't exist");
        int bytes = b_SubJet_tau4_->GetEntry(index);
        v_SubJet_tau4_ = vector<float>(SubJet_tau4_,SubJet_tau4_+bytes/sizeof(SubJet_tau4_[0]));
        loaded_SubJet_tau4_ = true;
    }
    return v_SubJet_tau4_;
}
const vector<int> &Nano::Tau_charge() {
    if (!loaded_Tau_charge_) {
        if (!b_Tau_charge_) throw std::runtime_error("Tau_charge branch doesn't exist");
        int bytes = b_Tau_charge_->GetEntry(index);
        v_Tau_charge_ = vector<int>(Tau_charge_,Tau_charge_+bytes/sizeof(Tau_charge_[0]));
        loaded_Tau_charge_ = true;
    }
    return v_Tau_charge_;
}
const vector<float> &Nano::Tau_chargedIso() {
    if (!loaded_Tau_chargedIso_) {
        if (!b_Tau_chargedIso_) throw std::runtime_error("Tau_chargedIso branch doesn't exist");
        int bytes = b_Tau_chargedIso_->GetEntry(index);
        v_Tau_chargedIso_ = vector<float>(Tau_chargedIso_,Tau_chargedIso_+bytes/sizeof(Tau_chargedIso_[0]));
        loaded_Tau_chargedIso_ = true;
    }
    return v_Tau_chargedIso_;
}
const vector<UChar_t> &Nano::Tau_cleanmask() {
    if (!loaded_Tau_cleanmask_) {
        if (!b_Tau_cleanmask_) throw std::runtime_error("Tau_cleanmask branch doesn't exist");
        int bytes = b_Tau_cleanmask_->GetEntry(index);
        v_Tau_cleanmask_ = vector<UChar_t>(Tau_cleanmask_,Tau_cleanmask_+bytes/sizeof(Tau_cleanmask_[0]));
        loaded_Tau_cleanmask_ = true;
    }
    return v_Tau_cleanmask_;
}
const vector<int> &Nano::Tau_decayMode() {
    if (!loaded_Tau_decayMode_) {
        if (!b_Tau_decayMode_) throw std::runtime_error("Tau_decayMode branch doesn't exist");
        int bytes = b_Tau_decayMode_->GetEntry(index);
        v_Tau_decayMode_ = vector<int>(Tau_decayMode_,Tau_decayMode_+bytes/sizeof(Tau_decayMode_[0]));
        loaded_Tau_decayMode_ = true;
    }
    return v_Tau_decayMode_;
}
const vector<float> &Nano::Tau_dxy() {
    if (!loaded_Tau_dxy_) {
        if (!b_Tau_dxy_) throw std::runtime_error("Tau_dxy branch doesn't exist");
        int bytes = b_Tau_dxy_->GetEntry(index);
        v_Tau_dxy_ = vector<float>(Tau_dxy_,Tau_dxy_+bytes/sizeof(Tau_dxy_[0]));
        loaded_Tau_dxy_ = true;
    }
    return v_Tau_dxy_;
}
const vector<float> &Nano::Tau_dz() {
    if (!loaded_Tau_dz_) {
        if (!b_Tau_dz_) throw std::runtime_error("Tau_dz branch doesn't exist");
        int bytes = b_Tau_dz_->GetEntry(index);
        v_Tau_dz_ = vector<float>(Tau_dz_,Tau_dz_+bytes/sizeof(Tau_dz_[0]));
        loaded_Tau_dz_ = true;
    }
    return v_Tau_dz_;
}
const vector<float> &Nano::Tau_eta() {
    if (!loaded_Tau_eta_) {
        if (!b_Tau_eta_) throw std::runtime_error("Tau_eta branch doesn't exist");
        int bytes = b_Tau_eta_->GetEntry(index);
        v_Tau_eta_ = vector<float>(Tau_eta_,Tau_eta_+bytes/sizeof(Tau_eta_[0]));
        loaded_Tau_eta_ = true;
    }
    return v_Tau_eta_;
}
const vector<UChar_t> &Nano::Tau_genPartFlav() {
    if (!loaded_Tau_genPartFlav_) {
        if (!b_Tau_genPartFlav_) throw std::runtime_error("Tau_genPartFlav branch doesn't exist");
        int bytes = b_Tau_genPartFlav_->GetEntry(index);
        v_Tau_genPartFlav_ = vector<UChar_t>(Tau_genPartFlav_,Tau_genPartFlav_+bytes/sizeof(Tau_genPartFlav_[0]));
        loaded_Tau_genPartFlav_ = true;
    }
    return v_Tau_genPartFlav_;
}
const vector<int> &Nano::Tau_genPartIdx() {
    if (!loaded_Tau_genPartIdx_) {
        if (!b_Tau_genPartIdx_) throw std::runtime_error("Tau_genPartIdx branch doesn't exist");
        int bytes = b_Tau_genPartIdx_->GetEntry(index);
        v_Tau_genPartIdx_ = vector<int>(Tau_genPartIdx_,Tau_genPartIdx_+bytes/sizeof(Tau_genPartIdx_[0]));
        loaded_Tau_genPartIdx_ = true;
    }
    return v_Tau_genPartIdx_;
}
const vector<UChar_t> &Nano::Tau_idAntiEle() {
    if (!loaded_Tau_idAntiEle_) {
        if (!b_Tau_idAntiEle_) throw std::runtime_error("Tau_idAntiEle branch doesn't exist");
        int bytes = b_Tau_idAntiEle_->GetEntry(index);
        v_Tau_idAntiEle_ = vector<UChar_t>(Tau_idAntiEle_,Tau_idAntiEle_+bytes/sizeof(Tau_idAntiEle_[0]));
        loaded_Tau_idAntiEle_ = true;
    }
    return v_Tau_idAntiEle_;
}
const vector<UChar_t> &Nano::Tau_idAntiMu() {
    if (!loaded_Tau_idAntiMu_) {
        if (!b_Tau_idAntiMu_) throw std::runtime_error("Tau_idAntiMu branch doesn't exist");
        int bytes = b_Tau_idAntiMu_->GetEntry(index);
        v_Tau_idAntiMu_ = vector<UChar_t>(Tau_idAntiMu_,Tau_idAntiMu_+bytes/sizeof(Tau_idAntiMu_[0]));
        loaded_Tau_idAntiMu_ = true;
    }
    return v_Tau_idAntiMu_;
}
const vector<bool> &Nano::Tau_idDecayMode() {
    if (!loaded_Tau_idDecayMode_) {
        if (!b_Tau_idDecayMode_) throw std::runtime_error("Tau_idDecayMode branch doesn't exist");
        int bytes = b_Tau_idDecayMode_->GetEntry(index);
        v_Tau_idDecayMode_ = vector<bool>(Tau_idDecayMode_,Tau_idDecayMode_+bytes/sizeof(Tau_idDecayMode_[0]));
        loaded_Tau_idDecayMode_ = true;
    }
    return v_Tau_idDecayMode_;
}
const vector<bool> &Nano::Tau_idDecayModeNewDMs() {
    if (!loaded_Tau_idDecayModeNewDMs_) {
        if (!b_Tau_idDecayModeNewDMs_) throw std::runtime_error("Tau_idDecayModeNewDMs branch doesn't exist");
        int bytes = b_Tau_idDecayModeNewDMs_->GetEntry(index);
        v_Tau_idDecayModeNewDMs_ = vector<bool>(Tau_idDecayModeNewDMs_,Tau_idDecayModeNewDMs_+bytes/sizeof(Tau_idDecayModeNewDMs_[0]));
        loaded_Tau_idDecayModeNewDMs_ = true;
    }
    return v_Tau_idDecayModeNewDMs_;
}
const vector<UChar_t> &Nano::Tau_idMVAnewDM2017v2() {
    if (!loaded_Tau_idMVAnewDM2017v2_) {
        if (!b_Tau_idMVAnewDM2017v2_) throw std::runtime_error("Tau_idMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAnewDM2017v2_->GetEntry(index);
        v_Tau_idMVAnewDM2017v2_ = vector<UChar_t>(Tau_idMVAnewDM2017v2_,Tau_idMVAnewDM2017v2_+bytes/sizeof(Tau_idMVAnewDM2017v2_[0]));
        loaded_Tau_idMVAnewDM2017v2_ = true;
    }
    return v_Tau_idMVAnewDM2017v2_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM() {
    if (!loaded_Tau_idMVAoldDM_) {
        if (!b_Tau_idMVAoldDM_) throw std::runtime_error("Tau_idMVAoldDM branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM_->GetEntry(index);
        v_Tau_idMVAoldDM_ = vector<UChar_t>(Tau_idMVAoldDM_,Tau_idMVAoldDM_+bytes/sizeof(Tau_idMVAoldDM_[0]));
        loaded_Tau_idMVAoldDM_ = true;
    }
    return v_Tau_idMVAoldDM_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM2017v1() {
    if (!loaded_Tau_idMVAoldDM2017v1_) {
        if (!b_Tau_idMVAoldDM2017v1_) throw std::runtime_error("Tau_idMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM2017v1_->GetEntry(index);
        v_Tau_idMVAoldDM2017v1_ = vector<UChar_t>(Tau_idMVAoldDM2017v1_,Tau_idMVAoldDM2017v1_+bytes/sizeof(Tau_idMVAoldDM2017v1_[0]));
        loaded_Tau_idMVAoldDM2017v1_ = true;
    }
    return v_Tau_idMVAoldDM2017v1_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM2017v2() {
    if (!loaded_Tau_idMVAoldDM2017v2_) {
        if (!b_Tau_idMVAoldDM2017v2_) throw std::runtime_error("Tau_idMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM2017v2_->GetEntry(index);
        v_Tau_idMVAoldDM2017v2_ = vector<UChar_t>(Tau_idMVAoldDM2017v2_,Tau_idMVAoldDM2017v2_+bytes/sizeof(Tau_idMVAoldDM2017v2_[0]));
        loaded_Tau_idMVAoldDM2017v2_ = true;
    }
    return v_Tau_idMVAoldDM2017v2_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDMdR032017v2() {
    if (!loaded_Tau_idMVAoldDMdR032017v2_) {
        if (!b_Tau_idMVAoldDMdR032017v2_) throw std::runtime_error("Tau_idMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDMdR032017v2_->GetEntry(index);
        v_Tau_idMVAoldDMdR032017v2_ = vector<UChar_t>(Tau_idMVAoldDMdR032017v2_,Tau_idMVAoldDMdR032017v2_+bytes/sizeof(Tau_idMVAoldDMdR032017v2_[0]));
        loaded_Tau_idMVAoldDMdR032017v2_ = true;
    }
    return v_Tau_idMVAoldDMdR032017v2_;
}
const vector<int> &Nano::Tau_jetIdx() {
    if (!loaded_Tau_jetIdx_) {
        if (!b_Tau_jetIdx_) throw std::runtime_error("Tau_jetIdx branch doesn't exist");
        int bytes = b_Tau_jetIdx_->GetEntry(index);
        v_Tau_jetIdx_ = vector<int>(Tau_jetIdx_,Tau_jetIdx_+bytes/sizeof(Tau_jetIdx_[0]));
        loaded_Tau_jetIdx_ = true;
    }
    return v_Tau_jetIdx_;
}
const vector<float> &Nano::Tau_leadTkDeltaEta() {
    if (!loaded_Tau_leadTkDeltaEta_) {
        if (!b_Tau_leadTkDeltaEta_) throw std::runtime_error("Tau_leadTkDeltaEta branch doesn't exist");
        int bytes = b_Tau_leadTkDeltaEta_->GetEntry(index);
        v_Tau_leadTkDeltaEta_ = vector<float>(Tau_leadTkDeltaEta_,Tau_leadTkDeltaEta_+bytes/sizeof(Tau_leadTkDeltaEta_[0]));
        loaded_Tau_leadTkDeltaEta_ = true;
    }
    return v_Tau_leadTkDeltaEta_;
}
const vector<float> &Nano::Tau_leadTkDeltaPhi() {
    if (!loaded_Tau_leadTkDeltaPhi_) {
        if (!b_Tau_leadTkDeltaPhi_) throw std::runtime_error("Tau_leadTkDeltaPhi branch doesn't exist");
        int bytes = b_Tau_leadTkDeltaPhi_->GetEntry(index);
        v_Tau_leadTkDeltaPhi_ = vector<float>(Tau_leadTkDeltaPhi_,Tau_leadTkDeltaPhi_+bytes/sizeof(Tau_leadTkDeltaPhi_[0]));
        loaded_Tau_leadTkDeltaPhi_ = true;
    }
    return v_Tau_leadTkDeltaPhi_;
}
const vector<float> &Nano::Tau_leadTkPtOverTauPt() {
    if (!loaded_Tau_leadTkPtOverTauPt_) {
        if (!b_Tau_leadTkPtOverTauPt_) throw std::runtime_error("Tau_leadTkPtOverTauPt branch doesn't exist");
        int bytes = b_Tau_leadTkPtOverTauPt_->GetEntry(index);
        v_Tau_leadTkPtOverTauPt_ = vector<float>(Tau_leadTkPtOverTauPt_,Tau_leadTkPtOverTauPt_+bytes/sizeof(Tau_leadTkPtOverTauPt_[0]));
        loaded_Tau_leadTkPtOverTauPt_ = true;
    }
    return v_Tau_leadTkPtOverTauPt_;
}
const vector<float> &Nano::Tau_mass() {
    if (!loaded_Tau_mass_) {
        if (!b_Tau_mass_) throw std::runtime_error("Tau_mass branch doesn't exist");
        int bytes = b_Tau_mass_->GetEntry(index);
        v_Tau_mass_ = vector<float>(Tau_mass_,Tau_mass_+bytes/sizeof(Tau_mass_[0]));
        loaded_Tau_mass_ = true;
    }
    return v_Tau_mass_;
}
const vector<float> &Nano::Tau_neutralIso() {
    if (!loaded_Tau_neutralIso_) {
        if (!b_Tau_neutralIso_) throw std::runtime_error("Tau_neutralIso branch doesn't exist");
        int bytes = b_Tau_neutralIso_->GetEntry(index);
        v_Tau_neutralIso_ = vector<float>(Tau_neutralIso_,Tau_neutralIso_+bytes/sizeof(Tau_neutralIso_[0]));
        loaded_Tau_neutralIso_ = true;
    }
    return v_Tau_neutralIso_;
}
const vector<LorentzVector> &Nano::Tau_p4() {
    if (!loaded_Tau_p4_) {
        v_Tau_p4_.clear();
        vector<float> pts = Nano::Tau_pt();
        vector<float> etas = Nano::Tau_eta();
        vector<float> phis = Nano::Tau_phi();
        vector<float> masses = Nano::Tau_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Tau_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Tau_p4_ = true;
    }
    return v_Tau_p4_;
}
const vector<float> &Nano::Tau_phi() {
    if (!loaded_Tau_phi_) {
        if (!b_Tau_phi_) throw std::runtime_error("Tau_phi branch doesn't exist");
        int bytes = b_Tau_phi_->GetEntry(index);
        v_Tau_phi_ = vector<float>(Tau_phi_,Tau_phi_+bytes/sizeof(Tau_phi_[0]));
        loaded_Tau_phi_ = true;
    }
    return v_Tau_phi_;
}
const vector<float> &Nano::Tau_photonsOutsideSignalCone() {
    if (!loaded_Tau_photonsOutsideSignalCone_) {
        if (!b_Tau_photonsOutsideSignalCone_) throw std::runtime_error("Tau_photonsOutsideSignalCone branch doesn't exist");
        int bytes = b_Tau_photonsOutsideSignalCone_->GetEntry(index);
        v_Tau_photonsOutsideSignalCone_ = vector<float>(Tau_photonsOutsideSignalCone_,Tau_photonsOutsideSignalCone_+bytes/sizeof(Tau_photonsOutsideSignalCone_[0]));
        loaded_Tau_photonsOutsideSignalCone_ = true;
    }
    return v_Tau_photonsOutsideSignalCone_;
}
const vector<float> &Nano::Tau_pt() {
    if (!loaded_Tau_pt_) {
        if (!b_Tau_pt_) throw std::runtime_error("Tau_pt branch doesn't exist");
        int bytes = b_Tau_pt_->GetEntry(index);
        v_Tau_pt_ = vector<float>(Tau_pt_,Tau_pt_+bytes/sizeof(Tau_pt_[0]));
        loaded_Tau_pt_ = true;
    }
    return v_Tau_pt_;
}
const vector<float> &Nano::Tau_puCorr() {
    if (!loaded_Tau_puCorr_) {
        if (!b_Tau_puCorr_) throw std::runtime_error("Tau_puCorr branch doesn't exist");
        int bytes = b_Tau_puCorr_->GetEntry(index);
        v_Tau_puCorr_ = vector<float>(Tau_puCorr_,Tau_puCorr_+bytes/sizeof(Tau_puCorr_[0]));
        loaded_Tau_puCorr_ = true;
    }
    return v_Tau_puCorr_;
}
const vector<float> &Nano::Tau_rawAntiEle() {
    if (!loaded_Tau_rawAntiEle_) {
        if (!b_Tau_rawAntiEle_) throw std::runtime_error("Tau_rawAntiEle branch doesn't exist");
        int bytes = b_Tau_rawAntiEle_->GetEntry(index);
        v_Tau_rawAntiEle_ = vector<float>(Tau_rawAntiEle_,Tau_rawAntiEle_+bytes/sizeof(Tau_rawAntiEle_[0]));
        loaded_Tau_rawAntiEle_ = true;
    }
    return v_Tau_rawAntiEle_;
}
const vector<int> &Nano::Tau_rawAntiEleCat() {
    if (!loaded_Tau_rawAntiEleCat_) {
        if (!b_Tau_rawAntiEleCat_) throw std::runtime_error("Tau_rawAntiEleCat branch doesn't exist");
        int bytes = b_Tau_rawAntiEleCat_->GetEntry(index);
        v_Tau_rawAntiEleCat_ = vector<int>(Tau_rawAntiEleCat_,Tau_rawAntiEleCat_+bytes/sizeof(Tau_rawAntiEleCat_[0]));
        loaded_Tau_rawAntiEleCat_ = true;
    }
    return v_Tau_rawAntiEleCat_;
}
const vector<float> &Nano::Tau_rawIso() {
    if (!loaded_Tau_rawIso_) {
        if (!b_Tau_rawIso_) throw std::runtime_error("Tau_rawIso branch doesn't exist");
        int bytes = b_Tau_rawIso_->GetEntry(index);
        v_Tau_rawIso_ = vector<float>(Tau_rawIso_,Tau_rawIso_+bytes/sizeof(Tau_rawIso_[0]));
        loaded_Tau_rawIso_ = true;
    }
    return v_Tau_rawIso_;
}
const vector<float> &Nano::Tau_rawIsodR03() {
    if (!loaded_Tau_rawIsodR03_) {
        if (!b_Tau_rawIsodR03_) throw std::runtime_error("Tau_rawIsodR03 branch doesn't exist");
        int bytes = b_Tau_rawIsodR03_->GetEntry(index);
        v_Tau_rawIsodR03_ = vector<float>(Tau_rawIsodR03_,Tau_rawIsodR03_+bytes/sizeof(Tau_rawIsodR03_[0]));
        loaded_Tau_rawIsodR03_ = true;
    }
    return v_Tau_rawIsodR03_;
}
const vector<float> &Nano::Tau_rawMVAnewDM2017v2() {
    if (!loaded_Tau_rawMVAnewDM2017v2_) {
        if (!b_Tau_rawMVAnewDM2017v2_) throw std::runtime_error("Tau_rawMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAnewDM2017v2_->GetEntry(index);
        v_Tau_rawMVAnewDM2017v2_ = vector<float>(Tau_rawMVAnewDM2017v2_,Tau_rawMVAnewDM2017v2_+bytes/sizeof(Tau_rawMVAnewDM2017v2_[0]));
        loaded_Tau_rawMVAnewDM2017v2_ = true;
    }
    return v_Tau_rawMVAnewDM2017v2_;
}
const vector<float> &Nano::Tau_rawMVAoldDM() {
    if (!loaded_Tau_rawMVAoldDM_) {
        if (!b_Tau_rawMVAoldDM_) throw std::runtime_error("Tau_rawMVAoldDM branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM_->GetEntry(index);
        v_Tau_rawMVAoldDM_ = vector<float>(Tau_rawMVAoldDM_,Tau_rawMVAoldDM_+bytes/sizeof(Tau_rawMVAoldDM_[0]));
        loaded_Tau_rawMVAoldDM_ = true;
    }
    return v_Tau_rawMVAoldDM_;
}
const vector<float> &Nano::Tau_rawMVAoldDM2017v1() {
    if (!loaded_Tau_rawMVAoldDM2017v1_) {
        if (!b_Tau_rawMVAoldDM2017v1_) throw std::runtime_error("Tau_rawMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM2017v1_->GetEntry(index);
        v_Tau_rawMVAoldDM2017v1_ = vector<float>(Tau_rawMVAoldDM2017v1_,Tau_rawMVAoldDM2017v1_+bytes/sizeof(Tau_rawMVAoldDM2017v1_[0]));
        loaded_Tau_rawMVAoldDM2017v1_ = true;
    }
    return v_Tau_rawMVAoldDM2017v1_;
}
const vector<float> &Nano::Tau_rawMVAoldDM2017v2() {
    if (!loaded_Tau_rawMVAoldDM2017v2_) {
        if (!b_Tau_rawMVAoldDM2017v2_) throw std::runtime_error("Tau_rawMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM2017v2_->GetEntry(index);
        v_Tau_rawMVAoldDM2017v2_ = vector<float>(Tau_rawMVAoldDM2017v2_,Tau_rawMVAoldDM2017v2_+bytes/sizeof(Tau_rawMVAoldDM2017v2_[0]));
        loaded_Tau_rawMVAoldDM2017v2_ = true;
    }
    return v_Tau_rawMVAoldDM2017v2_;
}
const vector<float> &Nano::Tau_rawMVAoldDMdR032017v2() {
    if (!loaded_Tau_rawMVAoldDMdR032017v2_) {
        if (!b_Tau_rawMVAoldDMdR032017v2_) throw std::runtime_error("Tau_rawMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDMdR032017v2_->GetEntry(index);
        v_Tau_rawMVAoldDMdR032017v2_ = vector<float>(Tau_rawMVAoldDMdR032017v2_,Tau_rawMVAoldDMdR032017v2_+bytes/sizeof(Tau_rawMVAoldDMdR032017v2_[0]));
        loaded_Tau_rawMVAoldDMdR032017v2_ = true;
    }
    return v_Tau_rawMVAoldDMdR032017v2_;
}
const float &Nano::TkMET_phi() {
    if (!loaded_TkMET_phi_) {
        if (!b_TkMET_phi_) throw std::runtime_error("TkMET_phi branch doesn't exist");
        b_TkMET_phi_->GetEntry(index);
        loaded_TkMET_phi_ = true;
    }
    return TkMET_phi_;
}
const float &Nano::TkMET_pt() {
    if (!loaded_TkMET_pt_) {
        if (!b_TkMET_pt_) throw std::runtime_error("TkMET_pt branch doesn't exist");
        b_TkMET_pt_->GetEntry(index);
        loaded_TkMET_pt_ = true;
    }
    return TkMET_pt_;
}
const float &Nano::TkMET_sumEt() {
    if (!loaded_TkMET_sumEt_) {
        if (!b_TkMET_sumEt_) throw std::runtime_error("TkMET_sumEt branch doesn't exist");
        b_TkMET_sumEt_->GetEntry(index);
        loaded_TkMET_sumEt_ = true;
    }
    return TkMET_sumEt_;
}
const vector<float> &Nano::TrigObj_eta() {
    if (!loaded_TrigObj_eta_) {
        if (!b_TrigObj_eta_) throw std::runtime_error("TrigObj_eta branch doesn't exist");
        int bytes = b_TrigObj_eta_->GetEntry(index);
        v_TrigObj_eta_ = vector<float>(TrigObj_eta_,TrigObj_eta_+bytes/sizeof(TrigObj_eta_[0]));
        loaded_TrigObj_eta_ = true;
    }
    return v_TrigObj_eta_;
}
const vector<int> &Nano::TrigObj_filterBits() {
    if (!loaded_TrigObj_filterBits_) {
        if (!b_TrigObj_filterBits_) throw std::runtime_error("TrigObj_filterBits branch doesn't exist");
        int bytes = b_TrigObj_filterBits_->GetEntry(index);
        v_TrigObj_filterBits_ = vector<int>(TrigObj_filterBits_,TrigObj_filterBits_+bytes/sizeof(TrigObj_filterBits_[0]));
        loaded_TrigObj_filterBits_ = true;
    }
    return v_TrigObj_filterBits_;
}
const vector<int> &Nano::TrigObj_id() {
    if (!loaded_TrigObj_id_) {
        if (!b_TrigObj_id_) throw std::runtime_error("TrigObj_id branch doesn't exist");
        int bytes = b_TrigObj_id_->GetEntry(index);
        v_TrigObj_id_ = vector<int>(TrigObj_id_,TrigObj_id_+bytes/sizeof(TrigObj_id_[0]));
        loaded_TrigObj_id_ = true;
    }
    return v_TrigObj_id_;
}
const vector<int> &Nano::TrigObj_l1charge() {
    if (!loaded_TrigObj_l1charge_) {
        if (!b_TrigObj_l1charge_) throw std::runtime_error("TrigObj_l1charge branch doesn't exist");
        int bytes = b_TrigObj_l1charge_->GetEntry(index);
        v_TrigObj_l1charge_ = vector<int>(TrigObj_l1charge_,TrigObj_l1charge_+bytes/sizeof(TrigObj_l1charge_[0]));
        loaded_TrigObj_l1charge_ = true;
    }
    return v_TrigObj_l1charge_;
}
const vector<int> &Nano::TrigObj_l1iso() {
    if (!loaded_TrigObj_l1iso_) {
        if (!b_TrigObj_l1iso_) throw std::runtime_error("TrigObj_l1iso branch doesn't exist");
        int bytes = b_TrigObj_l1iso_->GetEntry(index);
        v_TrigObj_l1iso_ = vector<int>(TrigObj_l1iso_,TrigObj_l1iso_+bytes/sizeof(TrigObj_l1iso_[0]));
        loaded_TrigObj_l1iso_ = true;
    }
    return v_TrigObj_l1iso_;
}
const vector<float> &Nano::TrigObj_l1pt() {
    if (!loaded_TrigObj_l1pt_) {
        if (!b_TrigObj_l1pt_) throw std::runtime_error("TrigObj_l1pt branch doesn't exist");
        int bytes = b_TrigObj_l1pt_->GetEntry(index);
        v_TrigObj_l1pt_ = vector<float>(TrigObj_l1pt_,TrigObj_l1pt_+bytes/sizeof(TrigObj_l1pt_[0]));
        loaded_TrigObj_l1pt_ = true;
    }
    return v_TrigObj_l1pt_;
}
const vector<float> &Nano::TrigObj_l1pt_2() {
    if (!loaded_TrigObj_l1pt_2_) {
        if (!b_TrigObj_l1pt_2_) throw std::runtime_error("TrigObj_l1pt_2 branch doesn't exist");
        int bytes = b_TrigObj_l1pt_2_->GetEntry(index);
        v_TrigObj_l1pt_2_ = vector<float>(TrigObj_l1pt_2_,TrigObj_l1pt_2_+bytes/sizeof(TrigObj_l1pt_2_[0]));
        loaded_TrigObj_l1pt_2_ = true;
    }
    return v_TrigObj_l1pt_2_;
}
const vector<float> &Nano::TrigObj_l2pt() {
    if (!loaded_TrigObj_l2pt_) {
        if (!b_TrigObj_l2pt_) throw std::runtime_error("TrigObj_l2pt branch doesn't exist");
        int bytes = b_TrigObj_l2pt_->GetEntry(index);
        v_TrigObj_l2pt_ = vector<float>(TrigObj_l2pt_,TrigObj_l2pt_+bytes/sizeof(TrigObj_l2pt_[0]));
        loaded_TrigObj_l2pt_ = true;
    }
    return v_TrigObj_l2pt_;
}
const vector<float> &Nano::TrigObj_phi() {
    if (!loaded_TrigObj_phi_) {
        if (!b_TrigObj_phi_) throw std::runtime_error("TrigObj_phi branch doesn't exist");
        int bytes = b_TrigObj_phi_->GetEntry(index);
        v_TrigObj_phi_ = vector<float>(TrigObj_phi_,TrigObj_phi_+bytes/sizeof(TrigObj_phi_[0]));
        loaded_TrigObj_phi_ = true;
    }
    return v_TrigObj_phi_;
}
const vector<float> &Nano::TrigObj_pt() {
    if (!loaded_TrigObj_pt_) {
        if (!b_TrigObj_pt_) throw std::runtime_error("TrigObj_pt branch doesn't exist");
        int bytes = b_TrigObj_pt_->GetEntry(index);
        v_TrigObj_pt_ = vector<float>(TrigObj_pt_,TrigObj_pt_+bytes/sizeof(TrigObj_pt_[0]));
        loaded_TrigObj_pt_ = true;
    }
    return v_TrigObj_pt_;
}
const ULong64_t &Nano::event() {
    if (!loaded_event_) {
        if (!b_event_) throw std::runtime_error("event branch doesn't exist");
        b_event_->GetEntry(index);
        loaded_event_ = true;
    }
    return event_;
}
const float &Nano::fixedGridRhoFastjetAll() {
    if (!loaded_fixedGridRhoFastjetAll_) {
        if (!b_fixedGridRhoFastjetAll_) throw std::runtime_error("fixedGridRhoFastjetAll branch doesn't exist");
        b_fixedGridRhoFastjetAll_->GetEntry(index);
        loaded_fixedGridRhoFastjetAll_ = true;
    }
    return fixedGridRhoFastjetAll_;
}
const float &Nano::fixedGridRhoFastjetCentralCalo() {
    if (!loaded_fixedGridRhoFastjetCentralCalo_) {
        if (!b_fixedGridRhoFastjetCentralCalo_) throw std::runtime_error("fixedGridRhoFastjetCentralCalo branch doesn't exist");
        b_fixedGridRhoFastjetCentralCalo_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentralCalo_ = true;
    }
    return fixedGridRhoFastjetCentralCalo_;
}
const float &Nano::fixedGridRhoFastjetCentralNeutral() {
    if (!loaded_fixedGridRhoFastjetCentralNeutral_) {
        if (!b_fixedGridRhoFastjetCentralNeutral_) throw std::runtime_error("fixedGridRhoFastjetCentralNeutral branch doesn't exist");
        b_fixedGridRhoFastjetCentralNeutral_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentralNeutral_ = true;
    }
    return fixedGridRhoFastjetCentralNeutral_;
}
const int &Nano::genTtbarId() {
    if (!loaded_genTtbarId_) {
        if (!b_genTtbarId_) throw std::runtime_error("genTtbarId branch doesn't exist");
        b_genTtbarId_->GetEntry(index);
        loaded_genTtbarId_ = true;
    }
    return genTtbarId_;
}
const float &Nano::genWeight() {
    if (!loaded_genWeight_) {
        if (!b_genWeight_) throw std::runtime_error("genWeight branch doesn't exist");
        b_genWeight_->GetEntry(index);
        loaded_genWeight_ = true;
    }
    return genWeight_;
}
const UInt_t &Nano::luminosityBlock() {
    if (!loaded_luminosityBlock_) {
        if (!b_luminosityBlock_) throw std::runtime_error("luminosityBlock branch doesn't exist");
        b_luminosityBlock_->GetEntry(index);
        loaded_luminosityBlock_ = true;
    }
    return luminosityBlock_;
}
const UInt_t &Nano::nElectron() {
    if (!loaded_nElectron_) {
        if (!b_nElectron_) throw std::runtime_error("nElectron branch doesn't exist");
        b_nElectron_->GetEntry(index);
        loaded_nElectron_ = true;
    }
    return nElectron_;
}
const UInt_t &Nano::nFatJet() {
    if (!loaded_nFatJet_) {
        if (!b_nFatJet_) throw std::runtime_error("nFatJet branch doesn't exist");
        b_nFatJet_->GetEntry(index);
        loaded_nFatJet_ = true;
    }
    return nFatJet_;
}
const UInt_t &Nano::nGenDressedLepton() {
    if (!loaded_nGenDressedLepton_) {
        if (!b_nGenDressedLepton_) throw std::runtime_error("nGenDressedLepton branch doesn't exist");
        b_nGenDressedLepton_->GetEntry(index);
        loaded_nGenDressedLepton_ = true;
    }
    return nGenDressedLepton_;
}
const UInt_t &Nano::nGenJet() {
    if (!loaded_nGenJet_) {
        if (!b_nGenJet_) throw std::runtime_error("nGenJet branch doesn't exist");
        b_nGenJet_->GetEntry(index);
        loaded_nGenJet_ = true;
    }
    return nGenJet_;
}
const UInt_t &Nano::nGenJetAK8() {
    if (!loaded_nGenJetAK8_) {
        if (!b_nGenJetAK8_) throw std::runtime_error("nGenJetAK8 branch doesn't exist");
        b_nGenJetAK8_->GetEntry(index);
        loaded_nGenJetAK8_ = true;
    }
    return nGenJetAK8_;
}
const UInt_t &Nano::nGenPart() {
    if (!loaded_nGenPart_) {
        if (!b_nGenPart_) throw std::runtime_error("nGenPart branch doesn't exist");
        b_nGenPart_->GetEntry(index);
        loaded_nGenPart_ = true;
    }
    return nGenPart_;
}
const UInt_t &Nano::nGenVisTau() {
    if (!loaded_nGenVisTau_) {
        if (!b_nGenVisTau_) throw std::runtime_error("nGenVisTau branch doesn't exist");
        b_nGenVisTau_->GetEntry(index);
        loaded_nGenVisTau_ = true;
    }
    return nGenVisTau_;
}
const UInt_t &Nano::nIsoTrack() {
    if (!loaded_nIsoTrack_) {
        if (!b_nIsoTrack_) throw std::runtime_error("nIsoTrack branch doesn't exist");
        b_nIsoTrack_->GetEntry(index);
        loaded_nIsoTrack_ = true;
    }
    return nIsoTrack_;
}
const UInt_t &Nano::nJet() {
    if (!loaded_nJet_) {
        if (!b_nJet_) throw std::runtime_error("nJet branch doesn't exist");
        b_nJet_->GetEntry(index);
        loaded_nJet_ = true;
    }
    return nJet_;
}
const UInt_t &Nano::nLHEPart() {
    if (!loaded_nLHEPart_) {
        if (!b_nLHEPart_) throw std::runtime_error("nLHEPart branch doesn't exist");
        b_nLHEPart_->GetEntry(index);
        loaded_nLHEPart_ = true;
    }
    return nLHEPart_;
}
const UInt_t &Nano::nLHEPdfWeight() {
    if (!loaded_nLHEPdfWeight_) {
        if (!b_nLHEPdfWeight_) throw std::runtime_error("nLHEPdfWeight branch doesn't exist");
        b_nLHEPdfWeight_->GetEntry(index);
        loaded_nLHEPdfWeight_ = true;
    }
    return nLHEPdfWeight_;
}
const UInt_t &Nano::nLHEScaleWeight() {
    if (!loaded_nLHEScaleWeight_) {
        if (!b_nLHEScaleWeight_) throw std::runtime_error("nLHEScaleWeight branch doesn't exist");
        b_nLHEScaleWeight_->GetEntry(index);
        loaded_nLHEScaleWeight_ = true;
    }
    return nLHEScaleWeight_;
}
const UInt_t &Nano::nMuon() {
    if (!loaded_nMuon_) {
        if (!b_nMuon_) throw std::runtime_error("nMuon branch doesn't exist");
        b_nMuon_->GetEntry(index);
        loaded_nMuon_ = true;
    }
    return nMuon_;
}
const UInt_t &Nano::nOtherPV() {
    if (!loaded_nOtherPV_) {
        if (!b_nOtherPV_) throw std::runtime_error("nOtherPV branch doesn't exist");
        b_nOtherPV_->GetEntry(index);
        loaded_nOtherPV_ = true;
    }
    return nOtherPV_;
}
const UInt_t &Nano::nPhoton() {
    if (!loaded_nPhoton_) {
        if (!b_nPhoton_) throw std::runtime_error("nPhoton branch doesn't exist");
        b_nPhoton_->GetEntry(index);
        loaded_nPhoton_ = true;
    }
    return nPhoton_;
}
const UInt_t &Nano::nSV() {
    if (!loaded_nSV_) {
        if (!b_nSV_) throw std::runtime_error("nSV branch doesn't exist");
        b_nSV_->GetEntry(index);
        loaded_nSV_ = true;
    }
    return nSV_;
}
const UInt_t &Nano::nSoftActivityJet() {
    if (!loaded_nSoftActivityJet_) {
        if (!b_nSoftActivityJet_) throw std::runtime_error("nSoftActivityJet branch doesn't exist");
        b_nSoftActivityJet_->GetEntry(index);
        loaded_nSoftActivityJet_ = true;
    }
    return nSoftActivityJet_;
}
const UInt_t &Nano::nSubGenJetAK8() {
    if (!loaded_nSubGenJetAK8_) {
        if (!b_nSubGenJetAK8_) throw std::runtime_error("nSubGenJetAK8 branch doesn't exist");
        b_nSubGenJetAK8_->GetEntry(index);
        loaded_nSubGenJetAK8_ = true;
    }
    return nSubGenJetAK8_;
}
const UInt_t &Nano::nSubJet() {
    if (!loaded_nSubJet_) {
        if (!b_nSubJet_) throw std::runtime_error("nSubJet branch doesn't exist");
        b_nSubJet_->GetEntry(index);
        loaded_nSubJet_ = true;
    }
    return nSubJet_;
}
const UInt_t &Nano::nTau() {
    if (!loaded_nTau_) {
        if (!b_nTau_) throw std::runtime_error("nTau branch doesn't exist");
        b_nTau_->GetEntry(index);
        loaded_nTau_ = true;
    }
    return nTau_;
}
const UInt_t &Nano::nTrigObj() {
    if (!loaded_nTrigObj_) {
        if (!b_nTrigObj_) throw std::runtime_error("nTrigObj branch doesn't exist");
        b_nTrigObj_->GetEntry(index);
        loaded_nTrigObj_ = true;
    }
    return nTrigObj_;
}
const UInt_t &Nano::run() {
    if (!loaded_run_) {
        if (!b_run_) throw std::runtime_error("run branch doesn't exist");
        b_run_->GetEntry(index);
        loaded_run_ = true;
    }
    return run_;
}

namespace tas {
    const float &CaloMET_phi() { return nt.CaloMET_phi(); }
    const float &CaloMET_pt() { return nt.CaloMET_pt(); }
    const float &CaloMET_sumEt() { return nt.CaloMET_sumEt(); }
    const vector<int> &Electron_charge() { return nt.Electron_charge(); }
    const vector<UChar_t> &Electron_cleanmask() { return nt.Electron_cleanmask(); }
    const vector<bool> &Electron_convVeto() { return nt.Electron_convVeto(); }
    const vector<int> &Electron_cutBased() { return nt.Electron_cutBased(); }
    const vector<bool> &Electron_cutBased_HEEP() { return nt.Electron_cutBased_HEEP(); }
    const vector<float> &Electron_deltaEtaSC() { return nt.Electron_deltaEtaSC(); }
    const vector<float> &Electron_dr03EcalRecHitSumEt() { return nt.Electron_dr03EcalRecHitSumEt(); }
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt() { return nt.Electron_dr03HcalDepth1TowerSumEt(); }
    const vector<float> &Electron_dr03TkSumPt() { return nt.Electron_dr03TkSumPt(); }
    const vector<float> &Electron_dxy() { return nt.Electron_dxy(); }
    const vector<float> &Electron_dxyErr() { return nt.Electron_dxyErr(); }
    const vector<float> &Electron_dz() { return nt.Electron_dz(); }
    const vector<float> &Electron_dzErr() { return nt.Electron_dzErr(); }
    const vector<float> &Electron_eCorr() { return nt.Electron_eCorr(); }
    const vector<float> &Electron_eInvMinusPInv() { return nt.Electron_eInvMinusPInv(); }
    const vector<float> &Electron_energyErr() { return nt.Electron_energyErr(); }
    const vector<float> &Electron_eta() { return nt.Electron_eta(); }
    const vector<UChar_t> &Electron_genPartFlav() { return nt.Electron_genPartFlav(); }
    const vector<int> &Electron_genPartIdx() { return nt.Electron_genPartIdx(); }
    const vector<float> &Electron_hoe() { return nt.Electron_hoe(); }
    const vector<float> &Electron_ip3d() { return nt.Electron_ip3d(); }
    const vector<bool> &Electron_isPFcand() { return nt.Electron_isPFcand(); }
    const vector<int> &Electron_jetIdx() { return nt.Electron_jetIdx(); }
    const vector<UChar_t> &Electron_lostHits() { return nt.Electron_lostHits(); }
    const vector<float> &Electron_mass() { return nt.Electron_mass(); }
    const vector<float> &Electron_miniPFRelIso_all() { return nt.Electron_miniPFRelIso_all(); }
    const vector<float> &Electron_miniPFRelIso_chg() { return nt.Electron_miniPFRelIso_chg(); }
    const vector<float> &Electron_mvaFall17Iso() { return nt.Electron_mvaFall17Iso(); }
    const vector<bool> &Electron_mvaFall17Iso_WP80() { return nt.Electron_mvaFall17Iso_WP80(); }
    const vector<bool> &Electron_mvaFall17Iso_WP90() { return nt.Electron_mvaFall17Iso_WP90(); }
    const vector<bool> &Electron_mvaFall17Iso_WPL() { return nt.Electron_mvaFall17Iso_WPL(); }
    const vector<float> &Electron_mvaFall17noIso() { return nt.Electron_mvaFall17noIso(); }
    const vector<bool> &Electron_mvaFall17noIso_WP80() { return nt.Electron_mvaFall17noIso_WP80(); }
    const vector<bool> &Electron_mvaFall17noIso_WP90() { return nt.Electron_mvaFall17noIso_WP90(); }
    const vector<bool> &Electron_mvaFall17noIso_WPL() { return nt.Electron_mvaFall17noIso_WPL(); }
    const vector<float> &Electron_mvaTTH() { return nt.Electron_mvaTTH(); }
    const vector<LorentzVector> &Electron_p4() { return nt.Electron_p4(); }
    const vector<int> &Electron_pdgId() { return nt.Electron_pdgId(); }
    const vector<float> &Electron_pfRelIso03_all() { return nt.Electron_pfRelIso03_all(); }
    const vector<float> &Electron_pfRelIso03_chg() { return nt.Electron_pfRelIso03_chg(); }
    const vector<float> &Electron_phi() { return nt.Electron_phi(); }
    const vector<int> &Electron_photonIdx() { return nt.Electron_photonIdx(); }
    const vector<float> &Electron_pt() { return nt.Electron_pt(); }
    const vector<float> &Electron_r9() { return nt.Electron_r9(); }
    const vector<float> &Electron_sieie() { return nt.Electron_sieie(); }
    const vector<float> &Electron_sip3d() { return nt.Electron_sip3d(); }
    const vector<int> &Electron_tightCharge() { return nt.Electron_tightCharge(); }
    const vector<int> &Electron_vidNestedWPBitmap() { return nt.Electron_vidNestedWPBitmap(); }
    const vector<float> &FatJet_area() { return nt.FatJet_area(); }
    const vector<float> &FatJet_btagCMVA() { return nt.FatJet_btagCMVA(); }
    const vector<float> &FatJet_btagCSVV2() { return nt.FatJet_btagCSVV2(); }
    const vector<float> &FatJet_btagDeepB() { return nt.FatJet_btagDeepB(); }
    const vector<float> &FatJet_btagHbb() { return nt.FatJet_btagHbb(); }
    const vector<float> &FatJet_eta() { return nt.FatJet_eta(); }
    const vector<int> &FatJet_jetId() { return nt.FatJet_jetId(); }
    const vector<float> &FatJet_mass() { return nt.FatJet_mass(); }
    const vector<float> &FatJet_msoftdrop() { return nt.FatJet_msoftdrop(); }
    const vector<float> &FatJet_n2b1() { return nt.FatJet_n2b1(); }
    const vector<float> &FatJet_n3b1() { return nt.FatJet_n3b1(); }
    const vector<LorentzVector> &FatJet_p4() { return nt.FatJet_p4(); }
    const vector<float> &FatJet_phi() { return nt.FatJet_phi(); }
    const vector<float> &FatJet_pt() { return nt.FatJet_pt(); }
    const vector<int> &FatJet_subJetIdx1() { return nt.FatJet_subJetIdx1(); }
    const vector<int> &FatJet_subJetIdx2() { return nt.FatJet_subJetIdx2(); }
    const vector<float> &FatJet_tau1() { return nt.FatJet_tau1(); }
    const vector<float> &FatJet_tau2() { return nt.FatJet_tau2(); }
    const vector<float> &FatJet_tau3() { return nt.FatJet_tau3(); }
    const vector<float> &FatJet_tau4() { return nt.FatJet_tau4(); }
    const bool &Flag_BadChargedCandidateFilter() { return nt.Flag_BadChargedCandidateFilter(); }
    const bool &Flag_BadChargedCandidateSummer16Filter() { return nt.Flag_BadChargedCandidateSummer16Filter(); }
    const bool &Flag_BadPFMuonFilter() { return nt.Flag_BadPFMuonFilter(); }
    const bool &Flag_BadPFMuonSummer16Filter() { return nt.Flag_BadPFMuonSummer16Filter(); }
    const bool &Flag_CSCTightHalo2015Filter() { return nt.Flag_CSCTightHalo2015Filter(); }
    const bool &Flag_CSCTightHaloFilter() { return nt.Flag_CSCTightHaloFilter(); }
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter() { return nt.Flag_CSCTightHaloTrkMuUnvetoFilter(); }
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter() { return nt.Flag_EcalDeadCellBoundaryEnergyFilter(); }
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter() { return nt.Flag_EcalDeadCellTriggerPrimitiveFilter(); }
    const bool &Flag_HBHENoiseFilter() { return nt.Flag_HBHENoiseFilter(); }
    const bool &Flag_HBHENoiseIsoFilter() { return nt.Flag_HBHENoiseIsoFilter(); }
    const bool &Flag_HcalStripHaloFilter() { return nt.Flag_HcalStripHaloFilter(); }
    const bool &Flag_METFilters() { return nt.Flag_METFilters(); }
    const bool &Flag_chargedHadronTrackResolutionFilter() { return nt.Flag_chargedHadronTrackResolutionFilter(); }
    const bool &Flag_ecalBadCalibFilter() { return nt.Flag_ecalBadCalibFilter(); }
    const bool &Flag_ecalLaserCorrFilter() { return nt.Flag_ecalLaserCorrFilter(); }
    const bool &Flag_eeBadScFilter() { return nt.Flag_eeBadScFilter(); }
    const bool &Flag_globalSuperTightHalo2016Filter() { return nt.Flag_globalSuperTightHalo2016Filter(); }
    const bool &Flag_globalTightHalo2016Filter() { return nt.Flag_globalTightHalo2016Filter(); }
    const bool &Flag_goodVertices() { return nt.Flag_goodVertices(); }
    const bool &Flag_hcalLaserEventFilter() { return nt.Flag_hcalLaserEventFilter(); }
    const bool &Flag_muonBadTrackFilter() { return nt.Flag_muonBadTrackFilter(); }
    const bool &Flag_trkPOGFilters() { return nt.Flag_trkPOGFilters(); }
    const bool &Flag_trkPOG_logErrorTooManyClusters() { return nt.Flag_trkPOG_logErrorTooManyClusters(); }
    const bool &Flag_trkPOG_manystripclus53X() { return nt.Flag_trkPOG_manystripclus53X(); }
    const bool &Flag_trkPOG_toomanystripclus53X() { return nt.Flag_trkPOG_toomanystripclus53X(); }
    const vector<float> &GenDressedLepton_eta() { return nt.GenDressedLepton_eta(); }
    const vector<float> &GenDressedLepton_mass() { return nt.GenDressedLepton_mass(); }
    const vector<LorentzVector> &GenDressedLepton_p4() { return nt.GenDressedLepton_p4(); }
    const vector<int> &GenDressedLepton_pdgId() { return nt.GenDressedLepton_pdgId(); }
    const vector<float> &GenDressedLepton_phi() { return nt.GenDressedLepton_phi(); }
    const vector<float> &GenDressedLepton_pt() { return nt.GenDressedLepton_pt(); }
    const vector<float> &GenJetAK8_eta() { return nt.GenJetAK8_eta(); }
    const vector<UChar_t> &GenJetAK8_hadronFlavour() { return nt.GenJetAK8_hadronFlavour(); }
    const vector<float> &GenJetAK8_mass() { return nt.GenJetAK8_mass(); }
    const vector<LorentzVector> &GenJetAK8_p4() { return nt.GenJetAK8_p4(); }
    const vector<int> &GenJetAK8_partonFlavour() { return nt.GenJetAK8_partonFlavour(); }
    const vector<float> &GenJetAK8_phi() { return nt.GenJetAK8_phi(); }
    const vector<float> &GenJetAK8_pt() { return nt.GenJetAK8_pt(); }
    const vector<float> &GenJet_eta() { return nt.GenJet_eta(); }
    const vector<UChar_t> &GenJet_hadronFlavour() { return nt.GenJet_hadronFlavour(); }
    const vector<float> &GenJet_mass() { return nt.GenJet_mass(); }
    const vector<LorentzVector> &GenJet_p4() { return nt.GenJet_p4(); }
    const vector<int> &GenJet_partonFlavour() { return nt.GenJet_partonFlavour(); }
    const vector<float> &GenJet_phi() { return nt.GenJet_phi(); }
    const vector<float> &GenJet_pt() { return nt.GenJet_pt(); }
    const float &GenMET_phi() { return nt.GenMET_phi(); }
    const float &GenMET_pt() { return nt.GenMET_pt(); }
    const vector<float> &GenPart_eta() { return nt.GenPart_eta(); }
    const vector<int> &GenPart_genPartIdxMother() { return nt.GenPart_genPartIdxMother(); }
    const vector<float> &GenPart_mass() { return nt.GenPart_mass(); }
    const vector<LorentzVector> &GenPart_p4() { return nt.GenPart_p4(); }
    const vector<int> &GenPart_pdgId() { return nt.GenPart_pdgId(); }
    const vector<float> &GenPart_phi() { return nt.GenPart_phi(); }
    const vector<float> &GenPart_pt() { return nt.GenPart_pt(); }
    const vector<int> &GenPart_status() { return nt.GenPart_status(); }
    const vector<int> &GenPart_statusFlags() { return nt.GenPart_statusFlags(); }
    const vector<int> &GenVisTau_charge() { return nt.GenVisTau_charge(); }
    const vector<float> &GenVisTau_eta() { return nt.GenVisTau_eta(); }
    const vector<int> &GenVisTau_genPartIdxMother() { return nt.GenVisTau_genPartIdxMother(); }
    const vector<float> &GenVisTau_mass() { return nt.GenVisTau_mass(); }
    const vector<LorentzVector> &GenVisTau_p4() { return nt.GenVisTau_p4(); }
    const vector<float> &GenVisTau_phi() { return nt.GenVisTau_phi(); }
    const vector<float> &GenVisTau_pt() { return nt.GenVisTau_pt(); }
    const vector<int> &GenVisTau_status() { return nt.GenVisTau_status(); }
    const float &Generator_binvar() { return nt.Generator_binvar(); }
    const int &Generator_id1() { return nt.Generator_id1(); }
    const int &Generator_id2() { return nt.Generator_id2(); }
    const float &Generator_scalePDF() { return nt.Generator_scalePDF(); }
    const float &Generator_weight() { return nt.Generator_weight(); }
    const float &Generator_x1() { return nt.Generator_x1(); }
    const float &Generator_x2() { return nt.Generator_x2(); }
    const float &Generator_xpdf1() { return nt.Generator_xpdf1(); }
    const float &Generator_xpdf2() { return nt.Generator_xpdf2(); }
    const bool &HLT_AK4CaloJet100() { return nt.HLT_AK4CaloJet100(); }
    const bool &HLT_AK4CaloJet120() { return nt.HLT_AK4CaloJet120(); }
    const bool &HLT_AK4CaloJet30() { return nt.HLT_AK4CaloJet30(); }
    const bool &HLT_AK4CaloJet40() { return nt.HLT_AK4CaloJet40(); }
    const bool &HLT_AK4CaloJet50() { return nt.HLT_AK4CaloJet50(); }
    const bool &HLT_AK4CaloJet80() { return nt.HLT_AK4CaloJet80(); }
    const bool &HLT_AK4PFJet100() { return nt.HLT_AK4PFJet100(); }
    const bool &HLT_AK4PFJet120() { return nt.HLT_AK4PFJet120(); }
    const bool &HLT_AK4PFJet30() { return nt.HLT_AK4PFJet30(); }
    const bool &HLT_AK4PFJet50() { return nt.HLT_AK4PFJet50(); }
    const bool &HLT_AK4PFJet80() { return nt.HLT_AK4PFJet80(); }
    const bool &HLT_AK8PFHT750_TrimMass50() { return nt.HLT_AK8PFHT750_TrimMass50(); }
    const bool &HLT_AK8PFHT800_TrimMass50() { return nt.HLT_AK8PFHT800_TrimMass50(); }
    const bool &HLT_AK8PFHT850_TrimMass50() { return nt.HLT_AK8PFHT850_TrimMass50(); }
    const bool &HLT_AK8PFHT900_TrimMass50() { return nt.HLT_AK8PFHT900_TrimMass50(); }
    const bool &HLT_AK8PFJet140() { return nt.HLT_AK8PFJet140(); }
    const bool &HLT_AK8PFJet200() { return nt.HLT_AK8PFJet200(); }
    const bool &HLT_AK8PFJet260() { return nt.HLT_AK8PFJet260(); }
    const bool &HLT_AK8PFJet320() { return nt.HLT_AK8PFJet320(); }
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p1() { return nt.HLT_AK8PFJet330_PFAK8BTagCSV_p1(); }
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p17() { return nt.HLT_AK8PFJet330_PFAK8BTagCSV_p17(); }
    const bool &HLT_AK8PFJet360_TrimMass30() { return nt.HLT_AK8PFJet360_TrimMass30(); }
    const bool &HLT_AK8PFJet380_TrimMass30() { return nt.HLT_AK8PFJet380_TrimMass30(); }
    const bool &HLT_AK8PFJet40() { return nt.HLT_AK8PFJet40(); }
    const bool &HLT_AK8PFJet400() { return nt.HLT_AK8PFJet400(); }
    const bool &HLT_AK8PFJet400_TrimMass30() { return nt.HLT_AK8PFJet400_TrimMass30(); }
    const bool &HLT_AK8PFJet420_TrimMass30() { return nt.HLT_AK8PFJet420_TrimMass30(); }
    const bool &HLT_AK8PFJet450() { return nt.HLT_AK8PFJet450(); }
    const bool &HLT_AK8PFJet500() { return nt.HLT_AK8PFJet500(); }
    const bool &HLT_AK8PFJet550() { return nt.HLT_AK8PFJet550(); }
    const bool &HLT_AK8PFJet60() { return nt.HLT_AK8PFJet60(); }
    const bool &HLT_AK8PFJet80() { return nt.HLT_AK8PFJet80(); }
    const bool &HLT_AK8PFJetFwd140() { return nt.HLT_AK8PFJetFwd140(); }
    const bool &HLT_AK8PFJetFwd200() { return nt.HLT_AK8PFJetFwd200(); }
    const bool &HLT_AK8PFJetFwd260() { return nt.HLT_AK8PFJetFwd260(); }
    const bool &HLT_AK8PFJetFwd320() { return nt.HLT_AK8PFJetFwd320(); }
    const bool &HLT_AK8PFJetFwd40() { return nt.HLT_AK8PFJetFwd40(); }
    const bool &HLT_AK8PFJetFwd400() { return nt.HLT_AK8PFJetFwd400(); }
    const bool &HLT_AK8PFJetFwd450() { return nt.HLT_AK8PFJetFwd450(); }
    const bool &HLT_AK8PFJetFwd500() { return nt.HLT_AK8PFJetFwd500(); }
    const bool &HLT_AK8PFJetFwd60() { return nt.HLT_AK8PFJetFwd60(); }
    const bool &HLT_AK8PFJetFwd80() { return nt.HLT_AK8PFJetFwd80(); }
    const bool &HLT_BTagMu_AK4DiJet110_Mu5() { return nt.HLT_BTagMu_AK4DiJet110_Mu5(); }
    const bool &HLT_BTagMu_AK4DiJet170_Mu5() { return nt.HLT_BTagMu_AK4DiJet170_Mu5(); }
    const bool &HLT_BTagMu_AK4DiJet20_Mu5() { return nt.HLT_BTagMu_AK4DiJet20_Mu5(); }
    const bool &HLT_BTagMu_AK4DiJet40_Mu5() { return nt.HLT_BTagMu_AK4DiJet40_Mu5(); }
    const bool &HLT_BTagMu_AK4DiJet70_Mu5() { return nt.HLT_BTagMu_AK4DiJet70_Mu5(); }
    const bool &HLT_BTagMu_AK4Jet300_Mu5() { return nt.HLT_BTagMu_AK4Jet300_Mu5(); }
    const bool &HLT_BTagMu_AK8DiJet170_Mu5() { return nt.HLT_BTagMu_AK8DiJet170_Mu5(); }
    const bool &HLT_BTagMu_AK8Jet300_Mu5() { return nt.HLT_BTagMu_AK8Jet300_Mu5(); }
    const bool &HLT_CaloJet500_NoJetID() { return nt.HLT_CaloJet500_NoJetID(); }
    const bool &HLT_CaloJet550_NoJetID() { return nt.HLT_CaloJet550_NoJetID(); }
    const bool &HLT_CaloMET100_HBHECleaned() { return nt.HLT_CaloMET100_HBHECleaned(); }
    const bool &HLT_CaloMET100_NotCleaned() { return nt.HLT_CaloMET100_NotCleaned(); }
    const bool &HLT_CaloMET110_NotCleaned() { return nt.HLT_CaloMET110_NotCleaned(); }
    const bool &HLT_CaloMET250_HBHECleaned() { return nt.HLT_CaloMET250_HBHECleaned(); }
    const bool &HLT_CaloMET250_NotCleaned() { return nt.HLT_CaloMET250_NotCleaned(); }
    const bool &HLT_CaloMET300_HBHECleaned() { return nt.HLT_CaloMET300_HBHECleaned(); }
    const bool &HLT_CaloMET350_HBHECleaned() { return nt.HLT_CaloMET350_HBHECleaned(); }
    const bool &HLT_CaloMET70_HBHECleaned() { return nt.HLT_CaloMET70_HBHECleaned(); }
    const bool &HLT_CaloMET80_HBHECleaned() { return nt.HLT_CaloMET80_HBHECleaned(); }
    const bool &HLT_CaloMET80_NotCleaned() { return nt.HLT_CaloMET80_NotCleaned(); }
    const bool &HLT_CaloMET90_HBHECleaned() { return nt.HLT_CaloMET90_HBHECleaned(); }
    const bool &HLT_CaloMET90_NotCleaned() { return nt.HLT_CaloMET90_NotCleaned(); }
    const bool &HLT_CaloMHT90() { return nt.HLT_CaloMHT90(); }
    const bool &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG() { return nt.HLT_DiEle27_WPTightCaloOnly_L1DoubleEG(); }
    const bool &HLT_DiJet110_35_Mjj650_PFMET110() { return nt.HLT_DiJet110_35_Mjj650_PFMET110(); }
    const bool &HLT_DiJet110_35_Mjj650_PFMET120() { return nt.HLT_DiJet110_35_Mjj650_PFMET120(); }
    const bool &HLT_DiJet110_35_Mjj650_PFMET130() { return nt.HLT_DiJet110_35_Mjj650_PFMET130(); }
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL() { return nt.HLT_DiMu9_Ele9_CaloIdL_TrackIdL(); }
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ() { return nt.HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ(); }
    const bool &HLT_DiPFJet15_FBEta3_NoCaloMatched() { return nt.HLT_DiPFJet15_FBEta3_NoCaloMatched(); }
    const bool &HLT_DiPFJet15_NoCaloMatched() { return nt.HLT_DiPFJet15_NoCaloMatched(); }
    const bool &HLT_DiPFJet25_FBEta3_NoCaloMatched() { return nt.HLT_DiPFJet25_FBEta3_NoCaloMatched(); }
    const bool &HLT_DiPFJet25_NoCaloMatched() { return nt.HLT_DiPFJet25_NoCaloMatched(); }
    const bool &HLT_DiPFJetAve100_HFJEC() { return nt.HLT_DiPFJetAve100_HFJEC(); }
    const bool &HLT_DiPFJetAve140() { return nt.HLT_DiPFJetAve140(); }
    const bool &HLT_DiPFJetAve15_HFJEC() { return nt.HLT_DiPFJetAve15_HFJEC(); }
    const bool &HLT_DiPFJetAve160_HFJEC() { return nt.HLT_DiPFJetAve160_HFJEC(); }
    const bool &HLT_DiPFJetAve200() { return nt.HLT_DiPFJetAve200(); }
    const bool &HLT_DiPFJetAve220_HFJEC() { return nt.HLT_DiPFJetAve220_HFJEC(); }
    const bool &HLT_DiPFJetAve25_HFJEC() { return nt.HLT_DiPFJetAve25_HFJEC(); }
    const bool &HLT_DiPFJetAve260() { return nt.HLT_DiPFJetAve260(); }
    const bool &HLT_DiPFJetAve300_HFJEC() { return nt.HLT_DiPFJetAve300_HFJEC(); }
    const bool &HLT_DiPFJetAve320() { return nt.HLT_DiPFJetAve320(); }
    const bool &HLT_DiPFJetAve35_HFJEC() { return nt.HLT_DiPFJetAve35_HFJEC(); }
    const bool &HLT_DiPFJetAve40() { return nt.HLT_DiPFJetAve40(); }
    const bool &HLT_DiPFJetAve400() { return nt.HLT_DiPFJetAve400(); }
    const bool &HLT_DiPFJetAve500() { return nt.HLT_DiPFJetAve500(); }
    const bool &HLT_DiPFJetAve60() { return nt.HLT_DiPFJetAve60(); }
    const bool &HLT_DiPFJetAve60_HFJEC() { return nt.HLT_DiPFJetAve60_HFJEC(); }
    const bool &HLT_DiPFJetAve80() { return nt.HLT_DiPFJetAve80(); }
    const bool &HLT_DiPFJetAve80_HFJEC() { return nt.HLT_DiPFJetAve80_HFJEC(); }
    const bool &HLT_DiSC30_18_EIso_AND_HE_Mass70() { return nt.HLT_DiSC30_18_EIso_AND_HE_Mass70(); }
    const bool &HLT_Dimuon0_Jpsi() { return nt.HLT_Dimuon0_Jpsi(); }
    const bool &HLT_Dimuon0_Jpsi3p5_Muon2() { return nt.HLT_Dimuon0_Jpsi3p5_Muon2(); }
    const bool &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R() { return nt.HLT_Dimuon0_Jpsi_L1_4R_0er1p5R(); }
    const bool &HLT_Dimuon0_Jpsi_L1_NoOS() { return nt.HLT_Dimuon0_Jpsi_L1_NoOS(); }
    const bool &HLT_Dimuon0_Jpsi_NoVertexing() { return nt.HLT_Dimuon0_Jpsi_NoVertexing(); }
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R() { return nt.HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R(); }
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_NoOS() { return nt.HLT_Dimuon0_Jpsi_NoVertexing_NoOS(); }
    const bool &HLT_Dimuon0_LowMass() { return nt.HLT_Dimuon0_LowMass(); }
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5() { return nt.HLT_Dimuon0_LowMass_L1_0er1p5(); }
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5R() { return nt.HLT_Dimuon0_LowMass_L1_0er1p5R(); }
    const bool &HLT_Dimuon0_LowMass_L1_4() { return nt.HLT_Dimuon0_LowMass_L1_4(); }
    const bool &HLT_Dimuon0_LowMass_L1_4R() { return nt.HLT_Dimuon0_LowMass_L1_4R(); }
    const bool &HLT_Dimuon0_LowMass_L1_TM530() { return nt.HLT_Dimuon0_LowMass_L1_TM530(); }
    const bool &HLT_Dimuon0_Upsilon_L1_4p5() { return nt.HLT_Dimuon0_Upsilon_L1_4p5(); }
    const bool &HLT_Dimuon0_Upsilon_L1_4p5NoOS() { return nt.HLT_Dimuon0_Upsilon_L1_4p5NoOS(); }
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0() { return nt.HLT_Dimuon0_Upsilon_L1_4p5er2p0(); }
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0M() { return nt.HLT_Dimuon0_Upsilon_L1_4p5er2p0M(); }
    const bool &HLT_Dimuon0_Upsilon_L1_5() { return nt.HLT_Dimuon0_Upsilon_L1_5(); }
    const bool &HLT_Dimuon0_Upsilon_L1_5M() { return nt.HLT_Dimuon0_Upsilon_L1_5M(); }
    const bool &HLT_Dimuon0_Upsilon_Muon_L1_TM0() { return nt.HLT_Dimuon0_Upsilon_Muon_L1_TM0(); }
    const bool &HLT_Dimuon0_Upsilon_Muon_NoL1Mass() { return nt.HLT_Dimuon0_Upsilon_Muon_NoL1Mass(); }
    const bool &HLT_Dimuon0_Upsilon_NoVertexing() { return nt.HLT_Dimuon0_Upsilon_NoVertexing(); }
    const bool &HLT_Dimuon10_PsiPrime_Barrel_Seagulls() { return nt.HLT_Dimuon10_PsiPrime_Barrel_Seagulls(); }
    const bool &HLT_Dimuon10_Upsilon_Barrel_Seagulls() { return nt.HLT_Dimuon10_Upsilon_Barrel_Seagulls(); }
    const bool &HLT_Dimuon12_Upsilon_eta1p5() { return nt.HLT_Dimuon12_Upsilon_eta1p5(); }
    const bool &HLT_Dimuon14_Phi_Barrel_Seagulls() { return nt.HLT_Dimuon14_Phi_Barrel_Seagulls(); }
    const bool &HLT_Dimuon18_PsiPrime() { return nt.HLT_Dimuon18_PsiPrime(); }
    const bool &HLT_Dimuon18_PsiPrime_noCorrL1() { return nt.HLT_Dimuon18_PsiPrime_noCorrL1(); }
    const bool &HLT_Dimuon20_Jpsi_Barrel_Seagulls() { return nt.HLT_Dimuon20_Jpsi_Barrel_Seagulls(); }
    const bool &HLT_Dimuon24_Phi_noCorrL1() { return nt.HLT_Dimuon24_Phi_noCorrL1(); }
    const bool &HLT_Dimuon24_Upsilon_noCorrL1() { return nt.HLT_Dimuon24_Upsilon_noCorrL1(); }
    const bool &HLT_Dimuon25_Jpsi() { return nt.HLT_Dimuon25_Jpsi(); }
    const bool &HLT_Dimuon25_Jpsi_noCorrL1() { return nt.HLT_Dimuon25_Jpsi_noCorrL1(); }
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() { return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); }
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95() { return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95(); }
    const bool &HLT_DoubleEle24_eta2p1_WPTight_Gsf() { return nt.HLT_DoubleEle24_eta2p1_WPTight_Gsf(); }
    const bool &HLT_DoubleEle25_CaloIdL_MW() { return nt.HLT_DoubleEle25_CaloIdL_MW(); }
    const bool &HLT_DoubleEle27_CaloIdL_MW() { return nt.HLT_DoubleEle27_CaloIdL_MW(); }
    const bool &HLT_DoubleEle33_CaloIdL_MW() { return nt.HLT_DoubleEle33_CaloIdL_MW(); }
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350() { return nt.HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350(); }
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350() { return nt.HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350(); }
    const bool &HLT_DoubleIsoMu20_eta2p1() { return nt.HLT_DoubleIsoMu20_eta2p1(); }
    const bool &HLT_DoubleIsoMu24_eta2p1() { return nt.HLT_DoubleIsoMu24_eta2p1(); }
    const bool &HLT_DoubleL2Mu50() { return nt.HLT_DoubleL2Mu50(); }
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg() { return nt.HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg(); }
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg() { return nt.HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg(); }
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg() { return nt.HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg(); }
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg() { return nt.HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg(); }
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4() { return nt.HLT_DoubleMu20_7_Mass0to30_L1_DM4(); }
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG() { return nt.HLT_DoubleMu20_7_Mass0to30_L1_DM4EG(); }
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23() { return nt.HLT_DoubleMu20_7_Mass0to30_Photon23(); }
    const bool &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi() { return nt.HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi(); }
    const bool &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi() { return nt.HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi(); }
    const bool &HLT_DoubleMu3_DCA_PFMET50_PFMHT60() { return nt.HLT_DoubleMu3_DCA_PFMET50_PFMHT60(); }
    const bool &HLT_DoubleMu3_DZ_PFMET50_PFMHT60() { return nt.HLT_DoubleMu3_DZ_PFMET50_PFMHT60(); }
    const bool &HLT_DoubleMu3_DZ_PFMET70_PFMHT70() { return nt.HLT_DoubleMu3_DZ_PFMET70_PFMHT70(); }
    const bool &HLT_DoubleMu3_DZ_PFMET90_PFMHT90() { return nt.HLT_DoubleMu3_DZ_PFMET90_PFMHT90(); }
    const bool &HLT_DoubleMu3_Trk_Tau3mu() { return nt.HLT_DoubleMu3_Trk_Tau3mu(); }
    const bool &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass() { return nt.HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass(); }
    const bool &HLT_DoubleMu43NoFiltersNoVtx() { return nt.HLT_DoubleMu43NoFiltersNoVtx(); }
    const bool &HLT_DoubleMu48NoFiltersNoVtx() { return nt.HLT_DoubleMu48NoFiltersNoVtx(); }
    const bool &HLT_DoubleMu4_3_Bs() { return nt.HLT_DoubleMu4_3_Bs(); }
    const bool &HLT_DoubleMu4_3_Jpsi_Displaced() { return nt.HLT_DoubleMu4_3_Jpsi_Displaced(); }
    const bool &HLT_DoubleMu4_JpsiTrkTrk_Displaced() { return nt.HLT_DoubleMu4_JpsiTrkTrk_Displaced(); }
    const bool &HLT_DoubleMu4_JpsiTrk_Displaced() { return nt.HLT_DoubleMu4_JpsiTrk_Displaced(); }
    const bool &HLT_DoubleMu4_Jpsi_Displaced() { return nt.HLT_DoubleMu4_Jpsi_Displaced(); }
    const bool &HLT_DoubleMu4_Jpsi_NoVertexing() { return nt.HLT_DoubleMu4_Jpsi_NoVertexing(); }
    const bool &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced() { return nt.HLT_DoubleMu4_LowMassNonResonantTrk_Displaced(); }
    const bool &HLT_DoubleMu4_Mass8_DZ_PFHT350() { return nt.HLT_DoubleMu4_Mass8_DZ_PFHT350(); }
    const bool &HLT_DoubleMu4_PsiPrimeTrk_Displaced() { return nt.HLT_DoubleMu4_PsiPrimeTrk_Displaced(); }
    const bool &HLT_DoubleMu8_Mass8_PFHT350() { return nt.HLT_DoubleMu8_Mass8_PFHT350(); }
    const bool &HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets100_CaloBTagCSV_p33() { return nt.HLT_DoublePFJets100_CaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets200_CaloBTagCSV_p33() { return nt.HLT_DoublePFJets200_CaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets350_CaloBTagCSV_p33() { return nt.HLT_DoublePFJets350_CaloBTagCSV_p33(); }
    const bool &HLT_DoublePFJets40_CaloBTagCSV_p33() { return nt.HLT_DoublePFJets40_CaloBTagCSV_p33(); }
    const bool &HLT_DoublePhoton33_CaloIdL() { return nt.HLT_DoublePhoton33_CaloIdL(); }
    const bool &HLT_DoublePhoton70() { return nt.HLT_DoublePhoton70(); }
    const bool &HLT_DoublePhoton85() { return nt.HLT_DoublePhoton85(); }
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg() { return nt.HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg(); }
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg() { return nt.HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); }
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg() { return nt.HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg(); }
    const bool &HLT_ECALHT800() { return nt.HLT_ECALHT800(); }
    const bool &HLT_EcalCalibration() { return nt.HLT_EcalCalibration(); }
    const bool &HLT_Ele115_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele115_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30() { return nt.HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30(); }
    const bool &HLT_Ele135_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele135_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele145_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele145_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele15_IsoVVVL_PFHT450() { return nt.HLT_Ele15_IsoVVVL_PFHT450(); }
    const bool &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5() { return nt.HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5(); }
    const bool &HLT_Ele15_IsoVVVL_PFHT450_PFMET50() { return nt.HLT_Ele15_IsoVVVL_PFHT450_PFMET50(); }
    const bool &HLT_Ele15_IsoVVVL_PFHT600() { return nt.HLT_Ele15_IsoVVVL_PFHT600(); }
    const bool &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL() { return nt.HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL(); }
    const bool &HLT_Ele17_CaloIdM_TrackIdM_PFJet30() { return nt.HLT_Ele17_CaloIdM_TrackIdM_PFJet30(); }
    const bool &HLT_Ele200_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele200_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele20_WPLoose_Gsf() { return nt.HLT_Ele20_WPLoose_Gsf(); }
    const bool &HLT_Ele20_WPTight_Gsf() { return nt.HLT_Ele20_WPTight_Gsf(); }
    const bool &HLT_Ele20_eta2p1_WPLoose_Gsf() { return nt.HLT_Ele20_eta2p1_WPLoose_Gsf(); }
    const bool &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30() { return nt.HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30(); }
    const bool &HLT_Ele23_CaloIdM_TrackIdM_PFJet30() { return nt.HLT_Ele23_CaloIdM_TrackIdM_PFJet30(); }
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL() { return nt.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL(); }
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() { return nt.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1(); }
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1() { return nt.HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1(); }
    const bool &HLT_Ele250_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele250_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele27_Ele37_CaloIdL_MW() { return nt.HLT_Ele27_Ele37_CaloIdL_MW(); }
    const bool &HLT_Ele27_WPTight_Gsf() { return nt.HLT_Ele27_WPTight_Gsf(); }
    const bool &HLT_Ele28_HighEta_SC20_Mass55() { return nt.HLT_Ele28_HighEta_SC20_Mass55(); }
    const bool &HLT_Ele28_eta2p1_WPTight_Gsf_HT150() { return nt.HLT_Ele28_eta2p1_WPTight_Gsf_HT150(); }
    const bool &HLT_Ele300_CaloIdVT_GsfTrkIdT() { return nt.HLT_Ele300_CaloIdVT_GsfTrkIdT(); }
    const bool &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned() { return nt.HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned(); }
    const bool &HLT_Ele32_WPTight_Gsf() { return nt.HLT_Ele32_WPTight_Gsf(); }
    const bool &HLT_Ele32_WPTight_Gsf_L1DoubleEG() { return nt.HLT_Ele32_WPTight_Gsf_L1DoubleEG(); }
    const bool &HLT_Ele35_WPTight_Gsf() { return nt.HLT_Ele35_WPTight_Gsf(); }
    const bool &HLT_Ele35_WPTight_Gsf_L1EGMT() { return nt.HLT_Ele35_WPTight_Gsf_L1EGMT(); }
    const bool &HLT_Ele38_WPTight_Gsf() { return nt.HLT_Ele38_WPTight_Gsf(); }
    const bool &HLT_Ele40_WPTight_Gsf() { return nt.HLT_Ele40_WPTight_Gsf(); }
    const bool &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165() { return nt.HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165(); }
    const bool &HLT_Ele50_IsoVVVL_PFHT450() { return nt.HLT_Ele50_IsoVVVL_PFHT450(); }
    const bool &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30() { return nt.HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30(); }
    const bool &HLT_Ele8_CaloIdM_TrackIdM_PFJet30() { return nt.HLT_Ele8_CaloIdM_TrackIdM_PFJet30(); }
    const bool &HLT_FullTrack_Multiplicity100() { return nt.HLT_FullTrack_Multiplicity100(); }
    const bool &HLT_FullTrack_Multiplicity130() { return nt.HLT_FullTrack_Multiplicity130(); }
    const bool &HLT_FullTrack_Multiplicity155() { return nt.HLT_FullTrack_Multiplicity155(); }
    const bool &HLT_FullTrack_Multiplicity85() { return nt.HLT_FullTrack_Multiplicity85(); }
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton10_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton20_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton30_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton40_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton50_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton60_Eta3p1ForPPRef(); }
    const bool &HLT_HT300_Beamspot() { return nt.HLT_HT300_Beamspot(); }
    const bool &HLT_HT400_DisplacedDijet40_DisplacedTrack() { return nt.HLT_HT400_DisplacedDijet40_DisplacedTrack(); }
    const bool &HLT_HT425() { return nt.HLT_HT425(); }
    const bool &HLT_HT430_DisplacedDijet40_DisplacedTrack() { return nt.HLT_HT430_DisplacedDijet40_DisplacedTrack(); }
    const bool &HLT_HT430_DisplacedDijet60_DisplacedTrack() { return nt.HLT_HT430_DisplacedDijet60_DisplacedTrack(); }
    const bool &HLT_HT430_DisplacedDijet80_DisplacedTrack() { return nt.HLT_HT430_DisplacedDijet80_DisplacedTrack(); }
    const bool &HLT_HT450_Beamspot() { return nt.HLT_HT450_Beamspot(); }
    const bool &HLT_HT550_DisplacedDijet60_Inclusive() { return nt.HLT_HT550_DisplacedDijet60_Inclusive(); }
    const bool &HLT_HT550_DisplacedDijet80_Inclusive() { return nt.HLT_HT550_DisplacedDijet80_Inclusive(); }
    const bool &HLT_HT650_DisplacedDijet60_Inclusive() { return nt.HLT_HT650_DisplacedDijet60_Inclusive(); }
    const bool &HLT_HT650_DisplacedDijet80_Inclusive() { return nt.HLT_HT650_DisplacedDijet80_Inclusive(); }
    const bool &HLT_HT750_DisplacedDijet80_Inclusive() { return nt.HLT_HT750_DisplacedDijet80_Inclusive(); }
    const bool &HLT_HcalCalibration() { return nt.HLT_HcalCalibration(); }
    const bool &HLT_HcalIsolatedbunch() { return nt.HLT_HcalIsolatedbunch(); }
    const bool &HLT_HcalNZS() { return nt.HLT_HcalNZS(); }
    const bool &HLT_HcalPhiSym() { return nt.HLT_HcalPhiSym(); }
    const bool &HLT_IsoMu20() { return nt.HLT_IsoMu20(); }
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1() { return nt.HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1(); }
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1() { return nt.HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1(); }
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1() { return nt.HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1(); }
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1() { return nt.HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1(); }
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1() { return nt.HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1(); }
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1() { return nt.HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1(); }
    const bool &HLT_IsoMu24() { return nt.HLT_IsoMu24(); }
    const bool &HLT_IsoMu24_eta2p1() { return nt.HLT_IsoMu24_eta2p1(); }
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1() { return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr() { return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1() { return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1(); }
    const bool &HLT_IsoMu27() { return nt.HLT_IsoMu27(); }
    const bool &HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1() { return nt.HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1(); }
    const bool &HLT_IsoMu30() { return nt.HLT_IsoMu30(); }
    const bool &HLT_IsoTrackHB() { return nt.HLT_IsoTrackHB(); }
    const bool &HLT_IsoTrackHE() { return nt.HLT_IsoTrackHE(); }
    const bool &HLT_L1ETMHadSeeds() { return nt.HLT_L1ETMHadSeeds(); }
    const bool &HLT_L1MinimumBiasHF0OR() { return nt.HLT_L1MinimumBiasHF0OR(); }
    const bool &HLT_L1MinimumBiasHF_OR() { return nt.HLT_L1MinimumBiasHF_OR(); }
    const bool &HLT_L1NotBptxOR() { return nt.HLT_L1NotBptxOR(); }
    const bool &HLT_L1SingleMu18() { return nt.HLT_L1SingleMu18(); }
    const bool &HLT_L1SingleMu25() { return nt.HLT_L1SingleMu25(); }
    const bool &HLT_L1UnpairedBunchBptxMinus() { return nt.HLT_L1UnpairedBunchBptxMinus(); }
    const bool &HLT_L1UnpairedBunchBptxPlus() { return nt.HLT_L1UnpairedBunchBptxPlus(); }
    const bool &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142() { return nt.HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142(); }
    const bool &HLT_L1_DoubleJet30_Mass_Min400_Mu10() { return nt.HLT_L1_DoubleJet30_Mass_Min400_Mu10(); }
    const bool &HLT_L2Mu10() { return nt.HLT_L2Mu10(); }
    const bool &HLT_L2Mu10_NoVertex_NoBPTX() { return nt.HLT_L2Mu10_NoVertex_NoBPTX(); }
    const bool &HLT_L2Mu10_NoVertex_NoBPTX3BX() { return nt.HLT_L2Mu10_NoVertex_NoBPTX3BX(); }
    const bool &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX() { return nt.HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX(); }
    const bool &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX() { return nt.HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX(); }
    const bool &HLT_L2Mu50() { return nt.HLT_L2Mu50(); }
    const bool &HLT_MET105_IsoTrk50() { return nt.HLT_MET105_IsoTrk50(); }
    const bool &HLT_MET120_IsoTrk50() { return nt.HLT_MET120_IsoTrk50(); }
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1() { return nt.HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1(); }
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr() { return nt.HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130(); }
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90() { return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90(); }
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight() { return nt.HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight(); }
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight() { return nt.HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight(); }
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight() { return nt.HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight(); }
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight() { return nt.HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight(); }
    const bool &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60() { return nt.HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60(); }
    const bool &HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33() { return nt.HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33(); }
    const bool &HLT_Mu12_DoublePhoton20() { return nt.HLT_Mu12_DoublePhoton20(); }
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() { return nt.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(); }
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ() { return nt.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(); }
    const bool &HLT_Mu15_IsoVVVL_PFHT450() { return nt.HLT_Mu15_IsoVVVL_PFHT450(); }
    const bool &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5() { return nt.HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5(); }
    const bool &HLT_Mu15_IsoVVVL_PFHT450_PFMET50() { return nt.HLT_Mu15_IsoVVVL_PFHT450_PFMET50(); }
    const bool &HLT_Mu15_IsoVVVL_PFHT600() { return nt.HLT_Mu15_IsoVVVL_PFHT600(); }
    const bool &HLT_Mu17() { return nt.HLT_Mu17(); }
    const bool &HLT_Mu17_Photon30_IsoCaloId() { return nt.HLT_Mu17_Photon30_IsoCaloId(); }
    const bool &HLT_Mu17_TrkIsoVVL() { return nt.HLT_Mu17_TrkIsoVVL(); }
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL() { return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL(); }
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ() { return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ(); }
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8() { return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8(); }
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8() { return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8(); }
    const bool &HLT_Mu18_Mu9() { return nt.HLT_Mu18_Mu9(); }
    const bool &HLT_Mu18_Mu9_DZ() { return nt.HLT_Mu18_Mu9_DZ(); }
    const bool &HLT_Mu18_Mu9_SameSign() { return nt.HLT_Mu18_Mu9_SameSign(); }
    const bool &HLT_Mu18_Mu9_SameSign_DZ() { return nt.HLT_Mu18_Mu9_SameSign_DZ(); }
    const bool &HLT_Mu19() { return nt.HLT_Mu19(); }
    const bool &HLT_Mu19_TrkIsoVVL() { return nt.HLT_Mu19_TrkIsoVVL(); }
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL() { return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL(); }
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ() { return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ(); }
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8() { return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8(); }
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8() { return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8(); }
    const bool &HLT_Mu20() { return nt.HLT_Mu20(); }
    const bool &HLT_Mu20_Mu10() { return nt.HLT_Mu20_Mu10(); }
    const bool &HLT_Mu20_Mu10_DZ() { return nt.HLT_Mu20_Mu10_DZ(); }
    const bool &HLT_Mu20_Mu10_SameSign() { return nt.HLT_Mu20_Mu10_SameSign(); }
    const bool &HLT_Mu20_Mu10_SameSign_DZ() { return nt.HLT_Mu20_Mu10_SameSign_DZ(); }
    const bool &HLT_Mu20_TkMu0_Phi() { return nt.HLT_Mu20_TkMu0_Phi(); }
    const bool &HLT_Mu23_Mu12() { return nt.HLT_Mu23_Mu12(); }
    const bool &HLT_Mu23_Mu12_DZ() { return nt.HLT_Mu23_Mu12_DZ(); }
    const bool &HLT_Mu23_Mu12_SameSign() { return nt.HLT_Mu23_Mu12_SameSign(); }
    const bool &HLT_Mu23_Mu12_SameSign_DZ() { return nt.HLT_Mu23_Mu12_SameSign_DZ(); }
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL() { return nt.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL(); }
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ() { return nt.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(); }
    const bool &HLT_Mu25_TkMu0_Onia() { return nt.HLT_Mu25_TkMu0_Onia(); }
    const bool &HLT_Mu25_TkMu0_Phi() { return nt.HLT_Mu25_TkMu0_Phi(); }
    const bool &HLT_Mu27() { return nt.HLT_Mu27(); }
    const bool &HLT_Mu27_Ele37_CaloIdL_MW() { return nt.HLT_Mu27_Ele37_CaloIdL_MW(); }
    const bool &HLT_Mu30_TkMu0_Onia() { return nt.HLT_Mu30_TkMu0_Onia(); }
    const bool &HLT_Mu37_Ele27_CaloIdL_MW() { return nt.HLT_Mu37_Ele27_CaloIdL_MW(); }
    const bool &HLT_Mu37_TkMu27() { return nt.HLT_Mu37_TkMu27(); }
    const bool &HLT_Mu3_PFJet40() { return nt.HLT_Mu3_PFJet40(); }
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL() { return nt.HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL(); }
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL() { return nt.HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL(); }
    const bool &HLT_Mu50() { return nt.HLT_Mu50(); }
    const bool &HLT_Mu50_IsoVVVL_PFHT450() { return nt.HLT_Mu50_IsoVVVL_PFHT450(); }
    const bool &HLT_Mu55() { return nt.HLT_Mu55(); }
    const bool &HLT_Mu7p5_L2Mu2_Jpsi() { return nt.HLT_Mu7p5_L2Mu2_Jpsi(); }
    const bool &HLT_Mu7p5_L2Mu2_Upsilon() { return nt.HLT_Mu7p5_L2Mu2_Upsilon(); }
    const bool &HLT_Mu7p5_Track2_Jpsi() { return nt.HLT_Mu7p5_Track2_Jpsi(); }
    const bool &HLT_Mu7p5_Track2_Upsilon() { return nt.HLT_Mu7p5_Track2_Upsilon(); }
    const bool &HLT_Mu7p5_Track3p5_Jpsi() { return nt.HLT_Mu7p5_Track3p5_Jpsi(); }
    const bool &HLT_Mu7p5_Track3p5_Upsilon() { return nt.HLT_Mu7p5_Track3p5_Upsilon(); }
    const bool &HLT_Mu7p5_Track7_Jpsi() { return nt.HLT_Mu7p5_Track7_Jpsi(); }
    const bool &HLT_Mu7p5_Track7_Upsilon() { return nt.HLT_Mu7p5_Track7_Upsilon(); }
    const bool &HLT_Mu8() { return nt.HLT_Mu8(); }
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL() { return nt.HLT_Mu8_DiEle12_CaloIdL_TrackIdL(); }
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ() { return nt.HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ(); }
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350() { return nt.HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350(); }
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ() { return nt.HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ(); }
    const bool &HLT_Mu8_TrkIsoVVL() { return nt.HLT_Mu8_TrkIsoVVL(); }
    const bool &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60() { return nt.HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60(); }
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL() { return nt.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(); }
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ() { return nt.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(); }
    const bool &HLT_OldMu100() { return nt.HLT_OldMu100(); }
    const bool &HLT_PFHT1050() { return nt.HLT_PFHT1050(); }
    const bool &HLT_PFHT180() { return nt.HLT_PFHT180(); }
    const bool &HLT_PFHT250() { return nt.HLT_PFHT250(); }
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40() { return nt.HLT_PFHT300PT30_QuadPFJet_75_60_45_40(); }
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0() { return nt.HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0(); }
    const bool &HLT_PFHT350() { return nt.HLT_PFHT350(); }
    const bool &HLT_PFHT350MinPFJet15() { return nt.HLT_PFHT350MinPFJet15(); }
    const bool &HLT_PFHT370() { return nt.HLT_PFHT370(); }
    const bool &HLT_PFHT380_SixPFJet32() { return nt.HLT_PFHT380_SixPFJet32(); }
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2() { return nt.HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2(); }
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2() { return nt.HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2(); }
    const bool &HLT_PFHT430() { return nt.HLT_PFHT430(); }
    const bool &HLT_PFHT430_SixPFJet40() { return nt.HLT_PFHT430_SixPFJet40(); }
    const bool &HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5() { return nt.HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5(); }
    const bool &HLT_PFHT500_PFMET100_PFMHT100_IDTight() { return nt.HLT_PFHT500_PFMET100_PFMHT100_IDTight(); }
    const bool &HLT_PFHT500_PFMET110_PFMHT110_IDTight() { return nt.HLT_PFHT500_PFMET110_PFMHT110_IDTight(); }
    const bool &HLT_PFHT510() { return nt.HLT_PFHT510(); }
    const bool &HLT_PFHT590() { return nt.HLT_PFHT590(); }
    const bool &HLT_PFHT680() { return nt.HLT_PFHT680(); }
    const bool &HLT_PFHT700_PFMET85_PFMHT85_IDTight() { return nt.HLT_PFHT700_PFMET85_PFMHT85_IDTight(); }
    const bool &HLT_PFHT700_PFMET95_PFMHT95_IDTight() { return nt.HLT_PFHT700_PFMET95_PFMHT95_IDTight(); }
    const bool &HLT_PFHT780() { return nt.HLT_PFHT780(); }
    const bool &HLT_PFHT800_PFMET75_PFMHT75_IDTight() { return nt.HLT_PFHT800_PFMET75_PFMHT75_IDTight(); }
    const bool &HLT_PFHT800_PFMET85_PFMHT85_IDTight() { return nt.HLT_PFHT800_PFMET85_PFMHT85_IDTight(); }
    const bool &HLT_PFHT890() { return nt.HLT_PFHT890(); }
    const bool &HLT_PFJet140() { return nt.HLT_PFJet140(); }
    const bool &HLT_PFJet200() { return nt.HLT_PFJet200(); }
    const bool &HLT_PFJet260() { return nt.HLT_PFJet260(); }
    const bool &HLT_PFJet320() { return nt.HLT_PFJet320(); }
    const bool &HLT_PFJet40() { return nt.HLT_PFJet40(); }
    const bool &HLT_PFJet400() { return nt.HLT_PFJet400(); }
    const bool &HLT_PFJet450() { return nt.HLT_PFJet450(); }
    const bool &HLT_PFJet500() { return nt.HLT_PFJet500(); }
    const bool &HLT_PFJet550() { return nt.HLT_PFJet550(); }
    const bool &HLT_PFJet60() { return nt.HLT_PFJet60(); }
    const bool &HLT_PFJet80() { return nt.HLT_PFJet80(); }
    const bool &HLT_PFJetFwd140() { return nt.HLT_PFJetFwd140(); }
    const bool &HLT_PFJetFwd200() { return nt.HLT_PFJetFwd200(); }
    const bool &HLT_PFJetFwd260() { return nt.HLT_PFJetFwd260(); }
    const bool &HLT_PFJetFwd320() { return nt.HLT_PFJetFwd320(); }
    const bool &HLT_PFJetFwd40() { return nt.HLT_PFJetFwd40(); }
    const bool &HLT_PFJetFwd400() { return nt.HLT_PFJetFwd400(); }
    const bool &HLT_PFJetFwd450() { return nt.HLT_PFJetFwd450(); }
    const bool &HLT_PFJetFwd500() { return nt.HLT_PFJetFwd500(); }
    const bool &HLT_PFJetFwd60() { return nt.HLT_PFJetFwd60(); }
    const bool &HLT_PFJetFwd80() { return nt.HLT_PFJetFwd80(); }
    const bool &HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1() { return nt.HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1(); }
    const bool &HLT_PFMET100_PFMHT100_IDTight_PFHT60() { return nt.HLT_PFMET100_PFMHT100_IDTight_PFHT60(); }
    const bool &HLT_PFMET110_PFMHT110_IDTight() { return nt.HLT_PFMET110_PFMHT110_IDTight(); }
    const bool &HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1() { return nt.HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1(); }
    const bool &HLT_PFMET120_PFMHT120_IDTight() { return nt.HLT_PFMET120_PFMHT120_IDTight(); }
    const bool &HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1() { return nt.HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1(); }
    const bool &HLT_PFMET120_PFMHT120_IDTight_PFHT60() { return nt.HLT_PFMET120_PFMHT120_IDTight_PFHT60(); }
    const bool &HLT_PFMET130_PFMHT130_IDTight() { return nt.HLT_PFMET130_PFMHT130_IDTight(); }
    const bool &HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1() { return nt.HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1(); }
    const bool &HLT_PFMET140_PFMHT140_IDTight() { return nt.HLT_PFMET140_PFMHT140_IDTight(); }
    const bool &HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1() { return nt.HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1(); }
    const bool &HLT_PFMET200_HBHECleaned() { return nt.HLT_PFMET200_HBHECleaned(); }
    const bool &HLT_PFMET200_HBHE_BeamHaloCleaned() { return nt.HLT_PFMET200_HBHE_BeamHaloCleaned(); }
    const bool &HLT_PFMET200_NotCleaned() { return nt.HLT_PFMET200_NotCleaned(); }
    const bool &HLT_PFMET250_HBHECleaned() { return nt.HLT_PFMET250_HBHECleaned(); }
    const bool &HLT_PFMET300_HBHECleaned() { return nt.HLT_PFMET300_HBHECleaned(); }
    const bool &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60() { return nt.HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60(); }
    const bool &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight() { return nt.HLT_PFMETNoMu110_PFMHTNoMu110_IDTight(); }
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight() { return nt.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight(); }
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60() { return nt.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60(); }
    const bool &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight() { return nt.HLT_PFMETNoMu130_PFMHTNoMu130_IDTight(); }
    const bool &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight() { return nt.HLT_PFMETNoMu140_PFMHTNoMu140_IDTight(); }
    const bool &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60() { return nt.HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60(); }
    const bool &HLT_PFMETTypeOne110_PFMHT110_IDTight() { return nt.HLT_PFMETTypeOne110_PFMHT110_IDTight(); }
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight() { return nt.HLT_PFMETTypeOne120_PFMHT120_IDTight(); }
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60() { return nt.HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60(); }
    const bool &HLT_PFMETTypeOne130_PFMHT130_IDTight() { return nt.HLT_PFMETTypeOne130_PFMHT130_IDTight(); }
    const bool &HLT_PFMETTypeOne140_PFMHT140_IDTight() { return nt.HLT_PFMETTypeOne140_PFMHT140_IDTight(); }
    const bool &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned() { return nt.HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned(); }
    const bool &HLT_Photon120() { return nt.HLT_Photon120(); }
    const bool &HLT_Photon120_R9Id90_HE10_IsoM() { return nt.HLT_Photon120_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon150() { return nt.HLT_Photon150(); }
    const bool &HLT_Photon165_R9Id90_HE10_IsoM() { return nt.HLT_Photon165_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon175() { return nt.HLT_Photon175(); }
    const bool &HLT_Photon200() { return nt.HLT_Photon200(); }
    const bool &HLT_Photon20_HoverELoose() { return nt.HLT_Photon20_HoverELoose(); }
    const bool &HLT_Photon25() { return nt.HLT_Photon25(); }
    const bool &HLT_Photon300_NoHE() { return nt.HLT_Photon300_NoHE(); }
    const bool &HLT_Photon30_HoverELoose() { return nt.HLT_Photon30_HoverELoose(); }
    const bool &HLT_Photon33() { return nt.HLT_Photon33(); }
    const bool &HLT_Photon40_HoverELoose() { return nt.HLT_Photon40_HoverELoose(); }
    const bool &HLT_Photon50() { return nt.HLT_Photon50(); }
    const bool &HLT_Photon50_HoverELoose() { return nt.HLT_Photon50_HoverELoose(); }
    const bool &HLT_Photon50_R9Id90_HE10_IsoM() { return nt.HLT_Photon50_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50() { return nt.HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50(); }
    const bool &HLT_Photon60_HoverELoose() { return nt.HLT_Photon60_HoverELoose(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15(); }
    const bool &HLT_Photon75() { return nt.HLT_Photon75(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM() { return nt.HLT_Photon75_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3(); }
    const bool &HLT_Photon90() { return nt.HLT_Photon90(); }
    const bool &HLT_Photon90_CaloIdL_PFHT700() { return nt.HLT_Photon90_CaloIdL_PFHT700(); }
    const bool &HLT_Photon90_R9Id90_HE10_IsoM() { return nt.HLT_Photon90_R9Id90_HE10_IsoM(); }
    const bool &HLT_Physics() { return nt.HLT_Physics(); }
    const bool &HLT_Physics_part0() { return nt.HLT_Physics_part0(); }
    const bool &HLT_Physics_part1() { return nt.HLT_Physics_part1(); }
    const bool &HLT_Physics_part2() { return nt.HLT_Physics_part2(); }
    const bool &HLT_Physics_part3() { return nt.HLT_Physics_part3(); }
    const bool &HLT_Physics_part4() { return nt.HLT_Physics_part4(); }
    const bool &HLT_Physics_part5() { return nt.HLT_Physics_part5(); }
    const bool &HLT_Physics_part6() { return nt.HLT_Physics_part6(); }
    const bool &HLT_Physics_part7() { return nt.HLT_Physics_part7(); }
    const bool &HLT_QuadPFJet103_88_75_15() { return nt.HLT_QuadPFJet103_88_75_15(); }
    const bool &HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2() { return nt.HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2(); }
    const bool &HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1() { return nt.HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1(); }
    const bool &HLT_QuadPFJet105_88_76_15() { return nt.HLT_QuadPFJet105_88_76_15(); }
    const bool &HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2() { return nt.HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2(); }
    const bool &HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1() { return nt.HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1(); }
    const bool &HLT_QuadPFJet111_90_80_15() { return nt.HLT_QuadPFJet111_90_80_15(); }
    const bool &HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2() { return nt.HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2(); }
    const bool &HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1() { return nt.HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1(); }
    const bool &HLT_QuadPFJet98_83_71_15() { return nt.HLT_QuadPFJet98_83_71_15(); }
    const bool &HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2() { return nt.HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2(); }
    const bool &HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1() { return nt.HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1(); }
    const bool &HLT_Random() { return nt.HLT_Random(); }
    const bool &HLT_Rsq0p35() { return nt.HLT_Rsq0p35(); }
    const bool &HLT_Rsq0p40() { return nt.HLT_Rsq0p40(); }
    const bool &HLT_RsqMR300_Rsq0p09_MR200() { return nt.HLT_RsqMR300_Rsq0p09_MR200(); }
    const bool &HLT_RsqMR300_Rsq0p09_MR200_4jet() { return nt.HLT_RsqMR300_Rsq0p09_MR200_4jet(); }
    const bool &HLT_RsqMR320_Rsq0p09_MR200() { return nt.HLT_RsqMR320_Rsq0p09_MR200(); }
    const bool &HLT_RsqMR320_Rsq0p09_MR200_4jet() { return nt.HLT_RsqMR320_Rsq0p09_MR200_4jet(); }
    const bool &HLT_SingleJet30_Mu12_SinglePFJet40() { return nt.HLT_SingleJet30_Mu12_SinglePFJet40(); }
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15() { return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15(); }
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1() { return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1(); }
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15() { return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15(); }
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1() { return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1(); }
    const bool &HLT_TkMu100() { return nt.HLT_TkMu100(); }
    const bool &HLT_Trimuon5_3p5_2_Upsilon_Muon() { return nt.HLT_Trimuon5_3p5_2_Upsilon_Muon(); }
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET110() { return nt.HLT_TripleJet110_35_35_Mjj650_PFMET110(); }
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET120() { return nt.HLT_TripleJet110_35_35_Mjj650_PFMET120(); }
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET130() { return nt.HLT_TripleJet110_35_35_Mjj650_PFMET130(); }
    const bool &HLT_TripleMu_10_5_5_DZ() { return nt.HLT_TripleMu_10_5_5_DZ(); }
    const bool &HLT_TripleMu_12_10_5() { return nt.HLT_TripleMu_12_10_5(); }
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DCA() { return nt.HLT_TripleMu_5_3_3_Mass3p8to60_DCA(); }
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DZ() { return nt.HLT_TripleMu_5_3_3_Mass3p8to60_DZ(); }
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2() { return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2(); }
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL(); }
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2() { return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2(); }
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL(); }
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL(); }
    const bool &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx() { return nt.HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx(); }
    const bool &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx() { return nt.HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx(); }
    const bool &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx() { return nt.HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx(); }
    const bool &HLT_UncorrectedJetE30_NoBPTX() { return nt.HLT_UncorrectedJetE30_NoBPTX(); }
    const bool &HLT_UncorrectedJetE30_NoBPTX3BX() { return nt.HLT_UncorrectedJetE30_NoBPTX3BX(); }
    const bool &HLT_UncorrectedJetE60_NoBPTX3BX() { return nt.HLT_UncorrectedJetE60_NoBPTX3BX(); }
    const bool &HLT_UncorrectedJetE70_NoBPTX3BX() { return nt.HLT_UncorrectedJetE70_NoBPTX3BX(); }
    const bool &HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg() { return nt.HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg(); }
    const bool &HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg() { return nt.HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg(); }
    const bool &HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg() { return nt.HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg(); }
    const bool &HLT_ZeroBias() { return nt.HLT_ZeroBias(); }
    const bool &HLT_ZeroBias_FirstBXAfterTrain() { return nt.HLT_ZeroBias_FirstBXAfterTrain(); }
    const bool &HLT_ZeroBias_FirstCollisionAfterAbortGap() { return nt.HLT_ZeroBias_FirstCollisionAfterAbortGap(); }
    const bool &HLT_ZeroBias_FirstCollisionInTrain() { return nt.HLT_ZeroBias_FirstCollisionInTrain(); }
    const bool &HLT_ZeroBias_IsolatedBunches() { return nt.HLT_ZeroBias_IsolatedBunches(); }
    const bool &HLT_ZeroBias_LastCollisionInTrain() { return nt.HLT_ZeroBias_LastCollisionInTrain(); }
    const bool &HLT_ZeroBias_part0() { return nt.HLT_ZeroBias_part0(); }
    const bool &HLT_ZeroBias_part1() { return nt.HLT_ZeroBias_part1(); }
    const bool &HLT_ZeroBias_part2() { return nt.HLT_ZeroBias_part2(); }
    const bool &HLT_ZeroBias_part3() { return nt.HLT_ZeroBias_part3(); }
    const bool &HLT_ZeroBias_part4() { return nt.HLT_ZeroBias_part4(); }
    const bool &HLT_ZeroBias_part5() { return nt.HLT_ZeroBias_part5(); }
    const bool &HLT_ZeroBias_part6() { return nt.HLT_ZeroBias_part6(); }
    const bool &HLT_ZeroBias_part7() { return nt.HLT_ZeroBias_part7(); }
    const bool &HLTriggerFinalPath() { return nt.HLTriggerFinalPath(); }
    const bool &HLTriggerFirstPath() { return nt.HLTriggerFirstPath(); }
    const vector<float> &IsoTrack_dxy() { return nt.IsoTrack_dxy(); }
    const vector<float> &IsoTrack_dz() { return nt.IsoTrack_dz(); }
    const vector<float> &IsoTrack_eta() { return nt.IsoTrack_eta(); }
    const vector<bool> &IsoTrack_isHighPurityTrack() { return nt.IsoTrack_isHighPurityTrack(); }
    const vector<bool> &IsoTrack_isPFcand() { return nt.IsoTrack_isPFcand(); }
    const vector<float> &IsoTrack_miniPFRelIso_all() { return nt.IsoTrack_miniPFRelIso_all(); }
    const vector<float> &IsoTrack_miniPFRelIso_chg() { return nt.IsoTrack_miniPFRelIso_chg(); }
    const vector<int> &IsoTrack_pdgId() { return nt.IsoTrack_pdgId(); }
    const vector<float> &IsoTrack_pfRelIso03_all() { return nt.IsoTrack_pfRelIso03_all(); }
    const vector<float> &IsoTrack_pfRelIso03_chg() { return nt.IsoTrack_pfRelIso03_chg(); }
    const vector<float> &IsoTrack_phi() { return nt.IsoTrack_phi(); }
    const vector<float> &IsoTrack_pt() { return nt.IsoTrack_pt(); }
    const vector<float> &Jet_area() { return nt.Jet_area(); }
    const vector<float> &Jet_bReg() { return nt.Jet_bReg(); }
    const vector<float> &Jet_btagCMVA() { return nt.Jet_btagCMVA(); }
    const vector<float> &Jet_btagCSVV2() { return nt.Jet_btagCSVV2(); }
    const vector<float> &Jet_btagDeepB() { return nt.Jet_btagDeepB(); }
    const vector<float> &Jet_btagDeepC() { return nt.Jet_btagDeepC(); }
    const vector<float> &Jet_btagDeepFlavB() { return nt.Jet_btagDeepFlavB(); }
    const vector<float> &Jet_chEmEF() { return nt.Jet_chEmEF(); }
    const vector<float> &Jet_chHEF() { return nt.Jet_chHEF(); }
    const vector<UChar_t> &Jet_cleanmask() { return nt.Jet_cleanmask(); }
    const vector<int> &Jet_electronIdx1() { return nt.Jet_electronIdx1(); }
    const vector<int> &Jet_electronIdx2() { return nt.Jet_electronIdx2(); }
    const vector<float> &Jet_eta() { return nt.Jet_eta(); }
    const vector<int> &Jet_genJetIdx() { return nt.Jet_genJetIdx(); }
    const vector<int> &Jet_hadronFlavour() { return nt.Jet_hadronFlavour(); }
    const vector<int> &Jet_jetId() { return nt.Jet_jetId(); }
    const vector<float> &Jet_mass() { return nt.Jet_mass(); }
    const vector<int> &Jet_muonIdx1() { return nt.Jet_muonIdx1(); }
    const vector<int> &Jet_muonIdx2() { return nt.Jet_muonIdx2(); }
    const vector<int> &Jet_nConstituents() { return nt.Jet_nConstituents(); }
    const vector<int> &Jet_nElectrons() { return nt.Jet_nElectrons(); }
    const vector<int> &Jet_nMuons() { return nt.Jet_nMuons(); }
    const vector<float> &Jet_neEmEF() { return nt.Jet_neEmEF(); }
    const vector<float> &Jet_neHEF() { return nt.Jet_neHEF(); }
    const vector<LorentzVector> &Jet_p4() { return nt.Jet_p4(); }
    const vector<int> &Jet_partonFlavour() { return nt.Jet_partonFlavour(); }
    const vector<float> &Jet_phi() { return nt.Jet_phi(); }
    const vector<float> &Jet_pt() { return nt.Jet_pt(); }
    const vector<int> &Jet_puId() { return nt.Jet_puId(); }
    const vector<float> &Jet_qgl() { return nt.Jet_qgl(); }
    const vector<float> &Jet_rawFactor() { return nt.Jet_rawFactor(); }
    const bool &L1simulation_step() { return nt.L1simulation_step(); }
    const vector<float> &LHEPart_eta() { return nt.LHEPart_eta(); }
    const vector<float> &LHEPart_mass() { return nt.LHEPart_mass(); }
    const vector<LorentzVector> &LHEPart_p4() { return nt.LHEPart_p4(); }
    const vector<int> &LHEPart_pdgId() { return nt.LHEPart_pdgId(); }
    const vector<float> &LHEPart_phi() { return nt.LHEPart_phi(); }
    const vector<float> &LHEPart_pt() { return nt.LHEPart_pt(); }
    const vector<float> &LHEPdfWeight() { return nt.LHEPdfWeight(); }
    const vector<float> &LHEScaleWeight() { return nt.LHEScaleWeight(); }
    const float &LHEWeight_originalXWGTUP() { return nt.LHEWeight_originalXWGTUP(); }
    const float &LHE_HT() { return nt.LHE_HT(); }
    const float &LHE_HTIncoming() { return nt.LHE_HTIncoming(); }
    const UChar_t &LHE_Nb() { return nt.LHE_Nb(); }
    const UChar_t &LHE_Nc() { return nt.LHE_Nc(); }
    const UChar_t &LHE_Nglu() { return nt.LHE_Nglu(); }
    const UChar_t &LHE_Njets() { return nt.LHE_Njets(); }
    const UChar_t &LHE_NpLO() { return nt.LHE_NpLO(); }
    const UChar_t &LHE_NpNLO() { return nt.LHE_NpNLO(); }
    const UChar_t &LHE_Nuds() { return nt.LHE_Nuds(); }
    const float &LHE_Vpt() { return nt.LHE_Vpt(); }
    const float &MET_MetUnclustEnUpDeltaX() { return nt.MET_MetUnclustEnUpDeltaX(); }
    const float &MET_MetUnclustEnUpDeltaY() { return nt.MET_MetUnclustEnUpDeltaY(); }
    const float &MET_covXX() { return nt.MET_covXX(); }
    const float &MET_covXY() { return nt.MET_covXY(); }
    const float &MET_covYY() { return nt.MET_covYY(); }
    const float &MET_fiducialGenPhi() { return nt.MET_fiducialGenPhi(); }
    const float &MET_fiducialGenPt() { return nt.MET_fiducialGenPt(); }
    const float &MET_phi() { return nt.MET_phi(); }
    const float &MET_pt() { return nt.MET_pt(); }
    const float &MET_significance() { return nt.MET_significance(); }
    const float &MET_sumEt() { return nt.MET_sumEt(); }
    const vector<int> &Muon_charge() { return nt.Muon_charge(); }
    const vector<UChar_t> &Muon_cleanmask() { return nt.Muon_cleanmask(); }
    const vector<float> &Muon_dxy() { return nt.Muon_dxy(); }
    const vector<float> &Muon_dxyErr() { return nt.Muon_dxyErr(); }
    const vector<float> &Muon_dz() { return nt.Muon_dz(); }
    const vector<float> &Muon_dzErr() { return nt.Muon_dzErr(); }
    const vector<float> &Muon_eta() { return nt.Muon_eta(); }
    const vector<UChar_t> &Muon_genPartFlav() { return nt.Muon_genPartFlav(); }
    const vector<int> &Muon_genPartIdx() { return nt.Muon_genPartIdx(); }
    const vector<UChar_t> &Muon_highPtId() { return nt.Muon_highPtId(); }
    const vector<float> &Muon_ip3d() { return nt.Muon_ip3d(); }
    const vector<bool> &Muon_isPFcand() { return nt.Muon_isPFcand(); }
    const vector<int> &Muon_jetIdx() { return nt.Muon_jetIdx(); }
    const vector<float> &Muon_mass() { return nt.Muon_mass(); }
    const vector<bool> &Muon_mediumId() { return nt.Muon_mediumId(); }
    const vector<float> &Muon_miniPFRelIso_all() { return nt.Muon_miniPFRelIso_all(); }
    const vector<float> &Muon_miniPFRelIso_chg() { return nt.Muon_miniPFRelIso_chg(); }
    const vector<float> &Muon_mvaTTH() { return nt.Muon_mvaTTH(); }
    const vector<int> &Muon_nStations() { return nt.Muon_nStations(); }
    const vector<int> &Muon_nTrackerLayers() { return nt.Muon_nTrackerLayers(); }
    const vector<LorentzVector> &Muon_p4() { return nt.Muon_p4(); }
    const vector<int> &Muon_pdgId() { return nt.Muon_pdgId(); }
    const vector<float> &Muon_pfRelIso03_all() { return nt.Muon_pfRelIso03_all(); }
    const vector<float> &Muon_pfRelIso03_chg() { return nt.Muon_pfRelIso03_chg(); }
    const vector<float> &Muon_pfRelIso04_all() { return nt.Muon_pfRelIso04_all(); }
    const vector<float> &Muon_phi() { return nt.Muon_phi(); }
    const vector<float> &Muon_pt() { return nt.Muon_pt(); }
    const vector<float> &Muon_ptErr() { return nt.Muon_ptErr(); }
    const vector<float> &Muon_segmentComp() { return nt.Muon_segmentComp(); }
    const vector<float> &Muon_sip3d() { return nt.Muon_sip3d(); }
    const vector<bool> &Muon_softId() { return nt.Muon_softId(); }
    const vector<int> &Muon_tightCharge() { return nt.Muon_tightCharge(); }
    const vector<bool> &Muon_tightId() { return nt.Muon_tightId(); }
    const vector<float> &OtherPV_z() { return nt.OtherPV_z(); }
    const float &PV_chi2() { return nt.PV_chi2(); }
    const float &PV_ndof() { return nt.PV_ndof(); }
    const int &PV_npvs() { return nt.PV_npvs(); }
    const int &PV_npvsGood() { return nt.PV_npvsGood(); }
    const float &PV_score() { return nt.PV_score(); }
    const float &PV_x() { return nt.PV_x(); }
    const float &PV_y() { return nt.PV_y(); }
    const float &PV_z() { return nt.PV_z(); }
    const vector<int> &Photon_charge() { return nt.Photon_charge(); }
    const vector<UChar_t> &Photon_cleanmask() { return nt.Photon_cleanmask(); }
    const vector<int> &Photon_cutBasedBitmap() { return nt.Photon_cutBasedBitmap(); }
    const vector<float> &Photon_eCorr() { return nt.Photon_eCorr(); }
    const vector<int> &Photon_electronIdx() { return nt.Photon_electronIdx(); }
    const vector<bool> &Photon_electronVeto() { return nt.Photon_electronVeto(); }
    const vector<float> &Photon_energyErr() { return nt.Photon_energyErr(); }
    const vector<float> &Photon_eta() { return nt.Photon_eta(); }
    const vector<UChar_t> &Photon_genPartFlav() { return nt.Photon_genPartFlav(); }
    const vector<int> &Photon_genPartIdx() { return nt.Photon_genPartIdx(); }
    const vector<float> &Photon_hoe() { return nt.Photon_hoe(); }
    const vector<bool> &Photon_isScEtaEB() { return nt.Photon_isScEtaEB(); }
    const vector<bool> &Photon_isScEtaEE() { return nt.Photon_isScEtaEE(); }
    const vector<int> &Photon_jetIdx() { return nt.Photon_jetIdx(); }
    const vector<float> &Photon_mass() { return nt.Photon_mass(); }
    const vector<float> &Photon_mvaID() { return nt.Photon_mvaID(); }
    const vector<bool> &Photon_mvaID_WP80() { return nt.Photon_mvaID_WP80(); }
    const vector<bool> &Photon_mvaID_WP90() { return nt.Photon_mvaID_WP90(); }
    const vector<LorentzVector> &Photon_p4() { return nt.Photon_p4(); }
    const vector<int> &Photon_pdgId() { return nt.Photon_pdgId(); }
    const vector<float> &Photon_pfRelIso03_all() { return nt.Photon_pfRelIso03_all(); }
    const vector<float> &Photon_pfRelIso03_chg() { return nt.Photon_pfRelIso03_chg(); }
    const vector<float> &Photon_phi() { return nt.Photon_phi(); }
    const vector<bool> &Photon_pixelSeed() { return nt.Photon_pixelSeed(); }
    const vector<float> &Photon_pt() { return nt.Photon_pt(); }
    const vector<float> &Photon_r9() { return nt.Photon_r9(); }
    const vector<float> &Photon_sieie() { return nt.Photon_sieie(); }
    const vector<int> &Photon_vidNestedWPBitmap() { return nt.Photon_vidNestedWPBitmap(); }
    const int &Pileup_nPU() { return nt.Pileup_nPU(); }
    const float &Pileup_nTrueInt() { return nt.Pileup_nTrueInt(); }
    const int &Pileup_sumEOOT() { return nt.Pileup_sumEOOT(); }
    const int &Pileup_sumLOOT() { return nt.Pileup_sumLOOT(); }
    const float &PuppiMET_phi() { return nt.PuppiMET_phi(); }
    const float &PuppiMET_pt() { return nt.PuppiMET_pt(); }
    const float &PuppiMET_sumEt() { return nt.PuppiMET_sumEt(); }
    const float &RawMET_phi() { return nt.RawMET_phi(); }
    const float &RawMET_pt() { return nt.RawMET_pt(); }
    const float &RawMET_sumEt() { return nt.RawMET_sumEt(); }
    const vector<float> &SV_chi2() { return nt.SV_chi2(); }
    const vector<float> &SV_dlen() { return nt.SV_dlen(); }
    const vector<float> &SV_dlenSig() { return nt.SV_dlenSig(); }
    const vector<float> &SV_eta() { return nt.SV_eta(); }
    const vector<float> &SV_mass() { return nt.SV_mass(); }
    const vector<float> &SV_ndof() { return nt.SV_ndof(); }
    const vector<LorentzVector> &SV_p4() { return nt.SV_p4(); }
    const vector<float> &SV_pAngle() { return nt.SV_pAngle(); }
    const vector<float> &SV_phi() { return nt.SV_phi(); }
    const vector<float> &SV_pt() { return nt.SV_pt(); }
    const vector<float> &SV_x() { return nt.SV_x(); }
    const vector<float> &SV_y() { return nt.SV_y(); }
    const vector<float> &SV_z() { return nt.SV_z(); }
    const float &SoftActivityJetHT() { return nt.SoftActivityJetHT(); }
    const float &SoftActivityJetHT10() { return nt.SoftActivityJetHT10(); }
    const float &SoftActivityJetHT2() { return nt.SoftActivityJetHT2(); }
    const float &SoftActivityJetHT5() { return nt.SoftActivityJetHT5(); }
    const int &SoftActivityJetNjets10() { return nt.SoftActivityJetNjets10(); }
    const int &SoftActivityJetNjets2() { return nt.SoftActivityJetNjets2(); }
    const int &SoftActivityJetNjets5() { return nt.SoftActivityJetNjets5(); }
    const vector<float> &SoftActivityJet_eta() { return nt.SoftActivityJet_eta(); }
    const vector<float> &SoftActivityJet_phi() { return nt.SoftActivityJet_phi(); }
    const vector<float> &SoftActivityJet_pt() { return nt.SoftActivityJet_pt(); }
    const vector<float> &SubGenJetAK8_eta() { return nt.SubGenJetAK8_eta(); }
    const vector<float> &SubGenJetAK8_mass() { return nt.SubGenJetAK8_mass(); }
    const vector<LorentzVector> &SubGenJetAK8_p4() { return nt.SubGenJetAK8_p4(); }
    const vector<float> &SubGenJetAK8_phi() { return nt.SubGenJetAK8_phi(); }
    const vector<float> &SubGenJetAK8_pt() { return nt.SubGenJetAK8_pt(); }
    const vector<float> &SubJet_btagCMVA() { return nt.SubJet_btagCMVA(); }
    const vector<float> &SubJet_btagCSVV2() { return nt.SubJet_btagCSVV2(); }
    const vector<float> &SubJet_btagDeepB() { return nt.SubJet_btagDeepB(); }
    const vector<float> &SubJet_eta() { return nt.SubJet_eta(); }
    const vector<float> &SubJet_mass() { return nt.SubJet_mass(); }
    const vector<float> &SubJet_n2b1() { return nt.SubJet_n2b1(); }
    const vector<float> &SubJet_n3b1() { return nt.SubJet_n3b1(); }
    const vector<LorentzVector> &SubJet_p4() { return nt.SubJet_p4(); }
    const vector<float> &SubJet_phi() { return nt.SubJet_phi(); }
    const vector<float> &SubJet_pt() { return nt.SubJet_pt(); }
    const vector<float> &SubJet_tau1() { return nt.SubJet_tau1(); }
    const vector<float> &SubJet_tau2() { return nt.SubJet_tau2(); }
    const vector<float> &SubJet_tau3() { return nt.SubJet_tau3(); }
    const vector<float> &SubJet_tau4() { return nt.SubJet_tau4(); }
    const vector<int> &Tau_charge() { return nt.Tau_charge(); }
    const vector<float> &Tau_chargedIso() { return nt.Tau_chargedIso(); }
    const vector<UChar_t> &Tau_cleanmask() { return nt.Tau_cleanmask(); }
    const vector<int> &Tau_decayMode() { return nt.Tau_decayMode(); }
    const vector<float> &Tau_dxy() { return nt.Tau_dxy(); }
    const vector<float> &Tau_dz() { return nt.Tau_dz(); }
    const vector<float> &Tau_eta() { return nt.Tau_eta(); }
    const vector<UChar_t> &Tau_genPartFlav() { return nt.Tau_genPartFlav(); }
    const vector<int> &Tau_genPartIdx() { return nt.Tau_genPartIdx(); }
    const vector<UChar_t> &Tau_idAntiEle() { return nt.Tau_idAntiEle(); }
    const vector<UChar_t> &Tau_idAntiMu() { return nt.Tau_idAntiMu(); }
    const vector<bool> &Tau_idDecayMode() { return nt.Tau_idDecayMode(); }
    const vector<bool> &Tau_idDecayModeNewDMs() { return nt.Tau_idDecayModeNewDMs(); }
    const vector<UChar_t> &Tau_idMVAnewDM2017v2() { return nt.Tau_idMVAnewDM2017v2(); }
    const vector<UChar_t> &Tau_idMVAoldDM() { return nt.Tau_idMVAoldDM(); }
    const vector<UChar_t> &Tau_idMVAoldDM2017v1() { return nt.Tau_idMVAoldDM2017v1(); }
    const vector<UChar_t> &Tau_idMVAoldDM2017v2() { return nt.Tau_idMVAoldDM2017v2(); }
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2() { return nt.Tau_idMVAoldDMdR032017v2(); }
    const vector<int> &Tau_jetIdx() { return nt.Tau_jetIdx(); }
    const vector<float> &Tau_leadTkDeltaEta() { return nt.Tau_leadTkDeltaEta(); }
    const vector<float> &Tau_leadTkDeltaPhi() { return nt.Tau_leadTkDeltaPhi(); }
    const vector<float> &Tau_leadTkPtOverTauPt() { return nt.Tau_leadTkPtOverTauPt(); }
    const vector<float> &Tau_mass() { return nt.Tau_mass(); }
    const vector<float> &Tau_neutralIso() { return nt.Tau_neutralIso(); }
    const vector<LorentzVector> &Tau_p4() { return nt.Tau_p4(); }
    const vector<float> &Tau_phi() { return nt.Tau_phi(); }
    const vector<float> &Tau_photonsOutsideSignalCone() { return nt.Tau_photonsOutsideSignalCone(); }
    const vector<float> &Tau_pt() { return nt.Tau_pt(); }
    const vector<float> &Tau_puCorr() { return nt.Tau_puCorr(); }
    const vector<float> &Tau_rawAntiEle() { return nt.Tau_rawAntiEle(); }
    const vector<int> &Tau_rawAntiEleCat() { return nt.Tau_rawAntiEleCat(); }
    const vector<float> &Tau_rawIso() { return nt.Tau_rawIso(); }
    const vector<float> &Tau_rawIsodR03() { return nt.Tau_rawIsodR03(); }
    const vector<float> &Tau_rawMVAnewDM2017v2() { return nt.Tau_rawMVAnewDM2017v2(); }
    const vector<float> &Tau_rawMVAoldDM() { return nt.Tau_rawMVAoldDM(); }
    const vector<float> &Tau_rawMVAoldDM2017v1() { return nt.Tau_rawMVAoldDM2017v1(); }
    const vector<float> &Tau_rawMVAoldDM2017v2() { return nt.Tau_rawMVAoldDM2017v2(); }
    const vector<float> &Tau_rawMVAoldDMdR032017v2() { return nt.Tau_rawMVAoldDMdR032017v2(); }
    const float &TkMET_phi() { return nt.TkMET_phi(); }
    const float &TkMET_pt() { return nt.TkMET_pt(); }
    const float &TkMET_sumEt() { return nt.TkMET_sumEt(); }
    const vector<float> &TrigObj_eta() { return nt.TrigObj_eta(); }
    const vector<int> &TrigObj_filterBits() { return nt.TrigObj_filterBits(); }
    const vector<int> &TrigObj_id() { return nt.TrigObj_id(); }
    const vector<int> &TrigObj_l1charge() { return nt.TrigObj_l1charge(); }
    const vector<int> &TrigObj_l1iso() { return nt.TrigObj_l1iso(); }
    const vector<float> &TrigObj_l1pt() { return nt.TrigObj_l1pt(); }
    const vector<float> &TrigObj_l1pt_2() { return nt.TrigObj_l1pt_2(); }
    const vector<float> &TrigObj_l2pt() { return nt.TrigObj_l2pt(); }
    const vector<float> &TrigObj_phi() { return nt.TrigObj_phi(); }
    const vector<float> &TrigObj_pt() { return nt.TrigObj_pt(); }
    const ULong64_t &event() { return nt.event(); }
    const float &fixedGridRhoFastjetAll() { return nt.fixedGridRhoFastjetAll(); }
    const float &fixedGridRhoFastjetCentralCalo() { return nt.fixedGridRhoFastjetCentralCalo(); }
    const float &fixedGridRhoFastjetCentralNeutral() { return nt.fixedGridRhoFastjetCentralNeutral(); }
    const int &genTtbarId() { return nt.genTtbarId(); }
    const float &genWeight() { return nt.genWeight(); }
    const UInt_t &luminosityBlock() { return nt.luminosityBlock(); }
    const UInt_t &nElectron() { return nt.nElectron(); }
    const UInt_t &nFatJet() { return nt.nFatJet(); }
    const UInt_t &nGenDressedLepton() { return nt.nGenDressedLepton(); }
    const UInt_t &nGenJet() { return nt.nGenJet(); }
    const UInt_t &nGenJetAK8() { return nt.nGenJetAK8(); }
    const UInt_t &nGenPart() { return nt.nGenPart(); }
    const UInt_t &nGenVisTau() { return nt.nGenVisTau(); }
    const UInt_t &nIsoTrack() { return nt.nIsoTrack(); }
    const UInt_t &nJet() { return nt.nJet(); }
    const UInt_t &nLHEPart() { return nt.nLHEPart(); }
    const UInt_t &nLHEPdfWeight() { return nt.nLHEPdfWeight(); }
    const UInt_t &nLHEScaleWeight() { return nt.nLHEScaleWeight(); }
    const UInt_t &nMuon() { return nt.nMuon(); }
    const UInt_t &nOtherPV() { return nt.nOtherPV(); }
    const UInt_t &nPhoton() { return nt.nPhoton(); }
    const UInt_t &nSV() { return nt.nSV(); }
    const UInt_t &nSoftActivityJet() { return nt.nSoftActivityJet(); }
    const UInt_t &nSubGenJetAK8() { return nt.nSubGenJetAK8(); }
    const UInt_t &nSubJet() { return nt.nSubJet(); }
    const UInt_t &nTau() { return nt.nTau(); }
    const UInt_t &nTrigObj() { return nt.nTrigObj(); }
    const UInt_t &run() { return nt.run(); }
    vector<float> GetVF(const string &name) {
        if (name == "Electron_deltaEtaSC") return nt.Electron_deltaEtaSC();
        else if (name == "Electron_dr03EcalRecHitSumEt") return nt.Electron_dr03EcalRecHitSumEt();
        else if (name == "Electron_dr03HcalDepth1TowerSumEt") return nt.Electron_dr03HcalDepth1TowerSumEt();
        else if (name == "Electron_dr03TkSumPt") return nt.Electron_dr03TkSumPt();
        else if (name == "Electron_dxy") return nt.Electron_dxy();
        else if (name == "Electron_dxyErr") return nt.Electron_dxyErr();
        else if (name == "Electron_dz") return nt.Electron_dz();
        else if (name == "Electron_dzErr") return nt.Electron_dzErr();
        else if (name == "Electron_eCorr") return nt.Electron_eCorr();
        else if (name == "Electron_eInvMinusPInv") return nt.Electron_eInvMinusPInv();
        else if (name == "Electron_energyErr") return nt.Electron_energyErr();
        else if (name == "Electron_eta") return nt.Electron_eta();
        else if (name == "Electron_hoe") return nt.Electron_hoe();
        else if (name == "Electron_ip3d") return nt.Electron_ip3d();
        else if (name == "Electron_mass") return nt.Electron_mass();
        else if (name == "Electron_miniPFRelIso_all") return nt.Electron_miniPFRelIso_all();
        else if (name == "Electron_miniPFRelIso_chg") return nt.Electron_miniPFRelIso_chg();
        else if (name == "Electron_mvaFall17Iso") return nt.Electron_mvaFall17Iso();
        else if (name == "Electron_mvaFall17noIso") return nt.Electron_mvaFall17noIso();
        else if (name == "Electron_mvaTTH") return nt.Electron_mvaTTH();
        else if (name == "Electron_pfRelIso03_all") return nt.Electron_pfRelIso03_all();
        else if (name == "Electron_pfRelIso03_chg") return nt.Electron_pfRelIso03_chg();
        else if (name == "Electron_phi") return nt.Electron_phi();
        else if (name == "Electron_pt") return nt.Electron_pt();
        else if (name == "Electron_r9") return nt.Electron_r9();
        else if (name == "Electron_sieie") return nt.Electron_sieie();
        else if (name == "Electron_sip3d") return nt.Electron_sip3d();
        else if (name == "FatJet_area") return nt.FatJet_area();
        else if (name == "FatJet_btagCMVA") return nt.FatJet_btagCMVA();
        else if (name == "FatJet_btagCSVV2") return nt.FatJet_btagCSVV2();
        else if (name == "FatJet_btagDeepB") return nt.FatJet_btagDeepB();
        else if (name == "FatJet_btagHbb") return nt.FatJet_btagHbb();
        else if (name == "FatJet_eta") return nt.FatJet_eta();
        else if (name == "FatJet_mass") return nt.FatJet_mass();
        else if (name == "FatJet_msoftdrop") return nt.FatJet_msoftdrop();
        else if (name == "FatJet_n2b1") return nt.FatJet_n2b1();
        else if (name == "FatJet_n3b1") return nt.FatJet_n3b1();
        else if (name == "FatJet_phi") return nt.FatJet_phi();
        else if (name == "FatJet_pt") return nt.FatJet_pt();
        else if (name == "FatJet_tau1") return nt.FatJet_tau1();
        else if (name == "FatJet_tau2") return nt.FatJet_tau2();
        else if (name == "FatJet_tau3") return nt.FatJet_tau3();
        else if (name == "FatJet_tau4") return nt.FatJet_tau4();
        else if (name == "GenDressedLepton_eta") return nt.GenDressedLepton_eta();
        else if (name == "GenDressedLepton_mass") return nt.GenDressedLepton_mass();
        else if (name == "GenDressedLepton_phi") return nt.GenDressedLepton_phi();
        else if (name == "GenDressedLepton_pt") return nt.GenDressedLepton_pt();
        else if (name == "GenJetAK8_eta") return nt.GenJetAK8_eta();
        else if (name == "GenJetAK8_mass") return nt.GenJetAK8_mass();
        else if (name == "GenJetAK8_phi") return nt.GenJetAK8_phi();
        else if (name == "GenJetAK8_pt") return nt.GenJetAK8_pt();
        else if (name == "GenJet_eta") return nt.GenJet_eta();
        else if (name == "GenJet_mass") return nt.GenJet_mass();
        else if (name == "GenJet_phi") return nt.GenJet_phi();
        else if (name == "GenJet_pt") return nt.GenJet_pt();
        else if (name == "GenPart_eta") return nt.GenPart_eta();
        else if (name == "GenPart_mass") return nt.GenPart_mass();
        else if (name == "GenPart_phi") return nt.GenPart_phi();
        else if (name == "GenPart_pt") return nt.GenPart_pt();
        else if (name == "GenVisTau_eta") return nt.GenVisTau_eta();
        else if (name == "GenVisTau_mass") return nt.GenVisTau_mass();
        else if (name == "GenVisTau_phi") return nt.GenVisTau_phi();
        else if (name == "GenVisTau_pt") return nt.GenVisTau_pt();
        else if (name == "IsoTrack_dxy") return nt.IsoTrack_dxy();
        else if (name == "IsoTrack_dz") return nt.IsoTrack_dz();
        else if (name == "IsoTrack_eta") return nt.IsoTrack_eta();
        else if (name == "IsoTrack_miniPFRelIso_all") return nt.IsoTrack_miniPFRelIso_all();
        else if (name == "IsoTrack_miniPFRelIso_chg") return nt.IsoTrack_miniPFRelIso_chg();
        else if (name == "IsoTrack_pfRelIso03_all") return nt.IsoTrack_pfRelIso03_all();
        else if (name == "IsoTrack_pfRelIso03_chg") return nt.IsoTrack_pfRelIso03_chg();
        else if (name == "IsoTrack_phi") return nt.IsoTrack_phi();
        else if (name == "IsoTrack_pt") return nt.IsoTrack_pt();
        else if (name == "Jet_area") return nt.Jet_area();
        else if (name == "Jet_bReg") return nt.Jet_bReg();
        else if (name == "Jet_btagCMVA") return nt.Jet_btagCMVA();
        else if (name == "Jet_btagCSVV2") return nt.Jet_btagCSVV2();
        else if (name == "Jet_btagDeepB") return nt.Jet_btagDeepB();
        else if (name == "Jet_btagDeepC") return nt.Jet_btagDeepC();
        else if (name == "Jet_btagDeepFlavB") return nt.Jet_btagDeepFlavB();
        else if (name == "Jet_chEmEF") return nt.Jet_chEmEF();
        else if (name == "Jet_chHEF") return nt.Jet_chHEF();
        else if (name == "Jet_eta") return nt.Jet_eta();
        else if (name == "Jet_mass") return nt.Jet_mass();
        else if (name == "Jet_neEmEF") return nt.Jet_neEmEF();
        else if (name == "Jet_neHEF") return nt.Jet_neHEF();
        else if (name == "Jet_phi") return nt.Jet_phi();
        else if (name == "Jet_pt") return nt.Jet_pt();
        else if (name == "Jet_qgl") return nt.Jet_qgl();
        else if (name == "Jet_rawFactor") return nt.Jet_rawFactor();
        else if (name == "LHEPart_eta") return nt.LHEPart_eta();
        else if (name == "LHEPart_mass") return nt.LHEPart_mass();
        else if (name == "LHEPart_phi") return nt.LHEPart_phi();
        else if (name == "LHEPart_pt") return nt.LHEPart_pt();
        else if (name == "LHEPdfWeight") return nt.LHEPdfWeight();
        else if (name == "LHEScaleWeight") return nt.LHEScaleWeight();
        else if (name == "Muon_dxy") return nt.Muon_dxy();
        else if (name == "Muon_dxyErr") return nt.Muon_dxyErr();
        else if (name == "Muon_dz") return nt.Muon_dz();
        else if (name == "Muon_dzErr") return nt.Muon_dzErr();
        else if (name == "Muon_eta") return nt.Muon_eta();
        else if (name == "Muon_ip3d") return nt.Muon_ip3d();
        else if (name == "Muon_mass") return nt.Muon_mass();
        else if (name == "Muon_miniPFRelIso_all") return nt.Muon_miniPFRelIso_all();
        else if (name == "Muon_miniPFRelIso_chg") return nt.Muon_miniPFRelIso_chg();
        else if (name == "Muon_mvaTTH") return nt.Muon_mvaTTH();
        else if (name == "Muon_pfRelIso03_all") return nt.Muon_pfRelIso03_all();
        else if (name == "Muon_pfRelIso03_chg") return nt.Muon_pfRelIso03_chg();
        else if (name == "Muon_pfRelIso04_all") return nt.Muon_pfRelIso04_all();
        else if (name == "Muon_phi") return nt.Muon_phi();
        else if (name == "Muon_pt") return nt.Muon_pt();
        else if (name == "Muon_ptErr") return nt.Muon_ptErr();
        else if (name == "Muon_segmentComp") return nt.Muon_segmentComp();
        else if (name == "Muon_sip3d") return nt.Muon_sip3d();
        else if (name == "OtherPV_z") return nt.OtherPV_z();
        else if (name == "Photon_eCorr") return nt.Photon_eCorr();
        else if (name == "Photon_energyErr") return nt.Photon_energyErr();
        else if (name == "Photon_eta") return nt.Photon_eta();
        else if (name == "Photon_hoe") return nt.Photon_hoe();
        else if (name == "Photon_mass") return nt.Photon_mass();
        else if (name == "Photon_mvaID") return nt.Photon_mvaID();
        else if (name == "Photon_pfRelIso03_all") return nt.Photon_pfRelIso03_all();
        else if (name == "Photon_pfRelIso03_chg") return nt.Photon_pfRelIso03_chg();
        else if (name == "Photon_phi") return nt.Photon_phi();
        else if (name == "Photon_pt") return nt.Photon_pt();
        else if (name == "Photon_r9") return nt.Photon_r9();
        else if (name == "Photon_sieie") return nt.Photon_sieie();
        else if (name == "SV_chi2") return nt.SV_chi2();
        else if (name == "SV_dlen") return nt.SV_dlen();
        else if (name == "SV_dlenSig") return nt.SV_dlenSig();
        else if (name == "SV_eta") return nt.SV_eta();
        else if (name == "SV_mass") return nt.SV_mass();
        else if (name == "SV_ndof") return nt.SV_ndof();
        else if (name == "SV_pAngle") return nt.SV_pAngle();
        else if (name == "SV_phi") return nt.SV_phi();
        else if (name == "SV_pt") return nt.SV_pt();
        else if (name == "SV_x") return nt.SV_x();
        else if (name == "SV_y") return nt.SV_y();
        else if (name == "SV_z") return nt.SV_z();
        else if (name == "SoftActivityJet_eta") return nt.SoftActivityJet_eta();
        else if (name == "SoftActivityJet_phi") return nt.SoftActivityJet_phi();
        else if (name == "SoftActivityJet_pt") return nt.SoftActivityJet_pt();
        else if (name == "SubGenJetAK8_eta") return nt.SubGenJetAK8_eta();
        else if (name == "SubGenJetAK8_mass") return nt.SubGenJetAK8_mass();
        else if (name == "SubGenJetAK8_phi") return nt.SubGenJetAK8_phi();
        else if (name == "SubGenJetAK8_pt") return nt.SubGenJetAK8_pt();
        else if (name == "SubJet_btagCMVA") return nt.SubJet_btagCMVA();
        else if (name == "SubJet_btagCSVV2") return nt.SubJet_btagCSVV2();
        else if (name == "SubJet_btagDeepB") return nt.SubJet_btagDeepB();
        else if (name == "SubJet_eta") return nt.SubJet_eta();
        else if (name == "SubJet_mass") return nt.SubJet_mass();
        else if (name == "SubJet_n2b1") return nt.SubJet_n2b1();
        else if (name == "SubJet_n3b1") return nt.SubJet_n3b1();
        else if (name == "SubJet_phi") return nt.SubJet_phi();
        else if (name == "SubJet_pt") return nt.SubJet_pt();
        else if (name == "SubJet_tau1") return nt.SubJet_tau1();
        else if (name == "SubJet_tau2") return nt.SubJet_tau2();
        else if (name == "SubJet_tau3") return nt.SubJet_tau3();
        else if (name == "SubJet_tau4") return nt.SubJet_tau4();
        else if (name == "Tau_chargedIso") return nt.Tau_chargedIso();
        else if (name == "Tau_dxy") return nt.Tau_dxy();
        else if (name == "Tau_dz") return nt.Tau_dz();
        else if (name == "Tau_eta") return nt.Tau_eta();
        else if (name == "Tau_leadTkDeltaEta") return nt.Tau_leadTkDeltaEta();
        else if (name == "Tau_leadTkDeltaPhi") return nt.Tau_leadTkDeltaPhi();
        else if (name == "Tau_leadTkPtOverTauPt") return nt.Tau_leadTkPtOverTauPt();
        else if (name == "Tau_mass") return nt.Tau_mass();
        else if (name == "Tau_neutralIso") return nt.Tau_neutralIso();
        else if (name == "Tau_phi") return nt.Tau_phi();
        else if (name == "Tau_photonsOutsideSignalCone") return nt.Tau_photonsOutsideSignalCone();
        else if (name == "Tau_pt") return nt.Tau_pt();
        else if (name == "Tau_puCorr") return nt.Tau_puCorr();
        else if (name == "Tau_rawAntiEle") return nt.Tau_rawAntiEle();
        else if (name == "Tau_rawIso") return nt.Tau_rawIso();
        else if (name == "Tau_rawIsodR03") return nt.Tau_rawIsodR03();
        else if (name == "Tau_rawMVAnewDM2017v2") return nt.Tau_rawMVAnewDM2017v2();
        else if (name == "Tau_rawMVAoldDM") return nt.Tau_rawMVAoldDM();
        else if (name == "Tau_rawMVAoldDM2017v1") return nt.Tau_rawMVAoldDM2017v1();
        else if (name == "Tau_rawMVAoldDM2017v2") return nt.Tau_rawMVAoldDM2017v2();
        else if (name == "Tau_rawMVAoldDMdR032017v2") return nt.Tau_rawMVAoldDMdR032017v2();
        else if (name == "TrigObj_eta") return nt.TrigObj_eta();
        else if (name == "TrigObj_l1pt") return nt.TrigObj_l1pt();
        else if (name == "TrigObj_l1pt_2") return nt.TrigObj_l1pt_2();
        else if (name == "TrigObj_l2pt") return nt.TrigObj_l2pt();
        else if (name == "TrigObj_phi") return nt.TrigObj_phi();
        return vector<float>();
    }
    int GetI(const string &name) {
        if (name == "Generator_id1") return nt.Generator_id1();
        else if (name == "Generator_id2") return nt.Generator_id2();
        else if (name == "PV_npvs") return nt.PV_npvs();
        else if (name == "PV_npvsGood") return nt.PV_npvsGood();
        else if (name == "Pileup_nPU") return nt.Pileup_nPU();
        else if (name == "Pileup_sumEOOT") return nt.Pileup_sumEOOT();
        else if (name == "Pileup_sumLOOT") return nt.Pileup_sumLOOT();
        else if (name == "SoftActivityJetNjets10") return nt.SoftActivityJetNjets10();
        else if (name == "SoftActivityJetNjets2") return nt.SoftActivityJetNjets2();
        else if (name == "SoftActivityJetNjets5") return nt.SoftActivityJetNjets5();
        return int();
    }
    float GetF(const string &name) {
        if (name == "CaloMET_phi") return nt.CaloMET_phi();
        else if (name == "CaloMET_pt") return nt.CaloMET_pt();
        else if (name == "CaloMET_sumEt") return nt.CaloMET_sumEt();
        else if (name == "GenMET_phi") return nt.GenMET_phi();
        else if (name == "GenMET_pt") return nt.GenMET_pt();
        else if (name == "Generator_binvar") return nt.Generator_binvar();
        else if (name == "Generator_scalePDF") return nt.Generator_scalePDF();
        else if (name == "Generator_weight") return nt.Generator_weight();
        else if (name == "Generator_x1") return nt.Generator_x1();
        else if (name == "Generator_x2") return nt.Generator_x2();
        else if (name == "Generator_xpdf1") return nt.Generator_xpdf1();
        else if (name == "Generator_xpdf2") return nt.Generator_xpdf2();
        else if (name == "LHEWeight_originalXWGTUP") return nt.LHEWeight_originalXWGTUP();
        else if (name == "LHE_HT") return nt.LHE_HT();
        else if (name == "LHE_HTIncoming") return nt.LHE_HTIncoming();
        else if (name == "LHE_Vpt") return nt.LHE_Vpt();
        else if (name == "MET_MetUnclustEnUpDeltaX") return nt.MET_MetUnclustEnUpDeltaX();
        else if (name == "MET_MetUnclustEnUpDeltaY") return nt.MET_MetUnclustEnUpDeltaY();
        else if (name == "MET_covXX") return nt.MET_covXX();
        else if (name == "MET_covXY") return nt.MET_covXY();
        else if (name == "MET_covYY") return nt.MET_covYY();
        else if (name == "MET_fiducialGenPhi") return nt.MET_fiducialGenPhi();
        else if (name == "MET_fiducialGenPt") return nt.MET_fiducialGenPt();
        else if (name == "MET_phi") return nt.MET_phi();
        else if (name == "MET_pt") return nt.MET_pt();
        else if (name == "MET_significance") return nt.MET_significance();
        else if (name == "MET_sumEt") return nt.MET_sumEt();
        else if (name == "PV_chi2") return nt.PV_chi2();
        else if (name == "PV_ndof") return nt.PV_ndof();
        else if (name == "PV_score") return nt.PV_score();
        else if (name == "PV_x") return nt.PV_x();
        else if (name == "PV_y") return nt.PV_y();
        else if (name == "PV_z") return nt.PV_z();
        else if (name == "Pileup_nTrueInt") return nt.Pileup_nTrueInt();
        else if (name == "PuppiMET_phi") return nt.PuppiMET_phi();
        else if (name == "PuppiMET_pt") return nt.PuppiMET_pt();
        else if (name == "PuppiMET_sumEt") return nt.PuppiMET_sumEt();
        else if (name == "RawMET_phi") return nt.RawMET_phi();
        else if (name == "RawMET_pt") return nt.RawMET_pt();
        else if (name == "RawMET_sumEt") return nt.RawMET_sumEt();
        else if (name == "SoftActivityJetHT") return nt.SoftActivityJetHT();
        else if (name == "SoftActivityJetHT10") return nt.SoftActivityJetHT10();
        else if (name == "SoftActivityJetHT2") return nt.SoftActivityJetHT2();
        else if (name == "SoftActivityJetHT5") return nt.SoftActivityJetHT5();
        else if (name == "TkMET_phi") return nt.TkMET_phi();
        else if (name == "TkMET_pt") return nt.TkMET_pt();
        else if (name == "TkMET_sumEt") return nt.TkMET_sumEt();
        else if (name == "fixedGridRhoFastjetAll") return nt.fixedGridRhoFastjetAll();
        else if (name == "fixedGridRhoFastjetCentralCalo") return nt.fixedGridRhoFastjetCentralCalo();
        else if (name == "fixedGridRhoFastjetCentralNeutral") return nt.fixedGridRhoFastjetCentralNeutral();
        return float();
    }
    vector<int> GetVI(const string &name) {
        if (name == "Electron_charge") return nt.Electron_charge();
        else if (name == "Electron_cutBased") return nt.Electron_cutBased();
        else if (name == "Electron_genPartIdx") return nt.Electron_genPartIdx();
        else if (name == "Electron_jetIdx") return nt.Electron_jetIdx();
        else if (name == "Electron_pdgId") return nt.Electron_pdgId();
        else if (name == "Electron_photonIdx") return nt.Electron_photonIdx();
        else if (name == "Electron_tightCharge") return nt.Electron_tightCharge();
        else if (name == "Electron_vidNestedWPBitmap") return nt.Electron_vidNestedWPBitmap();
        else if (name == "FatJet_jetId") return nt.FatJet_jetId();
        else if (name == "FatJet_subJetIdx1") return nt.FatJet_subJetIdx1();
        else if (name == "FatJet_subJetIdx2") return nt.FatJet_subJetIdx2();
        else if (name == "GenDressedLepton_pdgId") return nt.GenDressedLepton_pdgId();
        else if (name == "GenJetAK8_partonFlavour") return nt.GenJetAK8_partonFlavour();
        else if (name == "GenJet_partonFlavour") return nt.GenJet_partonFlavour();
        else if (name == "GenPart_genPartIdxMother") return nt.GenPart_genPartIdxMother();
        else if (name == "GenPart_pdgId") return nt.GenPart_pdgId();
        else if (name == "GenPart_status") return nt.GenPart_status();
        else if (name == "GenPart_statusFlags") return nt.GenPart_statusFlags();
        else if (name == "GenVisTau_charge") return nt.GenVisTau_charge();
        else if (name == "GenVisTau_genPartIdxMother") return nt.GenVisTau_genPartIdxMother();
        else if (name == "GenVisTau_status") return nt.GenVisTau_status();
        else if (name == "IsoTrack_pdgId") return nt.IsoTrack_pdgId();
        else if (name == "Jet_electronIdx1") return nt.Jet_electronIdx1();
        else if (name == "Jet_electronIdx2") return nt.Jet_electronIdx2();
        else if (name == "Jet_genJetIdx") return nt.Jet_genJetIdx();
        else if (name == "Jet_hadronFlavour") return nt.Jet_hadronFlavour();
        else if (name == "Jet_jetId") return nt.Jet_jetId();
        else if (name == "Jet_muonIdx1") return nt.Jet_muonIdx1();
        else if (name == "Jet_muonIdx2") return nt.Jet_muonIdx2();
        else if (name == "Jet_nConstituents") return nt.Jet_nConstituents();
        else if (name == "Jet_nElectrons") return nt.Jet_nElectrons();
        else if (name == "Jet_nMuons") return nt.Jet_nMuons();
        else if (name == "Jet_partonFlavour") return nt.Jet_partonFlavour();
        else if (name == "Jet_puId") return nt.Jet_puId();
        else if (name == "LHEPart_pdgId") return nt.LHEPart_pdgId();
        else if (name == "Muon_charge") return nt.Muon_charge();
        else if (name == "Muon_genPartIdx") return nt.Muon_genPartIdx();
        else if (name == "Muon_jetIdx") return nt.Muon_jetIdx();
        else if (name == "Muon_nStations") return nt.Muon_nStations();
        else if (name == "Muon_nTrackerLayers") return nt.Muon_nTrackerLayers();
        else if (name == "Muon_pdgId") return nt.Muon_pdgId();
        else if (name == "Muon_tightCharge") return nt.Muon_tightCharge();
        else if (name == "Photon_charge") return nt.Photon_charge();
        else if (name == "Photon_cutBasedBitmap") return nt.Photon_cutBasedBitmap();
        else if (name == "Photon_electronIdx") return nt.Photon_electronIdx();
        else if (name == "Photon_genPartIdx") return nt.Photon_genPartIdx();
        else if (name == "Photon_jetIdx") return nt.Photon_jetIdx();
        else if (name == "Photon_pdgId") return nt.Photon_pdgId();
        else if (name == "Photon_vidNestedWPBitmap") return nt.Photon_vidNestedWPBitmap();
        else if (name == "Tau_charge") return nt.Tau_charge();
        else if (name == "Tau_decayMode") return nt.Tau_decayMode();
        else if (name == "Tau_genPartIdx") return nt.Tau_genPartIdx();
        else if (name == "Tau_jetIdx") return nt.Tau_jetIdx();
        else if (name == "Tau_rawAntiEleCat") return nt.Tau_rawAntiEleCat();
        else if (name == "TrigObj_filterBits") return nt.TrigObj_filterBits();
        else if (name == "TrigObj_id") return nt.TrigObj_id();
        else if (name == "TrigObj_l1charge") return nt.TrigObj_l1charge();
        return vector<int>();
    }
    vector<LorentzVector> GetVLV(const string &name) {
        if (name == "Electron_p4") return nt.Electron_p4();
        else if (name == "FatJet_p4") return nt.FatJet_p4();
        else if (name == "GenDressedLepton_p4") return nt.GenDressedLepton_p4();
        else if (name == "GenJetAK8_p4") return nt.GenJetAK8_p4();
        else if (name == "GenJet_p4") return nt.GenJet_p4();
        else if (name == "GenPart_p4") return nt.GenPart_p4();
        else if (name == "GenVisTau_p4") return nt.GenVisTau_p4();
        else if (name == "Jet_p4") return nt.Jet_p4();
        else if (name == "LHEPart_p4") return nt.LHEPart_p4();
        else if (name == "Muon_p4") return nt.Muon_p4();
        else if (name == "Photon_p4") return nt.Photon_p4();
        else if (name == "SV_p4") return nt.SV_p4();
        else if (name == "SubGenJetAK8_p4") return nt.SubGenJetAK8_p4();
        else if (name == "SubJet_p4") return nt.SubJet_p4();
        return vector<LorentzVector>();
    }
    bool GetB(const string &name) {
        if (name == "Flag_BadChargedCandidateFilter") return nt.Flag_BadChargedCandidateFilter();
        else if (name == "Flag_BadChargedCandidateSummer16Filter") return nt.Flag_BadChargedCandidateSummer16Filter();
        else if (name == "Flag_BadPFMuonFilter") return nt.Flag_BadPFMuonFilter();
        else if (name == "Flag_BadPFMuonSummer16Filter") return nt.Flag_BadPFMuonSummer16Filter();
        else if (name == "Flag_CSCTightHalo2015Filter") return nt.Flag_CSCTightHalo2015Filter();
        else if (name == "Flag_CSCTightHaloFilter") return nt.Flag_CSCTightHaloFilter();
        else if (name == "Flag_CSCTightHaloTrkMuUnvetoFilter") return nt.Flag_CSCTightHaloTrkMuUnvetoFilter();
        else if (name == "Flag_EcalDeadCellBoundaryEnergyFilter") return nt.Flag_EcalDeadCellBoundaryEnergyFilter();
        else if (name == "Flag_EcalDeadCellTriggerPrimitiveFilter") return nt.Flag_EcalDeadCellTriggerPrimitiveFilter();
        else if (name == "Flag_HBHENoiseFilter") return nt.Flag_HBHENoiseFilter();
        else if (name == "Flag_HBHENoiseIsoFilter") return nt.Flag_HBHENoiseIsoFilter();
        else if (name == "Flag_HcalStripHaloFilter") return nt.Flag_HcalStripHaloFilter();
        else if (name == "Flag_METFilters") return nt.Flag_METFilters();
        else if (name == "Flag_chargedHadronTrackResolutionFilter") return nt.Flag_chargedHadronTrackResolutionFilter();
        else if (name == "Flag_ecalBadCalibFilter") return nt.Flag_ecalBadCalibFilter();
        else if (name == "Flag_ecalLaserCorrFilter") return nt.Flag_ecalLaserCorrFilter();
        else if (name == "Flag_eeBadScFilter") return nt.Flag_eeBadScFilter();
        else if (name == "Flag_globalSuperTightHalo2016Filter") return nt.Flag_globalSuperTightHalo2016Filter();
        else if (name == "Flag_globalTightHalo2016Filter") return nt.Flag_globalTightHalo2016Filter();
        else if (name == "Flag_goodVertices") return nt.Flag_goodVertices();
        else if (name == "Flag_hcalLaserEventFilter") return nt.Flag_hcalLaserEventFilter();
        else if (name == "Flag_muonBadTrackFilter") return nt.Flag_muonBadTrackFilter();
        else if (name == "Flag_trkPOGFilters") return nt.Flag_trkPOGFilters();
        else if (name == "Flag_trkPOG_logErrorTooManyClusters") return nt.Flag_trkPOG_logErrorTooManyClusters();
        else if (name == "Flag_trkPOG_manystripclus53X") return nt.Flag_trkPOG_manystripclus53X();
        else if (name == "Flag_trkPOG_toomanystripclus53X") return nt.Flag_trkPOG_toomanystripclus53X();
        else if (name == "HLT_AK4CaloJet100") return nt.HLT_AK4CaloJet100();
        else if (name == "HLT_AK4CaloJet120") return nt.HLT_AK4CaloJet120();
        else if (name == "HLT_AK4CaloJet30") return nt.HLT_AK4CaloJet30();
        else if (name == "HLT_AK4CaloJet40") return nt.HLT_AK4CaloJet40();
        else if (name == "HLT_AK4CaloJet50") return nt.HLT_AK4CaloJet50();
        else if (name == "HLT_AK4CaloJet80") return nt.HLT_AK4CaloJet80();
        else if (name == "HLT_AK4PFJet100") return nt.HLT_AK4PFJet100();
        else if (name == "HLT_AK4PFJet120") return nt.HLT_AK4PFJet120();
        else if (name == "HLT_AK4PFJet30") return nt.HLT_AK4PFJet30();
        else if (name == "HLT_AK4PFJet50") return nt.HLT_AK4PFJet50();
        else if (name == "HLT_AK4PFJet80") return nt.HLT_AK4PFJet80();
        else if (name == "HLT_AK8PFHT750_TrimMass50") return nt.HLT_AK8PFHT750_TrimMass50();
        else if (name == "HLT_AK8PFHT800_TrimMass50") return nt.HLT_AK8PFHT800_TrimMass50();
        else if (name == "HLT_AK8PFHT850_TrimMass50") return nt.HLT_AK8PFHT850_TrimMass50();
        else if (name == "HLT_AK8PFHT900_TrimMass50") return nt.HLT_AK8PFHT900_TrimMass50();
        else if (name == "HLT_AK8PFJet140") return nt.HLT_AK8PFJet140();
        else if (name == "HLT_AK8PFJet200") return nt.HLT_AK8PFJet200();
        else if (name == "HLT_AK8PFJet260") return nt.HLT_AK8PFJet260();
        else if (name == "HLT_AK8PFJet320") return nt.HLT_AK8PFJet320();
        else if (name == "HLT_AK8PFJet330_PFAK8BTagCSV_p1") return nt.HLT_AK8PFJet330_PFAK8BTagCSV_p1();
        else if (name == "HLT_AK8PFJet330_PFAK8BTagCSV_p17") return nt.HLT_AK8PFJet330_PFAK8BTagCSV_p17();
        else if (name == "HLT_AK8PFJet360_TrimMass30") return nt.HLT_AK8PFJet360_TrimMass30();
        else if (name == "HLT_AK8PFJet380_TrimMass30") return nt.HLT_AK8PFJet380_TrimMass30();
        else if (name == "HLT_AK8PFJet40") return nt.HLT_AK8PFJet40();
        else if (name == "HLT_AK8PFJet400") return nt.HLT_AK8PFJet400();
        else if (name == "HLT_AK8PFJet400_TrimMass30") return nt.HLT_AK8PFJet400_TrimMass30();
        else if (name == "HLT_AK8PFJet420_TrimMass30") return nt.HLT_AK8PFJet420_TrimMass30();
        else if (name == "HLT_AK8PFJet450") return nt.HLT_AK8PFJet450();
        else if (name == "HLT_AK8PFJet500") return nt.HLT_AK8PFJet500();
        else if (name == "HLT_AK8PFJet550") return nt.HLT_AK8PFJet550();
        else if (name == "HLT_AK8PFJet60") return nt.HLT_AK8PFJet60();
        else if (name == "HLT_AK8PFJet80") return nt.HLT_AK8PFJet80();
        else if (name == "HLT_AK8PFJetFwd140") return nt.HLT_AK8PFJetFwd140();
        else if (name == "HLT_AK8PFJetFwd200") return nt.HLT_AK8PFJetFwd200();
        else if (name == "HLT_AK8PFJetFwd260") return nt.HLT_AK8PFJetFwd260();
        else if (name == "HLT_AK8PFJetFwd320") return nt.HLT_AK8PFJetFwd320();
        else if (name == "HLT_AK8PFJetFwd40") return nt.HLT_AK8PFJetFwd40();
        else if (name == "HLT_AK8PFJetFwd400") return nt.HLT_AK8PFJetFwd400();
        else if (name == "HLT_AK8PFJetFwd450") return nt.HLT_AK8PFJetFwd450();
        else if (name == "HLT_AK8PFJetFwd500") return nt.HLT_AK8PFJetFwd500();
        else if (name == "HLT_AK8PFJetFwd60") return nt.HLT_AK8PFJetFwd60();
        else if (name == "HLT_AK8PFJetFwd80") return nt.HLT_AK8PFJetFwd80();
        else if (name == "HLT_BTagMu_AK4DiJet110_Mu5") return nt.HLT_BTagMu_AK4DiJet110_Mu5();
        else if (name == "HLT_BTagMu_AK4DiJet170_Mu5") return nt.HLT_BTagMu_AK4DiJet170_Mu5();
        else if (name == "HLT_BTagMu_AK4DiJet20_Mu5") return nt.HLT_BTagMu_AK4DiJet20_Mu5();
        else if (name == "HLT_BTagMu_AK4DiJet40_Mu5") return nt.HLT_BTagMu_AK4DiJet40_Mu5();
        else if (name == "HLT_BTagMu_AK4DiJet70_Mu5") return nt.HLT_BTagMu_AK4DiJet70_Mu5();
        else if (name == "HLT_BTagMu_AK4Jet300_Mu5") return nt.HLT_BTagMu_AK4Jet300_Mu5();
        else if (name == "HLT_BTagMu_AK8DiJet170_Mu5") return nt.HLT_BTagMu_AK8DiJet170_Mu5();
        else if (name == "HLT_BTagMu_AK8Jet300_Mu5") return nt.HLT_BTagMu_AK8Jet300_Mu5();
        else if (name == "HLT_CaloJet500_NoJetID") return nt.HLT_CaloJet500_NoJetID();
        else if (name == "HLT_CaloJet550_NoJetID") return nt.HLT_CaloJet550_NoJetID();
        else if (name == "HLT_CaloMET100_HBHECleaned") return nt.HLT_CaloMET100_HBHECleaned();
        else if (name == "HLT_CaloMET100_NotCleaned") return nt.HLT_CaloMET100_NotCleaned();
        else if (name == "HLT_CaloMET110_NotCleaned") return nt.HLT_CaloMET110_NotCleaned();
        else if (name == "HLT_CaloMET250_HBHECleaned") return nt.HLT_CaloMET250_HBHECleaned();
        else if (name == "HLT_CaloMET250_NotCleaned") return nt.HLT_CaloMET250_NotCleaned();
        else if (name == "HLT_CaloMET300_HBHECleaned") return nt.HLT_CaloMET300_HBHECleaned();
        else if (name == "HLT_CaloMET350_HBHECleaned") return nt.HLT_CaloMET350_HBHECleaned();
        else if (name == "HLT_CaloMET70_HBHECleaned") return nt.HLT_CaloMET70_HBHECleaned();
        else if (name == "HLT_CaloMET80_HBHECleaned") return nt.HLT_CaloMET80_HBHECleaned();
        else if (name == "HLT_CaloMET80_NotCleaned") return nt.HLT_CaloMET80_NotCleaned();
        else if (name == "HLT_CaloMET90_HBHECleaned") return nt.HLT_CaloMET90_HBHECleaned();
        else if (name == "HLT_CaloMET90_NotCleaned") return nt.HLT_CaloMET90_NotCleaned();
        else if (name == "HLT_CaloMHT90") return nt.HLT_CaloMHT90();
        else if (name == "HLT_DiEle27_WPTightCaloOnly_L1DoubleEG") return nt.HLT_DiEle27_WPTightCaloOnly_L1DoubleEG();
        else if (name == "HLT_DiJet110_35_Mjj650_PFMET110") return nt.HLT_DiJet110_35_Mjj650_PFMET110();
        else if (name == "HLT_DiJet110_35_Mjj650_PFMET120") return nt.HLT_DiJet110_35_Mjj650_PFMET120();
        else if (name == "HLT_DiJet110_35_Mjj650_PFMET130") return nt.HLT_DiJet110_35_Mjj650_PFMET130();
        else if (name == "HLT_DiMu9_Ele9_CaloIdL_TrackIdL") return nt.HLT_DiMu9_Ele9_CaloIdL_TrackIdL();
        else if (name == "HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ") return nt.HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ();
        else if (name == "HLT_DiPFJet15_FBEta3_NoCaloMatched") return nt.HLT_DiPFJet15_FBEta3_NoCaloMatched();
        else if (name == "HLT_DiPFJet15_NoCaloMatched") return nt.HLT_DiPFJet15_NoCaloMatched();
        else if (name == "HLT_DiPFJet25_FBEta3_NoCaloMatched") return nt.HLT_DiPFJet25_FBEta3_NoCaloMatched();
        else if (name == "HLT_DiPFJet25_NoCaloMatched") return nt.HLT_DiPFJet25_NoCaloMatched();
        else if (name == "HLT_DiPFJetAve100_HFJEC") return nt.HLT_DiPFJetAve100_HFJEC();
        else if (name == "HLT_DiPFJetAve140") return nt.HLT_DiPFJetAve140();
        else if (name == "HLT_DiPFJetAve15_HFJEC") return nt.HLT_DiPFJetAve15_HFJEC();
        else if (name == "HLT_DiPFJetAve160_HFJEC") return nt.HLT_DiPFJetAve160_HFJEC();
        else if (name == "HLT_DiPFJetAve200") return nt.HLT_DiPFJetAve200();
        else if (name == "HLT_DiPFJetAve220_HFJEC") return nt.HLT_DiPFJetAve220_HFJEC();
        else if (name == "HLT_DiPFJetAve25_HFJEC") return nt.HLT_DiPFJetAve25_HFJEC();
        else if (name == "HLT_DiPFJetAve260") return nt.HLT_DiPFJetAve260();
        else if (name == "HLT_DiPFJetAve300_HFJEC") return nt.HLT_DiPFJetAve300_HFJEC();
        else if (name == "HLT_DiPFJetAve320") return nt.HLT_DiPFJetAve320();
        else if (name == "HLT_DiPFJetAve35_HFJEC") return nt.HLT_DiPFJetAve35_HFJEC();
        else if (name == "HLT_DiPFJetAve40") return nt.HLT_DiPFJetAve40();
        else if (name == "HLT_DiPFJetAve400") return nt.HLT_DiPFJetAve400();
        else if (name == "HLT_DiPFJetAve500") return nt.HLT_DiPFJetAve500();
        else if (name == "HLT_DiPFJetAve60") return nt.HLT_DiPFJetAve60();
        else if (name == "HLT_DiPFJetAve60_HFJEC") return nt.HLT_DiPFJetAve60_HFJEC();
        else if (name == "HLT_DiPFJetAve80") return nt.HLT_DiPFJetAve80();
        else if (name == "HLT_DiPFJetAve80_HFJEC") return nt.HLT_DiPFJetAve80_HFJEC();
        else if (name == "HLT_DiSC30_18_EIso_AND_HE_Mass70") return nt.HLT_DiSC30_18_EIso_AND_HE_Mass70();
        else if (name == "HLT_Dimuon0_Jpsi") return nt.HLT_Dimuon0_Jpsi();
        else if (name == "HLT_Dimuon0_Jpsi3p5_Muon2") return nt.HLT_Dimuon0_Jpsi3p5_Muon2();
        else if (name == "HLT_Dimuon0_Jpsi_L1_4R_0er1p5R") return nt.HLT_Dimuon0_Jpsi_L1_4R_0er1p5R();
        else if (name == "HLT_Dimuon0_Jpsi_L1_NoOS") return nt.HLT_Dimuon0_Jpsi_L1_NoOS();
        else if (name == "HLT_Dimuon0_Jpsi_NoVertexing") return nt.HLT_Dimuon0_Jpsi_NoVertexing();
        else if (name == "HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R") return nt.HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R();
        else if (name == "HLT_Dimuon0_Jpsi_NoVertexing_NoOS") return nt.HLT_Dimuon0_Jpsi_NoVertexing_NoOS();
        else if (name == "HLT_Dimuon0_LowMass") return nt.HLT_Dimuon0_LowMass();
        else if (name == "HLT_Dimuon0_LowMass_L1_0er1p5") return nt.HLT_Dimuon0_LowMass_L1_0er1p5();
        else if (name == "HLT_Dimuon0_LowMass_L1_0er1p5R") return nt.HLT_Dimuon0_LowMass_L1_0er1p5R();
        else if (name == "HLT_Dimuon0_LowMass_L1_4") return nt.HLT_Dimuon0_LowMass_L1_4();
        else if (name == "HLT_Dimuon0_LowMass_L1_4R") return nt.HLT_Dimuon0_LowMass_L1_4R();
        else if (name == "HLT_Dimuon0_LowMass_L1_TM530") return nt.HLT_Dimuon0_LowMass_L1_TM530();
        else if (name == "HLT_Dimuon0_Upsilon_L1_4p5") return nt.HLT_Dimuon0_Upsilon_L1_4p5();
        else if (name == "HLT_Dimuon0_Upsilon_L1_4p5NoOS") return nt.HLT_Dimuon0_Upsilon_L1_4p5NoOS();
        else if (name == "HLT_Dimuon0_Upsilon_L1_4p5er2p0") return nt.HLT_Dimuon0_Upsilon_L1_4p5er2p0();
        else if (name == "HLT_Dimuon0_Upsilon_L1_4p5er2p0M") return nt.HLT_Dimuon0_Upsilon_L1_4p5er2p0M();
        else if (name == "HLT_Dimuon0_Upsilon_L1_5") return nt.HLT_Dimuon0_Upsilon_L1_5();
        else if (name == "HLT_Dimuon0_Upsilon_L1_5M") return nt.HLT_Dimuon0_Upsilon_L1_5M();
        else if (name == "HLT_Dimuon0_Upsilon_Muon_L1_TM0") return nt.HLT_Dimuon0_Upsilon_Muon_L1_TM0();
        else if (name == "HLT_Dimuon0_Upsilon_Muon_NoL1Mass") return nt.HLT_Dimuon0_Upsilon_Muon_NoL1Mass();
        else if (name == "HLT_Dimuon0_Upsilon_NoVertexing") return nt.HLT_Dimuon0_Upsilon_NoVertexing();
        else if (name == "HLT_Dimuon10_PsiPrime_Barrel_Seagulls") return nt.HLT_Dimuon10_PsiPrime_Barrel_Seagulls();
        else if (name == "HLT_Dimuon10_Upsilon_Barrel_Seagulls") return nt.HLT_Dimuon10_Upsilon_Barrel_Seagulls();
        else if (name == "HLT_Dimuon12_Upsilon_eta1p5") return nt.HLT_Dimuon12_Upsilon_eta1p5();
        else if (name == "HLT_Dimuon14_Phi_Barrel_Seagulls") return nt.HLT_Dimuon14_Phi_Barrel_Seagulls();
        else if (name == "HLT_Dimuon18_PsiPrime") return nt.HLT_Dimuon18_PsiPrime();
        else if (name == "HLT_Dimuon18_PsiPrime_noCorrL1") return nt.HLT_Dimuon18_PsiPrime_noCorrL1();
        else if (name == "HLT_Dimuon20_Jpsi_Barrel_Seagulls") return nt.HLT_Dimuon20_Jpsi_Barrel_Seagulls();
        else if (name == "HLT_Dimuon24_Phi_noCorrL1") return nt.HLT_Dimuon24_Phi_noCorrL1();
        else if (name == "HLT_Dimuon24_Upsilon_noCorrL1") return nt.HLT_Dimuon24_Upsilon_noCorrL1();
        else if (name == "HLT_Dimuon25_Jpsi") return nt.HLT_Dimuon25_Jpsi();
        else if (name == "HLT_Dimuon25_Jpsi_noCorrL1") return nt.HLT_Dimuon25_Jpsi_noCorrL1();
        else if (name == "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90") return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
        else if (name == "HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95") return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95();
        else if (name == "HLT_DoubleEle24_eta2p1_WPTight_Gsf") return nt.HLT_DoubleEle24_eta2p1_WPTight_Gsf();
        else if (name == "HLT_DoubleEle25_CaloIdL_MW") return nt.HLT_DoubleEle25_CaloIdL_MW();
        else if (name == "HLT_DoubleEle27_CaloIdL_MW") return nt.HLT_DoubleEle27_CaloIdL_MW();
        else if (name == "HLT_DoubleEle33_CaloIdL_MW") return nt.HLT_DoubleEle33_CaloIdL_MW();
        else if (name == "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350") return nt.HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350();
        else if (name == "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350") return nt.HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350();
        else if (name == "HLT_DoubleIsoMu20_eta2p1") return nt.HLT_DoubleIsoMu20_eta2p1();
        else if (name == "HLT_DoubleIsoMu24_eta2p1") return nt.HLT_DoubleIsoMu24_eta2p1();
        else if (name == "HLT_DoubleL2Mu50") return nt.HLT_DoubleL2Mu50();
        else if (name == "HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg") return nt.HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg();
        else if (name == "HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg") return nt.HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg();
        else if (name == "HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg") return nt.HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg();
        else if (name == "HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg") return nt.HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg();
        else if (name == "HLT_DoubleMu20_7_Mass0to30_L1_DM4") return nt.HLT_DoubleMu20_7_Mass0to30_L1_DM4();
        else if (name == "HLT_DoubleMu20_7_Mass0to30_L1_DM4EG") return nt.HLT_DoubleMu20_7_Mass0to30_L1_DM4EG();
        else if (name == "HLT_DoubleMu20_7_Mass0to30_Photon23") return nt.HLT_DoubleMu20_7_Mass0to30_Photon23();
        else if (name == "HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi") return nt.HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi();
        else if (name == "HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi") return nt.HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi();
        else if (name == "HLT_DoubleMu3_DCA_PFMET50_PFMHT60") return nt.HLT_DoubleMu3_DCA_PFMET50_PFMHT60();
        else if (name == "HLT_DoubleMu3_DZ_PFMET50_PFMHT60") return nt.HLT_DoubleMu3_DZ_PFMET50_PFMHT60();
        else if (name == "HLT_DoubleMu3_DZ_PFMET70_PFMHT70") return nt.HLT_DoubleMu3_DZ_PFMET70_PFMHT70();
        else if (name == "HLT_DoubleMu3_DZ_PFMET90_PFMHT90") return nt.HLT_DoubleMu3_DZ_PFMET90_PFMHT90();
        else if (name == "HLT_DoubleMu3_Trk_Tau3mu") return nt.HLT_DoubleMu3_Trk_Tau3mu();
        else if (name == "HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass") return nt.HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass();
        else if (name == "HLT_DoubleMu43NoFiltersNoVtx") return nt.HLT_DoubleMu43NoFiltersNoVtx();
        else if (name == "HLT_DoubleMu48NoFiltersNoVtx") return nt.HLT_DoubleMu48NoFiltersNoVtx();
        else if (name == "HLT_DoubleMu4_3_Bs") return nt.HLT_DoubleMu4_3_Bs();
        else if (name == "HLT_DoubleMu4_3_Jpsi_Displaced") return nt.HLT_DoubleMu4_3_Jpsi_Displaced();
        else if (name == "HLT_DoubleMu4_JpsiTrkTrk_Displaced") return nt.HLT_DoubleMu4_JpsiTrkTrk_Displaced();
        else if (name == "HLT_DoubleMu4_JpsiTrk_Displaced") return nt.HLT_DoubleMu4_JpsiTrk_Displaced();
        else if (name == "HLT_DoubleMu4_Jpsi_Displaced") return nt.HLT_DoubleMu4_Jpsi_Displaced();
        else if (name == "HLT_DoubleMu4_Jpsi_NoVertexing") return nt.HLT_DoubleMu4_Jpsi_NoVertexing();
        else if (name == "HLT_DoubleMu4_LowMassNonResonantTrk_Displaced") return nt.HLT_DoubleMu4_LowMassNonResonantTrk_Displaced();
        else if (name == "HLT_DoubleMu4_Mass8_DZ_PFHT350") return nt.HLT_DoubleMu4_Mass8_DZ_PFHT350();
        else if (name == "HLT_DoubleMu4_PsiPrimeTrk_Displaced") return nt.HLT_DoubleMu4_PsiPrimeTrk_Displaced();
        else if (name == "HLT_DoubleMu8_Mass8_PFHT350") return nt.HLT_DoubleMu8_Mass8_PFHT350();
        else if (name == "HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets100_CaloBTagCSV_p33") return nt.HLT_DoublePFJets100_CaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets200_CaloBTagCSV_p33") return nt.HLT_DoublePFJets200_CaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets350_CaloBTagCSV_p33") return nt.HLT_DoublePFJets350_CaloBTagCSV_p33();
        else if (name == "HLT_DoublePFJets40_CaloBTagCSV_p33") return nt.HLT_DoublePFJets40_CaloBTagCSV_p33();
        else if (name == "HLT_DoublePhoton33_CaloIdL") return nt.HLT_DoublePhoton33_CaloIdL();
        else if (name == "HLT_DoublePhoton70") return nt.HLT_DoublePhoton70();
        else if (name == "HLT_DoublePhoton85") return nt.HLT_DoublePhoton85();
        else if (name == "HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg") return nt.HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg();
        else if (name == "HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg") return nt.HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
        else if (name == "HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg") return nt.HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg();
        else if (name == "HLT_ECALHT800") return nt.HLT_ECALHT800();
        else if (name == "HLT_EcalCalibration") return nt.HLT_EcalCalibration();
        else if (name == "HLT_Ele115_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele115_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30") return nt.HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30();
        else if (name == "HLT_Ele135_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele135_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele145_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele145_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele15_IsoVVVL_PFHT450") return nt.HLT_Ele15_IsoVVVL_PFHT450();
        else if (name == "HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5") return nt.HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5();
        else if (name == "HLT_Ele15_IsoVVVL_PFHT450_PFMET50") return nt.HLT_Ele15_IsoVVVL_PFHT450_PFMET50();
        else if (name == "HLT_Ele15_IsoVVVL_PFHT600") return nt.HLT_Ele15_IsoVVVL_PFHT600();
        else if (name == "HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL") return nt.HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL();
        else if (name == "HLT_Ele17_CaloIdM_TrackIdM_PFJet30") return nt.HLT_Ele17_CaloIdM_TrackIdM_PFJet30();
        else if (name == "HLT_Ele200_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele200_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele20_WPLoose_Gsf") return nt.HLT_Ele20_WPLoose_Gsf();
        else if (name == "HLT_Ele20_WPTight_Gsf") return nt.HLT_Ele20_WPTight_Gsf();
        else if (name == "HLT_Ele20_eta2p1_WPLoose_Gsf") return nt.HLT_Ele20_eta2p1_WPLoose_Gsf();
        else if (name == "HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30") return nt.HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30();
        else if (name == "HLT_Ele23_CaloIdM_TrackIdM_PFJet30") return nt.HLT_Ele23_CaloIdM_TrackIdM_PFJet30();
        else if (name == "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL") return nt.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
        else if (name == "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ") return nt.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1();
        else if (name == "HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1") return nt.HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1();
        else if (name == "HLT_Ele250_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele250_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele27_Ele37_CaloIdL_MW") return nt.HLT_Ele27_Ele37_CaloIdL_MW();
        else if (name == "HLT_Ele27_WPTight_Gsf") return nt.HLT_Ele27_WPTight_Gsf();
        else if (name == "HLT_Ele28_HighEta_SC20_Mass55") return nt.HLT_Ele28_HighEta_SC20_Mass55();
        else if (name == "HLT_Ele28_eta2p1_WPTight_Gsf_HT150") return nt.HLT_Ele28_eta2p1_WPTight_Gsf_HT150();
        else if (name == "HLT_Ele300_CaloIdVT_GsfTrkIdT") return nt.HLT_Ele300_CaloIdVT_GsfTrkIdT();
        else if (name == "HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned") return nt.HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned();
        else if (name == "HLT_Ele32_WPTight_Gsf") return nt.HLT_Ele32_WPTight_Gsf();
        else if (name == "HLT_Ele32_WPTight_Gsf_L1DoubleEG") return nt.HLT_Ele32_WPTight_Gsf_L1DoubleEG();
        else if (name == "HLT_Ele35_WPTight_Gsf") return nt.HLT_Ele35_WPTight_Gsf();
        else if (name == "HLT_Ele35_WPTight_Gsf_L1EGMT") return nt.HLT_Ele35_WPTight_Gsf_L1EGMT();
        else if (name == "HLT_Ele38_WPTight_Gsf") return nt.HLT_Ele38_WPTight_Gsf();
        else if (name == "HLT_Ele40_WPTight_Gsf") return nt.HLT_Ele40_WPTight_Gsf();
        else if (name == "HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165") return nt.HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165();
        else if (name == "HLT_Ele50_IsoVVVL_PFHT450") return nt.HLT_Ele50_IsoVVVL_PFHT450();
        else if (name == "HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30") return nt.HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30();
        else if (name == "HLT_Ele8_CaloIdM_TrackIdM_PFJet30") return nt.HLT_Ele8_CaloIdM_TrackIdM_PFJet30();
        else if (name == "HLT_FullTrack_Multiplicity100") return nt.HLT_FullTrack_Multiplicity100();
        else if (name == "HLT_FullTrack_Multiplicity130") return nt.HLT_FullTrack_Multiplicity130();
        else if (name == "HLT_FullTrack_Multiplicity155") return nt.HLT_FullTrack_Multiplicity155();
        else if (name == "HLT_FullTrack_Multiplicity85") return nt.HLT_FullTrack_Multiplicity85();
        else if (name == "HLT_HISinglePhoton10_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton10_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton20_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton20_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton30_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton30_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton40_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton40_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton50_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton50_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton60_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton60_Eta3p1ForPPRef();
        else if (name == "HLT_HT300_Beamspot") return nt.HLT_HT300_Beamspot();
        else if (name == "HLT_HT400_DisplacedDijet40_DisplacedTrack") return nt.HLT_HT400_DisplacedDijet40_DisplacedTrack();
        else if (name == "HLT_HT425") return nt.HLT_HT425();
        else if (name == "HLT_HT430_DisplacedDijet40_DisplacedTrack") return nt.HLT_HT430_DisplacedDijet40_DisplacedTrack();
        else if (name == "HLT_HT430_DisplacedDijet60_DisplacedTrack") return nt.HLT_HT430_DisplacedDijet60_DisplacedTrack();
        else if (name == "HLT_HT430_DisplacedDijet80_DisplacedTrack") return nt.HLT_HT430_DisplacedDijet80_DisplacedTrack();
        else if (name == "HLT_HT450_Beamspot") return nt.HLT_HT450_Beamspot();
        else if (name == "HLT_HT550_DisplacedDijet60_Inclusive") return nt.HLT_HT550_DisplacedDijet60_Inclusive();
        else if (name == "HLT_HT550_DisplacedDijet80_Inclusive") return nt.HLT_HT550_DisplacedDijet80_Inclusive();
        else if (name == "HLT_HT650_DisplacedDijet60_Inclusive") return nt.HLT_HT650_DisplacedDijet60_Inclusive();
        else if (name == "HLT_HT650_DisplacedDijet80_Inclusive") return nt.HLT_HT650_DisplacedDijet80_Inclusive();
        else if (name == "HLT_HT750_DisplacedDijet80_Inclusive") return nt.HLT_HT750_DisplacedDijet80_Inclusive();
        else if (name == "HLT_HcalCalibration") return nt.HLT_HcalCalibration();
        else if (name == "HLT_HcalIsolatedbunch") return nt.HLT_HcalIsolatedbunch();
        else if (name == "HLT_HcalNZS") return nt.HLT_HcalNZS();
        else if (name == "HLT_HcalPhiSym") return nt.HLT_HcalPhiSym();
        else if (name == "HLT_IsoMu20") return nt.HLT_IsoMu20();
        else if (name == "HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1") return nt.HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1();
        else if (name == "HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1") return nt.HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1();
        else if (name == "HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1") return nt.HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1();
        else if (name == "HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1") return nt.HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1();
        else if (name == "HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1") return nt.HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1();
        else if (name == "HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1") return nt.HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1();
        else if (name == "HLT_IsoMu24") return nt.HLT_IsoMu24();
        else if (name == "HLT_IsoMu24_eta2p1") return nt.HLT_IsoMu24_eta2p1();
        else if (name == "HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1") return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr") return nt.HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1") return nt.HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1();
        else if (name == "HLT_IsoMu27") return nt.HLT_IsoMu27();
        else if (name == "HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1") return nt.HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1();
        else if (name == "HLT_IsoMu30") return nt.HLT_IsoMu30();
        else if (name == "HLT_IsoTrackHB") return nt.HLT_IsoTrackHB();
        else if (name == "HLT_IsoTrackHE") return nt.HLT_IsoTrackHE();
        else if (name == "HLT_L1ETMHadSeeds") return nt.HLT_L1ETMHadSeeds();
        else if (name == "HLT_L1MinimumBiasHF0OR") return nt.HLT_L1MinimumBiasHF0OR();
        else if (name == "HLT_L1MinimumBiasHF_OR") return nt.HLT_L1MinimumBiasHF_OR();
        else if (name == "HLT_L1NotBptxOR") return nt.HLT_L1NotBptxOR();
        else if (name == "HLT_L1SingleMu18") return nt.HLT_L1SingleMu18();
        else if (name == "HLT_L1SingleMu25") return nt.HLT_L1SingleMu25();
        else if (name == "HLT_L1UnpairedBunchBptxMinus") return nt.HLT_L1UnpairedBunchBptxMinus();
        else if (name == "HLT_L1UnpairedBunchBptxPlus") return nt.HLT_L1UnpairedBunchBptxPlus();
        else if (name == "HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142") return nt.HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142();
        else if (name == "HLT_L1_DoubleJet30_Mass_Min400_Mu10") return nt.HLT_L1_DoubleJet30_Mass_Min400_Mu10();
        else if (name == "HLT_L2Mu10") return nt.HLT_L2Mu10();
        else if (name == "HLT_L2Mu10_NoVertex_NoBPTX") return nt.HLT_L2Mu10_NoVertex_NoBPTX();
        else if (name == "HLT_L2Mu10_NoVertex_NoBPTX3BX") return nt.HLT_L2Mu10_NoVertex_NoBPTX3BX();
        else if (name == "HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX") return nt.HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX();
        else if (name == "HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX") return nt.HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX();
        else if (name == "HLT_L2Mu50") return nt.HLT_L2Mu50();
        else if (name == "HLT_MET105_IsoTrk50") return nt.HLT_MET105_IsoTrk50();
        else if (name == "HLT_MET120_IsoTrk50") return nt.HLT_MET120_IsoTrk50();
        else if (name == "HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1") return nt.HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1();
        else if (name == "HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr") return nt.HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130();
        else if (name == "HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90") return nt.HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90();
        else if (name == "HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight") return nt.HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight();
        else if (name == "HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight") return nt.HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight();
        else if (name == "HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight") return nt.HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight();
        else if (name == "HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight") return nt.HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight();
        else if (name == "HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60") return nt.HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60();
        else if (name == "HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33") return nt.HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33();
        else if (name == "HLT_Mu12_DoublePhoton20") return nt.HLT_Mu12_DoublePhoton20();
        else if (name == "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL") return nt.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
        else if (name == "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ") return nt.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
        else if (name == "HLT_Mu15_IsoVVVL_PFHT450") return nt.HLT_Mu15_IsoVVVL_PFHT450();
        else if (name == "HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5") return nt.HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5();
        else if (name == "HLT_Mu15_IsoVVVL_PFHT450_PFMET50") return nt.HLT_Mu15_IsoVVVL_PFHT450_PFMET50();
        else if (name == "HLT_Mu15_IsoVVVL_PFHT600") return nt.HLT_Mu15_IsoVVVL_PFHT600();
        else if (name == "HLT_Mu17") return nt.HLT_Mu17();
        else if (name == "HLT_Mu17_Photon30_IsoCaloId") return nt.HLT_Mu17_Photon30_IsoCaloId();
        else if (name == "HLT_Mu17_TrkIsoVVL") return nt.HLT_Mu17_TrkIsoVVL();
        else if (name == "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL") return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL();
        else if (name == "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ") return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
        else if (name == "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8") return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8();
        else if (name == "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8") return nt.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8();
        else if (name == "HLT_Mu18_Mu9") return nt.HLT_Mu18_Mu9();
        else if (name == "HLT_Mu18_Mu9_DZ") return nt.HLT_Mu18_Mu9_DZ();
        else if (name == "HLT_Mu18_Mu9_SameSign") return nt.HLT_Mu18_Mu9_SameSign();
        else if (name == "HLT_Mu18_Mu9_SameSign_DZ") return nt.HLT_Mu18_Mu9_SameSign_DZ();
        else if (name == "HLT_Mu19") return nt.HLT_Mu19();
        else if (name == "HLT_Mu19_TrkIsoVVL") return nt.HLT_Mu19_TrkIsoVVL();
        else if (name == "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL") return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL();
        else if (name == "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ") return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ();
        else if (name == "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8") return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8();
        else if (name == "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8") return nt.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8();
        else if (name == "HLT_Mu20") return nt.HLT_Mu20();
        else if (name == "HLT_Mu20_Mu10") return nt.HLT_Mu20_Mu10();
        else if (name == "HLT_Mu20_Mu10_DZ") return nt.HLT_Mu20_Mu10_DZ();
        else if (name == "HLT_Mu20_Mu10_SameSign") return nt.HLT_Mu20_Mu10_SameSign();
        else if (name == "HLT_Mu20_Mu10_SameSign_DZ") return nt.HLT_Mu20_Mu10_SameSign_DZ();
        else if (name == "HLT_Mu20_TkMu0_Phi") return nt.HLT_Mu20_TkMu0_Phi();
        else if (name == "HLT_Mu23_Mu12") return nt.HLT_Mu23_Mu12();
        else if (name == "HLT_Mu23_Mu12_DZ") return nt.HLT_Mu23_Mu12_DZ();
        else if (name == "HLT_Mu23_Mu12_SameSign") return nt.HLT_Mu23_Mu12_SameSign();
        else if (name == "HLT_Mu23_Mu12_SameSign_DZ") return nt.HLT_Mu23_Mu12_SameSign_DZ();
        else if (name == "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL") return nt.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL();
        else if (name == "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ") return nt.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
        else if (name == "HLT_Mu25_TkMu0_Onia") return nt.HLT_Mu25_TkMu0_Onia();
        else if (name == "HLT_Mu25_TkMu0_Phi") return nt.HLT_Mu25_TkMu0_Phi();
        else if (name == "HLT_Mu27") return nt.HLT_Mu27();
        else if (name == "HLT_Mu27_Ele37_CaloIdL_MW") return nt.HLT_Mu27_Ele37_CaloIdL_MW();
        else if (name == "HLT_Mu30_TkMu0_Onia") return nt.HLT_Mu30_TkMu0_Onia();
        else if (name == "HLT_Mu37_Ele27_CaloIdL_MW") return nt.HLT_Mu37_Ele27_CaloIdL_MW();
        else if (name == "HLT_Mu37_TkMu27") return nt.HLT_Mu37_TkMu27();
        else if (name == "HLT_Mu3_PFJet40") return nt.HLT_Mu3_PFJet40();
        else if (name == "HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL") return nt.HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL();
        else if (name == "HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL") return nt.HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL();
        else if (name == "HLT_Mu50") return nt.HLT_Mu50();
        else if (name == "HLT_Mu50_IsoVVVL_PFHT450") return nt.HLT_Mu50_IsoVVVL_PFHT450();
        else if (name == "HLT_Mu55") return nt.HLT_Mu55();
        else if (name == "HLT_Mu7p5_L2Mu2_Jpsi") return nt.HLT_Mu7p5_L2Mu2_Jpsi();
        else if (name == "HLT_Mu7p5_L2Mu2_Upsilon") return nt.HLT_Mu7p5_L2Mu2_Upsilon();
        else if (name == "HLT_Mu7p5_Track2_Jpsi") return nt.HLT_Mu7p5_Track2_Jpsi();
        else if (name == "HLT_Mu7p5_Track2_Upsilon") return nt.HLT_Mu7p5_Track2_Upsilon();
        else if (name == "HLT_Mu7p5_Track3p5_Jpsi") return nt.HLT_Mu7p5_Track3p5_Jpsi();
        else if (name == "HLT_Mu7p5_Track3p5_Upsilon") return nt.HLT_Mu7p5_Track3p5_Upsilon();
        else if (name == "HLT_Mu7p5_Track7_Jpsi") return nt.HLT_Mu7p5_Track7_Jpsi();
        else if (name == "HLT_Mu7p5_Track7_Upsilon") return nt.HLT_Mu7p5_Track7_Upsilon();
        else if (name == "HLT_Mu8") return nt.HLT_Mu8();
        else if (name == "HLT_Mu8_DiEle12_CaloIdL_TrackIdL") return nt.HLT_Mu8_DiEle12_CaloIdL_TrackIdL();
        else if (name == "HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ") return nt.HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ();
        else if (name == "HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350") return nt.HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350();
        else if (name == "HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ") return nt.HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ();
        else if (name == "HLT_Mu8_TrkIsoVVL") return nt.HLT_Mu8_TrkIsoVVL();
        else if (name == "HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60") return nt.HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60();
        else if (name == "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL") return nt.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
        else if (name == "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ") return nt.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
        else if (name == "HLT_OldMu100") return nt.HLT_OldMu100();
        else if (name == "HLT_PFHT1050") return nt.HLT_PFHT1050();
        else if (name == "HLT_PFHT180") return nt.HLT_PFHT180();
        else if (name == "HLT_PFHT250") return nt.HLT_PFHT250();
        else if (name == "HLT_PFHT300PT30_QuadPFJet_75_60_45_40") return nt.HLT_PFHT300PT30_QuadPFJet_75_60_45_40();
        else if (name == "HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0") return nt.HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0();
        else if (name == "HLT_PFHT350") return nt.HLT_PFHT350();
        else if (name == "HLT_PFHT350MinPFJet15") return nt.HLT_PFHT350MinPFJet15();
        else if (name == "HLT_PFHT370") return nt.HLT_PFHT370();
        else if (name == "HLT_PFHT380_SixPFJet32") return nt.HLT_PFHT380_SixPFJet32();
        else if (name == "HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2") return nt.HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2();
        else if (name == "HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2") return nt.HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2();
        else if (name == "HLT_PFHT430") return nt.HLT_PFHT430();
        else if (name == "HLT_PFHT430_SixPFJet40") return nt.HLT_PFHT430_SixPFJet40();
        else if (name == "HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5") return nt.HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5();
        else if (name == "HLT_PFHT500_PFMET100_PFMHT100_IDTight") return nt.HLT_PFHT500_PFMET100_PFMHT100_IDTight();
        else if (name == "HLT_PFHT500_PFMET110_PFMHT110_IDTight") return nt.HLT_PFHT500_PFMET110_PFMHT110_IDTight();
        else if (name == "HLT_PFHT510") return nt.HLT_PFHT510();
        else if (name == "HLT_PFHT590") return nt.HLT_PFHT590();
        else if (name == "HLT_PFHT680") return nt.HLT_PFHT680();
        else if (name == "HLT_PFHT700_PFMET85_PFMHT85_IDTight") return nt.HLT_PFHT700_PFMET85_PFMHT85_IDTight();
        else if (name == "HLT_PFHT700_PFMET95_PFMHT95_IDTight") return nt.HLT_PFHT700_PFMET95_PFMHT95_IDTight();
        else if (name == "HLT_PFHT780") return nt.HLT_PFHT780();
        else if (name == "HLT_PFHT800_PFMET75_PFMHT75_IDTight") return nt.HLT_PFHT800_PFMET75_PFMHT75_IDTight();
        else if (name == "HLT_PFHT800_PFMET85_PFMHT85_IDTight") return nt.HLT_PFHT800_PFMET85_PFMHT85_IDTight();
        else if (name == "HLT_PFHT890") return nt.HLT_PFHT890();
        else if (name == "HLT_PFJet140") return nt.HLT_PFJet140();
        else if (name == "HLT_PFJet200") return nt.HLT_PFJet200();
        else if (name == "HLT_PFJet260") return nt.HLT_PFJet260();
        else if (name == "HLT_PFJet320") return nt.HLT_PFJet320();
        else if (name == "HLT_PFJet40") return nt.HLT_PFJet40();
        else if (name == "HLT_PFJet400") return nt.HLT_PFJet400();
        else if (name == "HLT_PFJet450") return nt.HLT_PFJet450();
        else if (name == "HLT_PFJet500") return nt.HLT_PFJet500();
        else if (name == "HLT_PFJet550") return nt.HLT_PFJet550();
        else if (name == "HLT_PFJet60") return nt.HLT_PFJet60();
        else if (name == "HLT_PFJet80") return nt.HLT_PFJet80();
        else if (name == "HLT_PFJetFwd140") return nt.HLT_PFJetFwd140();
        else if (name == "HLT_PFJetFwd200") return nt.HLT_PFJetFwd200();
        else if (name == "HLT_PFJetFwd260") return nt.HLT_PFJetFwd260();
        else if (name == "HLT_PFJetFwd320") return nt.HLT_PFJetFwd320();
        else if (name == "HLT_PFJetFwd40") return nt.HLT_PFJetFwd40();
        else if (name == "HLT_PFJetFwd400") return nt.HLT_PFJetFwd400();
        else if (name == "HLT_PFJetFwd450") return nt.HLT_PFJetFwd450();
        else if (name == "HLT_PFJetFwd500") return nt.HLT_PFJetFwd500();
        else if (name == "HLT_PFJetFwd60") return nt.HLT_PFJetFwd60();
        else if (name == "HLT_PFJetFwd80") return nt.HLT_PFJetFwd80();
        else if (name == "HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1") return nt.HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1();
        else if (name == "HLT_PFMET100_PFMHT100_IDTight_PFHT60") return nt.HLT_PFMET100_PFMHT100_IDTight_PFHT60();
        else if (name == "HLT_PFMET110_PFMHT110_IDTight") return nt.HLT_PFMET110_PFMHT110_IDTight();
        else if (name == "HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1") return nt.HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1();
        else if (name == "HLT_PFMET120_PFMHT120_IDTight") return nt.HLT_PFMET120_PFMHT120_IDTight();
        else if (name == "HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1") return nt.HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1();
        else if (name == "HLT_PFMET120_PFMHT120_IDTight_PFHT60") return nt.HLT_PFMET120_PFMHT120_IDTight_PFHT60();
        else if (name == "HLT_PFMET130_PFMHT130_IDTight") return nt.HLT_PFMET130_PFMHT130_IDTight();
        else if (name == "HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1") return nt.HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1();
        else if (name == "HLT_PFMET140_PFMHT140_IDTight") return nt.HLT_PFMET140_PFMHT140_IDTight();
        else if (name == "HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1") return nt.HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1();
        else if (name == "HLT_PFMET200_HBHECleaned") return nt.HLT_PFMET200_HBHECleaned();
        else if (name == "HLT_PFMET200_HBHE_BeamHaloCleaned") return nt.HLT_PFMET200_HBHE_BeamHaloCleaned();
        else if (name == "HLT_PFMET200_NotCleaned") return nt.HLT_PFMET200_NotCleaned();
        else if (name == "HLT_PFMET250_HBHECleaned") return nt.HLT_PFMET250_HBHECleaned();
        else if (name == "HLT_PFMET300_HBHECleaned") return nt.HLT_PFMET300_HBHECleaned();
        else if (name == "HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60") return nt.HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60();
        else if (name == "HLT_PFMETNoMu110_PFMHTNoMu110_IDTight") return nt.HLT_PFMETNoMu110_PFMHTNoMu110_IDTight();
        else if (name == "HLT_PFMETNoMu120_PFMHTNoMu120_IDTight") return nt.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight();
        else if (name == "HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60") return nt.HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60();
        else if (name == "HLT_PFMETNoMu130_PFMHTNoMu130_IDTight") return nt.HLT_PFMETNoMu130_PFMHTNoMu130_IDTight();
        else if (name == "HLT_PFMETNoMu140_PFMHTNoMu140_IDTight") return nt.HLT_PFMETNoMu140_PFMHTNoMu140_IDTight();
        else if (name == "HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60") return nt.HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60();
        else if (name == "HLT_PFMETTypeOne110_PFMHT110_IDTight") return nt.HLT_PFMETTypeOne110_PFMHT110_IDTight();
        else if (name == "HLT_PFMETTypeOne120_PFMHT120_IDTight") return nt.HLT_PFMETTypeOne120_PFMHT120_IDTight();
        else if (name == "HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60") return nt.HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60();
        else if (name == "HLT_PFMETTypeOne130_PFMHT130_IDTight") return nt.HLT_PFMETTypeOne130_PFMHT130_IDTight();
        else if (name == "HLT_PFMETTypeOne140_PFMHT140_IDTight") return nt.HLT_PFMETTypeOne140_PFMHT140_IDTight();
        else if (name == "HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned") return nt.HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned();
        else if (name == "HLT_Photon120") return nt.HLT_Photon120();
        else if (name == "HLT_Photon120_R9Id90_HE10_IsoM") return nt.HLT_Photon120_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon150") return nt.HLT_Photon150();
        else if (name == "HLT_Photon165_R9Id90_HE10_IsoM") return nt.HLT_Photon165_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon175") return nt.HLT_Photon175();
        else if (name == "HLT_Photon200") return nt.HLT_Photon200();
        else if (name == "HLT_Photon20_HoverELoose") return nt.HLT_Photon20_HoverELoose();
        else if (name == "HLT_Photon25") return nt.HLT_Photon25();
        else if (name == "HLT_Photon300_NoHE") return nt.HLT_Photon300_NoHE();
        else if (name == "HLT_Photon30_HoverELoose") return nt.HLT_Photon30_HoverELoose();
        else if (name == "HLT_Photon33") return nt.HLT_Photon33();
        else if (name == "HLT_Photon40_HoverELoose") return nt.HLT_Photon40_HoverELoose();
        else if (name == "HLT_Photon50") return nt.HLT_Photon50();
        else if (name == "HLT_Photon50_HoverELoose") return nt.HLT_Photon50_HoverELoose();
        else if (name == "HLT_Photon50_R9Id90_HE10_IsoM") return nt.HLT_Photon50_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50") return nt.HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50();
        else if (name == "HLT_Photon60_HoverELoose") return nt.HLT_Photon60_HoverELoose();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15();
        else if (name == "HLT_Photon75") return nt.HLT_Photon75();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM") return nt.HLT_Photon75_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3();
        else if (name == "HLT_Photon90") return nt.HLT_Photon90();
        else if (name == "HLT_Photon90_CaloIdL_PFHT700") return nt.HLT_Photon90_CaloIdL_PFHT700();
        else if (name == "HLT_Photon90_R9Id90_HE10_IsoM") return nt.HLT_Photon90_R9Id90_HE10_IsoM();
        else if (name == "HLT_Physics") return nt.HLT_Physics();
        else if (name == "HLT_Physics_part0") return nt.HLT_Physics_part0();
        else if (name == "HLT_Physics_part1") return nt.HLT_Physics_part1();
        else if (name == "HLT_Physics_part2") return nt.HLT_Physics_part2();
        else if (name == "HLT_Physics_part3") return nt.HLT_Physics_part3();
        else if (name == "HLT_Physics_part4") return nt.HLT_Physics_part4();
        else if (name == "HLT_Physics_part5") return nt.HLT_Physics_part5();
        else if (name == "HLT_Physics_part6") return nt.HLT_Physics_part6();
        else if (name == "HLT_Physics_part7") return nt.HLT_Physics_part7();
        else if (name == "HLT_QuadPFJet103_88_75_15") return nt.HLT_QuadPFJet103_88_75_15();
        else if (name == "HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2") return nt.HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2();
        else if (name == "HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1") return nt.HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1();
        else if (name == "HLT_QuadPFJet105_88_76_15") return nt.HLT_QuadPFJet105_88_76_15();
        else if (name == "HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2") return nt.HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2();
        else if (name == "HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1") return nt.HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1();
        else if (name == "HLT_QuadPFJet111_90_80_15") return nt.HLT_QuadPFJet111_90_80_15();
        else if (name == "HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2") return nt.HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2();
        else if (name == "HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1") return nt.HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1();
        else if (name == "HLT_QuadPFJet98_83_71_15") return nt.HLT_QuadPFJet98_83_71_15();
        else if (name == "HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2") return nt.HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2();
        else if (name == "HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1") return nt.HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1();
        else if (name == "HLT_Random") return nt.HLT_Random();
        else if (name == "HLT_Rsq0p35") return nt.HLT_Rsq0p35();
        else if (name == "HLT_Rsq0p40") return nt.HLT_Rsq0p40();
        else if (name == "HLT_RsqMR300_Rsq0p09_MR200") return nt.HLT_RsqMR300_Rsq0p09_MR200();
        else if (name == "HLT_RsqMR300_Rsq0p09_MR200_4jet") return nt.HLT_RsqMR300_Rsq0p09_MR200_4jet();
        else if (name == "HLT_RsqMR320_Rsq0p09_MR200") return nt.HLT_RsqMR320_Rsq0p09_MR200();
        else if (name == "HLT_RsqMR320_Rsq0p09_MR200_4jet") return nt.HLT_RsqMR320_Rsq0p09_MR200_4jet();
        else if (name == "HLT_SingleJet30_Mu12_SinglePFJet40") return nt.HLT_SingleJet30_Mu12_SinglePFJet40();
        else if (name == "HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15") return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15();
        else if (name == "HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1") return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1();
        else if (name == "HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15") return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15();
        else if (name == "HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1") return nt.HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1();
        else if (name == "HLT_TkMu100") return nt.HLT_TkMu100();
        else if (name == "HLT_Trimuon5_3p5_2_Upsilon_Muon") return nt.HLT_Trimuon5_3p5_2_Upsilon_Muon();
        else if (name == "HLT_TripleJet110_35_35_Mjj650_PFMET110") return nt.HLT_TripleJet110_35_35_Mjj650_PFMET110();
        else if (name == "HLT_TripleJet110_35_35_Mjj650_PFMET120") return nt.HLT_TripleJet110_35_35_Mjj650_PFMET120();
        else if (name == "HLT_TripleJet110_35_35_Mjj650_PFMET130") return nt.HLT_TripleJet110_35_35_Mjj650_PFMET130();
        else if (name == "HLT_TripleMu_10_5_5_DZ") return nt.HLT_TripleMu_10_5_5_DZ();
        else if (name == "HLT_TripleMu_12_10_5") return nt.HLT_TripleMu_12_10_5();
        else if (name == "HLT_TripleMu_5_3_3_Mass3p8to60_DCA") return nt.HLT_TripleMu_5_3_3_Mass3p8to60_DCA();
        else if (name == "HLT_TripleMu_5_3_3_Mass3p8to60_DZ") return nt.HLT_TripleMu_5_3_3_Mass3p8to60_DZ();
        else if (name == "HLT_TriplePhoton_20_20_20_CaloIdLV2") return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2();
        else if (name == "HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL") return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL();
        else if (name == "HLT_TriplePhoton_30_30_10_CaloIdLV2") return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2();
        else if (name == "HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL") return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL();
        else if (name == "HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL") return nt.HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL();
        else if (name == "HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx") return nt.HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx();
        else if (name == "HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx") return nt.HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx();
        else if (name == "HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx") return nt.HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx();
        else if (name == "HLT_UncorrectedJetE30_NoBPTX") return nt.HLT_UncorrectedJetE30_NoBPTX();
        else if (name == "HLT_UncorrectedJetE30_NoBPTX3BX") return nt.HLT_UncorrectedJetE30_NoBPTX3BX();
        else if (name == "HLT_UncorrectedJetE60_NoBPTX3BX") return nt.HLT_UncorrectedJetE60_NoBPTX3BX();
        else if (name == "HLT_UncorrectedJetE70_NoBPTX3BX") return nt.HLT_UncorrectedJetE70_NoBPTX3BX();
        else if (name == "HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg") return nt.HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg();
        else if (name == "HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg") return nt.HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg();
        else if (name == "HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg") return nt.HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg();
        else if (name == "HLT_ZeroBias") return nt.HLT_ZeroBias();
        else if (name == "HLT_ZeroBias_FirstBXAfterTrain") return nt.HLT_ZeroBias_FirstBXAfterTrain();
        else if (name == "HLT_ZeroBias_FirstCollisionAfterAbortGap") return nt.HLT_ZeroBias_FirstCollisionAfterAbortGap();
        else if (name == "HLT_ZeroBias_FirstCollisionInTrain") return nt.HLT_ZeroBias_FirstCollisionInTrain();
        else if (name == "HLT_ZeroBias_IsolatedBunches") return nt.HLT_ZeroBias_IsolatedBunches();
        else if (name == "HLT_ZeroBias_LastCollisionInTrain") return nt.HLT_ZeroBias_LastCollisionInTrain();
        else if (name == "HLT_ZeroBias_part0") return nt.HLT_ZeroBias_part0();
        else if (name == "HLT_ZeroBias_part1") return nt.HLT_ZeroBias_part1();
        else if (name == "HLT_ZeroBias_part2") return nt.HLT_ZeroBias_part2();
        else if (name == "HLT_ZeroBias_part3") return nt.HLT_ZeroBias_part3();
        else if (name == "HLT_ZeroBias_part4") return nt.HLT_ZeroBias_part4();
        else if (name == "HLT_ZeroBias_part5") return nt.HLT_ZeroBias_part5();
        else if (name == "HLT_ZeroBias_part6") return nt.HLT_ZeroBias_part6();
        else if (name == "HLT_ZeroBias_part7") return nt.HLT_ZeroBias_part7();
        else if (name == "HLTriggerFinalPath") return nt.HLTriggerFinalPath();
        else if (name == "HLTriggerFirstPath") return nt.HLTriggerFirstPath();
        return bool();
    }
    vector<bool> GetVB(const string &name) {
        if (name == "Electron_convVeto") return nt.Electron_convVeto();
        else if (name == "Electron_cutBased_HEEP") return nt.Electron_cutBased_HEEP();
        else if (name == "Electron_isPFcand") return nt.Electron_isPFcand();
        else if (name == "Electron_mvaFall17Iso_WP80") return nt.Electron_mvaFall17Iso_WP80();
        else if (name == "Electron_mvaFall17Iso_WP90") return nt.Electron_mvaFall17Iso_WP90();
        else if (name == "Electron_mvaFall17Iso_WPL") return nt.Electron_mvaFall17Iso_WPL();
        else if (name == "Electron_mvaFall17noIso_WP80") return nt.Electron_mvaFall17noIso_WP80();
        else if (name == "Electron_mvaFall17noIso_WP90") return nt.Electron_mvaFall17noIso_WP90();
        else if (name == "Electron_mvaFall17noIso_WPL") return nt.Electron_mvaFall17noIso_WPL();
        else if (name == "IsoTrack_isHighPurityTrack") return nt.IsoTrack_isHighPurityTrack();
        else if (name == "IsoTrack_isPFcand") return nt.IsoTrack_isPFcand();
        else if (name == "Muon_isPFcand") return nt.Muon_isPFcand();
        else if (name == "Muon_mediumId") return nt.Muon_mediumId();
        else if (name == "Muon_softId") return nt.Muon_softId();
        else if (name == "Muon_tightId") return nt.Muon_tightId();
        else if (name == "Photon_electronVeto") return nt.Photon_electronVeto();
        else if (name == "Photon_isScEtaEB") return nt.Photon_isScEtaEB();
        else if (name == "Photon_isScEtaEE") return nt.Photon_isScEtaEE();
        else if (name == "Photon_mvaID_WP80") return nt.Photon_mvaID_WP80();
        else if (name == "Photon_mvaID_WP90") return nt.Photon_mvaID_WP90();
        else if (name == "Photon_pixelSeed") return nt.Photon_pixelSeed();
        else if (name == "Tau_idDecayMode") return nt.Tau_idDecayMode();
        return vector<bool>();
    }
}
