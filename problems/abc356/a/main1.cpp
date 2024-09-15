#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, L, R;
using vi = vector<int>;
vi x{};

int main() {
  cin >> N >> L >> R;

  REP(i, 1, N + 1) {
    x.push_back(i);
  }

  L--, R--;
  while (L < R) {
    swap(x.at(L), x.at(R));
    L++, R--;
  }

  REP (i, 0, N) {
    cout << x.at(i);
    if (i != N - 1) cout << " ";
  }
  cout << endl;
 
  return 0;
}

// 2024/8/25
// 8:44
