#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
   private:
   	// TODO: Declare private data members: numStrings, numFrets
      string numStrings;
      string numFrets;

   public:
   	// TODO: Declare mutator functions - 
   	//      SetNumOfStrings(), SetNumOfFrets()
      void SetNumOfStrings(string s);
      void SetNumOfFrets(string s);
      
   	// TODO: Declare accessor functions -
   	//      GetNumOfStrings(), GetNumOfFrets()
      string GetNumOfStrings();
      string GetNumOfFrets();

};

#endif
