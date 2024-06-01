#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<vector<int> > tests(M);
    vector<char> results(M);

    for (int i = 0; i < M; ++i) {
        int C;
        cin >> C;
        tests[i].resize(C);
        for (int j = 0; j < C; ++j) {
            cin >> tests[i][j];
            --tests[i][j];  // 0-indexed for easier bit manipulation
        }
        cin >> results[i];
    }

    int valid_combinations = 0;

    // Iterate over all possible combinations of keys
    for (int mask = 0; mask < (1 << N); ++mask) {
        bool is_valid = true;

        for (int i = 0; i < M && is_valid; ++i) {
            int count = 0;
            for (int key : tests[i]) {
                if (mask & (1 << key)) {
                    ++count;
                }
            }
            if ((results[i] == 'o' && count < K) || (results[i] == 'x' && count >= K)) {
                is_valid = false;
            }
        }

        if (is_valid) {
            ++valid_combinations;
        }
    }

    cout << valid_combinations << endl;

    return 0;
}

