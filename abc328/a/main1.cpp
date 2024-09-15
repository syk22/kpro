#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, X, S;
int ans = 0;

int main() {
  cin >> N >> X;

  REP(i, 0, N) {
    cin >> S;
    if (S <= X) ans += S;
  }
  cout << ans << endl;
  
  return 0;
}

// 2024/8/21
// 3:20