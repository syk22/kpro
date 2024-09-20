#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M, x;
string res = "Yes";

int main() {
  cin >> N >> M;

  vector<int> A(M);
  FORE (x, A) cin >> x;

  REP (i, 0, N) {
    REP (j, 0, M) {
      cin >> x;
      A[j] -= x;
    }
  }

  REP (i, 0, M) if (A[i] > 0) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/20
// 3:03
