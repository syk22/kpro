#include <bits/stdc++.h>
using namespace std;

// 10^10以上はllを使用
using ull = unsigned long long;

ull B, A = 1;
ull ans = -1;

int main() {
  cin >> B;

  while (1) {
    if (pow(A, A) == B) {
      ans = A;
      break;
    } else if (pow(A, A) > B) break;
    else ++A;
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/26
// 11分で解説参照