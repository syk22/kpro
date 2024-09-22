#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  FORE (x, A) FORE (y, x) cin >> y;

  
  REP (i, 0, N) {
    REP (j, 0, N) {
      if (A[i][j]) cout << j + 1 << ' ';
    }
    cout << endl;
  }

  return 0;
}

// 2024/9/22
// 6:10