#include <bits/stdc++.h>

using namespace std;

vector<int> prefix_function(string pattern) {
  int m = pattern.size();
  vector<int> prefix(m);
  int j = 0;
  for (int i = 1; i < m; i++) {
    while (j > 0 && pattern[i] != pattern[j]) {
      j = prefix[j-1];
    }
    if (pattern[j] == pattern[i]) {
      j++;
    } 
    prefix[i] = j;
  }
  return prefix;
}

int main() {
  string s = "ababcabab";
  string in = "bababababcababcabab";
  vector<int> prefix = prefix_function(s);
  // find string
  int i = 0, j = 0;
  while (i < in.size() && j < s.size()) {
    if (s[j] == in[i]) {
      i++;
      j++;
    } else {
      if (j > 0) j = prefix[j-1];
      else i++;
    }
  }
  cout << i << endl;
}