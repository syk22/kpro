#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

// 10^10以上はllを使用
// long long は　63^2 - 1が最高なので、それ以上の時はunsignedをつける必要がある
using ull = unsigned long long;
// vector
using vi = vector<int>;
using vs = vector<string>;

// chmax(a, b) -> aよりb が大きければ a に b を代入してTrueを返す
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
// chmin(a, b) -> aよりb が小さければ a に b を代入してTrueを返す
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

using ll = long long;

ll A, M, L, R;
ll ans = 0, flag = 0;

int main() {
  cin >> A >> M >> L >> R;

  if (L != R || A <= R) {
    // if (A <= L) ans = ()
    REPS (i, 0, abs(R), M) {
      if (A + M * i > L && A + M * i < R) ans++;
      if (A + M * i >= R) break;
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/23
// 18分やったけどわからず、解答参照