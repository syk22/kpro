#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
string S, T, res = "No";

string pen1 = "EABCDEDCBAE", pen2 = "DACEBDBECAD";

int main() {
  cin >> S >> T;

  int f1 = 0, f2 = 0;
  REP (i, 0, pen1.size() - 1) {
    if (pen1.substr(i, 2) == S) f1 = 1;
    if (pen1.substr(i, 2) == T) f2 = 1;
  }
  if (f1 && f2) res = "Yes";

  f1 = 0, f2 = 0;
  REP (i, 0, pen2.size() - 1) {
    if (pen2.substr(i, 2) == S) f1 = 1;
    if (pen2.substr(i, 2) == T) f2 = 1;
  }
  if (f1 && f2) res = "Yes";

  cout << res << endl;
  return 0;
}

// 最初にやったもの
int first_main() {
  cin >> S >> T;

  int s1, s2, s0, t1, t2, t0;
  REP (i, 0, 5) {
    if (S[0] == char(i + 'A')) s1 = i;
    if (S[1] == char(i + 'A')) s2 = i;
    if (T[0] == char(i + 'A')) t1 = i;
    if (T[1] == char(i + 'A')) t2 = i;
  }
  s0 = abs(s1 - s2), t0 = abs(t1 - t2);

  if (s0 == 2 && t0 == 2) res = "Yes";
  if (s0 == 3 && t0 == 3) res = "Yes";
  if (s0 == 2 && t0 == 3) res = "Yes";
  if (s0 == 3 && t0 == 2) res = "Yes";
  if (s0 == 1 && t0 == 1) res = "Yes";
  if (s0 == 4 && t0 == 4) res = "Yes";
  if (s0 == 1 && t0 == 4) res = "Yes";
  if (s0 == 4 && t0 == 1) res = "Yes";

  cout << res << endl;

  return 0;
}

// 2024/10/3
// 19分くらい