#include <bits/stdc++.h>
using namespace std;

float A, B, C, X;

int main() {
  cin >> A >> B >> C >> X;
  // cout << fixed << setprecision(8);
  if (X <= A) cout << 1 << endl;
  else if (X > B) cout << 0 << endl;
  else cout << C / (B - A) << endl;
}
// 9/6 12:33
// わざわざ桁合わせをしなくてもOKだった
// ABCX全てfloatで取得しておかないと計算結果もfloatにならないの注意