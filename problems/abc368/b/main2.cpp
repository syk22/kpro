#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
int ans = 0, res = INT_MAX;

int main() {
  cin >> N;

  vector<int> A(N);
  FORE (x, A) cin >> x;

  while (res > 1) {
    ++ans, res = 0;
    sort(A.rbegin(), A.rend());
    --A[0], --A[1];
    FORE (x, A) if (x > 0) res++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/15
// 8:00