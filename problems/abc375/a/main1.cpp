#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;
string S;

int main() {
  cin >> N >> S;

  REP (i, 0, N - 2) {
    if (S[i] == '#' && S[i + 1] == '.' && S[i + 2] == '#') ++ans;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/10/13
// 3:52