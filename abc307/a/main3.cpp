#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, cnt = 0, x;

int main() {
  cin >> N;

  REP (i, 0, 7 * N) {
    cin >> x, cnt += x;
    if (i % 7 == 6) {
      cout << cnt << " ";
      cnt = 0;
    }
  }
  cout << endl;
}

// 2024/9/14
// 5:51