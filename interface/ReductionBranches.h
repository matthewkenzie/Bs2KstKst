///////////////////////////////////////
// ReductionBranches.h               //
// Author: Matthew Kenzie            //
// Auto-generated                    //
///////////////////////////////////////

#ifndef ReductionBranches_h
#define ReductionBranches_h
#include "../interface/BranchDef.h"

class ReductionBranches : public BranchDef {

	public:                                                                     
                                                                             
		ReductionBranches(); 																                               			
		~ReductionBranches(); 		                                                							 	
                                                                             
		virtual void initialiseVariables(Looper *l); 															
		virtual void cleanVariables(Looper *l); 							 										
		virtual void setInputBranches(Looper *l, TTree *tree); 										
		virtual void setOutputBranches(Looper *l, TTree *tree); 									


};

#endif
