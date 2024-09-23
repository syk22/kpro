#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using ll = long long;

int N;
ll L, R;

int main() {
  cin >> N >> L >> R;

  vector<ll> A(N);
  FORE (x, A) cin >> x;
  
  REP (i, 0, N) cout << clamp(A[i], L, R) << ' ';

  cout << endl;

  return 0;
}

// 2024/9/23
// 19:59