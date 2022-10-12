#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> S(N, vector<int>(N, 0));
    for (auto &i : S) for (auto &j : i) cin >> j;
    vector<vector<int>> a(N, vector<int>(N, 0));
    N--;
    a[0][N] = S[0][N];
    // cout << a[0][N] << endl;
    for (int i = 0; i <= N; ++i) {
        for (int j = N; j >= 0; --j) {
            if (i != 0 || j != N) {
                int x = 100000000, y = 100000000;
                if (i - 1 >= 0) x = a[i-1][j];
                if (j + 1 <= N) y = a[i][j+1];
                a[i][j] = min(x, y) + S[i][j];
            }
        }
    }
    // for (auto &i : a) {
    //     for (auto &j : i) cout << j << " ";
    //     cout << endl;
    // }
    cout << a[N][0] << endl;
    return 0;
}

// 左上からの演算になるだけでめちゃくちゃ大変だった