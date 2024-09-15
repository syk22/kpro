#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M, ans = 0;

vector<pair<int, int>> p = {};
set<vector<pair<int, int>>> s = {};

int main() {
  cin >> N >> M;
  
  vector<vector<int>> ag = {}, ct(N);

  REP (i, 0, N) {
    vector<int> c(N);
    FORE (x, c) x = 1;
    ct.at(i) = c;
  }

  REP (i, 0, M) {
    vector<int> a(N);
    FORE (x, a) cin >> x;
    ag.push_back(a);    
  }

  REP (i, 0, M) {
    REP (j, 0, N) {
      if (0 < j) ct.at(ag.at(i).at(j) - 1).at(ag.at(i).at(j - 1) - 1) = 0;
      if (j < N - 1) ct.at(ag.at(i).at(j) - 1).at(ag.at(i).at(j + 1) - 1) = 0;
    }
  }

  REP (i, 0, N) {
    REP (j, i + 1, N) if (ct.at(i).at(j) == 1) ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/31
// 4:56で中断