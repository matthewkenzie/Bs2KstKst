#!/usr/bin/env python

import ROOT as r
r.gSystem.Load("lib/libAnalysis")
r.gROOT.ProcessLine(".x ~/Scratch/lhcb/lhcbStyle.C")

calc = r.CalculateSPDWeights()

calc.addFile('2011','Data','file_store/red_first/data_reduced/Data2011_MagDown_Reduced_j0.root')
calc.addFile('2011','Data','file_store/red_first/data_reduced/Data2011_MagUp_Reduced_j0.root')

calc.addFile('2012','Data','file_store/red_first/data_reduced/Data2012_MagDown_Reduced_j0.root')
calc.addFile('2012','Data','file_store/red_first/data_reduced/Data2012_MagUp_Reduced_j0.root')

calc.addFile('2011','MC','file_store/red_first/mc_reduced/MC2011_LowMass_MagDown_Reduced_j0.root')
calc.addFile('2011','MC','file_store/red_first/mc_reduced/MC2011_LowMass_MagUp_Reduced_j0.root')

calc.addFile('2012','MC','file_store/red_first/mc_reduced/MC2012_LowMass_MagDown_Reduced_j0.root')
calc.addFile('2012','MC','file_store/red_first/mc_reduced/MC2012_LowMass_MagUp_Reduced_j0.root')

calc.printFiles()

calc.fillHistograms()

calc.Plot()
