#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
string S, T;

int main() {
  cin >> S >> T;

  if (S != T) {
    REP (i, 0, S.size()) {
      if (S[i] != T[i]) {
        ans = i + 1;
        break;
      }
    }
    if (ans == 0) ans = S.size() + 1;
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/6
// 6:41