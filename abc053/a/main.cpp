#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x;
  cin >> x;

  string result;
  if (x < 1200) {
    result = "ABC";
  } else {
    result = "ARC";
  }
  cout << result << endl;
  return 0;
}
