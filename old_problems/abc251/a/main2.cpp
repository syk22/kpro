#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
  cin >> S;
  string ans = S;
  
  while (ans.size() < 6) ans += S;

  cout << ans << endl;
}
// 9/24 2:10
