#include <bits/stdc++.h>
using namespace std;

// 2点間の距離を計算する関数
double distance(double x1, double y1, double x2, double y2)
{
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// ヘロンの公式を使って三角形の面積を計算する関数
double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
  double a = distance(x1, y1, x2, y2);
  double b = distance(x2, y2, x3, y3);
  double c = distance(x3, y3, x1, y1);
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  // 三角形の面積を計算
  double area = triangleArea(x1, y1, x2, y2, x3, y3);

  // 結果を出力
  cout << area << endl;

  return 0;
}