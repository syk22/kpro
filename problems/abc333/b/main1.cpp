#include <bits/stdc++.h>
using namespace std;

string S, T;
string res = "No";

int main() {
  cin >> S >> T;

  int distS = abs((S[0] - 'A') - (S[1] - 'A'));
  int distT = abs((T[0] - 'A') - (T[1] - 'A'));

  if ((distS == 2 || distS == 3) && (distT == 2 || distT == 3)) res = "Yes";
  else if ((distS == 1 || distS == 4) && (distT == 1 || distT == 4)) res = "Yes";

  cout << res << endl;
  
  return 0;
}

// 2024/9/23
// 10:57