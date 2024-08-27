#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A, B;

int main() {
  cin >> N >> A >> B;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi.at(i);
  
  REP(i, 0, N) if (A + B == vi.at(i)) cout << i + 1 << endl;

  return 0;
}

// 2024/8/27
// 2:37