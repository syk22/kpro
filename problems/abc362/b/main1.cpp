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

int xa, ya, xb, yb, xc, yc;
string res = "No";

int main() {
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  cout << xa << " " << ya << " " << xb << " " << yb << " " << xc << " " << yc << endl;

  double a, c, ab, ac, ba, bc, b, xba, yba, xbc, ybc, ca, cb;

  // ab = (ya - yb) / (xa - xb);
  // ac = (ya - yc) / (xa - xc);
  // cout << (ya - yb) << endl;
  // cout <<  (xa - xb) << endl;
  // cout <<  ab << endl;
  xba = xa - xb;
  yba = ya - yb;
  xbc = xc - xb;
  ybc = yc - yb;
  // xba:ybc = yba:xbc
  cout << "xba: " << xba << " ybc: " << ybc << endl;
  cout << "yba: " << yba << " xbc: " << xbc << endl;

  cout << xba / ybc / yba * xbc << endl; 

  ba = (xa - xb) / (ya - yb);
  bc = (xc - xb) / (yc - yb);
  a = (xb - xa) / (yb - ya) * (xc - xa) / (yc - ya);
  b = (xa - xb) / (ya - yb) * (xc - xb) / (yc - yb);
  c = (xa - xc) / (ya - yc) * (xb - xc) / (yb - yc);

  cout << a << " " << b << " " << c << endl;
  // ca = (yc - ya) / (xc - xa);
  // cb = (yc - yb) / (xc - xb);

  // if (ab * ac == -1) res = "Yes";
  // if (ba * bc == -1) res = "Yes";
  // if (ca * cb == -1) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/9/13
// 40分近く考えてもわからんかったw