#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M, P0;
int ans = 0, flag = 0;

int main() {
  cin >> N >> M;

  vector<string> C(N), D(M);
  vector<int> P(M);
  FORE (x, C) cin >> x;
  FORE (x, D) cin >> x;
  cin >> P0;
  FORE (x, P) cin >> x;
  
  REP (i, 0, N) {
    flag = 1;
    REP (j, 0, M) {
      if (C[i] == D[j]) {
        ans += P[j];
        flag = 0;
      }
    }
    if (flag) ans += P0;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/7
// 6:32