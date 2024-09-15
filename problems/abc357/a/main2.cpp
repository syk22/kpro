#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M;
int ans = 0, i = 0;

int main() {
  cin >> N >> M;

  vector<int> H(N);
  REP (i, 0, N) cin >> H[i];
  
  while (i < N && M >= H[i]) {
    M -= H[i];
    i++, ans++;
  }
  cout << ans << endl;

  return 0;
}

// 2024/9/10
// 6:24