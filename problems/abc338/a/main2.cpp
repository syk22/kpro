#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S, C;
string res = "Yes";

int main() {
  cin >> S;

  C = toupper(S[0]);  
  REP (i, 1, S.size()) C += tolower(S[i]); 

  if (C == S) cout << "Yes";
  else cout << "No";
  cout << endl;
 
  return 0;
}

// 2024/9/4
// 3:30