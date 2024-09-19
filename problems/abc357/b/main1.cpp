#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int lower = 0, upper = 0;
string S, res = "";

int main() {
  cin >> S;
  
  REP (i, 0, S.size()) {
    if (S[i] - 'a' >= 0) lower++;
    else upper++;
  }

  if (upper < lower) FORE (x, S) res += tolower(x);
  else FORE (x, S) res += toupper(x);

  cout << res << endl;
  return 0;
}

// 2024/9/19
// 9:55