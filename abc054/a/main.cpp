#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A,B;
  cin >> A >> B;

  string result;
  if (A == B) {
    result = "Draw";
  } else if (A == 1) {
    result = "Alice";
  } else if (B == 1) {
    result = "Bob";
  } else {
    if (A > B) {
      result = "Alice";
    } else {
      result = "Bob";
    }
  }
  cout << result << endl;
  return 0;
}
