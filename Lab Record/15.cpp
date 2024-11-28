// Program to implement a queue by adding the functions such as (i) determine
// the size (ii) input queue (iii) output a queue (iv) split a queue into two
// queues

#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q) {
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}
int main() {
  queue<int> q;
  int val;
  for (int i = 0; i < 5; i++) {
    cout << "Enter queue element " << i + 1 << ": ";
    cin >> val;
    q.push(val);
  }
  cout << "Queue size: " << q.size() << endl;
  cout << "Queue elements: ";
  printQueue(q);
  queue<int> q1, q2;
  while (!q.empty()) {
    q1.push(q.front());
    q.pop();
    if (!q.empty()) {
      q2.push(q.front());
      q.pop();
    }
  }
  cout << "First split queue: ";
  printQueue(q1);

  cout << "Second split queue: ";
  printQueue(q2);

  return 0;
}