#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

// 10^10以上10^18以下はllを使用
using ll = long long;

ll B, ans = -1;

int main() {
  cin >> B;

  REP (i, 1, 16) {
    ll A = i;
    REP (j, 1, i) {
      A *= i;
    }
    if (B == A) ans = i;
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/2
// 6:55