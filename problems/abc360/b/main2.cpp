#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0, flag = 0;
string S, T;
string res = "No";

int main() {
  cin >> S >> T;

  REP (w, 1, S.size()) {
    REP (c, 0, w) {
      string str = "";
      for (int i = c; i < S.size(); i += w) 
        str += S[i];
      cout << str << endl;
      if (str == T) res = "Yes";
    }
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/17
// 40分超え