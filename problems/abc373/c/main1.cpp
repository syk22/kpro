#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ll = long long;

int N;
ll A, B, amx = LLONG_MIN, bmx = LLONG_MIN;

int main() {
  cin >> N;

  REP (i, 0, N) {
    cin >> A;
    amx = max(A, amx);
  }
  REP (i, 0, N) {
    cin >> B;
    bmx = max(B, bmx);
  }

  cout << amx + bmx << endl;

  return 0;
}

// 2024/10/16
// 7分くらい