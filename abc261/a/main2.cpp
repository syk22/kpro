#include <bits/stdc++.h>
using namespace std;

int L1, R1, L2, R2;

int main() {
  cin >> L1 >> R1 >> L2 >> R2;
  if (L1 > L2) {
    swap(L1, L2);
    swap(R1, R2);
  }
  int ans = 0;
  if (R1 > R2) ans = R2 - L2;
  else if (R1 > L2) ans = R1 - L2;
  cout << ans << endl;
}
// 9/24 4:15
