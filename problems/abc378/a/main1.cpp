#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int ans = 0;

int main() {
  vector<int> A(4), res(4, 0);
  REP (i, 4) cin >> A[i], --A[i];
  
  REP (i, 4) {
    ++res[A[i]];
  }
  REP (i, 4) {
    if (res[i] >= 2) ++ans;
    if (res[i] == 4) ++ans;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/11/10
// 7:55