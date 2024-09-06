#include <bits/stdc++.h>
using namespace std;

int ans = 0;
string S;
string res = "No";

int main() {
  cin >> S;

  ans = atoi(S.substr(3, 3).c_str());

  if (0 < ans && ans < 350 && ans != 316) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/9/6
// 7:24