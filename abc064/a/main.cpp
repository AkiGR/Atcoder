#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  char r,g,b;
  cin >> r >> g >> b;
  string connectRGB = "";
  connectRGB += r;
  connectRGB += g;
  connectRGB += b;
  int numberRGB = stoi(connectRGB);

  if (numberRGB % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
