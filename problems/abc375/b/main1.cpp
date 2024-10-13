#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ll = long long;

int N;
double ans = 0;
ll X, Y;

int main() {
  cin >> N;

  ll a = 0, b = 0;
  REP (i, 0, N) {
    cin >> X >> Y;
    ans += sqrt(pow(X - a, 2) + pow(Y - b, 2));
    a = X, b = Y;
  }

  ans += sqrt(pow(a, 2) + pow(b, 2));

  cout << fixed << setprecision(8) << ans << endl;

  return 0;
}

// 2024/10/13
// 7:36