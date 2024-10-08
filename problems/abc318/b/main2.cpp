#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, H = 0, W = 0;
int ans = 0;

int main() {
  cin >> N;

  vector<vector<int>> A(N, vector<int>(4));
  REP (i, 0, N) REP (j, 0, 4) cin >> A[i][j];

  REP (i, 0, N) {
    H = max(H, A[i][1] + 1), W = max(W, A[i][3] + 1);
  }

  vector<string> div(H);
  string S(W, '.');
  FORE (x, div) x = S;
  
  REP (i, 0, N) {
    int a = A[i][0], b = A[i][1], c = A[i][2], d = A[i][3];
    REP (h, 0, H) {
      if (a <= h && h < b) {
        REP (w, 0, W) if (c <= w && w < d) div[h][w] = '#';
      }
    }
  }

  REP (h, 0, H) {
    REP (w, 0, W) {
      if (div[h][w] == '#') ++ans;  
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/8
// 16:17