#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int a = 0, b = 0;

int main() {
  vector<string> S(8);
  REP (i, 8) cin >> S[i];

  REP (i, 8) {
    if (S[i] == "........") {
      ++a;
    }
  }

  REP (i, 8) {
    int flag = 1;
    REP (j, 8) {
      if (S[j][i] == '#') flag = 0;
    }
    if (flag) ++b;
  }

  cout << a * b << endl;

  return 0;
}

// 2024/11/10
// 13:43