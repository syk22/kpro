#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<int> D(N);
  REP (i, 0, N) cin >> D[i];

  REP (i, 0, N) {
    if (i < 9) {
      if (D[i] >= i + 1) ++ans;
      if (D[i] >= (i + 1) * 11) ++ans;
    } else if ((i + 1) % 11 == 0) {
      if (D[i] >= i + 1) ++ans;
      if (D[i] >= (i + 1) / 11) ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/2
// 6:18