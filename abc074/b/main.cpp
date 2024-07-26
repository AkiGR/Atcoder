#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> x(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }

    long long total_distance = 0;
    for (int i = 0; i < N; ++i) {
        int dist_A = 2 * x[i];
        int dist_B = 2 * (K - x[i]);
        total_distance += min(dist_A, dist_B);
    }

    cout << total_distance << endl;
    return 0;
}
