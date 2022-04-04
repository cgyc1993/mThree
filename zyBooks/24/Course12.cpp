#include <iostream>
#include "Course12.h"
using namespace std;

vector<Student> Course::GetDeansList() {
	vector<Student> deansList;
	
	for (int i = 0; i < roster.size(); i++){
	   if (roster.at(i).GetGPA() >= 3.5){
	      deansList.push_back(roster.at(i));
	   }
	}
	
	return deansList;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}