#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;
  // cout << pow(2, N) << " " << pow(N, 2) << endl;
  if (N >= 5 || N == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
}
// 9/6 5:24 WA*1
// N = 1のケースが例外だった。。。。
