#include <bits/stdc++.h>
using namespace std;

int V, A, B, C;

int main() {
  cin >> V >> A >> B >> C;

  int sh = 0;
  int i = 0;
  string ans;
  while (sh <= V) {
    if (i % 3 == 0) {
      sh += A;
      ans = "F";
    }
    if (i % 3 == 1) {
      sh += B;
      ans = "M";
    }
    if (i % 3 == 2) {
      sh += C;
      ans = "T";
    }
    i++;
  }
  cout << ans << endl;

}

// 9/6 12:36
// 実装が大変だったけど、あまりを使うのを考えられたのは自分的GJ
