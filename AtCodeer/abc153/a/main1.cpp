#include <bits/stdc++.h>
using namespace std;

int H, A;
int ans = 0;

int main() {
  cin >> H >> A;

  ans = H / A;
  if (H % A != 0) ++ans;

  cout << ans << endl;
  
  return 0;
}
