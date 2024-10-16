#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, Q, X;
int ans = 0;
char C;
string S;

int main() {
  cin >> N >> Q >> S;

  REP (j, 0, N - 2) if (S.substr(j, 3) == "ABC") ++ans;

  REP (i, 0, Q) {
    cin >> X >> C, --X;
    int ind = X - 2;
    int flag1 = 0, flag2 = 0;

    REP (j, 0, 3) {
      if (ind + j >= 0 && S.substr(ind + j, 3) == "ABC") ++flag1;
    }
    S[X] = C;
    REP (j, 0, 3) {
      if (ind + j >= 0 && S.substr(ind + j, 3) == "ABC") ++flag2;
    }

    ans = ans - flag1 + flag2;
    cout << ans << endl;
  }

  return 0;
}

// 2024/10/16
// 36:55