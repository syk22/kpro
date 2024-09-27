#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N;

int main() {
  cin >> N;

  vector<int> A(N);
  REP (i, 0, N) cin >> A[i];
  
  sort(ALL(A), greater<int>());

  REP (i, 1, N) {
    if (A[0] != A[i]) {
      cout << A[i] << endl;
      break;
    }
  }

  return 0;
}
