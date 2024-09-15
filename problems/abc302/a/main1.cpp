#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, ans;

int main() {
  cin >> a >> b;
  ans = (a / b);
  if (a % b != 0) ans += 1;
  cout << ans << endl;
}

// 2024/08/15
// 12:42