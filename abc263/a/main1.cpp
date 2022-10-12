#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
using vint = vector<int>;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N;
int card[14];
int main() {
  REP (i, 0, 5) {
    cin >> N;
    card[N]++;
  }
  bool flag3 = false, flag2 = false;
  REP (i, 1, 14) {
    if (card[i] == 3) flag3 = true;
    if (card[i] == 2) flag2 = true;
  }
  if (flag3 && flag2) cout << "Yes" << endl;
  else cout << "No" << endl;

  // vector<int> c(5);
  // REP (i, 0, 5) cin >> c[i];
  // sort(c.begin(), c.end());

  // if ((c[0] == c[2] && c[3] == c[4])
  //   || (c[0] == c[1] && c[2] == c[4])) {
  //     cout << "Yes" << endl;
  //   } else cout << "No" << endl;
  return 0;
}

// 8/26 6:38.52
// 公式解説見た。ソートするのか。なるほど

// vectorの書き方も忘れてるわ〜