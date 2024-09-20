#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int lower = 0, upper = 0;
string S, ans = "";

int main() {
  cin >> S;

  REP (i, 0, S.size()) {
    if (S[i] - 'a' >= 0) lower++;
    else upper++;
  }

  if (lower > upper) REP (i, 0, S.size()) ans += tolower(S[i]);
  else REP (i, 0, S.size()) ans += toupper(S[i]);
  cout << ans << endl;

  return 0;
}

// 2024/9/20
// 5:35
