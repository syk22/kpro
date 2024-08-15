#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;
  string ans = "Yes";
  if (N <= 4) ans = "No";
  if (N == 1) ans = "Yes";
  cout << ans << endl;
}
// 9/24 9分ぐらい
// エッジケースの処理をしっかりやりましょう