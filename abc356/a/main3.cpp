#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

int N, L, R;

int main() {
  cin >> N >> L >> R;

  REP(i, 1, L) cout << i << ' ';
  RREP (i, R, L) cout << i << ' ';
  REP(i, R + 1, N + 1) cout << i << ' ';
  cout << endl;

  return 0;
}

// 2024/9/14
// 3:42