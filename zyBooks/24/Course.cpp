#include <iostream>
#include "Course.h"
using namespace std;

int Course::CountProbation() {
	int count = 0;
	
	for (int i = 0; i < roster.size(); i++){
	   if (roster.at(i).GetGPA() < 2.0){
	      count++;
	   }
	}
	
	return count;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}