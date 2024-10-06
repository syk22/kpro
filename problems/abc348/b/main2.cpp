#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;

  vector<pair<int, int>> m(N, pair<int, int>());
  REP (i, 0, N) cin >> m[i].first >> m[i].second;

  vector<vector<int>> g(N, vector<int>(N));

  REP (i, 0, N) {
    REP (j, 0, N) {
      if (i == j) g[i][j] == -1;
      int x = pow(m[i].first - m[j].first, 2);
      int y = pow(m[i].second - m[j].second, 2);
      g[i][j] = x + y;
    }
  }

  REP (i, 0, N) {
    int mx = INT_MIN, ind = 0;
    REP (j, 0, N) {
      if (mx < g[i][j]) mx = g[i][j], ind = j;
    }
    cout << ind + 1 << endl;
  }

  return 0;
}

// 2024/10/5
// 10:17