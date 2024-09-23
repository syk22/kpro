#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int K, G, M;

int main() {
  cin >> K >> G >> M;

  int g = 0, m = 0;

  REP (i, 0, K) {
    if (g == G) g = 0;
    else if (m == 0) m = M;
    else {
      int w = G - g <= m ? G - g : m;
      m -= w, g += w;
    }
  }

  cout << g << " " << m << endl;
  
  return 0;
}

// 2024/9/23
// 9:37