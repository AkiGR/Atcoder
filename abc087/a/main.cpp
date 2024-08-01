#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int X,A,B;
  cin >> X >> A >> B;

  int result = (X-A)%B;
  cout << result << endl;
  return 0;
}
