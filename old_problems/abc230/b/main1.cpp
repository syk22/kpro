#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
string S;

int main2() {
  cin >> S;
  string T = "oxxoxxoxxoxxoxx";
  bool ans = 0;
  REP (i, 0, 3) {
    if (S == T.substr(i, S.size())) ans = 1;
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
// 9/27 5:08
// あまりスマートではないので解説確認

// S[i]の余りの位置によって一致するケースを確認する

int main() {
  cin >> S;

  for (string T : {"oxx", "xox", "xxo"}) {
    bool flag = 1;
    for (int i = 0; i < (int)S.size(); i++) {
      if (T[i % 3] != S[i]) flag = 0;
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
// - stringのループ
// - flagの確認位置
// 型にハマりすぎているところを反省