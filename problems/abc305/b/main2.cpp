#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

vector<int> dist = {3, 1, 4, 1, 5, 9};
char p, q;
int ans = 0;

int main() {
  cin >> p >> q;

  if (p > q) swap(p, q);

  // cout << p << " " << q << endl;;
  
  int flag = 0;

  REP (i, 0, 6) {
    if (i == p - 'A') flag = 1; 
    if (i == q - 'A') flag = 0;
    if (flag) ans += dist[i];
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/6
// 6:48