#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll N;
ll ans = 0;

int main() {
  cin >> N;

  while (N > 0) {
    if (N % 2 == 0) ++ans, N /= 2;
    else break;
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/23
// 10:32