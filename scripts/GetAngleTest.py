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

  # boost everything to B frame
  B_s_boost_vec = B_s.BoostVector()

  boostedB_B_s = B_s.Clone()
  boostedB_P1 = P1.Clone()
  boostedB_P2 = P2.Clone()
  boostedB_kp = kp.Clone()
  boostedB_km = km.Clone()
  boostedB_pip = pip.Clone()
  boostedB_pim = pim.Clone()

  boostedB_B_s.Boost( -B_s_boost_vec )
  boostedB_P1.Boost( -B_s_boost_vec )
  boostedB_P2.Boost( -B_s_boost_vec )
  boostedB_kp.Boost( -B_s_boost_vec )
  boostedB_km.Boost( -B_s_boost_vec )
  boostedB_pip.Boost( -B_s_boost_vec )
  boostedB_pim.Boost( -B_s_boost_vec )

  # boost p11 into P1 frame and p21 into P2 frame
  P1_boost_vec  = boostedB_P1.BoostVector()
  P2_boost_vec  = boostedB_P2.BoostVector()

  boostedP1_kp = boostedB_kp.Clone()
  boostedP1_kp.Boost( -P1_boost_vec )

  boostedP2_km = boostedB_km.Clone()
  boostedP2_km.Boost( -P2_boost_vec)

  Cos1 = TMath.Cos( boostedB_P1.Angle( boostedP1_kp.Vect() ) )
  Cos2 = TMath.Cos( boostedB_P2.Angle( boostedP2_km.Vect() ) )

  # phi plane angle
  boostedB_kp_unit = boostedB_kp.Vect().Unit()
  boostedB_km_unit = boostedB_km.Vect().Unit()
  boostedB_pip_unit = boostedB_pip.Vect().Unit()
  boostedB_pim_unit = boostedB_pim.Vect().Unit()

  # get normals to decay plane
  e1 = ( boostedB_kp_unit.Cross( boostedB_pim_unit ) ).Unit()
  e2 = ( boostedB_km_unit.Cross( boostedB_pip_unit ) ).Unit()

  # dir of P1 in B frame
  ez = boostedB_P1.Vect().Unit()

  # angle
  cosPhi = e1.Dot(e2)
  sinPhi = (e2.Cross( e1 )).Dot(ez)
  phi = TMath.ACos(cosPhi)

  #Phi = phi if sinPhi > 0. else -phi
  Phi = phi - TMath.Pi()
  if sinPhi>0: Phi = -Phi

  return Cos1, Cos2, Phi

from scripts.SetupDataInterface import get_Angles
import sys

tf = TFile(sys.argv[1])
tree = tf.Get('AnalysisTree')

for ev in range(tree.GetEntries()):
  if (ev%1000==0): print ev, '/', tree.GetEntries()
  tree.GetEntry(ev)
  kp  = TLorentzVector(tree.Kplus_PX, tree.Kplus_PY, tree.Kplus_PZ, tree.Kplus_PE)
  pim = TLorentzVector(tree.Piminus_PX, tree.Piminus_PY, tree.Piminus_PZ, tree.Piminus_PE)
  km  = TLorentzVector(tree.Kminus_PX, tree.Kminus_PY, tree.Kminus_PZ, tree.Kminus_PE)
  pip = TLorentzVector(tree.Piplus_PX, tree.Piplus_PY, tree.Piplus_PZ, tree.Piplus_PE)

  std_angles = get_Angles( kp, pim, km, pip )
  my_angles = GetAngles( kp, pim, km, pip )

  diff = [ std_angles[0]-my_angles[0], std_angles[1]-my_angles[1], std_angles[2]-my_angles[2] ]

  if TMath.Abs(diff[0])>1.e-5 or TMath.Abs(diff[1])>1.e-5 or TMath.Abs(diff[2])>1.e-5:
    print 'Std:', std_angles[0], std_angles[1], std_angles[2]
    print 'Me: ', my_angles[0], my_angles[1], my_angles[2]



