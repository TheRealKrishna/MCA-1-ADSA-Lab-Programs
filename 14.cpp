// Program to implement a linear list and perform the operations such as insert(), search(), delete()

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class LinearList {
  vector<int> list;

 public:
  void insert(int value) { list.push_back(value); }
  bool search(int value) {
    return find(list.begin(), list.end(), value) != list.end();
  }
  void remove(int value) {
    auto it = find(list.begin(), list.end(), value);
    if (it != list.end()) list.erase(it);
  }
  void display() {
    for (int val : list) cout << val << " ";
    cout << endl;
  }
};

int main() {
  LinearList ll;
  ll.insert(10);
  ll.insert(20);
  ll.insert(30);
  ll.display();
  cout << "Search 20: " << ll.search(20) << endl;
  ll.remove(20);
  ll.display();
  return 0;
}