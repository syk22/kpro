#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

string S;
string res = "No";

int main() {
  cin >> S;

  int fla = 0, flb = 0, flc = 0;
  REP (i, 3) {
    if (S[i] == 'A') fla = 1;
    if (S[i] == 'B') flb = 1;
    if (S[i] == 'C') flc = 1;
  }
  if (fla && flb && flc) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/11/10
// 3:45