#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
 public:
  Student(const char* newName);
  const char* getName();
 private:
  const char* name;
};

#endif
