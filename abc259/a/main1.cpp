#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, M, X, T, D;

int main() {
  cin >> N >> M >> X >> T >> D;
  // vector<int> height(N);
  // REP (i, 0, X+1) height[i] = D;
  // reverse(ALL(height));
  // int diff = N - M;
  // REP (i, 0, diff) T -= height[i];
  // cout << T << endl;

  if (M >= X) cout << T << endl;
  else cout << T - (X - M) * D << endl;
  return 0;
}
