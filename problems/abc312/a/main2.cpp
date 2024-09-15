#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "No";

using vs = vector<string>;
vs VS = {
  "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"
};

int main() {
  cin >> S;

  REP (i, 0, 7) if (S == VS.at(i)) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/9/1
// 2:48