#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M;
int ans = 0;

int main() {
  cin >> N >> M;

  vector<vector<int>> A(M, vector<int>(N));
  FORE (x, A) FORE (y, x) cin >> y;
  
  REP (x, 1, N) {
    REP (y, x + 1, N + 1) {
      int flag = 1;
      REP (i, 0, M) {
        REP (j, 0, N - 1) {
          int a = A[i][j], b = A[i][j + 1];
          if (a > b) swap(a, b);
          if (a == x && b == y) flag = 0;
        }
      }
      if (flag) ans++;
    }
  }

  cout << ans << endl;
  
  return 0;
}
