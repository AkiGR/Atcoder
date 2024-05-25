#include <bits/stdc++.h>
using namespace std;

string splitStr(string w)
{
  string splitW;
  for (char c : w)
  {
    if (c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o')
    {
      splitW += c;
    }
  }
  return splitW;
}

int main()
{
  string w;
  cin >> w;
  cout << splitStr(w) << endl;
  return 0;
}