#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0;
  vector<string> s(n);
  vector<int> c(n);

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    cin >> c[i];
  }

  // インデックスを保持するためのベクターを作成
  vector<int> indices(n);
  iota(indices.begin(), indices.end(), 0);

  // インデックスを用いて s を辞書順に並び替え、対応する c の順序も維持する
  sort(indices.begin(), indices.end(), [&s](int i1, int i2)
       { return s[i1] < s[i2]; });

  vector<string> sorted_s(n);
  vector<int> sorted_c(n);

  for (int i = 0; i < n; i++)
  {
    sorted_s[i] = s[indices[i]];
    sorted_c[i] = c[indices[i]];
  }

  // 数値の総和を計算
  for (int i = 0; i < n; i++)
  {
    sum += sorted_c[i];
  }

  cout << sorted_s[sum % n] << endl;
  return 0;
}
