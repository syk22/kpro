#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M, hands, c = 0;
using vi = vector<int>;
vi H{};

int main() {
  cin >> N >> M;

  REP(i, 0, N) {
    cin >> hands;
    H.push_back(hands);
  }

  REP(i, 0, N) {
    if (M >= H.at(i)) {
      M -= H.at(i);
      c = i + 1;
    }
    else break;
  }

  cout << c << endl;
  
  return 0;
}

// 2024/8/25
// 10:31