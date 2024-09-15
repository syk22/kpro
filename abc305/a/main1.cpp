#include <bits/stdc++.h>
using namespace std;

int N, ans;

int main() {
  cin >> N;
  ans = N / 5;
  if (N % 5 > 2) ans += 1;
  cout << ans * 5 << endl;
}

// 2024/08/15
// 3:42