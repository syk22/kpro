#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, S, K;
int P, Q;
int ans = 0;

int main() {
  cin >> N >> S >> K;

  REP(i, 0, N) {
    cin >> P >> Q;
    ans += P * Q;
  }

  if (ans < S) ans += K;
  cout << ans << endl;
  
  return 0;
}

// 2024/8/22
// (多分3-4分)