#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
set<string> t;

int main() {
  cin >> S;

  REP (i, 0, S.size()) {
    string text = "";
    REP (j, i, S.size()) {
      text += S[j];
      t.insert(text);
    }
  }

  cout << t.size() << endl;
  
  return 0;
}

// 2024/9/22
// 7:11