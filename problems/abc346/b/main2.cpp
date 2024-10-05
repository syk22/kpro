#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int W, B;
string S = "wbwbwwbwbwbw";
string res = "No";

int main() {
  cin >> W >> B;

  REP (i, 0, 12) {
    int wk = 0, bk = 0;
    REP (j, 0, W + B) {
      if (S[(i + j) % 12] == 'w') ++wk;
      else ++bk;
    }
    if (wk == W && bk == B) res = "Yes";
  }

  cout << res << endl;

  return 0;
}

// 2024/10/5
// 5:27
