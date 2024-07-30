#include <bits/stdc++.h>
using namespace std;

// define
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) {
        cin >> A[i];
    }

    int counter = 0;
    while (true) {
        bool allEven = true;
        rep(i, N) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }

        if (!allEven) {
            break;
        }

        rep(i, N) {
            A[i] /= 2;
        }
        counter++;
    }
    cout << counter << endl;
    return 0;
}
