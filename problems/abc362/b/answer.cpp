#include <bits/stdc++.h>
using namespace std;

int xa, ya, xb, yb, xc, yc;
string res = "No";

int main() {
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  int ab, bc, ca;
  ab = pow(xb - xa, 2) + pow(yb - ya, 2);
  bc = pow(xc - xb, 2) + pow(yc - yb, 2); 
  ca = pow(xa - xc, 2) + pow(ya - yc, 2); 
  if (
    ab + bc == ca ||
    bc + ca == ab ||
    ca + ab == bc
  ) res = "Yes";

  cout << res << endl;
  
  return 0;
}