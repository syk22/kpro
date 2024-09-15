#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int A;
int ans = 0;

int main() {
  cin >> N;
  REP (i, 0, 7 * N + 1) {
    cin >> A;
    ans += A;
    if (i % 7 == 6) {
      cout << ans << " ";
      ans = 0;
    }
  }

  cout << endl;
  
  return 0;
}

// 2024/8/28
// 8:50