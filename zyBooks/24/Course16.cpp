#include <iostream>
#include "Course16.h"
using namespace std;

Student Course::FindStudentHighestGpa() {
   Student max = roster.at(0);
   
   for (int i = 1; i < roster.size(); i++){
      if (roster.at(i).GetGPA() > max.GetGPA()){
         max = roster.at(i);
      }
   }
   
   return max;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}