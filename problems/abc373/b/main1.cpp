#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0, pos = 0;
string S;

int main() {
  cin >> S;

  REP (i, 0, 26) if (S[i] == 'A') pos = i;

  REP (i, 1, 26) {
    REP (j, 0, 26) {
      if (S[j] == 'A' + i) ans += abs(pos - j), pos = j;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/30
// 5:07