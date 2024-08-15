#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, minAge = INT_MAX, tempAge, minIndex;
string X[110];


int main() {
  cin >> N;

  REP (i, 0, N) {
    cin >> X[i] >> tempAge;
    if (chmin(minAge, tempAge)) {
      minIndex = i;
    }
  }

  REP (i, minIndex, N) {
    cout << X[i] << endl;
  }
  REP (i, 0, minIndex) {
    cout << X[i] << endl;
  }
}

// 2024/08/15
// 12:37