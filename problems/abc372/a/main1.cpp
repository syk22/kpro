#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "";

int main() {
  cin >> S;
  
  REP (i, 0, S.size()) if (S[i] != '.') res += S[i];

  cout << res << endl;
  
  return 0;
}

// 2024/9/22
// 1:56