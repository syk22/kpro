#include <bits/stdc++.h>
using namespace std;

int xa, ya, xb, yb, xc, yc, ab, bc, ca;
string res = "No";

int main() {
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  ab = pow(xa - xb, 2) + pow(ya - yb, 2);
  bc = pow(xb - xc, 2) + pow(yb - yc, 2);
  ca = pow(xc - xa, 2) + pow(yc - ya, 2);

  if (ab + bc == ca) res = "Yes";  
  if (ab + ca == bc) res = "Yes";  
  if (ca + bc == ab) res = "Yes";  

  cout << res << endl;
  
  return 0;
}

// 2024/9/16
// 4:55