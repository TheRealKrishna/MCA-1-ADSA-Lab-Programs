// Program to search a circular linked list with a header node

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};
Node* search(Node* head, int key) {
  Node* temp = head->next;
  while (temp != head) {
    if (temp->data == key) return temp;
    temp = temp->next;
  }
  return nullptr;
}
int main() {
  Node* head = new Node();
  head->next = head;
  Node* node1 = new Node();
  node1->data = 10;
  node1->next = head;
  head->next = node1;
  Node* result = search(head, 10);
  if (result) cout << "Found: " << result->data << endl;
  else cout << "Not Found" << endl;

  delete node1;
  delete head;
  return 0;
}