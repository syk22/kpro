#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, P;

int main() {
  cin >> N >> P;
  int cnt = 0;
  REP (i, 0, N) {
    int a;
    cin >> a;
    if (a < P) cnt++;
  }
  cout << cnt << endl;
}
// 9/26 2:44