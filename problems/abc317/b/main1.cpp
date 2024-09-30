#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, s;

int main() {
  cin >> N;

  vector<int> A(N);
  REP (i, 0, N) cin >> A[i];

  sort(ALL(A));
  s = A[0];

  REP (i, 1, N) {
    if (A[i] != s + i) {
      cout << s + i << endl;
      break;
    }
  }
  return 0;
}

// 2024/9/28
// 10:04