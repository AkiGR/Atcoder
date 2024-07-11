#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool includeDvector(int n, vector<int> d) {
  string nStr = to_string(n);
  for(char digit : nStr) {
    if (find(d.begin(),d.end(), digit - '0') != d.end()) {
      return true;
    }
  }
  return false;

}
int main() {
  int n,k;
  cin >> n >> k;
  vector<int> d(k);
  for (int i = 0; i < k; i++) {
    cin >> d[i];
  }
  while (includeDvector(n,d)) {
    n++;
  }
  cout << n << endl;
  return 0;
}
