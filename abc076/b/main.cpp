#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int N, K;
  cin >> N >> K;
  long long current = 1;

  rep(i, N) {
    if (current * 2 < current + K) {
      current *= 2;
    } else {
      current += K;
    }
  }

  cout << current << endl;
  return 0;
}
