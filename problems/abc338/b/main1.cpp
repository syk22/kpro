#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0, cnt = 0;
string S;

int main() {
  cin >> S;

  vector<int> A(26);
  REP (i, 0, S.size()) {
    ++A[S[i] - 'a'];
  }

  REP (i, 0, 26) {
    if (cnt < A[i]) cnt = A[i], ans = i;
  }

  cout << char(ans + 'a') << endl;

  return 0;
}

// 2024/9/25
// 4:47