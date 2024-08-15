#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N;
const int mod = 998244353;

int main() {
  cin >> N;
  // ll ans = 0;
  // if (N == 998244353 || N == -998244353) ans = 0;
  // else if (N > 0) ans = N - 998244353;
  // else if (N < 0) ans = (N + 998244353) * -1;
  // // else if (N == 0) ans = 0;
  // // else if (N >= 998244354) ans = N - 998244353;
  // cout << ans << endl;
  N %= mod;
  // if (N < 0) N += mod;
  cout << N << endl;
}

// 9/11 15:04
// わからなくて解答参照
// 