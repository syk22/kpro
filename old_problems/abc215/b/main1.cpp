#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ll N;

// int main() {
//   cin >> N;
//   ll a = 0;
//   while ((ll) N >= pow(2, a+1)) a++;
//   cout << a << endl;
// }

// 9/24 7分ほどで解答も提出したけどうまくできなかったので参照

// 10^18 < 2^60
void basic() {
  ll N;
  cin >> N;
  ll check = 1;
  for (ll i = 0; i <= 60; i++) {
    if (check > N) {
      cout << i - 1 << endl;
      return;
    }
    // 2をかける = 次数を上げる
    check *= 2;
  }
}

// 対数
// 2^k <= N -> k <= log2(N)
void log_sum() {
  ll N;
  cin >> N;
  cout << floor(log2((long double)N)) << endl;
}

// 2進数
// (1ll << i) -> 大きい数でもチェックできる
// Nで抑えられる2^kが来たとき、一番上の桁kを1にすると論理和ができる
// ただし一番下の桁は0の時なので、k-1となる
// （これやりたかった）
void binary_sum() {
  ll N;
  cin >> N;
  for (int k = 60; k >= 0; k--) {
    if (N & ((ll) 1 << k)) {
      cout << k << endl;
      return;
    }
  }
}

int main() {
  binary_sum();
}