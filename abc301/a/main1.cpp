#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, T = 0, A = 0;
char lead = 'Z';
string S;

int main() {
  cin >> N >> S;
  REP (i, 0, N) {
    if (S[i] == 'T') {
      T++;
      if (lead != 'T' && T > A) lead = 'T';
    }
    if (S[i] == 'A') {
      A++;
      if (lead != 'A' && A > T) lead = 'A';
    }
  }

  cout << lead << endl;
}

// 2024/8/15
// 10:27