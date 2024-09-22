#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, Q, A, B, a, b;

int main() {
  cin >> N;
  vector<int> P(N);
  FORE (x, P) cin >> x;

  cin >> Q;

  REP (i, 0, Q) {
    cin >> A >> B;
    REP (j, 0, N) {
      if (P[j] == A) a = j;
      if (P[j] == B) b = j;
    }
    cout << P[min(a, b)] << endl;
  }

  return 0;
}

// 2024/9/22
// 5:07