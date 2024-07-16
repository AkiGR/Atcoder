#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N;

  vector<int> T(N);
  for (int i = 0; i < N; ++i) {
    cin >> T[i];
  }

  cin >> M;

  vector<int> P(M), X(M);
  for (int i = 0; i < M; ++i) {
    cin >> P[i] >> X[i];
    P[i]--;
  }

  int total_time = 0;
  for (int i = 0; i < N; ++i) {
    total_time += T[i];
  }

  for (int i = 0; i < M; ++i) {
    int adjusted_time = total_time - T[P[i]] + X[i];
    cout << adjusted_time << endl;
  }

  return 0;
}
