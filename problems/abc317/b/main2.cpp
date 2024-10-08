#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N;

int main() {
  cin >> N;

  vector<int> A(N);
  REP (i, 0, N) cin >> A[i];
  sort(ALL(A));

  REP (i, 1, N) {
    if (A[i] != A[0] + i) {
      cout << A[0] + i << endl;
      break;
    }
  }

  return 0;
}

// 2024/10=8
// 8:44