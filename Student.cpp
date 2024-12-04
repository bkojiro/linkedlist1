#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(const char* newName) {
  name = newName;
}

const char* Student::getName() {
  return name;
}
