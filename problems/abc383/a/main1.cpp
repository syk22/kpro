#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, T, V, old;
int ans = 0;

int main() {
  cin >> N;

  REP (i, N) {
    cin >> T >> V;
    if (i != 0) {
      if (ans <= T - old) ans = 0;
      else ans -= T - old;
    }
    old = T;
    ans += V;
  }

  cout << ans << endl;
  
  return 0;
}
// 2024/12/11
// 4:45