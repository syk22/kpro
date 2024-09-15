#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll A, B;

int main() {
  cin >> A >> B;

  if (A % B == 0) cout << A / B << endl;
  else cout << A / B + 1 << endl;
}

// 2024/9/14
// 3:23