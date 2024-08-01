#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int root = static_cast<int>(std::sqrt(num));
    return root * root == num;
}

int main() {
    int a, b;
    cin >> a >> b;

    string concatenated = to_string(a) + to_string(b);
    int concatenatedNumber = stoi(concatenated);

    if (isPerfectSquare(concatenatedNumber)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
