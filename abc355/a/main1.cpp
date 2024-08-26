#include <bits/stdc++.h>
using namespace std;

int A, B, ans = 0;

int main() {
  cin >> A >> B;

  if (A == B) ans = -1;
  else if (A != 1 && B != 1) ans = 1;
  else if (A != 2 && B != 2) ans = 2;
  else if (A != 3 && B != 3) ans = 3;

  cout << ans << endl;
  
  return 0;
}

// 2024/8/26
// 4:40