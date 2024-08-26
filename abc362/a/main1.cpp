#include <bits/stdc++.h>
using namespace std;

int R, G, B;
string C;

int main() {
  cin >> R >> G >> B >> C;

  if (C == "Red") cout << min(G, B) << endl;
  if (C == "Green") cout << min(R, B) << endl;
  if (C == "Blue") cout << min(R, G) << endl;
  
  return 0;
}

// 2024/8/24
// 3:16

// 三項演算子で書く
int mainSanko() {
  cin >> R >> G >> B >> C;

  int ans = C == "Red" ? min(G, B) : (C == "Green" ? min(R, B) : min(R, G));

  cout << ans << endl;
  
  return 0;
}
