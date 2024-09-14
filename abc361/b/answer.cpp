#include <bits/stdc++.h>
using namespace std;

int xa1, ya1, za1, xa2, ya2, za2, xb1, yb1, zb1, xb2, yb2, zb2;
string res = "Yes";

int main() {
  cin >> xa1 >> ya1 >> za1 >> xa2 >> ya2 >> za2 >> xb1 >> yb1 >> zb1 >> xb2 >> yb2 >> zb2;

  if (xa1 >= xb2 || xa2 <= xb1) res = "No";
  if (ya1 >= yb2 || ya2 <= yb1) res = "No";
  if (za1 >= zb2 || za2 <= zb1) res = "No";

  cout << res << endl;
  
  return 0;
}