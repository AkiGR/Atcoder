#include <string> // string, to_string, stoi
#include <vector> // vector
#include <iostream> // cout, endl, cin
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

    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        m -= h[i];
        if (m >= 0) {
            index = i+1;
        } else {
            break;
        }
    }
    cout << index << endl;
    return 0;
}
