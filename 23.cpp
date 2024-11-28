// Program to implement DFS Traversal

#include <iostream>
#include <vector>
using namespace std;

void DFS(int v, vector<bool> &visited, const vector<vector<int>> &adj) {
  visited[v] = true;
  cout << v << " ";
  for (int u : adj[v])
    if (!visited[u]) DFS(u, visited, adj);
}

int main() {
  vector<vector<int>> adj = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};
  vector<bool> visited(4, false);
  DFS(0, visited, adj);
  return 0;
}