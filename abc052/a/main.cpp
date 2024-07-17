#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  int areaA = A*B;
  int areaB = C*D;
  int result = (areaA >= areaB) ? areaA : areaB;
  cout << result << endl;
  return 0;
}
