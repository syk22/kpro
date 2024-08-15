#include <bits/stdc++.h>
using namespace std;
#define FORE(i, a) for (auto &i : a)
using vi = vector<int>;

int N;

int main() {
  cin >> N;
  vi v(N, 0);
  FORE(i, v) cin >> i;
  int ans = 0;
  FORE(i, v) ans += i;
  cout << ans << endl;
}
// 10/11 2:26
// 