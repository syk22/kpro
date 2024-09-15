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

  REP(i, 0, N) {
    REP (j, 0, N) {
      if (i == j) continue;
      string st = S[i]+ S[j];
      int stsize = st.size();
      int flag = 1;
      REP (h, 0, stsize / 2) {
        if (st[h] != st[stsize - h - 1]) flag = 0;
      }
      if (flag) res = "Yes";
    }
  }
  cout << res << endl;
  
  return 0;
}

// 2024/9/3
// 27分ぐらい