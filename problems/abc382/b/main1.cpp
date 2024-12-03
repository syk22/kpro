#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = n; i >= 0; --i)

int N, D, cnt = 0;
string S;

int main() {
  cin >> N >> D >> S;

  REP (i, N - 1) {
    if (cnt == D) break;
    if (S[i] == '@') S[i] = '.', ++cnt;
  }

  cout << S << endl;
  
  return 0;
}

// 2024/12/03
// 4:09