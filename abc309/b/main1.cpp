#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using vs = vector<string>;

int N;

int main() {
  cin >> N;

  vs A(N), B(N);
  FORE (x, A) cin >> x;
  FORE (x, B) REP (i, 0, N) x += "X";

  REP(i, 0, N) {
    REP (j, 0, N) {
      if (i == 0 && 0 <= j && j < N - 1) B[i][j + 1] = A[i][j];
      else if (j == N - 1 && 0 <= i && i < N - 1) B[i + 1][j] = A[i][j];
      else if (i == N - 1 && 0 < j && j <= N - 1) B[i][j - 1] = A[i][j];
      else if (j == 0 && 0 < i && i <= N - 1) B[i - 1][j] = A[i][j];
      else B[i][j] = A[i][j];
    }
  }

  FORE (x, B) cout << x << endl;

  return 0;
}

// 2024/9/3
// 8分経過、長くなりそうなので解説見る