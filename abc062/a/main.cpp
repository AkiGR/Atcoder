#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x,y;
  cin >> x >> y;
  int a [] = {0 , 1 , 3 , 1 , 2 , 1 , 2 , 1 , 1 , 2 , 1 , 2 , 1};

  cout << (a[x] == a[y] ? "Yes" : "No") << endl;
  return 0;
}
