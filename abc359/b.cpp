#include <iostream>
#include <vector>

using namespace std;
#define rep(i,n) for (int i = 0; i < (2*n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(2*n);
    rep(i,n) cin >> a[i];

    int counter = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == a[i+2]) counter++;
    }
    cout << counter << endl;
    return 0;
}