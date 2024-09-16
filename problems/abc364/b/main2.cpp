#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W;
int Si, Sj;
string X;

using vi = vector<int>;
vi dx = {0, 0, -1, 1};
vi dy = {-1, 1, 0, 0};

int main() {
  cin >> H >> W >> Si >> Sj;
  --Si, --Sj;

  vector<string> C(H);
  FORE (x, C) cin >> x;

  cin >> X;

  REP (i, 0, X.size()) {
    int dict = X[i] == 'U' ? 0
      : X[i] == 'D' ? 1
      : X[i] == 'L' ? 2
      : 3;
      int x = Sj + dx[dict], y = Si + dy[dict];
    if (0 <= x && x < W && 0 <= y && y < H && C[y][x] != '#') Sj = x, Si = y;
  }

  cout << ++Si << " " << ++Sj << endl;
  
  return 0;
}

// 2024/9/15
// 18:18