#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);

  for (int i = 0; i < N; i++)
  {
    /* code */
    cin >> H[i];
  }

  int max = H[0];
  int result = -1;
  for (int i = 1; i <= N; i++)
  {
    /* code */
    if (H[i] > max)
    {
      max = H[i];
      result = i + 1;
      break;
    }
  }
  cout << result << endl;

  return 0;
}