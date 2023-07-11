#define _VANILLA_ROOT_
// C++ headers
#include <iostream>


// ROOT headers
#include "TROOT.h"
#include "TFile.h"
#include "TChain.h"
#include "TTree.h"
#include "TSystem.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TMath.h"
#include "TStyle.h"
#include "TCanvas.h"

// PicoDst headers
#include "../StPicoEvent/StPicoDstReader.h"
#include "../StPicoEvent/StPicoDst.h"
#include "../StPicoEvent/StPicoEvent.h"
#include "../StPicoEvent/StPicoTrack.h"
#include "../StPicoEvent/StPicoBTofHit.h"
#include "../StPicoEvent/StPicoBTowHit.h"
#include "../StPicoEvent/StPicoEmcTrigger.h"
#include "../StPicoEvent/StPicoBTofPidTraits.h"
#include "../StPicoEvent/StPicoTrackCovMatrix.h"
//_________________
#if ROOT_VERSION_CODE >= ROOT_VERSION(6, 0, 0)
R__LOAD_LIBRARY(../StPicoEvent/libStPicoDst);
#else
gSystem->Load("../StPicoEvent/libStPicoDst.so");
#endif