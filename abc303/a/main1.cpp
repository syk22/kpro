#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S, T, result = "Yes";

int main() {
  cin >> N >> S >> T;
  REP (i, 0, N) {
    if (S[i] == T[i]) continue;
    if (S[i] == '1' && T[i] == 'l') continue;
    if (S[i] == 'l' && T[i] == '1') continue;
    if (S[i] == '0' && T[i] == 'o') continue;
    if (S[i] == 'o' && T[i] == '0') continue;
    result = "No";
    break;
  }
  cout << result << endl;
}

// 2024/08/15
// 7:27