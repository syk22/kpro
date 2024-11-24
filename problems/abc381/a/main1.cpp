#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S;
string res = "Yes";

int main() {
  cin >> N >> S;

  if (N % 2 == 0) res = "No";

  REP (i, 0, (N + 1) / 2 - 1) {
    if (S[i] != '1') res = "No";
  }
  if (S[(N + 1) / 2 - 1] != '/') res = "No";
  REP (i, (N + 1) / 2, N) {
    if (S[i] != '2') res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/11/24
// 15:53