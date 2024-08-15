#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S[3], T;

int main() {
  cin >> S[0] >> S[1] >> S[2] >> T;
  string str = "";
  REP (i, 0, T.size()) {
    int n = T[i] - '1';
    str += S[n];
  }
  cout << str << endl;
}

// 9/25 4:06
// A問題マラソンが効いている