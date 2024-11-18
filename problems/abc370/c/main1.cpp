#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

string S, T;

int main() {
  cin >> S >> T;

  vector<string> X;

  int sz = S.size();
  REP (i, sz) {
    if (S[i] > T[i]) S[i] = T[i], X.push_back(S);
  }
  RREP (i, S.size(), 0) {
    if (S[i] < T[i]) S[i] = T[i], X.push_back(S);
  }

  cout << X.size() << endl;
  FORE (x, X) cout << x << endl;

  return 0;
}

// 2024/10/12
// 8：04
// 順列で全部出さないといけないのでわからず。解説参照
// 2024/11/18
// 5分ぐらい