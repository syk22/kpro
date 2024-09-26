#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

// 10^10以上はllを使用
using ll = long long;

ll B, ans = -1;

int main() {
  cin >> B;

  for (ll a = 1; a <= 15; ++a) {
    ll res = 1;
    REP (i, 0, a) res *= a;
    if (res == B) {
      ans = a;
      break;
    } else if (res > B) break;
  }

  cout << ans << endl;

  return 0;
}
