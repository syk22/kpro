#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;
string S;

int main() {
  cin >> N;

  REP(i, 0, N) {
    cin >> S;
    if (S == "Takahashi") ans++;
  }
  cout << ans << endl;
  
  return 0;
}

// 2024/8/26
// 2:20