#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
  cin >> N >> S;
  cout << S.substr(N-1, 1) << endl;
  // cout << S.back() << endl;
}

// 9/6 1:21
// S.back() はじめて知った
// 文字列をvector配列として、最後の要素を取り出す
// 先頭はfront()