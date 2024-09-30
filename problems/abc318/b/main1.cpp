#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<vector<int>> Z(100, vector<int>(100));
  REP (i, 0, N) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    REP (i, a, b) {
      REP (j, c, d) {
        Z[i][j] = 1;
      }
    }
  }
  REP (i, 0, 100) {
    REP (j, 0, 100) {
      if (Z[i][j] == 1) ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/28
// 12:30