#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
string res = "No";

int main() {
  cin >> N;

  vector<string> S(N);
  FORE (x, S) cin >> x;
  
  REP (i, 0, N) {
    REP (j, 0, N) {
      if (i != j) {
        string str = S[i] + S[j];
        int strsize = str.size(), flag = 1;
        
        REP (k, 0, strsize / 2) if (str[k] != str[strsize - 1 - k]) flag = 0;
        if (flag) res = "Yes";
      }
    }
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/7
// 6:08