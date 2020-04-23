#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "Nano.h"

bool muonID(unsigned int imu, IDLevel idlevel, int year);
bool passMuonIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int imu);

#endif
