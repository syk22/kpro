#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  REP (i, 0, N) {
    REP (j, 0, N) {
      cin >> A[i][j], A[j][i] = A[i][j];
      if (i == j) break;
    }
  }
  REP (i, 0, N) {
    ans = A[ans][i] - 1;
  }

  cout << ans + 1 << endl;
  
  return 0;
}

// 2024/9/12
// 26:24