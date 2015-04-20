#!/usr/bin/env python

from optparse import OptionParser
parser = OptionParser()
parser.add_option("--run2011",default=False,action="store_true",help="Run 2011 only")
parser.add_option("--run2012",default=False,action="store_true",help="Run 2012 only")
(opts,args) = parser.parse_args()

import ROOT as r
r.gSystem.Load("lib/libAnalysis")

# start timer
sw = r.TStopwatch()
sw.Start()

opt_obj = r.MultiDimCutOpt()
if not opts.run2011 and not opts.run2012:
  opt_obj.setRunAll(True)

if opts.run2011:
  opt_obj.setRunAll(False)
  opt_obj.setRun2011(True)

if opts.run2012:
  opt_obj.setRunAll(False)
  opt_obj.setRun2012(True)

opt_obj.setup()
opt_obj.setMisIdType(5)

#opt_obj.makeInitialDatasets()
#opt_obj.makePDFs()
#opt_obj.plotShapes()
opt_obj.loadWorkspace()
#opt_obj.drawAtCut("MyP1",-1.,0.,-8.)
#opt_obj.drawAtCut("MyP2",-1.,8.,0.)
#opt_obj.drawAtCut("MyP3",-1.,8.,-8.)
#opt_obj.drawAtCut("MyP4",0.,0.,-8.)
#opt_obj.drawAtCut("MyP5",0.,8.,0.)
#opt_obj.drawAtCut("MyP6",0.,8.,-8.)
opt_obj.setScanPoints1D(100)
opt_obj.setScanPoints2D(50)

#opt_obj.runSimple(0)
opt_obj.runSimple(1)
#opt_obj.runSimple(2)
#opt_obj.runSimple(3)
#opt_obj.runSimple(4)
opt_obj.save()

# stop timer and finish
sw.Stop()
print 'Took:', sw.Print()

raw_input("Done\n")
