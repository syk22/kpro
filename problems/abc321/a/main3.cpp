#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string N, res = "Yes";

int main() {
  cin >> N;

    REP (i, 0, N.size() - 1) if (N[i] - '0' <= N[i + 1] - '0') res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/14
// 5:54