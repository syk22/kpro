#include <bits/stdc++.h>
using namespace std;

// 10^10以上はllを使用
using ll = long long;

ll X, ans;

int main() {
  cin >> X;

  ans = X / 10;

  if (X % 10 != 0) {
    if (X > 0) ans += 1;
    // else ans -= 1;
  };

  cout << ans << endl;

  return 0;
}

// 2024/9/22
// 9:34