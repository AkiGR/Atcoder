#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  vector<int> arr = {1, 2, 3};
  cin >> a >> b;
  if (a == b)
  {
    cout << -1 << endl;
  }
  else
  {
    auto removeCondition = [&](int x)
    { return x == a || x == b; };

    auto newEnd = remove_if(arr.begin(), arr.end(), removeCondition);

    arr.erase(newEnd, arr.end());

    for (int num : arr)
    {
      cout << num << endl;
    }
  }
  return 0;
}