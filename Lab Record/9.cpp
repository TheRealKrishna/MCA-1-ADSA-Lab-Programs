// Program to test a recursive function that returns the power xn

#include <iostream>
using namespace std;

int power(int x, int n) {
  if (n == 0)
    return 1;
  else
    return x * power(x, n - 1);
}

int main() {
  int x, n;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << x << " raised to the power " << n << " is " << power(x, n);
  return 0;
}
