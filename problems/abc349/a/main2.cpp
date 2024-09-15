#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
int ans = 0;

int main() {
  cin >> N, N--;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi.at(i);
  
  FORE (x, vi) ans += x;

  cout << ans * -1 << endl;
  
  return 0;
}

// 2024/9/5
// 3:19