#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A;
char S;
int L = 0, R = 0;
int ans = 0;

int main() {
  cin >> N;

  REP (i, 0, N) {
    cin >> A >> S;
    if (S == 'L') {
      if (L) ans += abs(L - A);
      L = A;
    } else {
      if (R) ans += abs(R - A);
      R = A;
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/15
// 10:55