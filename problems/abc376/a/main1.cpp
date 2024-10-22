#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, C;
int ans = 0;

int main() {
  cin >> N >> C;

  vector<int> T(N);
  REP (i, 0, N) cin >> T[i];

  int getc = 0;
  REP (i, 0, N) {
    int flag = 1;
    if (i > 0) {
      if (T[i] - getc < C) flag = 0;
    }
    if (flag) ++ans, getc = T[i];
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/10/22
// 10分以上