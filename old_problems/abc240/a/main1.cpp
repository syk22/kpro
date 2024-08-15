#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
  cin >> a >> b;
  if (abs(a - b) == 1 || abs (a - b) == 9) cout << "Yes" << endl;
  else cout << "No" << endl;
}

// 9/6 3:24
// 条件に a < b が明言されているので、absはつけなくて良かった