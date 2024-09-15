#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, P, P1, pl = 0, add = 0;

int main() {
  cin >> N >> P1;
  REP (i, 0, N - 1) {
    cin >> P;
    add = P - (P1 + pl);
    if (add >= 0) pl += (add + 1);
  }
  vector<int> x = {1, 0, 2};

  cout << pl << endl;
}

// 2024/8/17
// 9:17