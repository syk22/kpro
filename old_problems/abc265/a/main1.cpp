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

int N;

int main() {
  int x, y, n;
  cin >> x >> y >> n;
  int n3 = n/3;
  int np3 = n%3;
  int allx = x * n;
  int y3x1 = y * n3 + x * np3;
  if (allx > y3x1) {
    cout << y3x1 << endl;
  } else {
    cout << allx << endl;
  }
}

// 2022/8/23
// 15:02
// x * n % 3 -> (x * n) % 3としていたのに気付くのに時間がかかった感じ
