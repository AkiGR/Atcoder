#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x,a,b;
  cin >> x >> a >> b;

  string result = "";
  if (b-a <= 0) {
    result = "delicious";
  } else if (b-a <= x) {
    result = "safe";
  } else {
    result = "dangerous";
  }
  cout << result << endl;
  return 0;
}
