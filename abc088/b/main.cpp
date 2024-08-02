#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    rep(i, N) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int alice_score = 0;
    int bob_score = 0;

    rep(i, N) {
        if (i % 2 == 0) {
            alice_score += a[i];
        } else {
            bob_score += a[i];
        }
    }

    cout << (alice_score - bob_score) << endl;
    return 0;
}
