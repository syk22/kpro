#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int cnt = 0;
string S;

int main() {
  cin >> S;

  REP (i, 1, S.size()) {
    if (S[i] == '-') ++cnt;
    else {
      cout << cnt << ' ';
      cnt = 0;
    }
  }

  cout << endl;
  
  return 0;
}

// 2024/11/17
// 4:20