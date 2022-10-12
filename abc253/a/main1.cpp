#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

vector<int> N(3), comp(3);

int main() {
  REP (i, 0, 3) {
    cin >> N[i];
    comp[i] = N[i];
  }
  sort(ALL(N));

  if (N[1] == comp[1]) cout << "Yes" << endl;
  else cout << "No" << endl;
}

// 9/5 4:58
// sortの方法を忘れてしまってこのタイム