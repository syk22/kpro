#include <bits/stdc++.h>
using namespace std;

int r, g, b;
int calc = 0;
string res = "YES";

int main() {
  cin >> r >> g >> b;
  calc += g * 10 + b;

  if (calc % 4 != 0) res = "NO";
  cout << res << endl;
  
  return 0;
}
