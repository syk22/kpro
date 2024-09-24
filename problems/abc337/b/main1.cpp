#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;

int main() {
  cin >> S;

  vector<int> A(S.size()), B(S.size());
  REP (i, 0, S.size()) {
    A[i] = S[i], B[i] = S[i];
  }

  sort(A.begin(), A.end());

  cout << (A == B ? "Yes" : "No") << endl; 

  return 0;
}

// 2024/9/24
// 7:10