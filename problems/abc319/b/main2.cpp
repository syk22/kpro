#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;
  
  string S;

  REP (i, 0, N + 1) {
    S += '-';
    REP (j, 1, 10) {
      if (N % j == 0 && i % (N / j) == 0) {
        S[i] = j + '0';
        break;
      }
    }
  }

  cout << S << endl;

  return 0;
}

// 2024/10/9
// 12:48