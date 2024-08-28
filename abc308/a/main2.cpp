#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string res = "Yes";

int main() {

  vector<int> vi(8);
  REP (i, 0, 8) cin >> vi.at(i);
  
  REP (i, 0, 8) {
    if (i < 7 && vi.at(i) > vi.at(i + 1)) res = "No";
    if (vi.at(i) % 25 != 0) res = "No";
    if (vi.at(i) < 100 || 675 < vi.at(i)) res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/8/28
// 13:06