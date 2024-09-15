#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, ans = 0;

int main() {
  cin >> N;
  ans += N;

  REP(i, 0, N - 1) {
    ans *= 10;
    ans += N;
  }
  cout << ans << endl;
  
  return 0;
}

// 2024/8/22
// 4:21