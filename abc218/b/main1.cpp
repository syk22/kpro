#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;

int main() {
  REP (i, 0, 26) {
    int C;
    cin >> C;
    S += char(C + 'a' - 1);
  }
  cout << S << endl;
}
// 9/25 3:14
// 前回より圧倒的に速くできているはず