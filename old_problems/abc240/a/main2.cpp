#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
  cin >> a >> b;
  bool ans = 0;
  if (b == 10 && a == 1) ans = 1;
  if (b - a == 1) ans = 1;
  cout << (ans ? "Yes" : "No") << endl;
}
// 9/23 4:13
