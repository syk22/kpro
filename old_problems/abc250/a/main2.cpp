#include <bits/stdc++.h>
using namespace std;

int H, W, R, C;

int main() {
  cin >> H >> W >> R >> C;
  int T = 0;
  if (R != 1) ++T;
  if (R != H) ++T;
  if (C != 1) ++T;
  if (C != W) ++T;

  cout << T << endl;
}
// 9/24 4:43
// ０ではなく１な