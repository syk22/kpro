#include <bits/stdc++.h>
using namespace std;

double X;

int main() {
  cin >> X;

  if (int(X * 1000) % 1000 == 0) cout << int(X) << endl;
  else cout << X << endl;
 
  return 0;
}

// 2024/9/12
// 7:49