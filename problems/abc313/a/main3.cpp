#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi[i];
  
  int p0 = vi[0];
  REP (i, 1, N) if (vi[i] >= p0 + ans) ans = vi[i] - p0 + 1;
  
  cout << ans << endl;
  
  return 0;
}


// 2024/9/14
// 3:09