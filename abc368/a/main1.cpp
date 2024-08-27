#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K;


int main() {
  cin >> N >> K;
  vector<int> A(N);

  REP (i, 0, N) cin >> A[i];

  REP (i, N - K, N) cout << A[i] << ' ';

  REP (i, 0, N - K) cout << A[i] << ' ';
  
  return 0;
}

// 2024/8/27