#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<string> A(N), B(N);
  FORE (x, A) cin >> x;
  FORE (x, B) cin >> x;

  REP(i, 0, N) {
    if (A[i] == B[i]) continue;
    REP (j, 0, N) if (A[i][j] != B[i][j]) cout << i + 1 << ' ' << j + 1 << endl;
  }

  return 0;
}

// 2024/9/18
// 4:45