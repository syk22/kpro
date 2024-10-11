#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  
  REP (i, 0, N) {
    REP (j, 0, i + 1) {
      cin >> A[i][j], --A[i][j];
      A[j][i] = A[i][j];
    }
  }

  REP (i, 0, N) ans = A[ans][i];    

  cout << ans + 1 << endl;
  
  return 0;
}

// 2024/10/9
// 13:03