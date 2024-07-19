#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector students(N, make_pair(0, 0));
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    students[i] = make_pair(a, b);
  }

  vector checkpoints(M, make_pair(0, 0));
  for (int i = 0; i < M; i++) {
    int c, d;
    cin >> c >> d;
    checkpoints[i] = make_pair(c, d);
  }

  for (auto [a, b] : students) {
    int ans = 0;
    for (int i = 0; i < M; i++) {
      if (abs(a - checkpoints[i].first) + abs(b - checkpoints[i].second) <
          abs(a - checkpoints[ans].first) + abs(b - checkpoints[ans].second)) {
          ans = i;
      }
    }
    cout << ans + 1 << endl;
  }
}

