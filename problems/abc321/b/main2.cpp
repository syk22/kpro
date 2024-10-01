#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, X, mn = INT_MAX, mx = INT_MIN, a;
int ans = -1, cnt = 0;

int main() {
  cin >> N >> X;

  REP (i, 0, N - 1) {
    cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
    cnt += a;
  }

  if (cnt - mx >= X) ans = 0;
  else {
    cnt = cnt - mn - mx;
    if (X - cnt <= mx) ans = X - cnt;
  }

  cout << ans << endl;

  return 0;
}
