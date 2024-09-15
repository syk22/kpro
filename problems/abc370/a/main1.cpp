#include <bits/stdc++.h>
using namespace std;

int L, R;
string res = "Invalid";

int main() {
  cin >> L >> R;

  if (L != R) {
    if (L) res = "Yes";
    if (R) res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/10
// 3:18