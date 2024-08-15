#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
  cin >> S;
  int ans = 6;
  if (S[0] == S[1] && S[0] == S[2]) ans = 1;
  else if (S[0] == S[1] || S[0] == S[2] || S[1] == S[2]) ans = 3;
  cout << ans << endl;
}

// 9/8 4分弱ぐらい
// 最初にやったときは10分以上かかったので成長したってことにする