#ifndef Fitter_h
#define Fitter_h

#include "TString.h"
#include "RooWorkspace.h"

class Fitter {

	public:

		Fitter(TString wsname="w");
		~Fitter();

		void setup(TString fname, TString tname);
		void plot(TString projectVar="B_s0_MM", bool plotPdf=true, float minMC=-1, float maxMC=-1, float minData=-1, float maxData=-1);
		void fit();
		void save(TString fname);

		void setBDTCut(double val);
		void addObsVar(TString name, double min, double max);

		RooWorkspace *w;

	private:

		void constructSignalPdf();
		void constructBkgPdf();
		void constructOtherComponents();
		void constructFullPdf();

		void readTree(TString fname, TString tname);

		float bdtcut;
		bool hasfit;

};

#endif
