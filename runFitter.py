#!/usr/bin/env python

from optparse import OptionParser
parser = OptionParser()
parser.add_option("-i","--infile",default="AnalysisOut.root",help="Name of input root file. Default=%default")
parser.add_option("-t","--treename",default="AnalysisTree",help="Name of input tree. Default=%default")
parser.add_option("-o","--outfile",default="FitterOut.root",help="Name of output file. Default=%default")
parser.add_option("-a","--assessBDTCut",default=False,action="store_true",help="Run to assess the values for the BDT")
(opts,args) = parser.parse_args()

import ROOT as r
r.gSystem.Load("lib/libAnalysis")
r.gROOT.SetBatch()

sw = r.TStopwatch()
sw.Start()

print 'Starting Fitter'

if opts.assessBDTCut:
	fitter = r.AssessBDTCut()
	fitter.setup(opts.infile,opts.treename)
	fitter.fit()
	fitter.plot()
	fitter.save(opts.outfile)

else:
	fitter = r.Fitter()
	fitter.addObsVar("B_s0_MM",5200,5600)
	fitter.addObsVar("B_s0_Phi",-1.*r.TMath.Pi(),1.*r.TMath.Pi())
	fitter.addObsVar("Kst_CosTheta",-1.,1.)
	fitter.addObsVar("Kstb_CosTheta",-1.,1.)
	fitter.addObsVar("Kst_MM",750,1700)
	fitter.addObsVar("Kstb_MM",750,1700)
	fitter.w.Print('v')
	fitter.setBDTCut(0.08)
	fitter.setup(opts.infile,opts.treename)
	fitter.fit()
	fitter.plot('B_s0_MM',True,5300,5450)
	fitter.plot('B_s0_Phi',False)
	fitter.plot('Kst_CosTheta',False)
	fitter.plot('Kst_CosTheta',False)
	fitter.plot('Kst_MM',False)
	fitter.plot('Kstb_MM',False)
	fitter.save(opts.outfile)
