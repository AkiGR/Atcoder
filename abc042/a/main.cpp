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

bool include575(int a, int b, int c) {
  int count_5 = 0;
  int count_7 = 0;

  if(a == 5) count_5++;
  if(b == 5) count_5++;
  if(c == 5) count_5++;

  if(a == 7) count_7++;
  if(b == 7) count_7++;
  if(c == 7) count_7++;

  return count_5 == 2 && count_7 == 1;
}

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  string result = "NO";
  if (include575(a,b,c)) result = "YES";
  cout << result << endl;
  return 0;
}
