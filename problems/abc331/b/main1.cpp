#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, S, M, L;
int ans = INT_MAX, cnt = 0;

int main() {
  cin >> N >> S >> M >> L;

  int Ss = (N - 5) / 6 + 3;
  int Ms = (N - 7) / 8 + 3;
  int Ls = (N - 11) / 12 + 3;
  
  REP (s, 0, Ss) {
    REP (m, 0, Ms) {
      REP (l, 0, Ls) {
        cnt = s * 6 + m * 8 + l * 12;
        if (cnt >= N) ans = min(ans, S * s + M * m + L * l);
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}