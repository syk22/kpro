#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = INT_MIN;

int main() {
  cin >> N;

  vector<int> W(N), X(N);
  REP (i, 0, N) cin >> W[i] >> X[i];

  REP (i, 1, 25) {
    int join = 0;
    REP (j, 0, N) {
      int time = (i + X[j]) % 24;
      if (9 <= time && time < 18) join += W[j];
    }
    ans = max(ans, join);
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/26
// 15:27