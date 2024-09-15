#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, minage = INT_MAX, ind = 0;

int main() {
  cin >> N;

  vector<string> S(N);
  vector<int> A(N);
  REP (i, 0, N) {
    cin >> S[i] >> A[i];
    if (minage > A[i]) ind = i, minage = A[i];
  }

  REP (i, ind, N) cout << S[i] << endl;
  REP (i, 0, ind) cout << S[i] << endl;
 
  return 0;
}

// 2024/9/13
// 6分ぐらい