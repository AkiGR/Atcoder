#include <bits/stdc++.h>
using namespace std;

int daysReachHeigh(int h)
{
  int currentHeigh = 0;
  int days = 0;
  while (currentHeigh <= h)
  {
    /* code */
    currentHeigh += pow(2, days);
    days++;
  }
  return days;
}

int main()
{
  int h;
  cin >> h;

  cout << daysReachHeigh(h) << endl;
  return 0;
}