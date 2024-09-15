#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;

  vector<int> A(N), B(N);
  REP (i, 0, N) cin >> A[i], B[i] = A[i];

  sort(B.rbegin(), B.rend());

  REP (i, 0, N) if (A[i] == B[1]) cout << i + 1 << endl;
  
  return 0;
}

// 2024/9/12
// 5:57