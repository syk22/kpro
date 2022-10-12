#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
  cin >> S;
  // int len = S.size();
  // cout << (S.substr(len-2, 2) == "er" ? "er" : "ist") << endl;
  cout << (S[S.size() - 1] == 'r' ? "er" : "ist") << endl;
}

// 9/9 3:18
// 末尾だけで判断する方がキレイかもね