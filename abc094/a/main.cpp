#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a,b,x;
  cin >> a >> b >> x;

  bool isCheck = x >= a && x <= a + b;
  if (isCheck) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
