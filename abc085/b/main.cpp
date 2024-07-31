#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> D(N);
  rep(i, N) {
    cin >> D[i];
  }
  set<int> unique_diameters(D.begin(), D.end());
  int max_layers = unique_diameters.size();
  cout << max_layers << endl;
  return 0;
}
