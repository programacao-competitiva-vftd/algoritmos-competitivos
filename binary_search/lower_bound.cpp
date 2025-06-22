#include <bits/stdc++.h>

using namespace std;

int lowerbound(vector<int> arr, int l, int r, int x) {
  while (l < r) {
    int mid = (l + r) / 2;
    if (arr[mid] >= x) r = mid;
    else return r;
  }
  return r;
}

int main() {
  vector<int> vetor = {0, 0, 0, 0, 0, 5, 5, 5, 5, 5};
  cout << lowerbound(vetor, 0, vetor.size(), 0) << endl;
  cout << lower_bound(vetor.begin(), vetor.end(), 0) - vetor.begin() << endl;

  cout << lowerbound(vetor, 0, vetor.size(), 5) << endl;
  cout << lower_bound(vetor.begin(), vetor.end(), 5) - vetor.begin() << endl;
  return 0;
}