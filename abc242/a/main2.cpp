#include <bits/stdc++.h>
using namespace std;

double A, B, C, X;

int main() {
  cin >> A >> B >> C >> X;
  double ans = 0;
  if (X <= A) ans = 1;
  else if (X <= B) ans = C / (B - A);
  cout << fixed << setprecision(10);
  cout << ans << endl;
}

// 9/23 7:50
// doubleにしなきゃいけなかった