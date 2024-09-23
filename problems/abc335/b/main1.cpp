#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N, ++N;

  REP (i, 0, N) {
    REP (j, 0, N) {
      REP (k, 0, N) {
        if (i + j + k < N) cout << i << ' ' << j << ' ' << k << endl;
      }
    }
  }


  return 0;
}

// 2024/9/23
// 3:10