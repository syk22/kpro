#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, X;
string ans = "";

int main() {
  cin >> N >> X;
  // REP (i, 0, 26) {
  //   REP (j, 0, N) ans += char(65 + i);
  // }
  // cout << ans[X-1] << endl;
  // 9/24 7:14

  int y = (X + N - 1) / N;
  cout << char(64 + y) << endl;
  // こっちを先にやりたかった
  // (X + N - 1) / N これが覚えられん

}