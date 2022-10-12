#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void bit_sum() {
  ll N;
  cin >> N;
  for (int i = 60; i >= 0; i--) {
    ll k = (ll) 1 << i;
    if (N & k) {
      cout << i << endl;
      return;
    }
  }
}
// 9/25 5:08

int main() {
  ll N;
  cin >> N;
  int ans = floor(log2((long double)N));
  cout << ans << endl;
}
// 3:30
// 回答を見たのでこんなもん
// log２は整数を返すとは限らないことに注意
// floor(x) -> x以下の最大整数を返す
// long　double -> 桁数の大きい小数点（64bit）を扱う
