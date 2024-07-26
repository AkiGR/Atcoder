#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  string result;
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) result += s[i];
  }
  cout << result << endl;
  return 0;
}
