#include <bits/stdc++.h>
using namespace std;

string S, T;
string res = "Yes";

int main() {
  cin >> S >> T;

  if (S != "AtCoder") res = "No";
  if (T != "Land") res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/8/26
// 2:00