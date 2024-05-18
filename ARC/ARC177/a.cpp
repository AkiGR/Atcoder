#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, d, e, f, n;
  cin >> a >> b >> c >> d >> e >> f >> n;
  vector<int> x(n);

  bool possible = true;
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i];        // 各店の支払い金額を取得
    int payment = x[i]; // その店で支払う金額

    // 各店での支払いに使用した硬貨の枚数を手持ちの硬貨から引く
    int coins_500 = min(f, payment / 500);
    payment -= coins_500 * 500;
    f -= coins_500;

    int coins_100 = min(e, payment / 100);
    payment -= coins_100 * 100;
    e -= coins_100;

    int coins_50 = min(d, payment / 50);
    payment -= coins_50 * 50;
    d -= coins_50;

    int coins_10 = min(c, payment / 10);
    payment -= coins_10 * 10;
    c -= coins_10;

    int coins_5 = min(b, payment / 5);
    payment -= coins_5 * 5;
    b -= coins_5;

    int coins_1 = min(a, payment);
    payment -= coins_1;
    a -= coins_1;

    // 支払いが不可能な場合
    if (payment > 0)
    {
      possible = false;
      break;
    }
  }

  // 支払いが可能かどうかを出力
  cout << (possible ? "Yes" : "No") << endl;

  return 0;
}
