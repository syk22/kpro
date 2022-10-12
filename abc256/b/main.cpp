#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto& i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, P = 0;
int A[101];

queue<int> Q;

int main() {
  cin >> N;
  REP (i, 0, N) cin >> A[i];

  REP (i, 0, N) {
    Q.push(1);
    REP (j, 0, A[i]-1) {
      Q.push(0);
    }
  }
  while (Q.size() >= 4) {
    P += Q.front();
    Q.pop();
  }
  cout << P << endl;
}

// 8/25 時間計れず。でも、おそらく１時間以上はかかっている

// つまづいた点 1
// コマを一つ進めるループの中で、
// 4つ以上になった場合にキューから取り出すとしていた
// この場合、ループの最初に４以上取り出しとすると
// バッターが打った後に４以上になったものに対応ができず
// ループの最後に４以上だと取り出しとすると、
// 最終打席のバッターが終わった後に、３塁残塁のはずがそれも得点となってしまう

// 場合分けをしても良かったが、
// キューに全て入れた後で計算すればいいと夜気付く（着手は朝）

// つまづいた点 2
// しかも外に出してから計算が合わないことに気づく
// ループ内で処理している間は良かったが
// ループの外になると、バッターが打った分（A[i]）そのまま0を挿入すると
// キューがA[i]個増えるだけなのにA[i]+1個増えてしまっていた
// なので数が合ってなかったことにさらに気づく（後から計算やってすぐわかったけど）

// A[i]-1個 0を増やし、−1はバッターの1で埋めることによって
// バッターがくるたびA[i]個増やしていく発想になる
// （これであればループ内でも対応できていた。涙）


// またしても時間かかったけど、最初のロジック自体はそこそこきちんとできたので
// そこは評価しよう