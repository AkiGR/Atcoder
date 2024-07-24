#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int max_divisions = 0;
    int best_number = 1;

    for (int i = 1; i <= N; ++i) {
        int count = 0;
        int num = i;
        while (num % 2 == 0) {
            num /= 2;
            count++;
        }
        if (count > max_divisions) {
            max_divisions = count;
            best_number = i;
        }
    }

    cout <<  best_number << endl;
    return 0;
}
