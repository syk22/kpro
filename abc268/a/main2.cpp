#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

set<int> in;
int x;

int main() {
  REP (i, 0, 5) {
    cin >> x;
    in.insert(x);
  }
  cout << in.size() << endl;
}
// 9/24 4:25
