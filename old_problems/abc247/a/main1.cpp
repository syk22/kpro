#include <bits/stdc++.h>
using namespace std;
string S, s = "0";


int main() {
  cin >> S;
  s += S;
  cout << s.substr(0, 4) << endl;

  // string T(4,0);
  // T[0]='0';
  // T[1]=S[0];
  // T[2]=S[1];
  // T[3]=S[2];
  // ↑この組み方もいい
}

// 9/6 ６:42
// ビット演算とかしないとかなと思ってたけど全然そんなんではなかった