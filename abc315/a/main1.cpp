#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string ans = "";

int main() {
  cin >> S;
  REP (i, 0, S.size()) {
    if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'u' && S[i] != 'o') {
      ans += S[i];
    }
  }

  cout << ans << endl;
}

// 2024/8/18
// 6:20