#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ll = long long;

int N, S, M, L;
ll ans = INT_MAX;

int main() {
  cin >> N >> S >> M >> L;

  REP (s, 0, 101) {
    REP (m, 0, 101) {
      REP (l, 0, 101) {
        if (6 * s + 8 * m + 12 * l >= N) {
          ans = min(ans, ll(S * s + M * m + L * l));
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
