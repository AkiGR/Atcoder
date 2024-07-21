#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A,B,C;
  cin >> A >> B >> C;

  string result = "No";
  if (A <= C && C <= B) result = "Yes";

  cout << result << endl;
  return 0;
}
