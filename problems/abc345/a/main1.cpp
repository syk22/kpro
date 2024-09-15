#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "Yes";

int main() {
  cin >> S;
  int size = S.size();

  if (S.at(0) != '<') res = "No";
  if (S.at(size - 1) != '>') res = "No";
  REP(i, 1, size - 1) {
    if (S.at(i) != '=') res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/8/24
// 5:04