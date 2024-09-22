#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using ll = long long;

ll N, S, T;

int main() {
  cin >> N;

  vector<ll> A(N);
  FORE (x, A) cin >> x;

  REP (i, 0, N - 1) {
    cin >> S >> T;
    if (A[i] >= S) A[i + 1] += (A[i] / S) * T , A[i] %= S;
  }

  cout << A[A.size() - 1] << endl;
  
  return 0;
}

// 2024/9/22
// 20:33