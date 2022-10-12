#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int H, W, A[59][59];

int main() {
  cin >> H >> W;
  REP (i, 0, H) {
    REP (j, 0, W) {
      int a;
      cin >> a;
      A[i][j] = a;
    }
  }
  bool ans = 1;
  for (int i = 0; i < H; i++) {
    for (int j = i + 1; j < H; j++) {
      for (int k = 0; k < W; k++) {
        for (int l = k + 1; l < W; l++) {
          if (A[i][k] + A[j][l] > A[j][k] + A[i][l]) ans = 0;
        }
      }
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}

// 9/26 12:23
// 寝不足が過ぎるのでめちゃくちゃゆっくりやってた