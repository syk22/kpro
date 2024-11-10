#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

// #define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

// 10^9以上10^18以下はllを使用
using ll = long long;
// long long は (2^63 - 1) が最高なので、それ以上の時はunsignedをつける必要がある　10^19まで
using ull = unsigned long long;

int N, Q, t, d;
int ans = 0, flag = 0;
string S;
string res = "Yes";

int main() {
  cin >> N;

  vector<pair<int, int>> gomi(N);
  REP (i, N) cin >> gomi[i].first >> gomi[i].second;

  cin >> Q;

  // vector<pair<int, int>> q(Q);
  // REP (i, N) cin >> gomi[i].first >> gomi[i].second;


  REP (i, Q) {
    cin >> t >> d, --t;
  }

  cout << ans << endl;
  cout << res << endl;

  return 0;
}

// 2024/11/10
// 4:43
