#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define FORE(i, a) for (auto &i : a)

int N, L, R;

int main() {
  cin >> N >> L >> R;

  vector<int> ans = {};

  REP (i, 1, L) ans.push_back(i);
  
  RREP (i, R, L) ans.push_back(i);
  
  REP (i, R + 1, N + 1) ans.push_back(i);

  FORE (x, ans) cout << x << " ";
  cout << endl;

  return 0;
}

// 2024/9/10
// 6:12