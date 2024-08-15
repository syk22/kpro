#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int V[10];

int main() {
  REP (i, 0, 10) cin >> V[i];
  int l = 0;
  REP (i, 0, 3) l = V[l];
  cout << l << endl;
}

// 9/6 24:15
// 条件を勘違いしていた。読み間違い。
// 0の位置を探る必要は全くなく、V[0]から見ればよし