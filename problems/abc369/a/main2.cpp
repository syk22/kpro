#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans = 0;

int main() {
  cin >> A >> B;

  if (A != B) {
    if (A % 2 == B % 2 && abs(A - B) > 1) ans = 3;
    else ans = 2;
  } else ans = 1;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/15
// 7:17