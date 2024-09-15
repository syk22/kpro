#include <bits/stdc++.h>
using namespace std;

string S;
string res = "Yes";

int main() {
  cin >> S;
  
  if (S[2] == 'R' || S[0] == 'M') res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/12
// 4:07