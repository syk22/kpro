#include <bits/stdc++.h>
using namespace std;

double X;

int main() {
  cin >> X;
  int x = X;
  X -= x;
  cout << (X * 10 >= 5 ? x + 1 : x) << endl;
}

// 9/7 4:14
// 文字列として読み取る方が安全かもしれんね