#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    unordered_set<char> letters(S.begin(), S.end());
    string result = "None";

    for (char c = 'a'; c <= 'z'; ++c) {
        if (letters.find(c) == letters.end()) {
            result = string(1, c);
            break;
        }
    }
    cout << result << '\n';
    return 0;
}
