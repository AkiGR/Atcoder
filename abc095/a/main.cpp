#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int sum = 700;
  for (char c : s) {
    if (c == 'o') sum += 100;
  }
  cout << sum << endl;
  return 0;
}
