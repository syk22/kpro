#include <bits/stdc++.h>
using namespace std;

string S;
string res = "Yes";

int main() {
  cin >> S;

  if (S.at(0) == 'M') res = "No";
  if (S.at(2) == 'R') res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/8/26
// 4:07