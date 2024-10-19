#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = INT_MAX, res;

int main() {
  cin >> N;

  vector<int> K(N);
  REP (i, 0, N) cin >> K[i];

  REP (bit, 0, (1 << N)) {
    int A = 0, B = 0;
    REP (i, 0, N) {
      if (bit & (1 << i)) A += K[i];
      else B += K[i];
    }
    res = max(A, B);
    ans = min(ans, res);
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/17
// 実装にかかったのは多分5分くらい