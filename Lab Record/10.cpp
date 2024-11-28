// Program to implement a stack of strings (illustrate the operations push (), pop (), size (), empty () and top ()).

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Stack {
  vector<string> elements;
 public: void push(const string& str) { elements.push_back(str); }
  void pop() {
    if (!elements.empty()) elements.pop_back();
  }
  string top() { return elements.empty() ? "" : elements.back(); }
  bool empty() { return elements.empty(); }
  size_t size() { return elements.size(); }
};

int main() {
  Stack s;
  s.push("Hello");
  s.push("World");
  cout << "Top: " << s.top() << endl;
  s.pop();
  cout << "Top: " << s.top() << endl;
  cout << "Size: " << s.size() << endl;
  cout << "Empty: " << (s.empty() ? "Yes" : "No");
  return 0;
}