#include <iostream>
#include <algorithm>

using namespace std;

int intersectionVolume(int a, int b, int c, int d, int e, int f,
                        int g, int h, int i, int j, int k, int l) {
    int C1_x1 = a;
    int C1_y1 = b;
    int C1_z1 = c;
    int C1_x2 = d;
    int C1_y2 = e;
    int C1_z2 = f;
    
    int C2_x1 = g;
    int C2_y1 = h;
    int C2_z1 = i;
    int C2_x2 = j;
    int C2_y2 = k;
    int C2_z2 = l;
    
    int overlap_x = max(0, min(C1_x2, C2_x2) - max(C1_x1, C2_x1));
    int overlap_y = max(0, min(C1_y2, C2_y2) - max(C1_y1, C2_y1));
    int overlap_z = max(0, min(C1_z2, C2_z2) - max(C1_z1, C2_z1));
    
    int volume = overlap_x * overlap_y * overlap_z;
    
    return volume;
}

int main() {
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;
    
    int volume = intersectionVolume(a, b, c, d, e, f, g, h, i, j, k, l);
    
    if (volume > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}