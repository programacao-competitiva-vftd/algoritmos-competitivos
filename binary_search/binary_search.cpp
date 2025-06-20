#include <bits/stdc++.h>

using namespace std;

// assumindo que o vetor está ordenado, queremos encontrar o indíce do elemento no vetor arr
// que tem o valor igual a x
int binary_search(vector<int> arr, int x) {
  int start = 0, end = arr.size() - 1;
  int idx = (start + end) / 2;
  while (end >= 0 && start < arr.size()) {
    if (arr[idx] == x) return idx;
    if (arr[idx] > x) end = idx - 1;
    if (arr[idx] < x) start = idx + 1;
    idx = (start + end) / 2;
  }
  return -1;
}

int main() {
  vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << binary_search(a, 7) << endl; // 6
  cout << binary_search(a, 1) << endl; // 0
  cout << binary_search(a, 10) << endl; // 9
  cout << binary_search(a, 11) << endl; // -1
  cout << binary_search(a, 0) << endl; // -1
  return 0;
}