#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
   private:
   	// TODO: Declare private data members - instructorName, term, classTime
      string instructorName;
      string term;
      string classTime;
   
   public:
   	// TODO: Declare mutator functions -
   	//      SetInstructorName(), SetTerm(), SetClassTime()
      void SetInstructorName(string s);
      void SetTerm(string s);
      void SetClassTime(string s);
      
   	// TODO: Declare accessor functions -
   	//      GetInstructorName(), GetTerm(), GetClassTime()
   	string GetInstructorName();
   	string GetTerm();
   	string GetClassTime();
      
};

#endif