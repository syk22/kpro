#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, a = 0, b = 0, c = 0;
string S;

int main() {
  cin >> N >> S;
  REP (i, 0, N) {
    if (S[i] == 'A') a += 1;
    else if (S[i] == 'B') b += 1;
    else if (S[i] == 'C') c += 1;

    if (a > 0 && b > 0 && c > 0) {
      cout << i+1 << endl;
      break;
    }
  }
  return 0;
}

// 2024/8/16
// 6:13