#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

string S, T;

// int main_n3() {
//   cin >> S >> T;

//   vector<string> ans;

//   while (S != T) {
//     string next(S.size(), '{');
//     REP (i, 0, S.size()) {
//       if (S[i] != T[i]) {
//         string temp = S;
//         temp[i] = T[i];
//         next = min(next, temp);
//       }
//     }
//     ans.push_back(next);
//     S = next;
//   }

//   cout << ans.size() << endl;
//   FORE (x, ans) cout << x << endl;

//   return 0;
// }

int main () {
  cin >> S >> T;

  vector<string> ans;
  vector<int> V;
  REP (i, 0, S.size()) {
    if (S[i] > T[i]) V.push_back(i);
  }
  RREP (i, S.size(), 0) {
    if (S[i] < T[i]) V.push_back(i);
  }

  FORE (x, V) {
    S[x] = T[x];
    ans.push_back(S);
  }

  cout << ans.size() << endl;
  FORE (x, ans) cout << x << endl;

  return 0;
}