#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, D;
int ans = 0, cnt = 0;

int main() {
  cin >> N >> D;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i];

  REP (i, 0, D) {
    int flag = 1;
    REP (j, 0, N) {
      if (S[j][i] == 'x') flag = 0;
    }
    if (flag) {
      ++cnt;
      ans = max(ans, cnt); 
    } else {
      cnt = 0;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/27
// 7:05