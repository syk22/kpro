#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M;
vector<string> code = {
  "###.?????",
  "###.?????",
  "###.?????",
  "....?????",
  "?????????",
  "?????....",
  "?????.###",
  "?????.###",
  "?????.###"
};

int main() {
  cin >> N >> M;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i];

  REP (i, 0, N - 8) {
    REP (j, 0, M - 8) {
      int flag = 1;
      REP (h, 0, 9) {
        REP (k, 0, 9) {
          if (code[h][k] != '?' && S[i + h][j + k] != code[h][k]) flag = 0;
        }
      }
      if (flag) cout << i + 1 << ' ' << j + 1 << endl;
    }
  }

  return 0;
}

// 2024/10/6
// 11:15