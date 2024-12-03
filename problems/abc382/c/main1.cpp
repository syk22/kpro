#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, M, r = INT_MIN;
int ans = 0;

int main() {
  cin >> N >> M;

  vector<int> A(N), B(M);
  REP (i, N) cin >> A[i];
  REP (i, M) {
    cin >> B[i];
    r = max(r, B[i]);
  }

  vector<int> amount(r + 1, -1);

  REP (i, N) {
    while (r >= A[i]) {
      amount[r] = i + 1;
      --r;
    }
  }

  REP (i, M) {
    cout << amount[B[i]] << endl;
  }

  return 0;
}

// 2024/12/03
// 25:03