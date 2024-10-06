#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
string S;
string res = "Yes";

int main() {
  cin >> S;

  vector<int> A(26);
  REP (i, 0, S.size()) {
    A[S[i] - 'a'] += 1;
  }

  REP (i, 1, 101) {
    int cnt = 0;
    REP (j, 0, 26) {
      if (A[j] == i) ++cnt;
    }
    if (cnt > 0 && cnt != 2) res = "No";
  }

  cout << res << endl;

  return 0;
}

// 2024/10/6
// 8:57