#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int M, d, m = 0;

int main() {
  cin >> M;

  vector<int> D = {};
  REP (i, 0, M) {
    cin >> d;
    REP (j, 0, d) D.push_back(j + 1);
  }

  REP (i, 0, D.size() / 2 + 1) {
    if (D[i] == 1) ++m;
  }

  cout << m << ' ' << D[D.size() / 2] << endl;
  return 0;
}

// 2024/9/28
// 6:33