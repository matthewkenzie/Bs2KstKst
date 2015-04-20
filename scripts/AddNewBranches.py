from ROOT import *

from scripts.SetupDataInterface import get_Angles

# Names of the variables in the ntuples.
KpPx_name = 'Kplus_PX'
KpPy_name = 'Kplus_PY'
KpPz_name = 'Kplus_PZ'
KmPx_name = 'Kminus_PX'
KmPy_name = 'Kminus_PY'
KmPz_name = 'Kminus_PZ'
PipPx_name = 'Piplus_PX'
PipPy_name = 'Piplus_PY'
PipPz_name = 'Piplus_PZ'
PimPx_name = 'Piminus_PX'
PimPy_name = 'Piminus_PY'
PimPz_name = 'Piminus_PZ'
tau_name = 'B_s0_TAU'
tauerr_name = 'B_s0_TAUERR'

def AddNewBranches(inputfilename, treename, outputfilename):

  fcosin = TFile(inputfilename)
  tcosin = fcosin.Get(treename)
  fcosout = TFile(outputfilename,'RECREATE')
  tcosout = tcosin.CopyTree("")

  gROOT.ProcessLine(\
    "struct MyStruct{\
    Double_t adouble;\
    };")
  from ROOT import MyStruct

  cos1 = MyStruct()
  newBranchcos1 = tcosout.Branch('B_s0_Cos1', AddressOf(cos1,'adouble'), 'B_s0_Cos1/D')
  cos2 = MyStruct()
  newBranchcos2 = tcosout.Branch('B_s0_Cos2', AddressOf(cos2,'adouble'), 'B_s0_Cos2/D')
  phi = MyStruct()
  newBranchphi = tcosout.Branch('B_s0_Phi1', AddressOf(phi,'adouble'), 'B_s0_Phi1/D')
  t = MyStruct()
  newBrancht = tcosout.Branch('B_s0_t', AddressOf(t,'adouble'), 'B_s0_t/D')
  terr = MyStruct()
  newBranchterr = tcosout.Branch('B_s0_terr', AddressOf(terr,'adouble'), 'B_s0_terr/D')

  kp = TLorentzVector()
  pim = TLorentzVector()
  km = TLorentzVector()
  pip = TLorentzVector()

  print "Processing events ..."
  for ev, i in enumerate(tcosout):
    if (ev%1000==0): print ev, '/', tcosout.GetEntries()
    kp.SetXYZM(eval('i.'+KpPx_name),eval('i.'+KpPy_name),eval('i.'+KpPz_name),493.667)
    pim.SetXYZM(eval('i.'+PimPx_name),eval('i.'+PimPy_name),eval('i.'+PimPz_name),139.570)
    km.SetXYZM(eval('i.'+KmPx_name),eval('i.'+KmPy_name),eval('i.'+KmPz_name),493.667)
    pip.SetXYZM(eval('i.'+PipPx_name),eval('i.'+PipPy_name),eval('i.'+PipPz_name),139.570)
    angles = get_Angles(kp,pim,km,pip)
    cos1.adouble = angles[0]
    cos2.adouble = angles[1]
    phi.adouble  = angles[2]
    t.adouble    = eval('i.'+tau_name)*1000.
    terr.adouble = eval('i.'+tauerr_name)*1000.
    newBranchcos1.Fill()
    newBranchcos2.Fill()
    newBranchphi.Fill()
    newBrancht.Fill()
    newBranchterr.Fill()

  print "All events processed."

  tcosout.Write()
  fcosout.Close()

import sys
assert(len(sys.argv)==3)
AddNewBranches(sys.argv[1],'AnalysisTree',sys.argv[2])
