#include "OfferedCourse.h"

   	
// TODO: Define mutator functions -
//      SetInstructorName(), SetTerm(), SetClassTime()
void OfferedCourse::SetInstructorName(string s){
   instructorName = s;
}

void OfferedCourse::SetTerm(string s){
   term = s;
}

void OfferedCourse::SetClassTime(string s){
   classTime = s;
}


// TODO: Define accessor functions -
//      GetInstructorName(), GetTerm(), GetClassTime()
string OfferedCourse::GetInstructorName(){
   return instructorName;
}

string OfferedCourse::GetTerm(){
   return term;
}

string OfferedCourse::GetClassTime(){
   return classTime;
}