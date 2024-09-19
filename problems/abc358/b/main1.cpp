#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, A;
int sec = 0, flag = 0;

int main() {
  cin >> N >> A;

  vector<int> T(N);
  FORE (x, T) cin >> x;

  REP(i, 0, N) {
    if (sec <= T[i]) sec = T[i] + A;
    else sec += A;
    cout << sec << endl;
  }
  
  return 0;
}

// 2024/9/19
// 5:09