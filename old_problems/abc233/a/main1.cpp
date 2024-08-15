#include <bits/stdc++.h>
using namespace std;

int X, Y;

int ceil(int a, int b) { return (a+b-1)/b; }

int main() {
  cin >> X >> Y;
  if (X >= Y) cout << 0 << endl;
  // else if ((Y - X) % 10 == 0) cout << (Y-X) / 10 << endl;
  // else cout << (Y-X) / 10 + 1 << endl;
  else cout << ceil(Y-X, 10) << endl;
}

// 9/6 3:23
// 割り切れた時に＋１にするのを回避するためにa+b-1を割った整数部分を使う