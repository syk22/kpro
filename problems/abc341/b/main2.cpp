#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ll = long long;
int N;
ll add = 0;

int main() {
  cin >> N;

  vector<ll> A(N);
  REP (i, 0, N) cin >> A[i];

  REP (i, 0, N - 1) {
    ll S, T;
    cin >> S >> T;
    add = A[i] / S * T;
    A[i + 1] += add;
  }

  cout << A[N - 1] << endl;

  return 0;
}

// 2024/10/5
// 9:27