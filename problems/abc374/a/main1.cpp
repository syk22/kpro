#include <bits/stdc++.h>
using namespace std;

string S;
string res = "No";

int main() {
  cin >> S;

  if (S.substr(S.size() - 3, 3) == "san") res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/10/6
// 1:56