#include <bits/stdc++.h>
using namespace std;

int A, B, C, D;

int main() {
  cin >> A >> B >> C >> D;
  string ans = "Aoki";
  if (A < C) ans = "Takahashi";
  else if (A == C && B <= D) ans = "Takahashi";
  cout << ans << endl;
}
// 9/23 4:24
// この辺迷うなあ、まだ