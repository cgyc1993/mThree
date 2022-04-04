#include "StringInstrument.h"

// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets()
void StringInstrument::SetNumOfStrings(string s){
   numStrings = s;
}

void StringInstrument::SetNumOfFrets(string s){
   numFrets = s;
}
      
// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets()
string StringInstrument::GetNumOfStrings(){
   return numStrings;
}

string StringInstrument::GetNumOfFrets(){
   return numFrets;
}

