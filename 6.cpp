// Program to implement binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (arr[m] == x) return m;
    if (arr[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  return -1;
}

int main() {
  int n = 5;
  int arr[5] = {2, 3, 4, 10, 40};
  int x = 10;
  int result = binarySearch(arr, 0, n - 1, x);
  cout << ((result == -1) ? "Element not present" : "Element found at index " + to_string(result)) << endl;
  return 0;
}