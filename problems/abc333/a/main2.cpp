#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

char N;
string ans = "";

int main() {
  cin >> N;
  
  REP (i, 0, N - '0') ans += N;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/4
// 2:14