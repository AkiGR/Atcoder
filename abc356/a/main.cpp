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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        s[i] = i + 1;
    }

    l -= 1;
    r -= 1;

    if (l >= 0 && l < n && r >= 0 && r < n && l <= r) {
        reverse(s.begin() + l, s.begin() + r + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << s[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
