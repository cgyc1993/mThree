#include <iostream>
#include <vector>

#include "Student9.h"
using namespace std;

int main() {
    Student student = Student();
    cout << student.GetName() << "/" << student.GetGPA() << endl;

    student.SetName("Felix");
    student.SetGPA(3.7);
    cout << student.GetName() << "/" << student.GetGPA() << endl;

	return 0;
}