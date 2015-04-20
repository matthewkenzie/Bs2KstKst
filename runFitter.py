#!/usr/bin/env python

from optparse import OptionParser
parser = OptionParser()
parser.add_option("-T","--type",help="Which fitter to run")
parser.add_option("-i","--infile",help="Name of input root file. Default will get picked up from fit type")
parser.add_option("-t","--treename",help="Name of input tree. Default will get picked up from fit type")
parser.add_option("-o","--outfile",help="Name of output file. Default will get picked up from fit type")
parser.add_option("-I","--interactive",default=False,action="store_true",help="Run in interactive mode")
parser.add_option("-c","--cached",default=False,action="store_true", help="Load a cached workspace. Will look in cache/<outfilename> for this. Avoids lots of unneccessary refitting")
parser.add_option("-v","--verbose",default=False,action="store_true",help="Run with verbose output")
parser.add_option("-d","--debug",default=False,action="store_true",help="Run in debug mode")
(opts,args) = parser.parse_args()

# check a fit type has been passed
import sys
if not opts.type:
  sys.exit('You must define the fit type to run')

# check the fit type asked for is a valid class in the root library
import ROOT as r
r.gSystem.Load("lib/libAnalysis")
if not getattr(r,opts.type):
  sys.exit('%s is not a valid fit type'%opts.type)

##################################################################
# set up some default options for the various fit types available
if opts.type == 'CutBasedFit':
  if not opts.infile:     opts.infile   = 'root/CutBasedOut.root'
  if not opts.treename:   opts.treename = 'ReducedTree'
  if not opts.outfile:    opts.outfile  = 'root/CutBasedFitOut.root'

elif opts.type == 'AssessBDTCutFit':
  if not opts.infile:     opts.infile   = 'root/CutBasedOut.root'
  if not opts.treename:   opts.treename = 'ReducedTree'
  if not opts.outfile:    opts.outfile  = 'root/AssessBDTCutFitOut.root'

elif opts.type == 'AnalysisFit':
  if not opts.infile:     opts.infile   = 'root/AnalysisOut.root'
  if not opts.treename:   opts.treename = 'AnalysisTree'
  if not opts.outfile:    opts.outfile  = 'root/AnalysisFitOut.root'

elif opts.type == 'InvariantMassFit':
  if not opts.infile:     opts.infile   = 'root/AnalysisOut.root'
  if not opts.treename:   opts.treename = 'AnalysisTree'
  if not opts.outfile:    opts.outfile  = 'root/InvariantMassFitOut.root'

else:
  if not opts.infile:     opts.infile   = 'root/AnalysisOut.root'
  if not opts.treename:   opts.treename = 'AnalysisTree'
  if not opts.outfile:    opts.outfile  = 'root/AnalysisFitOut.root'
##################################################################

# set batch settings
if not opts.interactive: r.gROOT.SetBatch()

# start timer
sw = r.TStopwatch()
sw.Start()

# instantiate fit class and call standard set of functions
# write a new class which implements these and inhertis from FitterBase
fitter = getattr(r,opts.type)("w",opts.type,opts.verbose,opts.debug)

if opts.cached:
  fitter.loadCachedWorkspace('cache/%s'%opts.outfile)
else:
  fitter.addObsVars()
  fitter.addCuts()
  fitter.addDatasets()
  fitter.makeDatasets()
  fitter.fillDatasets(opts.infile, opts.treename)

fitter.constructPdfs()
fitter.run()
fitter.save(opts.outfile)

# copy finished file over to cache
import os
os.system('mkdir -p cache')
os.system('cp %s cache/'%opts.outfile)

# stop timer and finish
sw.Stop()
print 'Took:', sw.Print()

if opts.interactive: raw_input("Done\n")
