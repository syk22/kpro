#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int ans = 0;
string S;

int main() {
  cin >> S;

  REP (i, 0, S.size()) {
    REP (j, 1, S.size() + 1) {
      string text = S.substr(i, j);
      int flag = 1;
      REP (k, 0, text.size() / 2) {
        if (text[k] != text[text.size() - k - 1]) flag = 0;
      }
      if (flag) ans = max(ans, int(text.size()));
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/25
// 18:40