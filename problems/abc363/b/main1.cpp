#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, T, P;
int ans = 0, cnt = 0;

int main() {
  cin >> N >> T >> P;

  vector<int> L(N);
  FORE (x, L) cin >> x;

  while (1) {
    cnt = 0;
    REP(i, 0, N) {
      if (L[i] >= T) cnt++;
      L[i]++;
    }
    if (cnt >= P) break;
    ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/24
// 10:02