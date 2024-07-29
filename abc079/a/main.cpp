#include <iostream>
#include <string>
using namespace std;

bool isGoodInteger(int N) {
    string s = to_string(N);
    for (int i = 0; i <= 1; i++) {
        if (s[i] == s[i+1] && s[i] == s[i+2]) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    if (isGoodInteger(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
