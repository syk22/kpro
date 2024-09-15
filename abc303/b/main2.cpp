#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M;
int ans = 0;

int main() {
  cin >> N >> M;

  vector<vector<int>> A(M, vector<int>(N)), check(N, vector<int>(N));
  
  REP (i, 0, M) {
    REP (j, 0, N) cin >> A[i][j];
  }

  REP (i, 0, N) REP (j, 0, N) check[i][j] = 0;

  REP (i, 0, M) {
    REP (j, 0, N - 1) {
      int x = A[i][j] - 1, y = A[i][j + 1] - 1;
      check[x][y] = 1; 
      check[y][x] = 1; 
    }
  }

  REP (i, 0, N) {
    REP (j, i + 1, N) if (check[i][j] != 1) ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/6
// 20分ぐらい