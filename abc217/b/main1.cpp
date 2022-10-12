#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S1, S2, S3;

int main() {
  cin >> S1 >> S2 >> S3;
  vector<string> check = {"ABC", "ARC", "AGC", "AHC"};

  REP (i, 0, 4) {
    if (!(check[i] == S1 || check[i] == S2 || check[i] == S3)) cout << check[i] << endl;
  }
}
// 9/25 7:29
// コンテスト時は16分かかっているので上出来

// 配列で書く場合は
// string check[4] = {"ABC", "ARC", "AGC", "AHC"};
// 解説はもう一つ、確認用のbool配列を作り、最後にfalseをコールするやり方