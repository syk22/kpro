#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A, walk = 0;

int main() {
  cin >> N;
  REP (i, 0, N) {
    REP (j, 0, 7) {
      cin >> A;
      walk += A;
    }
    
    cout << walk;
    if (i != N - 1) cout << " ";
    walk = 0;
  }
  cout << endl;
}

// 2024/08/24
// 7:27