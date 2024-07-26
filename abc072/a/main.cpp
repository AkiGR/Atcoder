#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x,t;
  cin >> x >> t;

  int result = x-t;
  if (result <= 0) {
    cout << 0 << endl;
  } else {
    cout << result << endl;
  }
  return 0;
}
