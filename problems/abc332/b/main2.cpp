#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int K, G, M;

int main() {
  cin >> K >> G >> M;

  int g = 0, m = 0, w = 0;
  REP (k, 0, K) {
    if (g == G) g = 0;
    else if (m == 0) m = M;
    else {
      w = G - g;
      if (G - g <= m) g += w, m -= w;
      else g += m, m = 0;
    }
  }

  cout << g << ' ' << m << endl;

  return 0;
}
