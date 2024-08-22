#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, L, A;
int ans = 0;

int main() {
  cin >> N >> L;

  REP(i, 0, N) {
    cin >> A;
    if (A >= L) ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/22
// 2:44