#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int sqrtN = static_cast<int>(sqrt(N));

    int maxSquare = sqrtN * sqrtN;

    cout << maxSquare << endl;

    return 0;
}
