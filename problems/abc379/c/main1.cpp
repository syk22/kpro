#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

using ll = long long;

ll N, ans = 0, cnt = 0;
int M;

int main() {
  cin >> N >> M;

  ans = N * (N + 1) / 2;

  vector<pair<ll, ll>> XA(M);
  REP (i, 0, M) cin >> XA[i].first;
  REP (i, 0, M) cin >> XA[i].second;

  sort(ALL(XA));

  REP (i, 0, M) {
    if (cnt < XA[i].first - 1) {
      ans = -1;
      break;
    }
    cnt += XA[i].second;
    ans -= XA[i].first * XA[i].second;
  }

  if (cnt != N) ans = -1;

  cout << ans << endl;

  return 0;
}

// 2024/11/20
// (未実行)