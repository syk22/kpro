#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "";
bool flag = true;

int main() {
  cin >> S;

  REP(i, 0, S.size()) {
    if (flag && S.at(i) != '|') res += S.at(i);
    else if (S.at(i) == '|') flag = !flag;
  }

  cout << res << endl;
  
  return 0;
}

// 2024/8/24
// 4:19