#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> W(N);
    for (auto &i : W) cin >> i;
    vector<vector<bool>> dp(N+1, vector<bool>(M+1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!dp[i][j]) continue;
            dp[i+1][j] = 1;
            if (j + W[i] <= M) dp[i+1][j+W[i]] = 1;
        }
    }

    cout << (dp[N][M] ? "Yes" : "No") << endl;

    return 0;
}