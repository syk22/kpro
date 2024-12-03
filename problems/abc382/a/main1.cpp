#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, D;
int ans = 0;
string S;

int main() {
  cin >> N >> D >> S;

  REP (i, N) {
    if (S[i] == '.') ++ans;
  }

  ans += D;

  cout << ans << endl;
  
  return 0;
}

// 2024/12/03
// 2:58