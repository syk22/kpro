#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<int> D(N);
  REP (i, 0, N) cin >> D[i];

  REP (i, 1, N + 1) {
    if (i < 10) {
      if (i <= D[i - 1]) ++ans;
      if (i * 10 + i <= D[i - 1]) ++ans;
    } else if (i % 11 == 0) {
      if (i <= D[i - 1]) ++ans;
      if (i / 11 <= D[i - 1]) ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/27
// 16:28