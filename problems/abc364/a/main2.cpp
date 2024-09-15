#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string res = "Yes";

int main() {
  cin >> N;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i];
  
  REP (i, 0, N - 2) if (S[i] == "sweet" && S[i + 1] == "sweet") res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/12
// 2:41