#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M), B(M);
    rep(i, M) {
        cin >> A[i] >> B[i];
    }

    vector<int> count(N, 0);
    rep(i, M) {
        count[A[i] - 1]++;
        count[B[i] - 1]++;
    }

    rep(i, N) {
        cout << count[i] << endl;
    }

    return 0;
}