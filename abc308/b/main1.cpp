#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using vi = vector<int>;
using vs = vector<string>;

int N, M;
int P0;
int ans = 0;


int main() {
  cin >> N >> M;

  vs C(N);
  FORE (x, C) cin >> x;
  
  vs D(M);
  FORE (x, D) cin >> x;
  
  cin >> P0;
  vi P(M);
  FORE (x, P) cin >> x;

  REP(i, 0, N) {
    int flag = 1;
    REP (j, 0, M) if (C[i] == D[j]) ans += P[j], flag = 0;
    if (flag) ans += P0;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/3
// 11:42