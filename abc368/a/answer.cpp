#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, K;

int main() {
  cin >> N >> K;

  vector<int> A(N);
  REP (i, 0, N) cin >> A[i];

  REP (i, N - K, N) cout << A[i] << " ";
  REP (i, 0, N - K) cout << A[i] << " ";
  cout << endl;

  return 0;
}

// そのまま出力、わざわざ違う配列を作成したりしない