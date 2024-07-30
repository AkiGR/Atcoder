#include <iostream>
using namespace std;

bool isValidPostalCode(const string &s, int A, int B) {
    int n = s.length();
    if (n != A + B + 1) return false;

    if (s[A] != '-') return false;

    for (int i = 0; i < n; ++i) {
        if (i != A && (s[i] < '0' || s[i] > '9')) {
            return false;
        }
    }

    return true;
}

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;

    if (isValidPostalCode(S, A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
