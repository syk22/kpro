#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;
  int a = N / 100, b = (N - a * 100) / 10, c = N % 10;
  cout << 111 * (a + b + c) << endl;
}
// 9/24 2:38