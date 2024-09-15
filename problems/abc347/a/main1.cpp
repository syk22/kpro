#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K, A;

int main() {
  cin >> N >> K;

  REP(i, 0, N) {
    cin >> A;
    if (A % K == 0) {
      cout << A / K; 
      if (i < N - 1) cout << " ";
    }
  }
  cout << endl;
  
  return 0;
}

// 2024/8/25
// 5:04