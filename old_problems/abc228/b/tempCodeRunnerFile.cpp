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

int N, X;
string S;
// int X[100010];
// vi V = {};
// vs VS = {""};

int main2() {
  cin >> N >> X;
  int a[100009];
  REP (i, 1, N+1) {
    int A;
    cin >> A;
    a[i] = A;
  }
  bool check[100009];
  FORE (i, check) i = 0;
  check[X] = 1;

  

  // REP (i, 0, N){}
  int ans = 1;
  int f = X - 1;
  check[f] = 1;
  while (ans <= N) {
    f = a[f] - 1;
    if (check[a[f]]) break;
    else {
      check[f] = 1;
      ans++;
    }
  }
  cout << ans << endl;

  // sort(ALL(V));
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);
  // cout << fixed << setprecision(10);
  // cout << setw(4) << setfill('0') << N << endl;
  // cout << S.substr(L-1, R-L+1) << endl;
  return 0;
}

// 9/27 19:27悩んだけどできないのでまた解説確認

int main() {
  cin >> N >> X;
  int a[100009];
  REP (i, 1, N+1) cin >> a[i];
  bool check[100009];
  // FORE (i, check) i = 0;
  // check[X] = 1;

  // do whileの使い方！
  int i = X;
  do {
    check[i] = 1;
    i = a[i];
  } while (!check[i]);

  int ans = 0;
  REP (i, 1, N+1) if (check[i]) ans++;
  cout << ans << endl;
}