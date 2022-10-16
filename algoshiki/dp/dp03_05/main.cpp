#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> W(N);
    for (auto &i : W) cin >> i;
    // 最小化問題の時は配列を最大値で初期化
    const int INF = 1 << 30;
    // cout << INF << endl;
    vector<vector<int>> dp(N+1, vector<int>(M+1, INF));

    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= M; ++j) {
            if (dp[i][j] == INF) continue;
            dp[i+1][j] = min(dp[i][j], dp[i+1][j]);
            if (j + W[i] <= M) {
                if (dp[i+1][j+W[i]] <= 0) dp[i+1][j+W[i]] = 1;
                else dp[i+1][j+W[i]] = min(dp[i][j]+1, dp[i+1][j+W[i]]);
            }
        }
    }
    // for (auto &i : dp) {
    //     for (auto &j : i) cout << j << " ";
    //     cout << endl;
    // }
    cout << (dp[N][M]!= INF ? dp[N][M] : -1) << endl;
    return 0;
}
