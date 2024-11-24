#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int H, W, K;
int ans = 0;

vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};

int rec (int i, int j, int k, vector<string> s) {
  if (k == 0) return 1;
  s[i][j] = '*';
  int res = 0;
  REP (h, 0, 4) {
    int di = i + dx[h], dj = j + dy[h];
    if (
      di < 0 || H <= di ||
      dj < 0 || W <= dj ||
      s[di][dj] != '.'
    ) continue;
    res += rec(di, dj, k - 1, s);
  }
  return res;
}

int main() {
  cin >> H >> W >> K;

  vector<string> S(H);

  REP (i, 0, H) cin >> S[i];
  
  REP (a, 0, H) {
    REP (b, 0, W) {
      if (S[a][b] == '.') {
        ans += rec(a, b, K, S);
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/11/24
// 解説見て40分くらいか