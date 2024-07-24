#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> l(n);
  rep(i,n) {
    cin >> l[i];
  }

  sort(l.begin(),l.end());
  int sum = 0;
  rep(i,k) {
    sum += l[n-1-i];
  }
  cout << sum << endl;
  return 0;
}
