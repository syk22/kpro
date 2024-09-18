#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, Q, x;
int ans = 0;

int main() {
  cin >> N >> Q;

  vector<int> T(N);
  REP (i, 0, Q) {
    cin >> x, --x;
    T[x]++;
  }

  REP(i, 0, N) if (T[i] % 2 == 0) ans++;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/18
// 4:37