#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
vector<string> S(12);

int main() {

  REP (i, 0, 12) cin >> S[i];
  
  REP (i, 0, 12) {
    if (S[i].size() == i + 1) ++ans;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/30
// 3:20