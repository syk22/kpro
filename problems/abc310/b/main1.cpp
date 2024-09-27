#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()

int N, M, C;
string res = "No";

int main() {
  cin >> N >> M;

  vector<int> P(N);
  vector<vector<int>> F(N, vector<int>{});
  
  REP(i, 0, N) {
    cin >> P[i] >> C;
    vector<int> c(C);
    FORE (x, c) cin >> x;
    F[i] = c;
  }

  REP (i, 0, N) {
    REP (j, 0, N) {
      if (i != j) {
        if (P[i] >= P[j]) {
          vector<int> temp = F[i], comp = F[j];
          int flag = 1;
          REP (k, 0, temp.size()) {
            if (count(ALL(comp), temp[k]) == 0) flag = 0; 
          }
          if (flag) {
            if (P[i] > P[j] || temp.size() < comp.size()) res = "Yes";
          }
        }
      }
    }
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/27
// 19:54