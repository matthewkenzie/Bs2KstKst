from ROOT import *
from math import *
#from parameters import *

# ################################################################
# V A R I A B L E S
# ################################################################

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

NTUPLE_PATH = '.'

# ################################################################
# F U N C T I O N S
# ################################################################

#Function to multiply an array by a number (NProduct = Number Product)
def NProduct(alpha, Vect):
        Vect1 = range(3)
        for i in range(0,3):
            Vect1[i] = alpha*Vect[i]
        return Vect1


#Function to multiply a TVector3 by a number (NProductV = Number Product Vector)
def NProductV(alpha, Vect):
        Vect1 = [Vect.x(),Vect.y(),Vect.z()]
        for i in range(0,3):
            Vect1[i] = alpha*Vect[i]
        return TVector3(Vect1[0],Vect1[1],Vect1[2])


#Function to sum two arrays
def ArraySum(Vect1, Vect2):
        Vect = range(3)
        for i in range(0,3):
            Vect[i] = Vect1[i] + Vect2[i]
        return Vect


#Function to calculate the vector product of two vectors
def VProduct(Vect1, Vect2):
        Product = range(3)
        Product[0] = Vect1[1]*Vect2[2] - Vect1[2]*Vect2[1]
        Product[1] = -Vect1[0]*Vect2[2] + Vect1[2]*Vect2[0]
        Product[2] = Vect1[0]*Vect2[1] - Vect1[1]*Vect2[0]
        return Product


#Function to calculate the dot product of two vectors
def DProduct(Vector1, Vector2):
        Product = Vector1[0]*Vector2[0] + Vector1[1]*Vector2[1] + Vector1[2]*Vector2[2]
        return Product


#Function to calculate the module of a vector 3D
def VectorModule(fData):
        Module = sqrt(DProduct( fData, fData))
        return Module


#Function to calculate the unitary vector
def VectorUnitary(fData):
        Module = VectorModule(fData)
        Aux = NProduct(1./Module, fData)
        return Aux


#Function to calculate the parameters for the Armenteros plots
def get_APvars(P11_P,P12_P):
	P1_P = P11_P + P12_P
	P1dir = VectorUnitary(P1_P) # direction of P1
	P11_L = DProduct(P11_P, P1dir) # projection of P11 over the direction of P1
	P12_L = DProduct(P12_P, P1dir) # projection of P12 over the direction of P1
	P11_T = sqrt(VectorModule(P11_P)**2. - P11_L*P11_L) # P11 transverse component
	alpha = (P11_L - P12_L) / (P11_L + P12_L) # AP parameter
	return alpha, P11_T


