#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>

bool hasConsecutive(const vector<int> &c, const unordered_set<int> &a)
{
  int count = 0;
  for (int i = 0; i < c.size(); ++i)
  {
    if (a.count(c[i]) > 0)
    {
      ++count;
      if (count >= 2)
      {
        return true;
      }
    }
    else
    {
      count = 0;
    }
  }
  return false;
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  vector<int> b(m);
  for (int i = 0; i < m; ++i)
  {
    cin >> b[i];
  }

  // AとBの要素をそれぞれセットに入れる
  unordered_set<int> aSet(a.begin(), a.end());
  unordered_set<int> bSet(b.begin(), b.end());

  // AとBの要素を昇順に並べたCを作成
  vector<int> c;
  c.insert(c.end(), a.begin(), a.end());
  c.insert(c.end(), b.begin(), b.end());
  sort(c.begin(), c.end());

  // C内でAに含まれる要素が2つ連続しているかを判定
  if (hasConsecutive(c, aSet))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
