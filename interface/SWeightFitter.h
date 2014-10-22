#ifndef SWeightFitter_h
#define SWeightFitter_h

#include "TString.h"
#include "RooWorkspace.h"

class SWeightFitter {

	public:

		SWeightFitter(TString wsname="w");
		~SWeightFitter();

		void setup(TString fname, TString tname);
		void plot();
		void save(TString fname);

		void setBDTCut(double val);
		void setDiscrimVar(TString name, double min, double max);

		RooWorkspace *w;

	private:

		void constructSignalPdf();
		void constructBkgPdf();
		void constructOtherComponents();
		void constructFullPdf();

		void readTree(TString fname, TString tname);

		float bdtcut;
		bool hasfit;

		TString discrimVar;

};

#endif
