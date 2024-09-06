#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int A, B, t = 0, o = 0;
int ans = 0;


int main() {
  REP (i, 0, 9) {
    cin >> A;
    t += A;
  }
  REP (i, 0, 8) {
    cin >> B;
    o += B;
  }

  ans = t - o + 1;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/6
// 3:38