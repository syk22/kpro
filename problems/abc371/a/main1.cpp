#include <bits/stdc++.h>
using namespace std;

char Sab, Sac, Sbc;

int main() {
  cin >> Sab >> Sac >> Sbc;

  if (Sab == Sbc) cout << 'B' << endl;
  else if (Sac == '<') cout << 'C' << endl;
  else cout << 'A' << endl;
  
  return 0;
}

// 2024/9/15
// WA