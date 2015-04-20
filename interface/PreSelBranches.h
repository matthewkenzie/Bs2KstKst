///////////////////////////////////////
// PreSelBranches.h                  //
// Author: Matthew Kenzie            //
// Auto-generated                    //
///////////////////////////////////////

#ifndef PreSelBranches_h
#define PreSelBranches_h
#include "../interface/BranchDef.h"

class PreSelBranches : public BranchDef {

	public:                                                                     
                                                                             
		PreSelBranches(); 																                               			
		~PreSelBranches(); 		                                                							 	
                                                                             
		virtual void initialiseVariables(Looper *l); 															
		virtual void cleanVariables(Looper *l); 							 										
		virtual void setInputBranches(Looper *l, TTree *tree); 										
		virtual void setOutputBranches(Looper *l, TTree *tree); 									


};

#endif
