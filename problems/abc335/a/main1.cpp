#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string ans = "";

// int main() {
//   cin >> S;

//   REP(i, 0, S.size()) {    
//     if (i == S.size() - 1) ans += '4';
//     else ans += S[i];
//   }
//   cout << ans << endl;
  
//   return 0;
// }

// 2024/8/23
// 2:49

int main() {
  cin >> S;
  S.at(S.size() - 1) = '4';
  cout << S << endl;
  return 0;
}

// 上記のケースで行けるなら、そっちの方がいいかもしれない。