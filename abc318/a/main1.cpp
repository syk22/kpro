#include <bits/stdc++.h>
using namespace std;

int N, M, P;
int ans = 0;

int main() {
  cin >> N >> M >> P;

  if (M <= N) {
    ans = 1, N -= M;
    ans += (N / P);
  }
  cout << ans << endl;
}

// 2024/8/18
// 4:27