#include <bits/stdc++.h>
using namespace std;

char Sab, Sac, Sbc;
string res = "B";

int main() {
  cin >> Sab >> Sac >> Sbc;

  if (Sab != Sac) res = "A";
  if (Sac != Sbc) res = "C";

  cout << res << endl;
  
  return 0;
}

// 2024/9/18
// 12:43