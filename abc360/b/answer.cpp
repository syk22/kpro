#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

// 10^10以上はllを使用
using ll = long long;
// long long は　63^2 - 1が最高なので、それ以上の時はunsignedをつける必要がある
using ull = unsigned long long;
// vector
using vi = vector<int>;
using vs = vector<string>;

// chmax(a, b) -> aよりb が大きければ a に b を代入してTrueを返す
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
// chmin(a, b) -> aよりb が小さければ a に b を代入してTrueを返す
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N;
int H, W;
int A, B;
int X, Y;
int ans = 0, flag = 0;
string S, T;
string res = "No";

int main() {
  cin >> S >> T;

  REP (w, 0, int(S.size())) {
    REP (c, 0, w) {
      string now = "";
      for (int i = c; i < int(S.size()); i += w) now += S[i];
      if (now == T) res = "Yes";
    }
  }

  cout << res << endl;
  
  return 0;
}