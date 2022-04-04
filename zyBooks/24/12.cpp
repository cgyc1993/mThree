#include <iostream>
#include <iomanip>
#include <string>
#include "Course12.h"
using namespace std;

int main() {
   Course course;
   string fname;
   string lname;
   string gpa;
   vector<Student> deanList;
   
   // Example students for testing
   course.AddStudent(Student("Henry", "Nguyen", 3.5));   
   course.AddStudent(Student("Brenda", "Stern", 2.0)); 
   course.AddStudent(Student("Lynda", "Robison", 3.2)); 
   course.AddStudent(Student("Sonya", "King", 3.9)); 

	deanList = course.GetDeansList();
	cout << "Dean's list:" << endl;
	cout << fixed << setprecision (1);
	for (Student student: deanList) {
		cout << student.GetFirst() << " " << student.GetLast() << " (GPA: " << student.GetGPA() << ")" << endl;
	}

   return 0;
}