#include <bits/stdc++.h>
using namespace std;
int X, Y;
string result = "Yes";

int main() {
  cin >> X >> Y;
  if (X < Y && Y - X > 2) result = "No";
  if (X > Y && X - Y > 3) result = "No";

  cout << result << endl;
  
  return 0;
}

// 2024/8/21
// 5:03