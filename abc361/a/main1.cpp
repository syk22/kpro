#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K, X, A;
using vi = vector<int>;
vi V = {};

int main() {
  cin >> N >> K >> X;

  REP(i, 1, N + 1) {
    cin >> A;
    V.push_back(A);
    if (i == K) V.push_back(X);
  }
  REP(i, 0, N + 1) {
    cout << V.at(i);
    if (i != N) cout << " ";
  }
  cout << endl;
  
  return 0;
}

// 2024/8/26
// 4:09