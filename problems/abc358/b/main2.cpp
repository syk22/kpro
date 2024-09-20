#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A, T;
int sec = 0;

int main() {
  cin >> N >> A;

  REP (i, 0, N) {
    cin >> T;
    if (sec >= T) sec += A;
    else sec = T + A;
    cout << sec << endl;
  }

  return 0;
}



