#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int A, B, C;

int main() {
  cin >> A >> B >> C;
  REP (i, 0, B - A + 1) {
    if ((A + i) % C == 0) {
      cout << A + i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}

// 9/9 4:59
// ifの括弧を忘れて１回しかチェックできないようにしてしまった
