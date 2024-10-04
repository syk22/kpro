#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W, N;

vector<int> dx = {0, 1, 0, -1}, dy = {-1, 0, 1, 0};
int dict = 0, x = 0, y = 0;

int main() {
  cin >> H >> W >> N;

  vector<string> g(H);
  string S(W, '.');
  REP (i, 0, H) g[i] = S;


  REP (i, 0, N) {
    if (g[y][x] == '.') {
      g[y][x] = '#';
      dict = (dict + 1) % 4;
    } else {
      g[y][x] = '.';
      dict = (dict + 3) % 4;
    }
    x = (x + dx[dict] + W) % W, y = (y + dy[dict] + H) % H;
  }

  FORE (x, g) cout << x << endl;
  return 0;
}

// 2024/10/4
// 14:49