#include <bits/stdc++.h>
using namespace std;

string S;
string res = "Yes";

int main() {
  cin >> S;

  int n = atoi(S.substr(3,3).c_str());

  if (n <= 0 || n > 349 || n == 316) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/14
// 3:53