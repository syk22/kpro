#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A;

int main() {
  cin >> N;

  map<int, int> ap;
  
  REP (i, 1, N + 1) {
    cin >> A;
    if (ap.count(A)) {
      cout << ap[A] << ' ';
    } else {
      cout << -1 << ' ';
    }
    ap[A] = i;
  }
  cout << endl;

  return 0;
}

// 2024/11/10
// 11:12