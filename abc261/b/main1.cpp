#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;
  string A[N];
  REP (i, 0, N) cin >> A[i];

  bool flag = 1;
  REP (i, 0, N) {
    REP (j, i+1, N) {
      if (A[i][j] == 'W' && A[j][i] != 'L') flag = 0;
      if (A[i][j] == 'L' && A[j][i] != 'W') flag = 0;
      if (A[i][j] == 'D' && A[j][i] != 'D') flag = 0;
    }
  }
  cout << (flag ? "correct" : "incorrect") << endl;
}
// 9/12 40分弱ぐらい
// 素直に場合を分けて書くべきでした