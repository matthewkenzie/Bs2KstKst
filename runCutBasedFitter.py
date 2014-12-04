#!/usr/bin/env python

from optparse import OptionParser
parser = OptionParser()
parser.add_option("-i","--infile",default="CutBasedOut.root",help="Name of input root file. Default=%default")
parser.add_option("-t","--treename",default="ReducedTree",help="Name of input tree. Default=%default")
parser.add_option("-o","--outfile",default="CutBasedFitterOut.root",help="Name of output file. Default=%default")
parser.add_option("-I","--interactive",default=False,action="store_true",help="Run in interactive mode")
(opts,args) = parser.parse_args()

import ROOT as r
r.gSystem.Load("lib/libAnalysis")
if not opts.interactive: r.gROOT.SetBatch()

sw = r.TStopwatch()
sw.Start()

fitter = r.CutBasedFit("w")
fitter.addObsVars()
fitter.addCuts()
fitter.addDatasets()
fitter.makeDatasets()
fitter.fillDatasets(opts.infile, opts.treename)
fitter.constructPdfs()
fitter.run()
fitter.save(opts.outfile)

if opts.interactive: raw_input("Done")
