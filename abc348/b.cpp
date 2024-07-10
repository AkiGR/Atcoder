#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; ++i) {
        int max_dist = 0;
        int idx = -1;
        for (int j = 0; j < n; ++j) {
        int dist = (x[i] - x[j]) * (x[i] - x[j]) +
                    (y[i] - y[j]) * (y[i] - y[j]);
        if (max_dist < dist) {
            max_dist = dist;
            idx = j;
        }
        }
        cout << idx + 1 << endl;
    }
}
