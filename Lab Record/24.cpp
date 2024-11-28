// Program to implement BFS Traversal

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void BFS(int start, const vector<vector<int>>& adj) {
  vector<bool> visited(adj.size(), false);
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    cout << node << " ";

    for (int neighbor : adj[node]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}

int main() {
  vector<vector<int>> adj = {{1, 2}, {0, 3, 4}, {0, 4}, {1, 5}, {1, 2}, {3}};
  BFS(0, adj);
  return 0;
}