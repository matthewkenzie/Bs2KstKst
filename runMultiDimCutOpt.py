#!/usr/bin/env python

from optparse import OptionParser
parser = OptionParser()
parser.add_option("-i","--infile",default=None,help="File with input trees")
parser.add_option("-o","--outfile",default=None,help="File to save output to")
parser.add_option("-c","--cachefile",default=None,help="File to get cache from")
parser.add_option("-n","--doNotLoadFromCache",dest="loadFromCache",default=True,action="store_false",help="Remake datasets and PDFs")
parser.add_option("--misIdType",type="int",default=1, help="""The MisIdType. Options (default=%default):
                                                                  1: rho_mc_y + phi_mc_y + lb_mc_y
                                                                  2: rho_mc_y
                                                                  3: phi_mc_y
                                                                  4: lb_mc_y
                                                                  5: rho_mc_y + phi_mc_y""")
parser.add_option("--fomType",default=[1], action="append", help="""Fig of merit type (can pass multiple). Options (default=%default): \n
                                                                      0: S/sqrt(S+B)
                                                                      1: S/sqrt(S+B+M)
                                                                      2: S/sqrt(S+B+sigma*M)
                                                                      3: S/sqrt(S+B+2sigma*M)
                                                                      4: S/sqrt(S+B+M) * S/(S+B+M)""")
parser.add_option("--run2011",default=False,action="store_true",help="Run 2011 only")
parser.add_option("--run2012",default=False,action="store_true",help="Run 2012 only")
parser.add_option("--scanpoints1d",type="int",default=100,help="1D scan points")
parser.add_option("--scanpoints2d",type="int",default=50,help="2D scan points")
(opts,args) = parser.parse_args()

import ROOT as r
r.gSystem.Load("lib/libAnalysis")

# start timer
sw = r.TStopwatch()
sw.Start()

# make object
cut_optimiser = r.MultiDimCutOpt()

# configure running options
if not opts.run2011 and not opts.run2012:
  cut_optimiser.setRunAll(True)
  if not opts.infile:    opts.infile    = 'root/AnalysisOut.root'
  if not opts.outfile:   opts.outfile   = 'root/MultiDimCutOptOut.root'
  if not opts.cachefile: opts.cachefile = 'root/MultiDimCutOptIn.root'

if opts.run2011:
  cut_optimiser.setRunAll(False)
  cut_optimiser.setRun2011(True)
  if not opts.infile:    opts.infile    = 'root/AnalysisOut.root'
  if not opts.outfile:   opts.outfile   = 'root/MultiDimCutOptOut_2011.root'
  if not opts.cachefile: opts.cachefile = 'root/MultiDimCutOptIn_2011.root'

if opts.run2012:
  cut_optimiser.setRunAll(False)
  cut_optimiser.setRun2012(True)
  if not opts.infile:    opts.infile    = 'root/AnalysisOut.root'
  if not opts.outfile:   opts.outfile   = 'root/MultiDimCutOptOut_2012.root'
  if not opts.cachefile: opts.cachefile = 'root/MultiDimCutOptIn_2012.root'

cut_optimiser.setup(opts.infile, opts.outfile, opts.cachefile)
cut_optimiser.setMisIdType(opts.misIdType)

if opts.loadFromCache:
  cut_optimiser.loadWorkspace()
else:
  cut_optimiser.makeInitialDatasets()
  cut_optimiser.makePDFs()
  cut_optimiser.plotShapes()

cut_optimiser.setScanPoints1D(opts.scanpoints1d)
cut_optimiser.setScanPoints2D(opts.scanpoints2d)

for fomT in opts.fomType:
  cut_optimiser.runSimple(fomT)

cut_optimiser.save()

# stop timer and finish
sw.Stop()
print 'Took:', sw.Print()

raw_input("Done\n")
