#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> W(N), V(N);
    for (auto &i : W) cin >> i;
    for (auto &i : V) cin >> i;
    vector<vector<int>> dp(N+1, vector<int>(M+1, -1));

    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= M; ++j) {
            if (dp[i][j] < 0) continue;
            dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
            if (j + W[i] <= M) dp[i+1][j+W[i]] = max(dp[i+1][j+W[i]], dp[i][j] + V[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= M; ++j) {
            ans = max(ans, dp[i][j]);
            // cout << ans << " ";
        }
        // cout << endl;
    }
    // for (auto &i : dp) {
    //     for (auto &j : i) cout << j << " ";
    //     cout << endl;
    // }
    cout << ans << endl;
    return 0;
}
