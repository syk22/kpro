#include <bits/stdc++.h>
using namespace std;

// 配列の中身表示

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A) cin >> i;

    for (int i = 0; i < N-1; ++i) {
        // j でチェックするインデックスをみる
        int j = i;
        while (j < N-1) {
            if (A[j] > A[j+1]) swap(A[j], A[j+1]);
            ++j;
        }
        for (int k = 0; k < N; ++k) {
            cout << A[k];
            if(N-1-k) cout << " ";
            else cout << endl;
        } 
    }
    // cout << "Hello World!" << endl;
    return 0;
}
