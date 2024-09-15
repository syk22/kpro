#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, M = 0;

int main() {
  cin >> N;

  vector<string> T(N);
  FORE (x, T) {
    cin >> x;
    M = max(M, int(x.size()));
  }

  vector<string> v(M);
  string t(N, '*');
  FORE (x, v) x = t;
  // FORE (x, v) cout << x << endl;

  
  REP(i, 0, N) {
    string text = T[i];
    REP (j, 0, text.size()) v[j][N - 1 - i] = text[j];
  }

  FORE (x, v) {
    while (1) {
      if (x[x.size() - 1] == '*') x.pop_back();
      else break;

    }
  }
  
  FORE (x, v) cout << x << endl;

  return 0;
}