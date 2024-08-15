#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;

int main() {
  cin >> S;
  int t = 0;
  REP (i, 0, 9) {
    t += S[i] - '0';
  }
  cout << (45 - t) << endl;
}
// 9/23 2:55
// stringで読み込むとどうしてもcharになってしまうのをいい加減覚えよう