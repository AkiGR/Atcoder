#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool flgA = false;
  bool flgB = false;
  bool flgC = false;
  for (char c : s) {
    if (c == 'a') flgA = true;
    if (c == 'b') flgB = true;
    if (c == 'c') flgC = true;
  }
  if (flgA && flgB && flgC) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
