#include <bits/stdc++.h>
using namespace std;

int R, C, A[2][2];

int main() {
  cin >> R >> C, --R, --C;
  cin >> A[0][0] >> A[0][1] >> A[1][0] >> A[1][1];
  cout << A[R][C] << endl;
}
// 9/24 3:01
// 3分切ったとするよ