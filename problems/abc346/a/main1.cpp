#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int X[100] = {};

int main() {
  cin >> N;

  REP(i, 0, N) cin >> X[i];

  REP(i, 0, N - 1) {
    cout << X[i] * X[i + 1];
    if (i < N - 2) cout << " ";
  }

  cout << endl;
  
  return 0;
}

// 2024/8/24
// 3:36