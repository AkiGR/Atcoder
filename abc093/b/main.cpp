#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  set<int> result;

  // 小さい方から K 番目以内
  for (int i = 0; i < K; ++i) {
    if (A + i <= B) {
      result.insert(A + i);
    }
  }

  // 大きい方から K 番目以内
  for (int i = 0; i < K; ++i) {
    if (B - i >= A) {
      result.insert(B - i);
    }
  }

  // 昇順に出力
  for (auto num : result) {
    cout << num << endl;
  }

  return 0;
}
