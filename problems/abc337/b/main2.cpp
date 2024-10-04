#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "Yes";

int main() {
  cin >> S;

  REP (i, 0, S.size() - 1) {
    if (S[i] - 'A' > S[i + 1] - 'A') res = "No";
  }

  cout << res << endl;

  return 0;
}

// 2024/10/4
// 3:59