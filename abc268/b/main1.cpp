#include <bits/stdc++.h>
using namespace std;
string S, T;

int main() {
  cin >> S >> T;
  string s = T.substr(0, S.size());
  cout << (s == S ? "Yes" : "No") << endl;
}
// 9/11 2:50