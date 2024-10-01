#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
string S;

int main() {
  cin >> S;

  REP (i, 0, S.size()) {
    REP (j, 1, S.size() + 1) {
      string bun = S.substr(i, j);
      int flag = 1, bsize = bun.size();
      REP (k, 0, bsize / 2) {
        if (bun[k] != bun[bsize - k - 1]) flag = 0;
      }
      if (flag) ans = max(ans, bsize);
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/01
// 8:54
