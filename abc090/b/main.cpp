#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
  string s = to_string(n);
  int len = s.length();
  for (int i = 0; i < len / 2; ++i) {
    if (s[i] != s[len - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int A, B;
  cin >> A >> B;
  int count = 0;
 
  for (int i = A; i <= B; ++i) {
    if (isPalindrome(i)) {
      ++count;
    }
  }
  
  cout << count << endl;
  return 0;
}
