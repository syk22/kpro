#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N-1), B(N-1);
    for (auto &i : A) cin >> i;
    for (auto &i : B) cin >> i;
    vector<vector<int>> dp(N, vector<int>(M, -1));
    dp[0][0] = 0;
    for (int i = 0; i < N-1; ++i) {
        for (int j = 0; j < M; ++j) {
            if (dp[i][j] == -1) continue;
            dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
            if (j + A[i] < M) dp[i+1][j+A[i]] = max(dp[i+1][j+A[i]], dp[i][j] + B[i]);
        }
    }
    cout << dp[N-1][M-1] << endl;
    return 0;
}