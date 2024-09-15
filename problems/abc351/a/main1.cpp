#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int A, B;
int ta = 0, ao = 0;

int main() {

  REP(i, 0, 9) {
    cin >> A;
    ta += A;
  }

  REP(i, 0, 8) {
    cin >> B;
    ao += B;
  }

  cout << ta - ao + 1 << endl;

  return 0;
}

// 2024/8/25
// 6:29