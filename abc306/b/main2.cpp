#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ull = unsigned long long;
ull ans = 0, A;

int main() {

  REP (i, 0, 64) {
    cin >> A;
    ans += A << i;
  }
  cout << ans << endl;
  
  return 0;
}

// 2024/9/6
// 12分ぐらいで解説見る