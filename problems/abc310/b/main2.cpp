#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, M;
string res = "No";

int main() {
  cin >> N >> M;

  vector<int> P(N), C(N);
  vector<vector<int>> fun(N, vector<int>());

  REP(i, 0, N) {
    cin >> P[i] >> C[i];
    vector<int> f(C[i]);
    REP (j, 0, C[i]) cin >> f[j];
    fun[i] = f;
  }

  bool ans = false;

  REP (i, 0, N) {
    REP (j, 0, N) {
      if (i == j) continue;
      ans = includes(ALL(fun[j]), ALL(fun[i]));
      if (ans && (P[i] > P[j] || (P[i] == P[j] && C[i] < C[j]))) res = "Yes";
    }
  }

  cout << res << endl;
  
  return 0;
}

// 2024/10/6
// 13:37