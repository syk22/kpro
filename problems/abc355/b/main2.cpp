#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, M, c;
string res = "No";

int main() {
  cin >> N >> M;

  vector<int> A(N), B(N + M);
  REP (i, 0, N) {
    cin >> c;
    A[i] = c, B[i] = c;
  }
  REP (i, N, N + M) cin >> c, B[i] = c;
  sort(ALL(B));

  REP (i, 0, N + M - 1) {
    int flag1 = 0, flag2 = 0;
    REP (j, 0, N) {
      if (B[i] == A[j]) flag1 = 1;
      if (B[i + 1] == A[j]) flag2 = 1;
    }
    if (flag1 && flag2) res = "Yes";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/20
// 9:02
