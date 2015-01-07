#!/bin/bash

./scripts/makeLooper.py -i dat/reduction/reduction_branches_in.dat -i dat/reduction/reduction_branches_out.dat -i dat/pidcalib/pidcalib_branches_in.dat -i dat/pidcalib/pidcalib_branches_out.dat -i dat/analysis/analysis_branches_in.dat -i dat/analysis/analysis_branches_out.dat

./scripts/makeBranchDef.py -i dat/reduction/reduction_branches_in.dat -o dat/reduction/reduction_branches_out.dat -c ReductionBranches
./scripts/makeBranchDef.py -i dat/pidcalib/pidcalib_branches_in.dat -o dat/pidcalib/pidcalib_branches_out.dat -c PIDCalibBranches
./scripts/makeBranchDef.py -i dat/analysis/analysis_branches_in.dat -o dat/analysis/analysis_branches_out.dat -c AnalysisBranches
