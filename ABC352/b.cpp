#include <bits/stdc++.h>
using namespace std;

// 関数定義

int main() {
    string S, T;
    cin >> S >> T;

    int sIndex = 0; // Sのインデックスを先頭から開始
    int tIndex = 0; // Tのインデックスを先頭から開始

    while (sIndex < S.length() && tIndex < T.length()) {
        if (S[sIndex] == T[tIndex]) {
            cout << tIndex + 1 << " "; // 一致した位置を出力
            sIndex++;
        }
        tIndex++;
    }

    cout << endl;

    return 0;
}