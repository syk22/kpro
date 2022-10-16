#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> X(N);
    for (auto &i : X) cin >> i;
    vector<vector<bool>> dp(N+1, vector<bool>(A, 0));
    dp[0][0] = 1;
    // vector<int> mods(N, 0);
    // for (int i = 0; i < N; ++i) mods[i] = X[i] % A;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < A; ++j) {
            if (!dp[i][j]) continue;
            dp[i+1][j] = 1;
            dp[i+1][(j+X[i])%A] = 1;
        }
    }

    // bool result = 0;
    // for (int i = 0; i <= N; ++i) if (dp[i][B-1]) result = 1;
    
    cout << (dp[N][B] ? "Yes" : "No") << endl;

    return 0;
}
