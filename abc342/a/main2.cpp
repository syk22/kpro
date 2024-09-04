#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;

int main() {
  cin >> S;
  
  REP (i, 0, S.size()) {
    int flag = 1;
    REP (j, 0, S.size()) if (i != j && S[i] == S[j]) flag = 0;
    if (flag) cout << i + 1 << endl;
  }
  
  return 0;
}

// 2024/9/4
// 3:41