#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
string S;
string res = "Yes";

int main() {
  cin >> S;

  ans = atoi(S.substr(3, 3).c_str());

  if (ans == 316) res = "No";
  if (ans >= 350 || ans <= 0) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/8/25
// 12:14
