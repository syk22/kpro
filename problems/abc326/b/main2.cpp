#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;

  REP (i, N, 920) {
    int h = i / 100, t = (i % 100) / 10, o = i % 10;
    if (h * t == o) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}

// 2024/10/2
// 3:09