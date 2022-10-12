#include <bits/stdc++.h>
using namespace std;

int K, H = 21, M = 0;

int main() {
  cin >> K;
  if (K >= 60) ++H;
  M += K % 60;
  cout << H << ":";
  cout << setw(2) << setfill('0') << M << endl;
}
// 9/24 3:34
// 3分切ったとする
// printf("%d:%02d", H, M);　とすると一番早い