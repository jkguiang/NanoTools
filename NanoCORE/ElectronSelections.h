#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "Nano.h"

enum electronMVAIDLevel {
    veto_noIso_2017,
    fakable_noIso_looseMVA_2017,
    medium_2017,
    veto_noIso_2016,
    fakable_noIso_2016,
    fakable_noIso_looseMVA_2016,
    medium_noIso_2016
};

bool electronID(int idx, IDLevel id_level, int year);
bool electron2016ID(int idx, IDLevel id_level);
bool electron2017ID(int idx, IDLevel id_level);
float electron2016MVACut(float A, float B, float C, float pt);
float electron2017MVACut(float A, float B, float C, float pt);
bool passesElectronMVA(int idx, electronMVAIDLevel id_level, int year);
bool isTriggerSafeNoIso(int idx);

#endif
