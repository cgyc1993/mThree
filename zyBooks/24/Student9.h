#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
using namespace std;

class Student {

    public:
         Student();
      	void SetName(string n);
      	// FIXME: Declare 3 more functions
         string GetName();
         void SetGPA(double g);
         double GetGPA();
   	 
    private:
         // FIXME: Add 2 private data members
         string name;
         double gpa;
};

#endif /* STUDENT_H_ */
