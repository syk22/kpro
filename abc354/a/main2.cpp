#include <bits/stdc++.h>
using namespace std;

int H;
int ans = 0, height = 0;

int main() {
  cin >> H;
  
  while (height <= H) {
    height += pow(2, ans);
    ans++;
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/7
// 5:46