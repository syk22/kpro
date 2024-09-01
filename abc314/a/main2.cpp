#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679", 
res = "3.";

int main() {
  cin >> N;

  REP (i, 0, N) res += pi.at(2 + i);

  cout << res << endl;
  
  return 0;
}

// 2024/9/1
// 13分くらい