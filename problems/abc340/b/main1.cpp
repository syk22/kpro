#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int Q, n, x, k;

int main() {
  cin >> Q;

  vector<int> A = {};

  REP (i, 0, Q) {
    cin >> n;
    if (n == 1) {
      cin >> x;
      A.push_back(x);
    } else {
      cin >> k;
      cout << A[A.size() - k] << endl;
    }
  }

  return 0;
}

// 2024/9/20
// 5:48
