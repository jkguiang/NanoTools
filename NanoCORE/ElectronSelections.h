#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "Nano.h"

bool electronID(int elIdx, IDLevel idlevel, int year);
float electronMVACut(float A, float B, float C, float pt);
bool passesElectronMVA(int iel, string id_name);
bool isTriggerSafe_noIso_v3(int iel);
bool passElectronIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int iel);

#endif
