// Program to implement merge sort

#include <iostream>
using namespace std;

int main() {
  int arr[] = {38, 27, 43, 3, 9, 82, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int temp[n];
  for (int size = 1; size < n; size *= 2) {
    for (int left_start = 0; left_start < n - 1; left_start += 2 * size) {
      int mid = min(left_start + size - 1, n - 1);
      int right_end = min(left_start + 2 * size - 1, n - 1);
      int i = left_start, j = mid + 1, k = left_start;
      while (i <= mid && j <= right_end) {
        if (arr[i] <= arr[j])
          temp[k++] = arr[i++];
        else
          temp[k++] = arr[j++];
      }
      while (i <= mid) temp[k++] = arr[i++];
      while (j <= right_end) temp[k++] = arr[j++];
      for (i = left_start; i <= right_end; i++) arr[i] = temp[i];
    }
  }
  cout << "Sorted array: \n";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}
