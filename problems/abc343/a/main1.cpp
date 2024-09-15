#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int A, B;
bool check[10] = {};

int main() {
  cin >> A >> B;

  REP (i, 0, 10) {
    if (i == A + B) check[i] = false;
    else check[i] = true;
  }

  REP(i, 0, 10) {
    if (check[i]){
      cout << i << endl;
      break;
    }
  }
  
  return 0;
}

// 2024/8/24
// 16:51

// これで配列の値0で初期化可能
int X[10] = {};
int mainInt() {
  cin >> A >> B;
  X[A + B] = -1;
  REP (i, 0, 10) {
      // cout << boolalpha << check[i] << endl;
    if (X[i] != -1) {
      cout << X[i] << endl;
      break;
    }
  }
  return 0;
}