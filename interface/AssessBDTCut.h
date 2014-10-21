#ifndef AssessBDTCut_h
#define AssessBDTCut_h

#include "TString.h"
#include "RooWorkspace.h"

class AssessBDTCut {

	public:

		AssessBDTCut(TString wsname="w");
		~AssessBDTCut();

		void setup(TString fname, TString tname);
		void plot();
		void fit();
		void save(TString fname);

		void setMassRange(double mlow, double mhigh);
		void setBDTCut(double val);

		RooWorkspace *w;

	private:

		void constructSignalPdf();
		void constructPiZeroPdf();
		void constructJpsiXPdf();
		void constructBkgPdf();
		void constructFullPdf();

		void readTree(TString fname, TString tname);

		std::pair<double,double> massRange;
		float bdtcut;
		bool hasfit;




};

#endif
