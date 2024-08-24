#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
char A, B, X;
int ans = 0;

int main() {
  cin >> S;
  A = S.at(0);
  B = S.at(1);
  
  if (A == B) X = A;
  else {
    if (A == S.at(2)) ans = 2;
    if (B == S.at(2)) ans = 1;
  }

  if (ans == 0) {
    REP(i, 2, S.size()) {
      if (X != S.at(i)) {
        ans = i + 1;
        break;
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/24
// 7:59

// 三項演算子で解く
int mainSanko() {
  cin >> S;
  X = S.at(0) == S.at(1) ? S.at(0) : (S.at(0) == S.at(2) ? S.at(0) : S.at(1));
  REP (i, 0, S.size()) {
    if (S.at(i) != X) cout << i + 1 << endl;
  }
}

// 二重ループで解く
int mainDoubleRoop() {
  cin >> S;
  REP (i, 0, S.size()) {
    bool flag = true;
    REP (j, 0, S.size()) {
      if (i != j && S.at(i) == S.at(j)) flag = false;
    }
    if (flag) cout << i + 1 << endl;
  }
}