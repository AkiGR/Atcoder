#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  
  int lower = max(A,C);
  int upper = min(B,D);
  cout << max(0,upper-lower) << endl;
  return 0;
}
