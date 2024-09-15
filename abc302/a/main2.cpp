#include <bits/stdc++.h>
using namespace std;

long long A, B;

int main() {
  cin >> A >> B;

  if (A % B == 0) cout << A / B << endl;
  else cout << (A / B) + 1 << endl;
  
  return 0;
}

// 2024/8/27
// 6:40