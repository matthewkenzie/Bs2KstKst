import ROOT as r
r.gROOT.ProcessLine(".x ~/Scratch/lhcb/lhcbStyle.C")
r.gStyle.SetPalette(1)

tree = r.TChain("Bs2Kst0Kst0/DecayTree")

tree.Add("nTuples/Bs2KpiKpi_PhaseSpace/Bs2KpiKpi_PhaseSpace_MC2012_magDown_Job202.root")
tree.Add("nTuples/Bs2KpiKpi_PhaseSpace/Bs2KpiKpi_PhaseSpace_MC2012_magUp_Job201.root")
tree.Add("nTuples/Bs2KpiKpi_PhaseSpace/Bs2KpiKpi_PhaseSpace_MC2011_magDown_Job207.root")
tree.Add("nTuples/Bs2KpiKpi_PhaseSpace/Bs2KpiKpi_PhaseSpace_MC2011_magUp_Job206.root")

th2f = r.TH2F("h","",50,750,1700,50,750,1700)
tree.Draw("Kst_MM:Kstb_MM>>h","","goff")

canv = r.TCanvas()
th2f.Draw("colz")
canv.Update()
canv.Modified()
raw_input()
