#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int v;
// ll N;

int main() {
  // cin >> N;
  // v = N;
  // if (v == N) cout << "Yes" << endl;
  // else cout << "No" << endl;
  // // if (fabs(N) < pow(2, 31)) cout << "Yes" << endl;
  // // else cout << "No" << endl;

  // M => 2^32を作る
  ll N, M = (ll) 1 << 31;
  cin >> N;
  if ((-M <= N) && (N <= M)) cout << "Yes" << endl;
  else cout << "No" << endl;

  ll v = (ll) 1 << 31;
  cout << v << endl;

}

// 9/6 4:35
// intで代入できるかどうかで十分だった

// 数学的根拠を求められるものは難しい
// 2の冪乗はいくつか覚えておくこと