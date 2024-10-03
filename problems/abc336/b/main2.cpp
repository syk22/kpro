#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 0;

int main() {
  cin >> N;

  while (1) {
    if (N % 2 == 0) ++ans;
    else break;
    N /= 2;
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/3
// 2:29