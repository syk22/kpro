#include <bits/stdc++.h>
using namespace std;

int V, A, B, C;

int main() {
  cin >> V >> A >> B >> C;
  while (V >= 0) {
    if (V < A) {
      cout << "F" << endl;
      return 0;
    }
    V -= A;
    if (V < B) {
      cout << "M" << endl;
      return 0;
    }
    V -= B;
    if (V < C) {
      cout << "T" << endl;
      return 0;
    }
    V -= C;
  }
}
// 9/23 4:23
// コード量が多いけど、ほぼ迷わず書けたのでよし