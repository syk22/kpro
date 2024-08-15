#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
  cin >> S;
  // string x = S.substr(0, S.size()-2);
  // char y = S[S.size()-1];
  // cout << x;
  // if (y >= '7') cout << '+';
  // else if(y <= '2') cout << '-';
  // cout << endl;

  int n = S.size();
  int y = S[n-1] - '0';

  S = S.substr(0, n-2);

  if (y <= 2) S += '-';
  if (y >= 7) S += '+';

  cout << S << endl;

}
// 9/9 7:30
// なんかchar型慣れないな