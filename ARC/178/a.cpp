#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

// 禁止された部分列が存在するかをチェックする関数
bool has_forbidden_subsequence(const vector<int> &perm, const vector<vector<int>> &forbidden_sequences)
{
  int N = perm.size();
  for (const auto &forbidden : forbidden_sequences)
  {
    int len = forbidden.size();
    for (int i = 0; i <= N - len; ++i)
    {
      vector<int> subarray = vector<int>(perm.begin() + i, perm.begin() + i + len);
      sort(subarray.begin(), subarray.end());
      if (subarray == forbidden)
      {
        return true;
      }
    }
  }
  return false;
}

// バックトラッキングで辞書順最小の良い順列を見つける関数
bool backtrack(int pos, int N, const vector<vector<int>> &forbidden_sequences, vector<int> &perm, vector<bool> &used, time_point<steady_clock> start_time, int timeout_seconds)
{
  if (duration_cast<seconds>(steady_clock::now() - start_time).count() > timeout_seconds)
  {
    return false; // タイムアウト
  }

  if (pos == N)
  {
    return !has_forbidden_subsequence(perm, forbidden_sequences);
  }

  for (int i = 1; i <= N; ++i)
  {
    if (!used[i])
    {
      perm[pos] = i;
      used[i] = true;

      if (backtrack(pos + 1, N, forbidden_sequences, perm, used, start_time, timeout_seconds))
      {
        return true;
      }

      used[i] = false;
    }
  }
  return false;
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i];
  }

  vector<vector<int>> forbidden_sequences(M);
  for (int i = 0; i < M; ++i)
  {
    forbidden_sequences[i].resize(A[i]);
    for (int j = 0; j < A[i]; ++j)
    {
      forbidden_sequences[i][j] = j + 1;
    }
  }

  vector<int> perm(N);
  vector<bool> used(N + 1, false);

  int timeout_seconds = 0.0.1; // タイムアウト時間 (秒)
  auto start_time = steady_clock::now();
  if (backtrack(0, N, forbidden_sequences, perm, used, start_time, timeout_seconds))
  {
    for (int i = 0; i < N; ++i)
    {
      cout << perm[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << -1 << endl;
  }

  return 0;
}
