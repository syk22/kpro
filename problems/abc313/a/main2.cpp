#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0, add;

int main() {
  cin >> N;

  vector<int> P(N);
  REP (i, 0, N) cin >> P.at(i);
  
  REP (i, 1, N) if (P.at(0) + ans <= P.at(i)) ans += P.at(i) - (P.at(0) + ans) + 1;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/1
// 15分くらい