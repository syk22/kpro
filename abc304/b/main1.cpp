#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N, ans = N;
  REP(i, 3, 10) {
    if (ans >= pow(10, i)) {
      ans /= pow(10, i - 2);
      ans *= pow(10, i - 2);
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/1
// 13:08