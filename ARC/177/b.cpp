#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  S += '0';
  string t;
  for (int i = N - 1; i >= 0; i--)
  {
    if (S[i] == '1' && S[i + 1] == '0')
    {
      for (int j = 0; j <= i; j++)
      {
        t += 'A';
      }
    }
    if (S[i] == '0' && S[i + 1] == '1')
    {
      for (int j = 0; j <= i; j++)
      {
        t += 'B';
      }
    }
  }
  int m = t.size();
  cout << m << endl;
  cout << t << endl;
}