#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S;
string result = "No";

int main() {
  cin >> N >> S;

  REP(i, 0, N - 1) {
    if (S[i] == 'a' && S[i + 1] == 'b') result = "Yes";
    if (S[i] == 'b' && S[i + 1] == 'a') result = "Yes";
  }

  cout << result << endl;
  return 0;
}

// 2024/8/21
// 2:41