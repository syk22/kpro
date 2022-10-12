#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using si = set<int>;
using ss = set<string>;
using mpi = map<int, int>;
using mpc = map<char, int>;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N;
string S, T;

// 9/28 18：14　未解決
// charを一生懸命捏ね回してたのに＝＝が通らない。

// 新しい文字列を作ること
// -'a'で合わせることの煩雑さをなくすため、剰余を使う

int main() {
  cin >> S >> T;
  bool ans = 0;
  for (int k = 0; k < 26; k++) {
    string compS = "";
    for (int i = 0; i < (int)S.size(); i++) {
      compS += (S[i] - 'a' + k) % 26 + 'a';
    }
    if (compS == T) ans = 1;
  }
  cout << (ans ? "Yes" : "No") << endl;
}
