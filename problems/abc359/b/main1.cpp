#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
 
int N;
int ans = 0;

int main() {
  cin >> N, N *= 2;

  vector<int> A(N);
  FORE (x, A) cin >> x;

  REP(i, 0, N - 2) if (A[i] == A[i + 2]) ans++;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/20
// 4:57