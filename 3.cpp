// Program to implement quick sort

#include <iostream>
using namespace std;
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
      if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[++i], arr[high]);
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
  }
}
int main() {
  int n = 6;
  int arr[n] = {10, 7, 8, 9, 1, 5};
  quickSort(arr, 0, n - 1);
  cout << "Sorted array: \n";
  for (int i = 0; i < n; i++) cout << arr[i] << ", ";
  return 0;
}