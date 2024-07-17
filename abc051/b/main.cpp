#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int K,S;
  int ans = 0;
  cin >> K >> S;

  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      int z = S - x - y;
      if (0 <= z and z <= K) {
        ans = ans + 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
