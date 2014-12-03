#!/usr/bin/env python

import sys
import ROOT as r

r.gROOT.ProcessLine(".x ~/Scratch/lhcb/lhcbStyle.C")

inf = ''
if len(sys.argv)>2:
  sys.exit('Cannot run on more than than one file yet!')
elif len(sys.argv)==2:
  inf = sys.argv[1]
else:
  inf = 'AnalysisOut.root'

tf = r.TFile.Open(inf)

hPass = tf.Get('hPass')
hFail = tf.Get('hFail')
hEff = tf.Get('hEff')

canv = r.TCanvas("c","c",1000,600)
canv.SetLeftMargin(0.3)
canv.SetRightMargin(0.15)
hPass.SetStats(0)
hPass.Draw("TEXT")
canv.SetGridx()
canv.SetGridy()
canv.Update()
canv.Modified()
raw_input()


