// Program to implement priority queue

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(30);
  pq.push(20);
  pq.push(5);
  pq.push(1);

  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }

  return 0;
}