#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
  return 0;
}
