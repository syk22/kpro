#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int main() {
  int yr;
  cin >> yr;
  REP (i, 0, 4) {
    if ((yr + i) % 4 == 2) {
      cout << yr + i << endl;
      return 0;
    }
  }
}
// 9/24 2:14