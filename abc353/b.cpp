#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int empty_sheet = k;
    int start_count = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (empty_sheet < a) {
            ++start_count;
            empty_sheet = k;
        }
        empty_sheet -= a;
    }
    ++start_count;
    cout << start_count << endl;
    return 0;
}