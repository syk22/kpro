#include <bits/stdc++.h>
using namespace std;

string S, s = "";

int main() {
  cin >> S;
  while (s.size() < 6) s += S;
  cout << s << endl;
}

// 9/6 5:08
// sの長さを見なければならないのにSを見ていた。
// 何の長さをチェックするか、しっかり確認すること