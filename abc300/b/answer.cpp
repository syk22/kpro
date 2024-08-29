#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W;
string res = "No";

int main () {
  cin >> H >> W;

  // 文字を数値列で取得
  vector<string> A(H), B(H);
  FORE (x, A) cin >> x;
  FORE (x, B) cin >> x;

  // Aの変化分インデックス
  REP (s, 0, H) {
    REP (t, 0, W) {
      // 全て同じとするフラグ
      int flag = 1;
      // A, Bそれぞれの元のインデックスを保持
      REP (i, 0, H) {
        REP (j, 0, W) {
          // i - s -> 縦のインデックスからsずらしたという計算
          // (i - s + H) は >= 0 であることが保証される
          // (i - s + H) % H でインデックス値の取得が可能　横も同じ
          // B[i][j] は比較する元のインデックス
          // わざわざ比較用の配列を持つより1字ずつ比較してフラグを確認する
          if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) flag = 0;
        }
      }

      if (flag) res = "Yes";
    };
  }

  cout << res << endl;
  return 0;
}
