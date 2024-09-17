#include <bits/stdc++.h>
using namespace std;

int a1, b1, c1, d1, e1, f1, a2, b2, c2, d2, e2, f2;
string res = "Yes";

int isSeparate (int l1, int r1, int l2, int r2) {
  return (r1 <= l2) || (r2 <= l1) ? 1 : 0;
}

int main() {
  cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1 >> a2 >> b2 >> c2 >> d2 >> e2 >> f2;

  if (
    isSeparate (a1, d1, a2, d2) ||
    isSeparate (b1, e1, b2, e2) ||
    isSeparate (c1, f1, c2, f2)
  ) res = "No";
  
  cout << res << endl;
  
  return 0;
}

// 2024/9/17
// 40分以上