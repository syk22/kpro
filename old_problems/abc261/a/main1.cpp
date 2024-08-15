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

int L1, R1, L2, R2;
int x[101];

int main() {
  cin >> L1 >> R1 >> L2 >> R2;
  // REP (i, L1, R1 - L1) x[i] += 1;
  // REP (i, L2, R2 - L2) x[i] += 1;
  // int P = 0;
  // int len = max(R1, R2);
  // REP (i, 0, len+1) if (x[i] == 2) P++;
  // cout << P << endl;

  // cout << max(0, min(R1, R2) - max(L1, L2)) <<endl;

  if (L1 > L2) {
    swap(L1, L2);
    swap(R1, R2);
  }
  if (R1 <= L2) cout << 0 << endl;
  else if (R1 <= R2) cout << R1 - L2 << endl;
  else cout << R2 - L2 << endl;

  return 0;
}

// 8/26 20分ぐらい
// 最初意味がわからなくてすごく悩む
// テストケースもパスしないので確認

// きちんと少ない方を特定することが大事
