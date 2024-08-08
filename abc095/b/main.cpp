#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> m(N);
    rep(i, N) {
        cin >> m[i];
    }

    int total_min_dough = accumulate(m.begin(), m.end(), 0);
    int remaining_dough = X - total_min_dough;
    int additional_donuts = 0;
    if (remaining_dough > 0) {
        int min_dough = *min_element(m.begin(), m.end());
        additional_donuts = remaining_dough / min_dough;
    }
    int max_donuts = N + additional_donuts;
    cout << max_donuts << endl;
    return 0;
}

