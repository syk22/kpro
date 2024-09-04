#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S = "";

int main() {
  cin >> N;
  
  REP (i, 0, N) {
    if (i > 0 && i % 3 == 2) S += 'x';
    else S += 'o';
  }

  cout << S << endl;
  
  return 0;
}

// 2024/9/5
// 2:49