#function to calculate the Theta1, Theta2 and Phi angles
def get_Angles(kp,pim,km,pip):

        P11p = [kp.Px(), kp.Py(), kp.Pz()]
        P12p = [pim.Px(), pim.Py(), pim.Pz()]
        P21p = [km.Px(), km.Py(), km.Pz()]
        P22p = [pip.Px(), pip.Py(), pip.Pz()]

        #Get the masses
        P11mass = kp.M()
        P12mass = pim.M()
        P21mass = km.M()
        P22mass = pip.M()
        P1mass = (kp+pim).M()
        P2mass = (km+pip).M()
        Bmass = (kp+pim+km+pip).M()

        #Calculate the momentum of K* and anti-K* (Particle 1 and particle 2)
        P1p = ArraySum( P11p, P12p)
        P2p = ArraySum( P21p, P22p)
        Bp = ArraySum( P1p, P2p)

        #Calculate the energies
        BE = sqrt( Bmass*Bmass + DProduct( Bp, Bp))
        P1E = sqrt( P1mass*P1mass + DProduct( P1p, P1p))
        P2E = sqrt( P2mass*P2mass + DProduct( P2p, P2p))
        P11E = sqrt( P11mass*P11mass + DProduct( P11p, P11p))
        P12E = sqrt( P12mass*P12mass + DProduct( P12p, P12p))
        P21E = sqrt( P21mass*P21mass + DProduct( P21p, P21p))
        P22E = sqrt( P22mass*P22mass + DProduct( P22p, P22p))

        #Calculate beta and gamma
        BBeta = NProduct( 1./BE, Bp)
        P1Beta = NProduct( 1./P1E, P1p)
        P2Beta = NProduct( 1./P2E, P2p)

        BGamma = 1./sqrt( 1 - DProduct( BBeta, BBeta))
        P1Gamma = 1./sqrt( 1 - DProduct( P1Beta, P1Beta))
        P2Gamma = 1./sqrt( 1 - DProduct( P2Beta, P2Beta))

        #Calculate the momentum of the K*, K and pi particles on the Bd, (anti-)K* direction
        P1p_B = DProduct( P1p, VectorUnitary( Bp)) #Projection of the K* momentum over the B movement direction
        P2p_B = DProduct( P2p, VectorUnitary( Bp))
        P11p_B = DProduct( P11p, VectorUnitary( Bp))
        P12p_B = DProduct( P12p, VectorUnitary( Bp))
        P21p_B = DProduct( P21p, VectorUnitary( Bp))
        P22p_B = DProduct( P22p, VectorUnitary( Bp))
        P1p_P2 = DProduct( P1p, VectorUnitary( P2p)) #Projection of the K* momentum over the anti-K* movement direction
        P2p_P1 = DProduct( P2p, VectorUnitary( P1p))
        P11p_P1 = DProduct( P11p, VectorUnitary( P1p)) #Projection of the P11 momentum over the particle 1 movement direction
        P12p_P1 = DProduct( P12p, VectorUnitary( P1p))
        P21p_P2 = DProduct( P21p, VectorUnitary( P2p))
        P22p_P2 = DProduct( P22p, VectorUnitary( P2p))

        #Calculate the momentum of the K and pi particles in the (anti-)K* rest frame
        #P11p_P1RF1 = particle 11 momentum in the particle 1 rest frame step 1 (move to the P1 rest frame)
        P1p_BRF1 = ArraySum( P1p, NProduct( -1*P1p_B, VectorUnitary( Bp)))
        P2p_BRF1 = ArraySum( P2p, NProduct( -1*P2p_B, VectorUnitary( Bp)))
        P11p_BRF1 = ArraySum( P11p, NProduct( -1*P11p_B, VectorUnitary( Bp)))
        P12p_BRF1 = ArraySum( P12p, NProduct( -1*P12p_B, VectorUnitary( Bp)))
        P21p_BRF1 = ArraySum( P21p, NProduct( -1*P21p_B, VectorUnitary( Bp)))
        P22p_BRF1 = ArraySum( P22p, NProduct( -1*P22p_B, VectorUnitary( Bp)))
        P1p_P2RF1 = ArraySum( P1p, NProduct( -1*P1p_P2, VectorUnitary( P2p)))
        P2p_P1RF1 = ArraySum( P2p, NProduct( -1*P2p_P1, VectorUnitary( P1p)))
        P11p_P1RF1 = ArraySum( P11p, NProduct( -1*P11p_P1, VectorUnitary( P1p)))
        P12p_P1RF1 = ArraySum( P12p, NProduct( -1*P12p_P1, VectorUnitary( P1p)))
        P21p_P2RF1 = ArraySum( P21p, NProduct( -1*P21p_P2, VectorUnitary( P2p)))
        P22p_P2RF1 = ArraySum( P22p, NProduct( -1*P22p_P2, VectorUnitary( P2p)))

        #P11p_KstsRF2 = particle 1 momentum in the particle 1 rest frame step 2 (the lorentz transformation)
        P1p_BRF2 = BGamma*P1p_B - BGamma*VectorModule( BBeta)*P1E
        P2p_BRF2 = BGamma*P2p_B - BGamma*VectorModule( BBeta)*P2E
        P11p_BRF2 = BGamma*P11p_B - BGamma*VectorModule( BBeta)*P11E
        P12p_BRF2 = BGamma*P12p_B - BGamma*VectorModule( BBeta)*P12E
        P21p_BRF2 = BGamma*P21p_B - BGamma*VectorModule( BBeta)*P21E
        P22p_BRF2 = BGamma*P22p_B - BGamma*VectorModule( BBeta)*P22E
        P1p_P2RF2 = P2Gamma*P1p_P2 - P2Gamma*VectorModule( P2Beta)*P1E
        P2p_P1RF2 = P1Gamma*P2p_P1 - P1Gamma*VectorModule( P1Beta)*P2E
        P11p_P1RF2 = P1Gamma*P11p_P1 - P1Gamma*VectorModule( P1Beta)*P11E
        P12p_P1RF2 = P1Gamma*P12p_P1 - P1Gamma*VectorModule( P1Beta)*P12E
        P21p_P2RF2 = P2Gamma*P21p_P2 - P2Gamma*VectorModule( P2Beta)*P21E
        P22p_P2RF2 = P2Gamma*P22p_P2 - P2Gamma*VectorModule( P2Beta)*P22E

        #P11p_P1RF = particle 1 momentum in the P1 rest frame (sum of the step 1 and step 2)
        P1p_BRF = ArraySum( P1p_BRF1, NProduct( P1p_BRF2, VectorUnitary( Bp)))
        P2p_BRF = ArraySum( P2p_BRF1, NProduct( P2p_BRF2, VectorUnitary( Bp)))
        P11p_BRF = ArraySum( P11p_BRF1, NProduct( P11p_BRF2, VectorUnitary( Bp)))
        P12p_BRF = ArraySum( P12p_BRF1, NProduct( P12p_BRF2, VectorUnitary( Bp)))
        P21p_BRF = ArraySum( P21p_BRF1, NProduct( P21p_BRF2, VectorUnitary( Bp)))
        P22p_BRF = ArraySum( P22p_BRF1, NProduct( P22p_BRF2, VectorUnitary( Bp)))
        P1p_P2RF = ArraySum( P1p_P2RF1, NProduct( P1p_P2RF2, VectorUnitary( P2p)))
        P2p_P1RF = ArraySum( P2p_P1RF1, NProduct( P2p_P1RF2, VectorUnitary( P1p)))
        P11p_P1RF = ArraySum( P11p_P1RF1, NProduct( P11p_P1RF2, VectorUnitary( P1p)))
        P12p_P1RF = ArraySum( P12p_P1RF1, NProduct( P12p_P1RF2, VectorUnitary( P1p)))
        P21p_P2RF = ArraySum( P21p_P2RF1, NProduct( P21p_P2RF2, VectorUnitary( P2p)))
        P22p_P2RF = ArraySum( P22p_P2RF1, NProduct( P22p_P2RF2, VectorUnitary( P2p)))

        #Take de oposite of the these vectors
        P2p_P1RF = NProduct( -1., P2p_P1RF)
        P1p_P2RF = NProduct( -1., P1p_P2RF)

        #Calculate the cos(theta) from the dot product of the (anti-)K* -P1- and K+(-) -P11- momentums
        CosTheta1 = DProduct( P11p_P1RF, P2p_P1RF) / (VectorModule( P11p_P1RF)*VectorModule( P2p_P1RF))
        CosTheta2 = DProduct( P21p_P2RF, P1p_P2RF) / (VectorModule( P21p_P2RF)*VectorModule( P1p_P2RF))


        #Calculate the phi angle from the vector product of the (anti-)K* and K+(-) momentums
        #PlaneP1 = plane formed by the P1 and its daughters
        PlaneP1 = VectorUnitary( VProduct( P11p_BRF, P12p_BRF))
        PlaneP2 = VectorUnitary( VProduct( P21p_BRF, P22p_BRF))

        #Make a ortogonal base
        Vx = VectorUnitary( PlaneP1)
        Vz = VectorUnitary( P1p_BRF)
        Vy = VectorUnitary( VProduct( Vz, Vx))

        #Calculate Sen(Phi) and Cos(Phi)
        CosPhi = DProduct( PlaneP2, Vx)
        SenPhi = DProduct( PlaneP2, Vy)

        #Calculate Phi
        Phi = atan2( SenPhi, CosPhi)
        if Phi < 0.: Phi = 2.*pi + Phi

        return CosTheta1, CosTheta2, Phi-pi


