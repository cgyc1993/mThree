#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "Student16.h"

class Course {
   public: 
      Student FindStudentHighestGpa();
      void AddStudent(Student s);
   
   private:
      vector<Student> roster; //collection of Student objects
};

#endif