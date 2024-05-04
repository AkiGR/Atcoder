#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, X, Y, Z;
    string message;
    cin >> N >> X >> Y >> Z;

    if (X > Y) {
        // down
        if (Z >= Y && Z <= X) {
            message = "Yes";
        } else {
            message = "No";
        }
    } else {
        // up
        if (Z >= X && Z <= Y) {
            message = "Yes";
        } else {
            message = "No";
        }
    }
    cout << message << endl;
    return 0;
}
