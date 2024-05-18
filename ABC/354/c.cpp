#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<pair<pair<int, int>, int>> cards(n);
  {
    cin >> cards[i].first.first >> cards[i].first.second;
    cards[i].second = i + 1;
  }

  // 強さが高い順にソートし、強さが同じ場合はコストが低い順にソート
  sort(cards.begin(), cards.end(), greater<pair<pair<int, int>, int>>());

  // 操作を行う
  vector<bool> canDiscard(n, true);
  vector<int> remainingCards;
  for (int i = 0; i < n; ++i)
  {
    bool canKeep = true;
    for (int j = 0; j < i; ++j)
    {
      if (cards[j].first.second < cards[i].first.second)
      {
        canKeep = false;
        break;
      }
    }
    if (canKeep)
    {
      remainingCards.push_back(cards[i].second);
    }
  }

  cout << remainingCards.size() << endl;

  // インデックスは昇順
  sort(remainingCards.begin(), remainingCards.end());
  for (unsigned int i = 0; i < remainingCards.size(); ++i)
  {
    cout << remainingCards[i] << " ";
  }
  cout << endl;

  return 0;
}