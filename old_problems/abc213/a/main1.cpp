#include <bits/stdc++.h>
using namespace std;

int A, B;

int main() {
  cin >> A >> B;
  // bitset<8> abit(A);
  // bitset<8> bbit(B);
  // bitset<8> C(abit ^ bbit);
  cout << (A ^ B) << endl;
}

// 9/23 10:12
// bitset 使わないといけないかと思ったらそんなことなかった
// ビットで表示したいときは上記のCを出力すること