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

int L, R;
string S = "atcoder";

int main() {
  cin >> L >> R;
  cout << S.substr(L-1, R-L+1) << endl;
}

// 8/26 6:50.00
// 解法はすぐわかったけれどもsubstr関数の使い方の確認で手間取る
// 紙に書いて文字がどこなのか確認しておいたのは
// 自分GJとする
// （お陰で引数を間違えなかった）