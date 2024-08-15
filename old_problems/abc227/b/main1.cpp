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
// int X[100010];
vi V = {};
// vs VS = {""};

int sum_area(int a, int b) {
  return 4 * a * b + 3 * (a + b);
}

int main2() {
  cin >> N;
  REP (i, 0, N) {
    int s;
    cin >> s;
    V.push_back(s);
  }
  int cnt = 0;

  REP (i, 0, N) {
    int max_area = V[i], a = 0, b = 0;
    while (sum_area(a, b) < max_area) {

    }
    REP (j, 1, max_area) {
      REP (k, 1, max_area) {
        if (sum_area(j, k) == max_area){
          cnt++;
          break;
        }
      }
    }
  }
  cout << N - cnt << endl;
  return 0;
  // sort(ALL(V));
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);
  // cout << fixed << setprecision(10);
  // cout << setw(4) << setfill('0') << N << endl;
  // cout << S.substr(L-1, R-L+1) << endl;
}

// 9/27 12:55 考えてもいまいちわからないので解説参照

int main() {
  cin >> N;
    REP (i, 0, N) {
    int s;
    cin >> s;
    V.push_back(s);
  }
  int ans = 0;
  REP (i, 0, N) {
    bool flag = 1;
    for (int a = 1; a <= 1000; a++) {
      for (int b = 1; b <= 1000; b++) {
        if (sum_area(a, b) == V[i]) flag = 0;
      }
    }
    if (flag) ans++;
  }
  cout << ans << endl;
}
// 条件をよく読もう