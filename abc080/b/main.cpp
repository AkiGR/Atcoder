#include <bits/stdc++.h>
using namespace std;

bool isHarshadNumber(int n) {
    int sumOfDigits = 0;
    int originalN = n;

    while (n > 0) {
        sumOfDigits += n % 10;
        n /= 10;
    }

    return (originalN % sumOfDigits) == 0;
}

int main() {
    int N;
    cin >> N;

    if (isHarshadNumber(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
