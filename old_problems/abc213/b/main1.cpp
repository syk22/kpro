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

// int N, score[20009], comp[20009], a;
// int N, a;
// priority_queue<int, vector<int>, greater<int>> pq;
// int main() {
//   cin >> N;
//   REP (i, 1, N+1) {
//     cin >> a;
//     score[i] = a;
//   }
//   int min1 = 0;
//   int min2 = 1;
//   REP (i, 1, N+1) {

//   }
//   // sort(ALL(V));
//   // auto it = find(ALL(VS), S);
//   // int i = distance(VS.begin(), it);
//   // cout << fixed << setprecision(10);
//   // cout << setw(4) << setfill('0') << N << endl;
//   // cout << S.substr(L-1, R-L+1) << endl;
// }
// 9/23 10分考えてもわからなかったので答え参照

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> vpii;
  REP (i, 0, N) {
    int a;
    cin >> a;
    vpii.push_back(make_pair(a, i+1));
  }
  sort(ALL(vpii), greater<pair<int, int>>());
  cout << vpii[1].second << endl;
}