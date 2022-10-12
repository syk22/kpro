#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main2() {
  cin >> N;
  int x = N / 16;
  int y = N % 16;
  char a, b;
  if (x > 10) a = (char) x;
  if (y > 10) b = (char) y;
  if (x == 10) a = 'A';
  if (y == 10) b = 'A';
  if (x == 11) a = 'B';
  if (y == 11) b = 'B';
  if (x == 12) a = 'C';
  if (y == 12) b = 'C';
  if (x == 13) a = 'D';
  if (y == 13) b = 'D';
  if (x == 14) a = 'E';
  if (y == 14) b = 'E';
  if (x == 15) a = 'F';
  if (y == 15) b = 'F';

  // if (x) S += a, S += b;
  // else S += b;
  cout << a << b << endl;

  return 0;
}
// 10/12 15:30以上かかってもよくわからず、解説参照
// なるほど、文字列の位置にすればいいんだった
// 文字列の問題は苦手だ。。。

int main() {
  cin >> N;
  S = "0123456789ABCDEF";
  cout << S[N/16] << S[N%16] << endl;
}
