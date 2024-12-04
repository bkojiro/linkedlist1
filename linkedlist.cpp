#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Node* &head, Student* stud);
void print(Node* head, Node* next);
void deleteLast(Node* &head);

int main() {
  Node* head = NULL;
  add(head, new Student("bob"));
  print(head, head);
  add(head, new Student("joe"));
  print(head, head);
  add(head, new Student("billy"));
  print(head, head);
  deleteLast(head);
  return 0;
}

void add (Node* &head, Student* stud) {
  Node* current = head;  
  if (current == NULL) {
    head = new Node(stud);
  } else {
    while (current->getNext() != NULL) { //find the end of the list
      current = current->getNext();
    }
    current->setNext(new Node(stud));
  }
}

void deleteLast (Node* &head) {
  Node* current = head;
  while (current->getNext()->getNext() != NULL) {
    current = current->getNext();
  }
  ~(current->getNext());
  current->setNext(NULL);
}

void print (Node* head, Node* next) {
  if (next == head) {
    cout << "list: ";
  }
  if (next != NULL) {
    cout << next->getStudent()->getName() << " ";
    print(head, next->getNext());
  }
}
