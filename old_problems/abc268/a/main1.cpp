#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

set<int> N;

int main() {
  int n = 0;
  REP (i, 0, 5) {
    cin >> n;
    N.insert(n);
  }
  cout << N.size() << endl;
}

// 9/10 8:15
// setなんかを使ってしまったのでだいぶ遅くなった
// 公式はifで１個ずつ見ていく方法が取り上げられていた