#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = -1;

int main() {
  cin >> N;
  vector<int> H(N);

  REP (i, 0, N) cin >> H[i];

  REP(i, 1, N) {
    if (H[0] < H[i]) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/14
// 6:28