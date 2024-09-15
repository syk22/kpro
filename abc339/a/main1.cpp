#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "";

int main() {
  cin >> S;

  REP(i, 0, S.size()) {
    if (S.at(i) == '.') res = "";
    else res += S.at(i);
  }

  cout << res << endl;
  
  return 0;
}

// 2024/8/23
// 3:05