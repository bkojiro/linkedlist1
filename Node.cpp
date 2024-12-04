#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(Student* stud) {
  next = NULL;
  student = stud;
}

Node::~Node() {
  delete student;
  next = NULL;
}

Node* Node::getNext() {
  return next;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}
