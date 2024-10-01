#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i];

  vector<int> score(N);
  REP (i, 0, N) {
    int cnt = 0;
    REP (j, 0, N) {
      if (S[i][j] == 'o') ++cnt;
    }
    score[i] = cnt;
  }

  RREP (i, N, -1) {
    REP (j, 0, N) {
      if (score[j] == i) cout << j + 1 << ' ';
    }
  }
  cout << endl;

  return 0;
}
