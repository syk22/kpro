#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<int> A(N);
  FORE (x, A) cin >> x;

  int cnt = 0;
  int over1 = N;

  while (over1 > 1) {
    cnt++, over1 = 0;
    sort(A.rbegin(), A.rend());
    A[0]--, A[1]--;
    REP (i, 0, N) if (A[i] > 0) over1 += 1;
  }

  cout << cnt << endl;
  return 0;
}

// 2024/9/12
// 9:58