#include <iostream>
#include <set>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<char> colors;
  for (int i = 0; i < N; ++i) {
    char c;
    cin >> c;
    colors.insert(c);
  }

  if (colors.size() == 3) {
    cout << "Three" << endl;
  } else if (colors.size() == 4) {
    cout << "Four" << endl;
  }

  return 0;
}
