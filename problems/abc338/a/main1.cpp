#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S, SS = "";
string res = "Yes";

int main() {
  cin >> S;

  SS += toupper(S.at(0));

  REP(i, 1, S.size()) {
    SS += tolower(S.at(i));
  }

  if (S != SS) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/8/24
// 7:11

// transformを使う場合

int mainTransform() {
  // 同じ文字列を持っていることが必要なので、文字をコピーしておく。
  cin >> S, SS = S;
  
  // 最初から全てlowerケースにしておく
  transform (
    S.begin(),
    S.end(),
    SS.begin(),
    [](char c) { return tolower(c); }
  );
  // 最後に1文字目をupperケースにしておく
  SS.at(0) = toupper(S.at(0));

  if (S != SS) res = "No";

  cout << res << endl;

}