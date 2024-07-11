#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool include575(int a, int b, int c) {
  int count_5 = 0;
  int count_7 = 0;

  if(a == 5) count_5++;
  if(b == 5) count_5++;
  if(c == 5) count_5++;

  if(a == 7) count_7++;
  if(b == 7) count_7++;
  if(c == 7) count_7++;

  return count_5 == 2 && count_7 == 1;
}

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  string result = "NO";
  if (include575(a,b,c)) result = "YES";
  cout << result << endl;
  return 0;
}