def AddCosines(inputfilename,inputfileextradir,inputfileextradirname,outputfilename):

	fcosin = TFile(NTUPLE_PATH + inputfilename + '.root')
	if inputfileextradir: tcosin = fcosin.Get(inputfileextradirname).Get('DecayTree')
	else: tcosin = fcosin.Get('DecayTree')
	fcosout = TFile(NTUPLE_PATH + outputfilename + '.root','RECREATE')
	print "Copying the original tree ..."
	tcosout = tcosin.CopyTree("")
	print "Tree copied."

	gROOT.ProcessLine(\
		"struct MyStruct{\
		Double_t adouble;\
		};")
	from ROOT import MyStruct
	cos1 = MyStruct()
	newBranchcos1 = tcosout.Branch('B_s0_Cos1', AddressOf(cos1,'adouble'), 'B_s0_Cos1/D')
	cos2 = MyStruct()
	newBranchcos2 = tcosout.Branch('B_s0_Cos2', AddressOf(cos2,'adouble'), 'B_s0_Cos2/D')
	kp = TLorentzVector()
	pim = TLorentzVector()
	km = TLorentzVector()
	pip = TLorentzVector()

	print "Processing events ..."
	for i in tcosout:
		kp.SetXYZM(eval('i.'+KpPx_name),eval('i.'+KpPy_name),eval('i.'+KpPz_name),493.667)
		pim.SetXYZM(eval('i.'+PimPx_name),eval('i.'+PimPy_name),eval('i.'+PimPz_name),139.570)
		km.SetXYZM(eval('i.'+KmPx_name),eval('i.'+KmPy_name),eval('i.'+KmPz_name),493.667)
		pip.SetXYZM(eval('i.'+PipPx_name),eval('i.'+PipPy_name),eval('i.'+PipPz_name),139.570)
		angles = get_Angles(kp,pim,km,pip)
		cos1.afloat = angles[0]
		cos2.afloat = angles[1]
		newBranchcos1.Fill()
		newBranchcos2.Fill()
	print "All events processed."

	tcosout.Write()
	fcosout.Close()


