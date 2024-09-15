#include <bits/stdc++.h>
using namespace std;

unsigned long long H, ans, p = 0;

int main() {
  cin >> H;

  while (H >= p) {
    p += pow(2, ans);
    ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/14
// 4:55