#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S, T;
int ind = 0;

int main() {
  cin >> S >> T;

  REP(i, 0, T.size()) {
    if (T[i] == S[ind]) {
      cout << i + 1 << ' ';
      ind++;
    }
  }

  cout << endl;

  return 0;
}

// 2024/9/18
// 10:36