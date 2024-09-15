#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M;
int ans = 0;

int main() {
  cin >> N >> M;

  vector<int> H(N);
  REP (i, 0, N) cin >> H[i];

  REP(i, 0, N) {
    M -= H[i];
    if (M == 0) {
      ans = i + 1;
      break;
    } else if (M < 0) {
      ans = i;
      break;
    } else if (i == N - 1 && M > 0) ans = i + 1;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/14
// 5:44