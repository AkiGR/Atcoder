#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string E,O;
  cin >> E >> O;

  for (int i = 0; i < E.size(); i++) {
    cout << E[i];
    if (i < O.size()) cout << O[i];
  }
  cout << endl;
  return 0;
}
