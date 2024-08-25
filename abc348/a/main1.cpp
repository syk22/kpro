#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

string ans = "";

int main() {
  cin >> N;

  REP(i, 0, N) {
    if (i % 3 == 2) ans += 'x';
    else ans += 'o';
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/8/25
// 4:30