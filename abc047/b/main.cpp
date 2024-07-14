#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    int x_min = 0, x_max = W, y_min = 0, y_max = H;

    for (int i = 0; i < N; ++i) {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1) {
            x_min = max(x_min, x);
        } else if (a == 2) {
            x_max = min(x_max, x);
        } else if (a == 3) {
            y_min = max(y_min, y);
        } else if (a == 4) {
            y_max = min(y_max, y);
        }
    }

    int width = max(0, x_max - x_min);
    int height = max(0, y_max - y_min);
    int area = width * height;

    cout << area << endl;

    return 0;
}
