###################################################
##     Steps to reproduce Bs->KstKst analysis    ##
###################################################

# Step 1 -- Preselection
./runAnalysis -d dat/presel/presel_cfg.dat -r -j presel_jobs --runLocal

mkdir file_store/presel
mv presel_jobs/*.root file_store/presel/

# Step 2 -- BDT training
./runAnalysis -d dat/bdttraining/bdttraining_nopid_splityears_massres_cfg.dat

ln -s root/MVATrainingNoPIDSplitYearsMassResOutput.root TMVA.root
root $ROOTSYS/share/root/macros/TMVAGui.C

# Step 3 -- Analysis
./runAnalysis -d dat/analysis/analysis_cfg.dat

# Step 4 -- Find optimum BDT and PID cuts
./runMultiDimCutOpt.py --run2011
./runMultiDimCutOpt.py --run2012

# Step 5 -- Redo analysis (modify BDT Reader with newly found cuts)
./runAnalysis -d dat/analysis/analysis_cfg.dat

# Step 6 -- Get version of file with these cuts applied (modify ApplyBDTAndPIDCuts.cc with appropriate values)
./runAnalysis -d dat/bdt_and_pid_cut/bdt_and_pid_cut_cfg.dat -o root/AnalysisOutWithBDTAndPIDCuts.root

# Step 7 -- Make efficiency plot
./scripts/plotEfficiencies.py file_store/presel/*.root root/AnalysisOutWithBDTAndPIDCuts.root

# Step 8 -- Run Invariant mass fit (modify to include appropriate BDT and PID cuts or with pass_bdt and pass_pid)
./runFitter -T InvariantMassFit -i root/AnalysisOut.root -o root/InvariantMassFitOut.root -I

# Step 9 -- Plot result
./runFitter -T InvariantMassPlot

