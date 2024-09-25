#include <bits/stdc++.h>
using namespace std;

int N, M;
int ans, pre = 0, epi = 0;
string S, T;

int main() {
  cin >> N >> M >> S >> T;

  if (T.substr(0, N) == S) pre = 1;
  if (T.substr(M - N, N) == S) epi = 1;

  if (pre && epi) ans = 0;
  else if (pre) ans = 1;
  else if (epi) ans = 2;
  else ans = 3;

  cout << ans << endl;

  return 0;
}

// 2024/9/25
// 5:35