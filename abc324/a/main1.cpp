#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string result = "Yes";
int X[100010] = {};

int main() {
  cin >> N;

  REP(i, 0, N) cin >> X[i];

  REP(i, 0, N - 1) {
    if (X[i] != X[i + 1]) result = "No";
  }

  cout << result << endl;
  
  return 0;
}

// 2024/8/20
// 2:54