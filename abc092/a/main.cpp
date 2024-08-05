#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  int trainMin = min(A,B);
  int BusMin = min(C,D);
  cout << trainMin+BusMin << endl;
  return 0;
}