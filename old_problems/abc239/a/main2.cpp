#include <bits/stdc++.h>
using namespace std;

double H;

int main() {
  cin >> H;
  double ans = H * (H + 12800000);
  cout << fixed << setprecision(8);
  cout << sqrt(ans) << endl; 
}

// 9/23 5:27
// 実行する場所を間違えていたので大幅な時間ロスに