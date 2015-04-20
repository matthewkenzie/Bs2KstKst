from ROOT import *
from math import *

def GetAngles(kp,pim,km,pip):

  # define:
  # kp p11
  # pim p12
  # km p21
  # pip p22

  P1 = kp + pim
  P2 = km + pip

  B_s = kp + pim + km + pip

  # theta 1 is angle between P1 direction in B rest frame and p11 in P1 rest frame

  B_s_boost_vec = B_s.BoostVector()
  P1_boost_vec  = P1.BoostVector()

  kp.Boost(P1_boost_vec) # now kp (p11) is in P1 frame
  P1.Boost(B_s_boost_vec) # now P1 is in B frame

  Cos1 = P1.Angle(kp.Vect())

  # theta 2 is angle between P2 direction in B rest frame and p21 in P2 rest frame

  B_s_boost_vec = B_s.BoostVector()
  P2_boost_vec  = P2.BoostVector()

  km.Boost(P2_boost_vec) # now km is in P2 frame
  P2.Boost(B_s_boost_vec) # now P2 is in B frame

  Cos2 = P2.Angle(km.Vect())

  return Cos1, Cos2

from scripts.SetupDataInterface import get_Angles
import sys

tf = TFile(sys.argv[1])
tree = tf.Get('AnalysisTree')

for ev in range(100):
  tree.GetEntry(ev)
  kp  = TLorentzVector(tree.Kplus_PX, tree.Kplus_PY, tree.Kplus_PZ, tree.Kplus_PE)
  pim = TLorentzVector(tree.Piminus_PX, tree.Piminus_PY, tree.Piminus_PZ, tree.Piminus_PE)
  km  = TLorentzVector(tree.Kminus_PX, tree.Kminus_PY, tree.Kminus_PZ, tree.Kminus_PE)
  pip = TLorentzVector(tree.Piplus_PX, tree.Piplus_PY, tree.Piplus_PZ, tree.Piplus_PE)

  std_angles = get_Angles( kp, pim, km, pip )
  my_angles = GetAngles( kp, pim, km, pip )

  print 'Std:', std_angles[0], std_angles[1]
  print 'Me: ', my_angles[0], my_angles[1]


