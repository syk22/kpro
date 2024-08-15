#include <bits/stdc++.h>
using namespace std;

int H, W, R, C;

int main() {
  cin >> H >> W >> R >> C;

  // int count = 4;
  // if (R - 1 <= 0) count--;
  // if (R + 1 > H) count--;
  // if (C - 1 <= 0) count--;
  // if (C + 1 > W) count--;

  int count = 0;
  if (R != 1) count++;
  if (R != H) count++;
  if (C != 1) count++;
  if (C != W) count++;
  cout << count << endl;
}

// 9/5 8:03
// 問題の意味がわからず混乱
// でも書いた条件通り組んだらできた。
// 解説にある方法の方が自然で理解がしやすそう
