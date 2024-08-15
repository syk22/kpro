#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
using vi = vector<int>;

int a;
vi V = {};

int main() {
  REP (i, 0, 10) {
    cin >> a;
    V.push_back(a);
  }
  int k = V[0];
  REP (i, 0, 2) {
    k = V[k];
  }
  cout << k << endl;
}
// 9/23 5:02
// 配列の問題がいきなり出ると困る