#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;

int main() {
  cin >> S;

  REP(i, 0, S.size()) {
    cout << S[i];
    if (i < S.size() - 1) cout  << " ";
  }
  cout << endl;
  
  return 0;
}

// 2024/8/21
// 3:47