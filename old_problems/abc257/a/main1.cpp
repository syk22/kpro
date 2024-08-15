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

int N, X, num;
int C = 'A';
// string S;

int main() {
  cin >> N >> X;
  // REP (i, 0, 26) REP (j, 0, N) S += char(C + i);
  
  // // cout << S << endl;
  // cout << S.substr(X - 1, 1) << endl;

  num = (X - 1) / N;
  cout << char(C + num) << endl;
}
// 8/30 20分ぐらい
// 文字列組み立てないでやると失敗。
// 最初、Xの時で−１していれば良かったのだ。不覚。