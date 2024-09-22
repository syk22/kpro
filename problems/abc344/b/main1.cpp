#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

using ll = long long;

ll N = 1;
vector<ll> A = {};

int main() {

  while (N) {
    cin >> N;
    A.push_back(N);
  }

  reverse(A.begin(), A.end());
  
  FORE (x, A) cout << x << endl;

  return 0;
}

// 2024/9/22
// 5:53