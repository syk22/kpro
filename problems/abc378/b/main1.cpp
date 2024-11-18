#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, Q, t, d;
int ans = 0;

int main() {
  cin >> N;

  vector<pair<int, int>> gomi(N);
  REP (i, N) cin >> gomi[i].first >> gomi[i].second;

  cin >> Q;

  REP (i, Q) {
    cin >> t >> d, --t;
    int base = (d / gomi[t].first) * gomi[t].first;
    d -= base;
    ans = base + gomi[t].second;
    if (d > gomi[t].second) ans += gomi[t].first;
    cout << ans << endl;
  }

  return 0;
}

// 2024/11/10
// 4:43
// 2024/11/14
// 14:52
// 2024/11/18
// 5分ぐらい