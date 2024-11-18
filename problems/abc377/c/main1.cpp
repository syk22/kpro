#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int M, a, b;
ll N, ans = 0;

vector<ll>
  dx = {0, 2, 1, -1, -2, -2, -1, 1, 2},
  dy = {0, 1, 2, 2, 1, -1, -2, -2, -1};

int main() {
  cin >> N >> M;
  set<pair<int, int>> li;

  REP (i, M){
    cin >> a >> b, --a, --b;
    REP (j, 9) {
      int x = a + dx[j], y = b + dy[j];
      if (0 <= x && x < N && 0 <= y && y < N) li.insert(make_pair(x, y));
    }
  }

  ans = N * N;
  cout << ans - li.size() << endl;
  return 0;
}

// 2024/11/10
// 時間測っておらず。30分くらいかな