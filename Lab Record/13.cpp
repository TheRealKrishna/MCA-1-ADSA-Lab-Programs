// Program to implement towers of hanoi using stack. queues-linked-lists

#include <iostream>
#include <stack>
using namespace std;

void moveDisks(int n, stack<int>& src, stack<int>& dest, stack<int>& aux) {
  if (n > 0) {
    moveDisks(n - 1, src, aux, dest);
    dest.push(src.top());
    src.pop();
    moveDisks(n - 1, aux, dest, src);
  }
}

int main() {
  int n = 5;
  stack<int> src, dest, aux;
  for (int i = n; i > 0; --i) src.push(i);
  moveDisks(n, src, dest, aux);
  while (!dest.empty()) {
    cout << dest.top() << " ";
    dest.pop();
  }
  return 0;
}