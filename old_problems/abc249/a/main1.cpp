#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int A, B, C, D, E, F, X;


int main() {
  cin >> A >> B >> C >> D >> E >> F >> X;
  // int i_ta = X / (A+C);
  // int i_ao = X / (D+F);
  // // cout << i_ta << " " << i_ao << endl;

  // int a_ta = X % (A+C);
  // int a_ao = X % (D+F);
  // // cout << a_ta << " " << a_ao << endl;

  // int ta = i_ta * A * B;
  // int ao = i_ao * D * E;
  // // cout << ta << " " << ao << endl;

  // if (a_ta > A) ta += A*B;
  // else ta += a_ta*B;
  // if (a_ao > D) ao += D*E;
  // else ao += a_ao*E;
  // // cout << ta << " " << ao << endl;

  int ta = 0, ao = 0;
  REP (i, 0, X) {
    if (i % (A+C) < A) ta += B;
    if (i % (D+F) < D) ao += C;
  }

  if (ta > ao) cout << "Takahashi" << endl;
  else if (ta < ao) cout << "Aoki" << endl;
  else cout << "Draw" << endl;

}

// 9/5 19:54
// 調子に乗るとこういう問題に出くわす
// きちんと何の計算をしているのか把握していないとこうなる

// 余りがいくつか、その値がAもしくはDより小さければBもしくはE増える
// なるほど。。。。