#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a,b;
  cin >> a >> b;

  if (a > b) {
    cout << a-1 << endl;
  } else {
    cout << a << endl;
  }
  return 0;
}
