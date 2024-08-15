#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S, T;

int main() {
  cin >> S >> T;
  // int len = min(S.size(), T.size());
  // bool flag = 0;
  // REP (i, 0, len) {
  //   if (S[i] < T[i]) flag = 1;
  //   if (i == len - 1) {
  //     if (!flag && S.size() < T.size()) flag = 1;
  //   }
  // }
  // // if (!flag && S.size() < T.size()) flag = 1;
  // cout << (flag ? "Yes" : "No") << endl;

  cout << (S < T ? "Yes" : "No") << endl;
}
// 9/9 19:30
// 文字列の辞書比較、すっかり忘れてた