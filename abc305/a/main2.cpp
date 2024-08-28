#include <bits/stdc++.h>
using namespace std;

int N, ans;

int main() {
  cin >> N;

  ans = N / 5;
  if (N % 5 < 3) cout << 5 * ans << endl;
  else cout << 5 * (ans + 1) << endl;
  
  return 0;
}

// 2024/8/28
// 5:08