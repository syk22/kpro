#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
string S;

int main() {
  cin >> S;
  int N = 45;
  REP (i, 0, 9) N -= int(S[i]) - 48;
  cout << N << endl;
  cout << int('A') <<endl;
}

// 9/5 4:48
// int(char)だと文字列のASCIIのコード数になるの注意
// a -> 97, A -> 65, 0 -> 48