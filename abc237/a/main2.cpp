#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll N;
ll m = (ll) 1 << 31;

int main() {
  cin >> N;
  if (-m <= N && N < m) cout << "Yes" << endl;
  else cout << "No" << endl;
}
// 9/24 11:41
// -mでいいんだねえ