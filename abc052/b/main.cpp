#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  string S;
  cin >> N >> S;

  int x = 0;
  int max_x = 0;
  for (char c : S) {
    if (c == 'I') {
      x++;
    } else {
      x--;
    }
    max_x = max(max_x, x);
  }

  cout << max_x << endl;
  return 0;
}
