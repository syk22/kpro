#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S, result = "";

int main() {
  cin >> N >> S;
  REP (i, 0, N) {
    result += S[i];
    result += S[i];
  }
  cout << result << endl;
}

// 2024/08/15
// 2:23