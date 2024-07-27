#include <iostream>
#include <vector>
using namespace std;

int countBombs(const vector<string>& grid, int i, int j, int H, int W) {
    int count = 0;
    int directions[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},          {0, 1},
        {1, -1}, {1, 0}, {1, 1}
    };
    for (int k = 0; k < 8; k++) {
        int ni = i + directions[k][0];
        int nj = j + directions[k][1];
        if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#') {
            count++;
        }
    }
    return count;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    vector<string> result = grid;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                int bombCount = countBombs(grid, i, j, H, W);
                result[i][j] = bombCount + '0';
            }
        }
    }
    for (int i = 0; i < H; i++) {
        cout << result[i] << endl;
    }
    return 0;
}
