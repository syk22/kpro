#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K;
int ans = 0;
string S;

int main() {
  cin >> N >> K >> S;

  string ok(K, 'O');
  REP (i, 0, N - K + 1) {
    string subs = S.substr(i, K);
    if (subs == ok) {
      ++ans;
      REP (j, i, i + K) {
        S[j] = 'X';
      }
      // string next;
      // REP (j, 0, N) {
      //   if (i <= j && j < i + K) next += 'X';
      //   else next += S[j];
      // }
      // S = next;
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/11/10
// 16:49