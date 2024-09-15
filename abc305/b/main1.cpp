#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

char p, q;
int ans = 0, flag = 0;
vector<int> dist = {3, 1, 4, 1, 5, 9, 0};

int main() {
  cin >> p >> q;

  if (p > q) swap(p, q);
    
  REP(i, 0, 6) {
    if (i == p - 65) flag = 1;
    if (i == q - 65) flag = 0;
    if (flag) ans += dist[i];
  }

  cout << ans << endl;

  return 0;
}

// 2024/9/2
// 20分超えたので中断
// 30分弱くらい