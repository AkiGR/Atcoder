#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix &A, Matrix &B) {
    Matrix C(2, vector<long long>(2));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

Matrix power(Matrix A, int n) {
    Matrix result = {{1, 0}, {0, 1}};
    while (n > 0) {
        if (n % 2 == 1) {
            result = multiply(result, A);
        }
        A = multiply(A, A);
        n /= 2;
    }
    return result;
}

long long lucas(int n) {
    if (n == 0) return 2;
    if (n == 1) return 1;
    Matrix A = {{1, 1}, {1, 0}};
    Matrix result = power(A, n-1);
    return result[0][0] * 1 + result[0][1] * 2;
}

int main() {
    int N;
    cin >> N;

    long long result = lucas(N);
    cout << result << endl;

    return 0;
}
