#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;  
  unordered_set<char> charS;
  for (char c : s) {
    if (charS.find(c) != charS.end()) {
      cout << "no" << endl;
      return 0;
    }
    charS.insert(c);
  }
  cout << "yes" << endl;
  return 0;
}
