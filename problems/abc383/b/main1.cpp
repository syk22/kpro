#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W, D;
int ans = 0;

int main() {
  cin >> H >> W >> D;

  vector<string> A(H);
  FORE (x, A) cin >> x;

  REP (i, 0, H) {
    REP (j, 0, W) {
      if (A[i][j] == '.') {
        REP (x, i, H) {
          REP (y, j, W) {
            if (!(x == i && y == j) && A[x][y] == '.') {
              vector<string> B = A;
              int mx = 0;
              REP (a, 0, H) {
                REP (b, 0, W) {
                  if (B[a][b] == '.') {
                    int flag = 0;
                    if (abs(a - i) + abs(b - j) <= D) flag = 1;
                    if (abs(a - x) + abs(b - y) <= D) flag = 1;
                    if (flag) mx++;
                  }
                }
              }
            ans = max(ans, mx);
            }
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}

// 2025/01/11
// 14:37