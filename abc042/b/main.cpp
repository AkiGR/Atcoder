#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n,l;
  string result;
  cin >> n >> l;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++) {
    result += s[i];
  }
  cout << result << endl;
  return 0;
}

