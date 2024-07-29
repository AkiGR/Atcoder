#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int availableWidth = X - 1 * Z;
    int maxPeople = availableWidth / (Y + Z);

    cout << maxPeople << endl;
    return 0;
}
