#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// ビンゴの達成を判定
bool checkBingo(const vector<vector<int>> &bingoCard, const unordered_set<int> &markedNumbers, int size)
{
  // 列ごとにマークされた数を数える
  vector<int> rowCount(size, 0), colCount(size, 0);
  int diag1Count = 0, diag2Count = 0;

  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      int num = bingoCard[i][j];
      if (markedNumbers.count(num))
      {
        rowCount[i]++;
        colCount[j]++;
        if (i == j)
          diag1Count++;
        if (i + j == size - 1)
          diag2Count++;
      }
    }
  }

  // 判定
  for (int i = 0; i < size; ++i)
  {
    if (rowCount[i] == size || colCount[i] == size)
      return true;
  }
  if (diag1Count == size || diag2Count == size)
    return true;

  return false;
}

int main()
{
  int n, t;
  cin >> n >> t;

  // ビンゴカードの生成
  vector<vector<int>> bingoCard(n, vector<int>(n));
  unordered_set<int> markedNumbers;

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      bingoCard[i][j] = n * i + j + 1;
    }
  }

  for (int i = 0; i < t; ++i)
  {
    int number;
    cin >> number;
    markedNumbers.insert(number);

    if (checkBingo(bingoCard, markedNumbers, n))
    {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
