#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string N;
string res = "Yes";

int main() {
  cin >> N;
  
  REP (i, 0, N.size() - 1) if (N[i] <= N[i + 1]) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/2
// 3:15