#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;

  if (A.length() > B.length()) {
    cout << "GREATER" << endl;
  } else if (A.length() < B.length()) {
    cout << "LESS" << endl;
  } else {
    if (A > B) {
      cout << "GREATER" << endl;
    } else if (A < B) {
      cout << "LESS" << endl;
    } else {
      cout << "EQUAL" << endl;
    }
  }

  return 0;
}
