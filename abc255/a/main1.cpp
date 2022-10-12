#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N[3][3];
int R, C;

int main() {
  cin >> R >> C;
  REP(i, 1, 3) {
    REP(j, 1, 3) {
      cin >> N[i][j];
    }
  }
  cout << N[R][C] << endl;
}

// 9/5 6:05
// 流石にそこまで困らなかったぞ