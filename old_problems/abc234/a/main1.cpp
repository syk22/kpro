#include <bits/stdc++.h>
using namespace std;

int t;

int f (int T) {
  return pow(T, 2) + 2 * T + 3;
  // return T * T + 2 * T + 3;
}

int main() {
  cin >> t;
  int total = f(f(f(t) + t) + f(f(t)));
  cout << total << endl;
}

// 9/6 4:35
// 特に何もひねりなく問題文の通りに作ってしまった。。。