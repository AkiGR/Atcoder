#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n,k;
  cin >> n >> k;
  cout << int(k*pow(k-1,n-1)) << endl;
  return 0;
}
