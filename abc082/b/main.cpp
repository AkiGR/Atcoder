#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string s_prime = s;
    sort(s_prime.begin(), s_prime.end());

    string t_prime = t;
    sort(t_prime.begin(), t_prime.end(), greater<char>());

    if (s_prime < t_prime) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
