#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans = 0;

int main() {
  cin >> A >> B;

  if (A == B) ans = 1;
  else if ((A + B) % 2 == 1) ans = 2;
  else ans = 3;

  cout << ans << endl;
  
  return 0;
}

// 2024/9/1
// 3:17