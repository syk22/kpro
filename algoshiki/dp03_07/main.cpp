#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> W(N);
    for (auto &i : W) cin >> i;

    // 差の最大値（Wを全て足し合わせたもの）
    int M = 0;
    for (auto &i : W) M += i;

    // 差の最大値分でのDP配列作成
    vector<vector<bool>> dp(N+1, vector<bool>(M+1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= M; ++j) {
            if (!dp[i][j]) continue;
            
            // ボールを選んだ時はW[i]分差が増える
            dp[i+1][j+W[i]] = 1;
            // ボールを選ばなかった時はもう一つの箱に入れる
            // W[i]引いた分だけ差が増える
            dp[i+1][abs(j-W[i])] = 1;
        }
    }

    // 差の最小値なので
    // 終わった段階(=N行目)で最初に出てくるTrueを探す
    int res = 0;
    // Trueが出てくるインデックス探索（便利。覚えたい）
    while (!dp[N][res]) ++res;
    cout << res << endl;
    return 0;
}
// 解法が全然わからなかったので別途また実装してみる