#include <bits/stdc++.h>
using namespace std;

int S, T;

int main() {
  cin >> S >> T;
  int cnt = 0;
  for (int a = 0; a <= S; a++) {
    for (int b = 0; a+b <= S; b++) {
      for (int c = 0; a+b+c <= S; c++) {
        if (a * b * c <= T) cnt++;
      }
    }
  }
  cout << cnt << endl;
}

// 9/25 3:28
// 全探索、慣れたい