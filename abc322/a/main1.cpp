#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
int N, ans = -1;
string S;

int main() {
  cin >> N >> S;

  REP (i, 0 ,N - 2) {
    if(S[i] == 'A') {
      if (S[i + 1] == 'B' && S[i + 2] == 'C') {
        ans = i + 1;
        break;
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/20
// 4:07