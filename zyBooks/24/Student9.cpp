// Simple class to hold student information
#include "Student9.h"

#include <iostream>
#include <string>

using namespace std;
 
Student::Student() {
   //FIXME: complete the constructor
   name = "Louie";
   gpa = 1.0;
}

void Student::SetName(string n) {
	//FIXME: complete SetName function
	name = n;
}

// FIXME: Add 3 more functions
string Student::GetName(){
   return name;
}

void Student::SetGPA(double g){
   gpa = g;
}

double Student::GetGPA(){
   return gpa;
}
