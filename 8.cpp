// Program of recursive function that prints all the permutations of the first n
// characters of a string

#include <algorithm>
#include <iostream>
using namespace std;

void permute(string str, int l, int r) {
  if (l == r)
    cout << str << endl;
  else {
    for (int i = l; i <= r; i++) {
      swap(str[l], str[i]);
      permute(str, l + 1, r);
      swap(str[l], str[i]);
    }
  }
}

int main() {
  string str = "ABC";
  cout << "Permutations of the string " << str << " are: \n";
  permute(str, 0, str.size() - 1);
  return 0;
}