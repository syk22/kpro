#include <bits/stdc++.h>
using namespace std;

int N, M, X, T, D;

int main() {
  cin >> N >> M >> X >> T >> D;
  int ans = 0;
  if (M <= X) ans = T - (X - M) * D;
  else ans = T;
  cout << ans << endl;
}
// 9/24 5:10