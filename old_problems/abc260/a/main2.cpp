#include <bits/stdc++.h>
using namespace std;

string S;

int main2() {
  cin >> S;
  if (S[0] == S[1] && S[0] == S[2]) cout << -1 << endl;
  else if (S[0] == S[1]) cout << S[2] << endl;
  else if (S[0] == S[2]) cout << S[1] << endl;
  else cout << S[0] << endl;
  return 0;
}

// 9/24 2:50
// バケットソートでの解き方
// mapの使い方を学んでおく

int main() {
  cin >> S;
  map<char, int> mp;
  for (auto &ch : S) mp[ch]++;
  for (char i = 'a'; i <= 'z'; i++) {
    if (mp[i] == 1) {
      cout << i <<endl;
      return 0;
    }
  }
  cout << -1 << endl;
}