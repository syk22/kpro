#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N-1);
    for (auto &i : A) cin >> i;
    vector<vector<bool>> c(N, vector<bool>(M, 0));
    c[0][0] = 1;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (c[i-1][j]) c[i][j] = 1;
            if (j - A[i-1] >= 0 && c[i-1][j-A[i-1]]) c[i][j] = 1;
        }
    }
    int ans = 0;
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < M; ++j) {
    //         if (c[i][j]) cout << 1 << " ";
    //         else cout << 0 << " ";
    //     }
    //     cout << endl;
    // }

    for (int j = 0; j < M; ++j) if (c[N-1][j]) ans++;
    
    cout << ans << endl;
    return 0;
}