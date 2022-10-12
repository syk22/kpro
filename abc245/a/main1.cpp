#include <bits/stdc++.h>
using namespace std;

int A, B, C, D;


int main() {
  cin >> A >> B >> C >> D;
  // string ans;
  // if (A < C) ans = "Takahashi";
  // else if (A > C) ans = "Aoki";
  // else {
  //   if (B > D) ans = "Aoki";
  //   else ans = "Takahashi";
  // }
  // cout << ans << endl;

  int P = A * 60 + B;
  int Q = C * 60 + D;
  if (P <= Q) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;

}

// 9/6 4:50
// 実装に時間がかかった
// 時間を分に直すのも鉄則だな。。。