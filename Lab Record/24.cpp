// Program to implement BFS Traversal

#include <iostream>
#include <queue>
using namespace std;
int main() {
  int g[4][4] = {{0, 1, 1, 0}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 0}};
  bool v[4] = {0};
  queue<int> q;
  q.push(0);
  v[0] = 1;
  while (!q.empty()) {
    int n = q.front();
    q.pop();
    cout << n << " ";
    for (int i = 0; i < 4; i++) {
      if (g[n][i] && !v[i]) {
        q.push(i);
        v[i] = 1;
      }
    }
  }
  return 0;
}