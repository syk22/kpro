#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans = 0;

int main() {
  cin >> A >> B;

  ans = A == 1 && B == 2 ? 3
    : A == 1 && B == 3 ? 2
    : A == 2 && B == 1 ? 3
    : A == 2 && B == 3 ? 1
    : A == 3 && B == 1 ? 2
    : A == 3 && B == 2 ? 1 : -1;

  cout << ans << endl;

  return 0;
}

// 2024/9/7
// 5:46