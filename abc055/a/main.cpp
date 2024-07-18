#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x;
  cin >> x;

  int result = (x*800) - ((x/15)*200);

  cout << result << endl;
  return 0;
}
