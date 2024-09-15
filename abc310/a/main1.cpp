#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, P, Q, minPrice = INT_MAX, d;

int main() {
  cin >> N >> P >> Q;
  minPrice = P;
  REP (i, 0, N) {
    cin >> d;
    chmin(minPrice, d + Q);
  }
  cout << minPrice << endl;
}

// 2024/8/15
// 4:30