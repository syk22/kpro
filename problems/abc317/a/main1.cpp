#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, H, X;
int P[100010] = {};

int main() {
  cin >> N >> H >> X;
  REP (i, 0, N) cin >> P[i];
  REP (i, 0, N) {
    if (H + P[i] >= X) {
      cout << i + 1 << endl;
      break;
    }
  }
}

// 2024/8/18
// 5:03