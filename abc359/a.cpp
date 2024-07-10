#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int counter = 0;
    rep(i, n) {
        if (s[i] == "Takahashi") {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}