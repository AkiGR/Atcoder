#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }

  int min_val = *min_element(a.begin(),a.end());
  int max_val = *max_element(a.begin(),a.end());
  cout << max_val - min_val << endl;
  return 0;
}
