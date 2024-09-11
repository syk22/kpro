#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
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
string S;
string res = "Yes";
// int X[100010] = {};
// vi V = {};
// vs VS = {""};
// int最大値は INT_MAX, int 最小値は INT_MIN

// map<int, string> mis = {
//   {11, "abc"},
//   {22, "DEF"},
//   {33, "GHI"}
// };

// map<string, int> msi = {
//   {"abc", 11},
//   {"DEF", 22},
//   {"GHI", 33}
// };

int main() {
  cin >> N >> S;
  cin >> A >> B;

  vector<int> a(N);
  FORE (x, a) cin >> x;

  string t(N, 't');
  
  REP(i, 0, N) {
    
    // if (i < S.size() - 1) cout  << " ";
    // if (flag) {}
  }

  // 文字列から数値型へ変換
  // ans = atoi(S.substr(3, 3).c_str());

  // Map型を出力
  // cout << msi["ABC"] << endl;

  // ソート
  // sort(ALL(V));

  // 検索
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);

  // 小数点以下10桁を表示
  // cout << fixed << setprecision(10) << N << endl;

  // 先頭まで4文字表示。4文字以下の場合は先頭を'0'で埋める
  // cout << setw(4) << setfill('0') << N << endl;

  // 文字列の左からL文字以降の文字全て
  // cout << S.substr(L-1, R-L+1) << endl;

  cout << ans << endl;
  cout << res << endl;
  
  return 0;
}