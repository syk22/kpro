#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N;

int main() {
  cin >> N;

  vector<vector<char>> A(N, vector<char>(N)), B(N, vector<char>(N));
  REP (i, 0, N) REP (j, 0, N) cin >> A[i][j];
  REP (i, 0, N) fill(ALL(B[i]), '-');

  REP (i, 0, N) {
    REP (j, 0, N) {
      int mn = min({i + 1, j + 1, N - i, N - j});
      int nxti = i, nxtj = j;
      REP (_, 0, mn % 4) {
        int tmpi = nxtj, tmpj = N - 1 - nxti;
        nxti = tmpi, nxtj = tmpj;
      }
      B[nxti][nxtj] = A[i][j];
    }
  }

  REP (i, 0, N) {
    REP (j, 0, N) {
      cout << B[i][j];
    }
      cout << endl;
  }
  return 0;
}
