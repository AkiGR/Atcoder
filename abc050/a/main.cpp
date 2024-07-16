#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a,b;
  char op;
  cin >> a >> op >> b;
  int result = 0;
  if (op == '+') {
    result = a+b;
  } else {
    result = a-b;
  }
  cout << result << endl;
  return 0;
}
