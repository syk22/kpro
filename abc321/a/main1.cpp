#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
string S, result = "Yes";

int main() {
  cin >> S;
  
  // minDigit = 
  REP (i, 0, S.size() - 1) {
    if (S.size() == 1) break;
    if (S[i] <= S[i + 1]) result = "No";
  }

  cout << result << endl;  

  return 0;
;}