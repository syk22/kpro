#include <bits/stdc++.h>
using namespace std;

int t;
int si(int T) {
  int a = pow(T, 2);
  int b = 2 * T;
  int c = 3;
  return a + b + c;
}
int solve(int T) {
  return si(si(si(T) + T) + si(si(T)));
}

int main() {
  cin >> t;
  cout << solve(t) << endl;
}

// 9/24 5:03