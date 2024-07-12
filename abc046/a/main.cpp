#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  unordered_set<int> colors;
  colors.insert(a);
  colors.insert(b);
  colors.insert(c);

  cout << colors.size() << endl;
  return 0;
}
