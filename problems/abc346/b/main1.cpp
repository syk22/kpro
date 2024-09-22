#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int W, B;
string S = "wbwbwwbwbwbw";
string res = "No";

int main() {
  cin >> W >> B;

  REP (i, 0, S.size()) {
    int wcnt = 0, bcnt = 0;
    REP (j, 0, W + B) {
      if (S[(i + j) % S.size()] == 'w') wcnt++;
      else bcnt++;
    }
    if (wcnt == W && bcnt == B) res = "Yes";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/22
// わからん