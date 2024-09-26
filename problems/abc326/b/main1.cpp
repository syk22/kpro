#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0, flag = 0;

int main() {
  cin >> N;

  REP (i, 1, 10) {
    REP (j, 0, 10) {
      REP (k, 0, 10) {
        ans = i * 100 + j * 10 + k;
        if (i * j == k && ans >= N) flag = 1;
        if (flag) break;
      }
      if (flag) break;
    }
    if (flag) break;
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/26
// 12:38 + 2分ぐらい