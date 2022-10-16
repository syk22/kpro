#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N-1);
    for (auto &i : A) cin >> i;
    vector<vector<bool>> dp(N, vector<bool>(M, 0));
    dp[0][0] = 1;
    for (int i = 0; i < N-1; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!dp[i][j]) continue;
            dp[i+1][j] = 1;
            if (j + A[i] < M) dp[i+1][j+A[i]] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < M; ++i) if (dp[N-1][i]) ans++;
    cout << ans << endl;

    return 0;
}