#include <bits/stdc++.h>
using namespace std;

int X, Y;
string res = "Yes";

int main() {
  cin >> X >> Y;

  if (X < Y && Y - X > 2) res = "No";
  if (X > Y && X - Y > 3) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/1
// 2:14