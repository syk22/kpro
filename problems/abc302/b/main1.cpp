#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using vs =  vector<string>;

int H, W;
vector<pair<int, int>> dir = {
  make_pair(0, 1),
  make_pair(0, -1),
  make_pair(1, 0),
  make_pair(1, 1),
  make_pair(1, -1),
  make_pair(-1, 0),
  make_pair(-1, 1),
  make_pair(-1, -1)
};

int main() {
  cin >> H >> W;

  vs S(H);
  FORE (x, S) cin >> x;

  REP (i, 0, H) {
    REP (j, 0, W) {
      int flag = 0;
      if (S.at(i).at(j) == 's') {
        REP (d, 0, 8) {
          if (
            i + dir.at(d).first * 4 < H && 0 <= i + dir.at(d).first * 4 && 
            j + dir.at(d).second * 4 < W && 0 <= j + dir.at(d).second * 4 &&
            S.at(i + dir.at(d).first * 1).at(j + dir.at(d).second * 1) == 'n' &&
            S.at(i + dir.at(d).first * 2).at(j + dir.at(d).second * 2) == 'u' &&
            S.at(i + dir.at(d).first * 3).at(j + dir.at(d).second * 3) == 'k' &&
            S.at(i + dir.at(d).first * 4).at(j + dir.at(d).second * 4) == 'e'
          ) {
            REP (k, 0, 5) cout << i + dir.at(d).first * k + 1 << " " << j + dir.at(d).second * k + 1 << endl;
          }

        }
      }
    }
  }
  
  return 0;
}

// 2024/8/31