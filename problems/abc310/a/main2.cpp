#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, P, Q;
int cp = INT_MAX;

int main() {
  cin >> N >> P >> Q;

  vector<int> D(N);
  REP (i, 0, N) cin >> D.at(i);
  
  REP (i, 0, N) cp = min(D.at(i), cp);

  cout << min(P, Q + cp) << endl;
  
  return 0;
}

// 2024/8/29
// 3:54