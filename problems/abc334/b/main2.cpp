#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll A, M, L, R;
ll ans = 0, lc, rc;

ll floor (ll x, ll y) {
  ll z = (x % y + y) % y;
  return (x - z) / y;
}

int main() {
  cin >> A >> M >> L >> R;
  L -= A, R -= A;

  lc = floor(L - 1, M), rc = floor(R, M);
  ans = rc - lc;

  cout << ans << endl;

  return 0;
}
