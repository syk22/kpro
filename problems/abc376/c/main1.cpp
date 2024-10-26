#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

using ll = long long;

int N, flag = 1;
ll ans = 0;

int main() {
  cin >> N;

  vector<ll> A(N), B(N - 1);
  REP (i, N) cin >> A[i];
  REP (i, N - 1) cin >> B[i];

  sort(ALL(A)), sort(ALL(B));

  REP (i, N - 1) {
    if (A[i] > B[i]) ans = -1, flag = 0;
  }

  if (flag) {
    RREP (i, N - 2, 0) {
      if (A[i + 1] > B[i]) {
        ans = A[i + 1];
        flag = 0;
        break;
      }
    }
  }

  if (flag) ans = A[0];

  cout << ans << endl;

  return 0;
}

// 2024/10/26