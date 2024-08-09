#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    // K回の操作を行う
    rep(i, k) {
        if (a >= b && a >= c) {
            a *= 2;
        } else if (b >= a && b >= c) {
            b *= 2;
        } else {
            c *= 2;
        }
    }

    int result = a + b + c;
    cout << result << endl;

    return 0;
}

