#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

string N;
string res = "No";

int main() {
  cin >> N;

  int fl1 = 0, fl2 = 0, fl3 = 0;
  REP (i, 6) {
    if (N[i] == '1') ++fl1;
    if (N[i] == '2') ++fl2;
    if (N[i] == '3') ++fl3;
  }

  if (fl1 == 1 && fl2 == 2 && fl3 == 3) res = "Yes";
  cout << res << endl;
  
  return 0;
}

// 2024/11/17
// 3:08