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

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, a;
  cin >> n >> a;
  vector<int> t(n);
  rep(i,n) cin >> t[i];

  int x = 0;
  rep (i,n) {
    if (t[i] < x) {
      x = x+a;
    } else {
      x = t[i]+a;
    }
    cout << x << endl;
  }
  return 0;
}
