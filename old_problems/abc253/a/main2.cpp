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
  sort(ALL(comp));
  cout << (N[1] == comp[1] ? "Yes" : "No") << endl;
}

// 9/24 3:39
// vector<int>書き換えしなければ3分切れたな