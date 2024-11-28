// Program to implement Matrix representation of graphs

#include <iostream>
using namespace std;

int main() {
  const int V = 4;
  int graph[V][V] = {{0, 1, 0, 1}, {1, 0, 1, 0}, {0, 1, 0, 1}, {1, 0, 1, 0}};

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      cout << graph[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}