#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "Yes";

int main() {
  cin >> S;

  for (int i = 1; i < S.size(); i += 2) if (S[i] != '0') res = "No";

 cout << res << endl;
  
  return 0;
}

// 2024/9/2
// 3:11