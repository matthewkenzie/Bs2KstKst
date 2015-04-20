import ROOT as r

import sys

r.gROOT.ProcessLine('.x ~/Scratch/lhcb/lhcbStyle.C')
r.gROOT.ProcessLine('.L lib/libAnalysis.so')
r.gStyle.SetPalette(1)

import os
os.system('mkdir -p plots/SWeightedDistributions/pdf')
os.system('mkdir -p plots/SWeightedDistributions/png')
os.system('mkdir -p plots/SWeightedDistributions/C')

tf = r.TFile(sys.argv[1])

w = tf.Get('w')

obs = { 'Kst_MM'        : 50,
        'Kstb_MM'       : 50,
        'B_s0_Cos1'     : 25,
        'B_s0_Cos2'     : 25,
        'B_s0_t'        : 50,
        'B_s0_Phi1'     : 25
      }

def plotDistForDSet(dset):

#data = w.data('Data_wsweights_proj_bs2kstkst_y')
#data = w.data('Data')
#data = w.data('Bs2KstKst')

  data = w.data(dset)

  canv = r.TCanvas('c','c',1800,1200)
  canv.Divide(3,2)

  i=1

  for name, binning in obs.iteritems():

    plot = w.var(name).frame()
    data.plotOn(plot,r.RooFit.Binning(binning),r.RooFit.DataError(r.RooAbsData.SumW2))
    canv.cd(i)
    plot.GetXaxis().SetTitleSize(0.08)
    plot.GetXaxis().SetTitleOffset(0.8)
    print plot.GetYaxis().GetXmin(), plot.GetYaxis().GetXmax()
    plot.Draw()
    i+=1
    canv.Update()
    canv.Modified()

  canv.Print('plots/SWeightedDistributions/pdf/sweights_%s.pdf'%dset)
  canv.Print('plots/SWeightedDistributions/png/sweights_%s.png'%dset)
  canv.Print('plots/SWeightedDistributions/C/sweights_%s.C'%dset)

  w.var('Kst_MM').setBins(40)
  w.var('Kstb_MM').setBins(40)

  mycol = r.gROOT.GetColor(r.kGray+3)
  mycol.SetAlpha(0.4)

  th2f = w.var('Kst_MM').createHistogram('th2f_%s'%(dset),w.var('Kstb_MM'))
  th2f.SetLineColor(mycol.GetNumber())
  th2f.SetLineWidth(1)
  data.fillHistogram(th2f,r.RooArgList(w.var('Kst_MM'),w.var('Kstb_MM')))

  th2f.GetYaxis().SetNdivisions(th2f.GetXaxis().GetNdivisions())
  th2f_flat = th2f.Clone('%s_flat'%th2f.GetName())

  canv2d = r.TCanvas("c2","c2",1600,600)
  canv2d.Divide(2,1)
  canv2d.cd(1)
  r.gPad.SetPhi(40)
  r.gPad.SetTheta(30)
  r.gPad.SetTopMargin(0.01)
  r.gPad.SetRightMargin(0.01)
  th2f.Draw("lego2fbbb")
  canv2d.cd(2)
  r.gPad.SetRightMargin(0.15)
  r.gPad.SetLeftMargin(0.18)
  th2f_flat.GetXaxis().SetTitleOffset(0.8)
  th2f_flat.GetYaxis().SetTitleOffset(1.)
  th2f_flat.GetZaxis().SetRangeUser(0.,100.)
  th2f_flat.Draw("colz")
  canv2d.Update()
  canv2d.Modified()

  canv2d.Print("plots/SWeightedDistributions/pdf/sweights2d_%s.pdf"%dset)
  canv2d.Print("plots/SWeightedDistributions/png/sweights2d_%s.png"%dset)
  canv2d.Print("plots/SWeightedDistributions/C/sweights2d_%s.C"%dset)

  canvJust2D = r.TCanvas("c3","c3",800,600)
  canvJust2D.cd()
  r.gPad.SetPhi(40)
  r.gPad.SetTheta(30)
  r.gPad.SetTopMargin(0.01)
  r.gPad.SetRightMargin(0.1)
  th2f.Draw("lego2fbbb")
  canvJust2D.Update()
  canvJust2D.Modified()
  canvJust2D.Print("plots/SWeightedDistributions/pdf/sweights2d_%s_2.pdf"%dset)
  canvJust2D.Print("plots/SWeightedDistributions/png/sweights2d_%s_2.png"%dset)
  canvJust2D.Print("plots/SWeightedDistributions/C/sweights2d_%s_2.C"%dset)


#plotDistForDSet('Data')
plotDistForDSet('Data_wsweights_proj_bs2kstkst_y')
#plotDistForDSet('Bs2KstKst')
#plotDistForDSet('Bs2KstKst1430')
#plotDistForDSet('Bs2Kst1430Kst1430')
#plotDistForDSet('Bs2KpiKpiPhaseSpace')
