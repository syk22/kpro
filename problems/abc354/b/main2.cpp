#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, C = 0, c;
int ans = 0;

int main() {
  cin >> N;

  vector<string> A(N);
  REP (i, 0, N) cin >> A[i] >> c, C += c;
  sort(ALL(A));

  cout << A[C % N] << endl;
  
  return 0;
}

// 2024/9/20
// 4:22