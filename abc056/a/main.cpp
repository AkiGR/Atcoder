#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string a,b;
  cin >> a >> b;

  string result;
  if (a == "H") {
    if (b == "H") {
      result = "H";
    } else {
      result = "D";
    }
  } else {
    if (b == "H") {
      result = "D";
    } else {
      result = "H";
    }
  }
  cout << result << endl;
  return 0;
}
