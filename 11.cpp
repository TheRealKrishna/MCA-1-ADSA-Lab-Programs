// Program to show the linked implementation of the Stack class.

#include <iostream>
using namespace std;

struct Node { int data; Node* next; Node(int d, Node* n) : data(d), next(n) {} };

class Stack {
  Node* top = nullptr;
 public:
  void push(int data) { top = new Node(data, top); }
  void pop() { if (top) Node* temp = top; top = top->next;}
  int peek() { return top ? top->data : -1; }
  bool isEmpty() { return !top; }
};

int main() {
  Stack s;
  s.push(10);
  s.push(20);
  cout << "Top element is " << s.peek() << endl;
  s.pop();
  cout << "Top element is " << s.peek() << endl;
  return 0;
}
