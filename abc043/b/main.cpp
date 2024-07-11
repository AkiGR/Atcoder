#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  string result;
  cin >> s;
  for (char c : s) {
    if (c == '0') result += '0';
    if (c == '1') result += '1';
    if (c == 'B') {
      if (!result.empty()) {
        result.pop_back();
      }
    }
  }
  cout << result << endl;
  return 0;
}
