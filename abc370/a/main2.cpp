#include <bits/stdc++.h>
using namespace std;

int L, R;
string res = "Invalid";

int main() {
  cin >> L >> R;

  if (L != R) {
    if (L) res = "Yes";
    else res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/15
// 2:25