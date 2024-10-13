#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

string S, T;

int main() {
  cin >> S >> T;

  vector<string> X;
  vector<vector<string>> dict;
  while (S != T) {
    REP (i, 0, S.size()) {
      if (S[i] != T[i]) {
        S[i] = T[i];
        X.push_back(S);
        break;
      }
    }
  }

  cout << X.size() << endl;
  FORE (x, X) cout << x << endl;

  return 0;
}

// 2024/10/12
// 8：04
// 順列で全部出さないといけないのでわからず。解説参照