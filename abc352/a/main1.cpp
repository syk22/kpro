#include <bits/stdc++.h>
using namespace std;

int N;
int X, Y, Z;
string res = "No";

int main() {
  cin >> N;
  cin >> X >> Y >> Z;

  if (X < Z && Z < Y) res = "Yes";
  if (Y < Z && Z < X) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/8/25
// 3:55