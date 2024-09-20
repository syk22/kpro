#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int cnt = 0;
string S, T;

int main() {
  cin >> S >> T;

  REP (i, 0, S.size()) {
    REP (j, cnt, T.size()) {
      if (S[i] == T[j]) {
        cout << j + 1 << ' ';
        cnt = j + 1;
        break;
      }
    }
  }
  cout << endl;

  return 0;
}

// 2024/9/20
// 5:09