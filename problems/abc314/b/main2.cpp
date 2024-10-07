#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, X;

int main() {
  cin >> N;

  vector<int> C(N), win = {}, res = {};
  vector<vector<int>> A(N);
  REP (i, 0, N) {
    cin >> C[i];
    vector<int> a(C[i]);
    REP (j, 0, a.size()) cin >> a[j];
    A[i] = a;
  }

  cin >> X;

  REP (i, 0, N) {
    REP (j, 0, A[i].size()) {
      if (A[i][j] == X) win.push_back(i);
    }
  }

  // REP (i, 1, 37) {
  //   int flag = 0;
  //   REP (j, 0, win.size()) {
  //     if (C[win[j]] == i) {
  //       res.push_back(win[j] + 1);
  //       flag = 1;
  //     }
  //   }
  //   if (flag) break;
  // }

  int mn = 38;
  FORE (x, win) {
    mn = min(C[x], mn);
  }

  FORE (x, win) {
    if (mn == C[x]) res.push_back(x + 1);
  }

  cout << res.size() << endl;

  FORE (x, res) cout << x << ' ';
  cout << endl;

  return 0;
}

// 2024/10/7, 8
// 46:11