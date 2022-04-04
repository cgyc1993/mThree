#include <iostream>
#include "Course15.h"
using namespace std;

void Course::DropStudent(string last) {
   for (int i = 0; i < roster.size(); i++){
      if (roster.at(i).GetLast() == last){
         roster.erase (roster.begin() + i);
         break;
      }
   }
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}

int Course::CountStudents() {
   return roster.size();
}