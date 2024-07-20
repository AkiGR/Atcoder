#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string A, B, C;
  cin >> A >> B >> C;

  if (A.at(A.length() - 1) == B.at(0) && B.at(B.length() - 1) == C.at(0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
