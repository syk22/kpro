#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W, x, y;
string snuke;

vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};
vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
  cin >> H >> W;

  vector<string> S(H);
  FORE (a, S) cin >> a;
  
  REP (i, 0, H) {
    REP (j, 0, W) {
      REP (d, 0, 8) {
        snuke = "";
        REP (s, 0, 5) {
          x = j + dx[d] * s, y = i + dy[d] * s;
          if (x < 0 || W <= x || y < 0 || H <= y) break;
          snuke += S[y][x];
        }

        // 生成文字がsnukeだった時だけ出力
        if (snuke == "snuke") {
          REP (s, 0, 5) {
            x = j + dx[d] * s, y = i + dy[d] * s;
            cout << y + 1 << " " << x + 1 << endl;
          }
        }
      }
    }
  }
  
  return 0;
}

// 2024/9/5
// 13分で中断