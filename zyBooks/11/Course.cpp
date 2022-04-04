#include "Course.h"

	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string s){
   courseNumber = s;
}

void Course::SetCourseTitle(string s){
   courseTitle = s;
}

	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber(){
   return courseNumber;
}

string Course::GetCourseTitle(){
   return courseTitle;
}

	// TODO: Define PrintInfo()s
void Course::PrintInfo(){
   cout << "Course Information: " << endl;
   cout << "   Course Number: " << courseNumber << endl;
   cout << "   Course Title: " << courseTitle << endl;
}
