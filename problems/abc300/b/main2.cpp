#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W;
string res = "No";

int main() {
  cin >> H >> W;

  vector<string> A(H), B(H);
  FORE (x, A) cin >> x;
  FORE (x, B) cin >> x;
  
  REP (s, 0, H) {
    REP (t, 0, W) {
      int flag = 1;
      REP (i, 0, H) {
        REP (j, 0, W) {
          if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) flag = 0;
        }
      }
      if (flag) res = "Yes";
    }
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/4
// 11:33