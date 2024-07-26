#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x,a,b;
  cin >> x >> a >> b;

  int distanceA = abs(x-a);
  int distanceB = abs(x-b);

  if (distanceA < distanceB) {
    cout << "A" << endl;
  } else {
    cout << "B" << endl;
  }
  return 0;
}
