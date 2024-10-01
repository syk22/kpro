#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = INT_MIN;

int main() {
  cin >> N;

  vector<int> W(N), X(N);
  REP (i, 0, N) cin >> W[i] >> X[i];

  REP (i, 0, 24) {
    int cnt = 0;
    REP (j, 0, N) {
      int time = (i + X[j]) % 24;
      if (0 <= time && time < 9) cnt += W[j];
    }
    ans = max(ans, cnt);
  }

  cout << ans << endl;

  return 0;
}

// 2021/10/2
// 10:39