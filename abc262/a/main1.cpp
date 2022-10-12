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

int Y;

int main() {
  cin >> Y;
  REP (i, 0, 4) {
    int year = Y + i;
    if(year % 4 == 2) {
      cout << year << endl;
      return 0;
    }
  }
}

// 8/26 6:29.37
// こんなのでいいのかなと悩む
// これは数をこなしていくべき問題だなあ