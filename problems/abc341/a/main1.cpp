#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string res = "1";

int main() {
  cin >> N;

  REP(i, 0, N) {
    res += "01";
  }
  cout << res << endl;
  
  return 0;
}

// 2024/8/24
// 1:37