#include <bits/stdc++.h>
using namespace std;

double H;

int main() {
  cin >> H;
  cout << fixed << setprecision(10);
  cout << sqrt(H * (12800000 + H)) << endl;
}

// 9/6 4:59
// もっと桁を多く計算するときはどうするべきか？
// float -> double に変更することで10^−５以下もできる
