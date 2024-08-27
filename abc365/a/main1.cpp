#include <bits/stdc++.h>
using namespace std;

int Y;
int ans = 365;

int main() {
  cin >> Y;

  if (Y % 400 == 0) ans += 1;
  else if (Y % 100 == 0) ans = ans;
  else if (Y % 4 == 0) ans += 1;

  cout << ans << endl;
  
  return 0;
}

// 2024/8/27
// 3:10