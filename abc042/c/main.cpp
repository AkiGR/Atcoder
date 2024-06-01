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

bool includeDvector(int n, vector<int> d) {
  string nStr = to_string(n);
  for(char digit : nStr) {
    if (find(d.begin(),d.end(), digit - '0') != d.end()) {
      return true;
    }
  }
  return false;

}
int main() {
  int n,k;
  cin >> n >> k;
  vector<int> d(k);
  for (int i = 0; i < k; i++) {
    cin >> d[i];
  }
  while (includeDvector(n,d)) {
    n++;
  }
  cout << n << endl;
  return 0;
}


