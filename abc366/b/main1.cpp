#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
int max_size = 0;

int main() {
  cin >> N;

  vector<string> T(N);
  FORE (x, T) {
    cin >> x;
    int sz = x.size();
    max_size = max(max_size, sz);
  }

  string t(N, '*');
  vector<string> ans(max_size);
  REP (i, 0, max_size) ans[i] = t;

  REP (i, 0, N) {
    REP (j, 0, max_size) {
      if (j < T[i].size()) ans[j][N - i - 1] = T[i][j];
    }
  }

  FORE (x, ans) {
    while (x[x.size() - 1] == '*') x.pop_back();
    cout << x << endl;
  }
 
  return 0;
}

// 2024/9/12
// 25分くらい