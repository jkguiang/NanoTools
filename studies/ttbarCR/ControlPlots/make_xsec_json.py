#!/usr/bin/env python
import json

xsec = dict()
xsec['DiLept_'] = 87.3
xsec['SingleLeptFromT_'] = 182.7
xsec['SingleLeptFromTbar_'] = 182.7
xsec['s-channel'] = 3.7
xsec['t-channel_antitop'] = 80.95
xsec['t-channel_top'] = 136.02
xsec['tW_antitop'] = 19.6
xsec['tW_top'] = 19.6
xsec['WWTo2L2Nu_'] =  12.18
xsec['WWToLNuQQ_'] =  50.00
xsec['WZTo1L1Nu2Q_'] =  10.74
xsec['WZTo1L3Nu_'] = 3.05
xsec['WZTo2L2Q_'] = 5.60
xsec['WZTo3LNu_'] = 4.43
xsec['ZZTo2L2Nu_'] = 0.56
xsec['ZZTo2L2Q_'] = 3.22
xsec['ZZTo2Q2Nu_'] = 4.73
xsec['ZZTo4L_'] = 1.25
xsec['TTWJetsToLNu_'] = 0.20
xsec['TTWJetsToQQ_'] = 0.40
xsec['TTZToLLNuNu_'] = 0.25
xsec['TTZToQQ_'] = 0.53
xsec['DYJetsToLL_'] = 6021
xsec['W1JetsToLNu_NuPt-200_'] = 2.36
xsec['W1JetsToLNu_Tu'] = 11752
xsec['W2JetsToLNu_NuPt-200_'] = 4.95
xsec['W2JetsToLNu_Tu'] = 3841
xsec['W3JetsToLNu_NuPt-200_'] = 4.94
xsec['W3JetsToLNu_Tu' ] = 1160
xsec['W4JetsToLNu_NuPt-200_'] = 8.83
xsec['W4JetsToLNu_Tu'] = 600

with open("cross-sections.json",'w') as f:
    f.write(json.dumps(xsec,indent=''))
    f.write('\n')
f.close()
