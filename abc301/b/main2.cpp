#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<int> A(N), B = {};
  FORE (x, A) cin >> x;
  
  B.push_back(A[0]);

  REP(i, 1, N) {
    int gap = A[i - 1] - A[i];
    if (abs(gap) != 1) {
      REP (j, 1, abs(gap)) {
        if (gap < 0) B.push_back(A[i - 1] + j);
        if (gap > 0) B.push_back(A[i - 1] - j);
      }
    }
    B.push_back(A[i]);    
  }

  FORE (x, B) cout << x << " ";
  cout << endl;

  return 0;
}

// 2024/9/5
// 13分弱