#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<vector<int>> A(N, vector<int>(2));
  FORE (x, A) FORE (z, x) cin >> z;

  vector<vector<int>> dist(N, vector<int>(N));
  REP (i, 0, N) {
    REP (j, 0, N) {
      dist[i][j] = pow(A[i][0] - A[j][0], 2) + pow(A[i][1] - A[j][1], 2);
    }
  }

  REP (i, 0, N) {
    int md = INT_MIN, mi = 0;
    REP (j, 0, N) if (md < dist[i][j]) md = dist[i][j], mi = j;
    cout << mi + 1 << endl;
  }

  return 0;
}

// 2024/9/22
// 15:49