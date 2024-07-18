#include <iostream>
using namespace std;

int main() {
    int W, a, b;
    cin >> W >> a >> b;

    if (a <= b + W && b <= a + W) {
        cout << 0 << endl;
    } else {
        int distance;
        if (a + W < b) {
            distance = b - (a + W);
        } else {
            distance = a - (b + W);
        }
        cout << distance << endl;
    }

    return 0;
}
