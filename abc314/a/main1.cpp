#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string P = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
string ans = "3.";

int main() {
  cin >> N;
  REP (i, 0, N) {
    ans += P[i + 2];
  }

  cout << ans << endl;
}

// 2024/8/18
// 3:03