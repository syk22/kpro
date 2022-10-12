#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
using vi = vector<int>;

int N;
// int X[100010];
vector<vi> vvi = {};
// vs VS = {""};

int main2() {
  cin >> N;
  REP (i, 0, N) {
    int L;
    cin >> L;
    vi VI = {};
    REP (j, 0, L) {
      int a; cin >> a;
      VI.push_back(a);
    }
  }
  // sort(ALL(V));
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);
  // cout << fixed << setprecision(10);
  // cout << setw(4) << setfill('0') << N << endl;
  // cout << S.substr(L-1, R-L+1) << endl;
}

// 9/26 7分悩んだけど頭がぼんやりでわからないので解答参照
// set使うのでよかったのか〜
int main() {
  cin >> N;
  set<vi> svi;
  REP (i, 0, N) {
    int L;
    cin >> L;
    vi vl(L);
    FORE (j, vl) cin >> j;
    svi.insert(vl);
  }
  cout << svi.size() << endl;
}
// B問題でset使ったらダメかなとか考えたけど全然そんなことはなかった