#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M;

int main() {
  cin >> N >> M;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i];

  REP (i, 0, N - 8) {
    REP (j, 0, M - 8) {
      int flag = 1;
      REP (h, 0, 9) {
        REP (w, 0, 9) {
          if (h < 3 && w < 3 && S[i + h][j + w] == '.') flag = 0;
          if (h <= 3 && w == 3 && S[i + h][j + w] == '#') flag = 0;
          if (h == 3 && w <= 3 && S[i + h][j + w] == '#') flag = 0;
          if (h > 5 && w > 5 && S[i + h][j + w] == '.') flag = 0;
          if (h >= 5 && w == 5 && S[i + h][j + w] == '#') flag = 0;
          if (h == 5 && w >= 5 && S[i + h][j + w] == '#') flag = 0;
        }
      }
      if (flag) cout << i + 1 << ' ' << j + 1 << endl;
    }
  }

  return 0;
}

// 2024/9/27
// 40分は超えた