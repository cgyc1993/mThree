#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	private:
	   // TODO: Declare private data members - courseNumber, courseTitle
	   string courseNumber;
	   string courseTitle;

   public:
   	// TODO: Define mutator functions - 
   	//       SetCourseNumber(), SetCourseTitle()
      void SetCourseNumber(string s);
      void SetCourseTitle(string s);
   
   	// TODO: Define accessor functions - 
   	//       GetCourseNumber(), GetCourseTitle()
      string GetCourseNumber();
      string GetCourseTitle();
   
   	// TODO: Define PrintInfo()
   	void PrintInfo();

};

#endif
