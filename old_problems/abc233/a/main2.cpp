#include <bits/stdc++.h>
using namespace std;

int X, Y;

int main() {
  cin >> X >> Y;
  int ans = 0;
  if (X < Y) ans = (Y - X  + 9) / 10;
  cout << ans << endl;
}
// 9/24 3:40