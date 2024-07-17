#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  int indexA = -1, indexZ = -1;
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) == 'A' && indexA == -1) indexA = i;
    if (s.at(i) == 'Z') indexZ = i;
  }

  if (indexA != -1 && indexZ != -1 && indexA <= indexZ) {
    int length = indexZ - indexA + 1;
    cout << length << endl;
  }

  return 0;
}
