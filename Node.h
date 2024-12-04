#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "Student.h"

using namespace std;

class Node {
 public:
  Node(Student* stud);
  ~Node();
  Node* getNext();
  Student* getStudent();
  void setNext(Node* newNext);
 private:
  Node* next;
  Student* student;
};

#endif
