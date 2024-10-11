#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int M, N;

int main() {
  cin >> M;

  vector<int> A;

  REP (i, 0, 21) {
    REP (j, 0, M % 3) {
      A.push_back(i);
    }
    M /= 3;
  }

  cout << A.size() << endl;
  FORE (x, A) cout << x << ' ';
  cout << endl;
  
  return 0;
}

// 2024/10/10
// 8:18