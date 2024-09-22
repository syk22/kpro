#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

string S;
string res = "Yes";
vector<int> alph(26) , check(101);

int main() {
  cin >> S;
  // fill(alph.begin(), alph.end(), -1);

  REP (i, 0, S.size()) alph[S[i] - 'a']++;
  // FORE (x, alph) cout << x << ' ';
  // cout << endl;

  REP (i, 0, 26) if(alph[i] != 0) check[alph[i]]++;
  // FORE (x, check) cout << x << ' ';
  // cout << endl;

  REP (i, 0, 102) {
    if (check[i] == 0) continue;
    if (check[i] == 2) continue;
    res = "No";
    break;
  }

  cout << res << endl;
  
  return 0;
}

// 2024/9/22
// 23分ほど粘ったけどわからん
// 43:12 ようやく解けたw
