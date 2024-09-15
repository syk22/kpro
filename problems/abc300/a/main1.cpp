#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A, B, C;

int main() {
  cin >> N >> A >> B;
  REP(i, 1, N+1) {
    cin >> C;
    if (A + B == C) cout << i << endl;
  }
  return 0;
}

// 2024/8/15
// 5:25 