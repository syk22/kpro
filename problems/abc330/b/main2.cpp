#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, L, R;

int main() {
  cin >> N >> L >> R;

  vector<int> A(N);
  REP (i, 0, N) cin >> A[i];

  REP (i, 0, N) {
    cout << clamp(A[i], L, R) << ' ';
  }

  cout << endl;

  return 0;
}
