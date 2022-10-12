#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

string key;
int y;

int main2() {
  cin >> key;
  string ans = "Strong";
  if (key[0] == key[1] && key[0] == key[2] && key[0] == key[3]) ans = "Weak";
  y = key[0] - '0';
  bool flag = 1;
  REP (i, 1, 4) {
    ++y;
    if (y >= 10) y = 0;
    if (key[i] - '0' != y) flag = 0;
  }
  if (flag) ans = "Weak";
  cout << ans << endl;
  return 0;
}
// 9/24 17:50

int main() {
  char A[5];
  cin >> A;
  // cout << A << endl;
  // FORE (i, A) cout << i << endl;
  bool same = 1;
  bool step = 1;
  REP (i, 0, 3) {
    if (A[i] != A[i + 1]) same = 0;
    if (((A[i] + 1) % 10) != (A[i+1] % 10)) step = 0;
  }
  cout << ((same || step) ? "Weak" : "Strong") << endl;

}
// 5にしないと4桁の暗号が全て入力されないのはなぜ？