#include "MuonSelections.h"
#include "IsolationTools.h"

using namespace tas;

bool muonID(unsigned int imu, IDLevel idlevel, int year){
    switch(year) {
        case(2016):
            return false;
        case(2017):
            switch(idlevel) {
                case(IDfakable):
                    if (Muon_pt()[imu] < 10)                       return false;
                    if (fabs(Muon_eta()[imu]) > 2.4)               return false;
                    if (fabs(Muon_dxy()[imu]) > 0.05)              return false;
                    if (fabs(Muon_dz()[imu]) > 0.1)                return false;
                    if (!Muon_looseId()[imu])                      return false;
                    if (Muon_sip3d()[imu] >= 4)                    return false;
                    if (!Muon_looseId()[imu])                      return false;
                    if (Muon_ptErr()[imu] / Muon_pt()[imu] >= 0.2) return false;
                    if (!Muon_mediumId()[imu])                     return false;
                    if (!passMuonIso(0.11,0.74,6.8,imu))           return false;
                    return true;
                case(IDtight):
                    if (Muon_pt()[imu] < 10)                       return false;
                    if (fabs(Muon_eta()[imu]) > 2.4)               return false;
                    if (fabs(Muon_dxy()[imu]) > 0.05)              return false;
                    if (fabs(Muon_dz()[imu]) > 0.1)                return false;
                    if (Muon_sip3d()[imu] >= 4)                    return false;
                    if (!Muon_looseId()[imu])                      return false;
                    if (Muon_ptErr()[imu] / Muon_pt()[imu] >= 0.2) return false;
                    if (!Muon_mediumId()[imu])                     return false;
                    if (Muon_miniPFRelIso_all()[imu] > 0.40)       return false;
                    return true;
                default:
                    cout << "Invalid ID level" << endl;
                    return false;
            }
        case(2018):
            return false;
    }
    return false;
}

bool passMuonIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int imu){
    double val_miniiso = Muon_miniPFRelIso_all()[imu];
    double val_ptratio = 1/(Muon_jetRelIso()[imu]+1);
    double val_ptrel = Muon_jetPtRelv2()[imu];
    return (val_miniiso < cut_miniiso && ((val_ptratio > cut_ptratio) || (val_ptrel > cut_ptrel)));
}
