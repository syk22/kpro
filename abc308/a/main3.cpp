#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

string res = "Yes";
vector<int> vi(8);

int main() {

  FORE (x, vi) cin >> x;
  
  REP (i, 0, 8) {
    if (i < 7 && vi[i] > vi[i + 1]) res = "No";
    if (vi[i] < 100 || 675 < vi[i]) res = "No";
    if (vi[i] % 25 != 0) res = "No";
  }

  cout << res << endl;
  
  return 0;
}

// 2024/6/14
// 7:29