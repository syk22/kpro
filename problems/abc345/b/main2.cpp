#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll X, ans = 0;

int main() {
  cin >> X;

  ans = (X + 9) / 10;
  if (X + 9 < 0 && (X + 9) % 10 != 0) --ans;

  cout << ans << endl;

  return 0;
}

// 2024/10/5
// 11:15