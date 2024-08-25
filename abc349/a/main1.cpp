#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A;
int ans = 0;

int main() {
  cin >> N;

  REP(i, 0, N - 1) {
    cin >> A;
    ans -= A;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/25
// 5:30