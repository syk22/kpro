#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

// 10^10以上はllを使用
using ull = unsigned long long;
using vi = vector<int>;
ull ans = 0, A;

int main() {
  REP(i, 0, 64) {
    cin >> A;
    ans += A << i;
  }
  cout << ans << endl;
  
  return 0;
}