def ns2ps(inputfilename,outputfilename):

	ftin = TFile(NTUPLE_PATH+inputfilename+'.root')
	ttin = ftin.Get('DecayTree')
	ftout = TFile(NTUPLE_PATH+outputfilename+'.root','RECREATE')
	print "Copying the original tree ..."
	ttout = ttin.CopyTree("")
	print "Tree copied."

	gROOT.ProcessLine(\
		"struct MyStruct{\
		Float_t afloat;\
		};")
	from ROOT import MyStruct

	t = MyStruct()
	newBrancht = ttout.Branch('B_s0_t', AddressOf(t,'afloat'), 'B_s0_t/F')
	terr = MyStruct()
	newBranchterr = ttout.Branch('B_s0_terr', AddressOf(terr,'afloat'), 'B_s0_terr/F')

	print "Processing events ..."
	for i in ttout:
		t.afloat = eval('i.'+tau_name)*1000.
		terr.afloat = eval('i.'+tauerr_name)*1000.
		newBrancht.Fill()
		newBranchterr.Fill()
	print "All events processed."

	ttout.Write()
	ftout.Close()


def ApplyCuts(inputfilename,outputfilename):

	fselin = TFile(NTUPLE_PATH+inputfilename+'.root')
	tselin = fselin.Get('DecayTree')
	fselout = TFile(NTUPLE_PATH+outputfilename+'.root','RECREATE')

	# Cuts in the granddaughters.
	cuts_tracks_pt = "Piplus_PT>500 && Kminus_PT>500 && Piminus_PT>500 && Kplus_PT>500"
	cuts_tracks_chi2 = "&& Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36."
	cuts_PID = "&& !Piplus_isMuon && !Piminus_isMuon && !Kplus_isMuon && !Kminus_isMuon && Kplus_ProbNNp<0.6 && Kminus_ProbNNp<0.6 && Piplus_ProbNNpi>0.2 && Piminus_ProbNNpi>0.2 && Kplus_ProbNNk>0.2 && Kminus_ProbNNk>0.2"
	cuts_trchi2dof = "&& Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5"
	cuts_GD = cuts_tracks_pt + cuts_tracks_chi2 + cuts_PID + cuts_trchi2dof

	# Cuts in the daughters.
	cuts_Ks_pt = "&& Kstb_PT>900. && Kst_PT>900."
	cuts_Ks_mass = "&& Kst_M>750. && Kst_M<1700. && Kstb_M>750. && Kstb_M<1700."
	cuts_Ks_Vchi2ndof = "&& Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9."
	cuts_Ks_DIRA = "&& Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0."
	cuts_D = cuts_Ks_pt + cuts_Ks_mass + cuts_Ks_Vchi2ndof + cuts_Ks_DIRA

	# Variable range cuts.
	cuts_range = "&& abs(B_s0_MM-5365)<=450. && B_s0_TAU>=0. && B_s0_TAU*1000.<=12."

	# All cuts.
	cuts = cuts_GD + cuts_D + cuts_range

	print 'Selecting events ...'
	tselout = tselin.CopyTree(cuts)
	print 'Events selected.'
	tselout.Write()
	fselout.Close()
