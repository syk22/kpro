#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()

int H, W, N;
int x = 0, y = 0, dict = 0;

vector<int> dx = {0, 1, 0, -1}, dy = {-1, 0, 1, 0};

int main() {
  cin >> H >> W >> N;

  vector<vector<char>> A(H, vector<char>(W));
  FORE (x, A) {
    fill(ALL(x), '.');
  }

  REP (i, 0, N) {
    if (A[y][x] == '.') A[y][x] = '#', dict += 1;
    else A[y][x] = '.', dict -= 1;
    dict = (dict + 4) % 4;
    x = (x + dx[dict] + W) % W, y = (y + dy[dict] + H) % H;
  }

  FORE (x, A) {
    FORE (y, x) cout << y;
    cout << endl;
  }

  return 0;
}
// 2024/9/25
// 23:36