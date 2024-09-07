#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

#define FORE(i, a) for (auto &i : a)

int N, H0;
int ans = -1;

int main() {
  cin >> N;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi[i];
  
  H0 = vi[0];

  REP (i, 1, N) {
    if (H0 < vi[i]) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/7
// 4:14