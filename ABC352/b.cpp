#include <bits/stdc++.h>
using namespace std;

// 関数定義

int main() {
    string S, T;
    cin >> S >> T;

    int sIndex = 0; // Sのインデックスを先頭から開始
    int tIndex = 0; // Tのインデックスを先頭から開始

    vector<int> AnsIndex;

    while (sIndex < S.length() && tIndex < T.length()) {
        if (S[sIndex] == T[tIndex]) {
            // SとTの文字が一致する場合、正しい入力文字として扱う
            AnsIndex.push_back(tIndex + 1);
            cout << tIndex + 1 << " "; // 一致した位置を出力
            sIndex++;
        }
        tIndex++;
    }

    cout << endl;

    return 0;
}