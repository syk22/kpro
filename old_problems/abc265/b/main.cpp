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

int N, M;
ll T;
ll A[100009], Y[100009];

int main() {
  cin >> N >> M >> T;
  REP (i, 1, N) {
    cin >> A[i];
  }
  REP (i, 0, M) {
    int y;
    cin >> y; 
    cin >> Y[y];
  }
  // cout << "----" << endl;
  // REP (i, 1, N) {
  //   cout << A[i] << endl;
  // }
  // cout << "----" << endl;
  // REP (i, 1, N) {
  //   cout << Y[i] << endl;
  // }


  bool gameover = false;
  REP (i, 1, N) {
    if (T <= 0) gameover = true;
    
    T += Y[i];
    T -= A[i];

  }
  if (T <= 0) gameover = true;
  if (gameover) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
  // cout << fixed << setprecision(10);
  // cout << setw(4) << setfill('0') << N << endl;
}

// 2022/8/23
// 46:15.52
// 46分かかっても解けないのは、配列の癖なんかを完全に忘れているから
// しかしなんでWAになってるのか分からないので、結局もっとかかっていたはず

// 添字の練習をしよう

// 2022/8/24
// 23:03.76
// あと一つだめだった何だろう
// 条件はよく読もう（０以下になってはいけない→0になってもだめ）

// 欠点の1つはllの問題だった
// 10^9はllで
// 10^8まではintでOK

// もう一つは、判定タイミングと判定に使用する式の差
// あのタイミングで判定するならA[i]が小さいがどうか (T <= A[i]) では判別しきれない
// 0かどうかをチェックする
// ループ後の if (T <= 0) gameover = true; も外せるはずだがそこは後で確認

// じっくり絵に描いてステップを確認すること
