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

int R, C;

int main() {
  cin >> R >> C;
  int abs_R = abs(R-8), abs_C = abs(C-8);

  int judge = max(abs_R, abs_C);
  if (judge % 2 == 0) {
    cout << "white" << endl;
  } else {
    cout << "black" << endl;
  }
  // ０はfalseの扱いになるので
  // if (judge % 2) cout << "black" << endl
  // else cout << "white" << endl;
  // でもOK
  return 0;
}

// 8/26 35:23.69 + 色々考える
// 4分の1にするところまでは考えついた
// もっと簡単にするのに、さらに斜めに折る必要があった
// よく考えついたなー。GJ自分

// ■■■■■■■■
// □□□□□□□
// ■■■■■■
// □□□□□
// ■■■■
// □□□
// ■■
// □
// ↑こういう形にすることによって、RとCのうち大きい方がある場所
// で調べられる

// 公式解法と同じ解き方ー